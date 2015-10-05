#pragma once
#include "types.h"
#include <stdexcept>
#include <sqlite3.h>
#include <iostream>
#include "Effect.h"

namespace eufe {
	
	extern const TypeID ANY_GROUP_ID;
	extern const TypeID CHARACTER_GROUP_ID;
	extern const TypeID WARP_DISRUPT_FIELD_GENERATOR_GROUP_ID;
	extern const TypeID CAPACITOR_BOOSTER_GROUP_ID;
	extern const TypeID CONTROL_TOWER_GROUP_ID;
	extern const TypeID CAPACITOR_BOOSTER_CHARGE_GROUP_ID;
	extern const TypeID NANITE_REPAIR_PASTE_GROUP_ID;

	extern const TypeID MODULE_CATEGORY_ID;
	extern const TypeID CHARGE_CATEGORY_ID;
	extern const TypeID DRONE_CATEGORY_ID;
	extern const TypeID SUBSYSTEM_CATEGORY_ID;
	extern const TypeID STRUCTURE_CATEGORY_ID;

	extern const TypeID MISSILE_LAUNCHER_OPERATION_TYPE_ID;

	class Item: public std::enable_shared_from_this<Item>
	{
	public:
		
		class Context
		{
		public:
			virtual ~Context() {};
		};
		
        typedef std::invalid_argument AttributeDidNotFoundException;
        typedef std::invalid_argument UnknownTypeIDException;
        typedef std::invalid_argument EffectDidNotFoundException;
        typedef std::runtime_error NoOwnerException;


		Item();
		Item(std::shared_ptr<Engine> engine, TypeID typeID, std::shared_ptr<Item> owner = nullptr);
		Item(std::shared_ptr<Item> owner);
		virtual ~Item(void);
		std::shared_ptr<Engine> getEngine();
		std::shared_ptr<Item> getOwner() const;

		virtual TypeID getTypeID() const;
		virtual TypeID getGroupID() const;
		virtual TypeID getCategoryID() const;
		virtual std::shared_ptr<Attribute> getAttribute(TypeID attributeID);
		const AttributesMap &getAttributes();
		bool hasAttribute(TypeID attributeID);
		std::shared_ptr<Effect> getEffect(TypeID effectID);
		
		
		virtual bool requireSkill(TypeID skillID);

		bool hasEffect(TypeID effectID);
		
		virtual void addEffects(Effect::Category category);
		virtual void removeEffects(Effect::Category category);

		virtual Environment getEnvironment() = 0;
		
		virtual void reset();
		
		virtual std::insert_iterator<ModifiersList> getModifiers(std::shared_ptr<Attribute> attribute, std::insert_iterator<ModifiersList> outIterator);
		
		virtual void addItemModifier(std::shared_ptr<Modifier> modifier);
		virtual void addLocationModifier(std::shared_ptr<Modifier> modifier);
		virtual void addLocationGroupModifier(std::shared_ptr<Modifier> modifier);
		virtual void addLocationRequiredSkillModifier(std::shared_ptr<Modifier> modifier);

		virtual void removeItemModifier(std::shared_ptr<Modifier> modifier);
		virtual void removeLocationModifier(std::shared_ptr<Modifier> modifier);
		virtual void removeLocationGroupModifier(std::shared_ptr<Modifier> modifier);
		virtual void removeLocationRequiredSkillModifier(std::shared_ptr<Modifier> modifier);
		
		virtual const char* getTypeName();
		virtual const char* getGroupName();
		
		std::set<std::shared_ptr<Item>> getAffectors();
		friend std::ostream& operator<<(std::ostream& os, Item& item);
		virtual std::insert_iterator<ModifiersList> getLocationModifiers(std::shared_ptr<Attribute> attribute, std::insert_iterator<ModifiersList> outIterator);
		virtual std::insert_iterator<ModifiersList> getModifiersMatchingItem(Item* item, std::shared_ptr<Attribute> attribute, std::insert_iterator<ModifiersList> outIterator);

	protected:
		std::weak_ptr<Engine> engine_;
		AttributesMap attributes_;
		TypeID typeID_;
		TypeID groupID_;
		TypeID categoryID_;
		EffectsList effects_;
		std::weak_ptr<Item> owner_;

		ModifiersList itemModifiers_;
		ModifiersList locationModifiers_;
		ModifiersList locationGroupModifiers_;
		ModifiersList locationRequiredSkillModifiers_;
		
		std::shared_ptr<Attribute> addExtraAttribute(TypeID attributeID, TypeID maxAttributeID, float value, bool isStackable, bool highIsGood, const char* attributeName = "");

		
	private:
		const Context* context_;
		
		std::string typeName_;
		std::string groupName_;
	};
}
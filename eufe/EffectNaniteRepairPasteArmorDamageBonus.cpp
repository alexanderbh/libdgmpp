#include "EffectNaniteRepairPasteArmorDamageBonus.h"
#include "Engine.h"
#include "Item.h"
#include "Attribute.h"
#include "Modifier.h"
#include "Character.h"

using namespace eufe;

EffectNaniteRepairPasteArmorDamageBonus::EffectNaniteRepairPasteArmorDamageBonus(Engine* engine, bool isAssistance, bool isOffensive) : engine_(engine), isAssistance_(isAssistance), isOffensive_(isOffensive)
{
}

EffectNaniteRepairPasteArmorDamageBonus::~EffectNaniteRepairPasteArmorDamageBonus(void)
{
}

bool EffectNaniteRepairPasteArmorDamageBonus::addEffect(const Environment& environment)
{
	Environment::const_iterator Self = environment.find("Self");
	Environment::const_iterator Char = environment.find("Char");
	Environment::const_iterator Other = environment.find("Other");
	Environment::const_iterator end = environment.end();
	
	if (Self != end && Char != end && Other != end) {
		Modifier* modifier = new Modifier(ARMOR_DAMAGE_AMOUNT_ATTRIBUTE_ID,
										  Modifier::ASSOCIATION_POST_MUL,
										  Other->second->getAttribute(CHARGE_ARMOR_DAMAGE_MULTIPLIER_ATTRIBUTE_ID),
										  isAssistance_,
										  isOffensive_,
										  dynamic_cast<Character*>(Char->second));
		Other->second->addItemModifier(modifier);
	}
	return 1;
}

bool EffectNaniteRepairPasteArmorDamageBonus::removeEffect(const Environment& environment)
{
	Environment::const_iterator Self = environment.find("Self");
	Environment::const_iterator Char = environment.find("Char");
	Environment::const_iterator Other = environment.find("Other");
	Environment::const_iterator end = environment.end();
	
	if (Self != end && Char != end && Other != end) {
		Modifier* modifier = new Modifier(ARMOR_DAMAGE_AMOUNT_ATTRIBUTE_ID,
										  Modifier::ASSOCIATION_POST_MUL,
										  Other->second->getAttribute(CHARGE_ARMOR_DAMAGE_MULTIPLIER_ATTRIBUTE_ID),
										  isAssistance_,
										  isOffensive_,
										  dynamic_cast<Character*>(Char->second));
		Other->second->removeItemModifier(modifier);
		delete modifier;
	}
	return 1;
}

EffectInterpreter* EffectNaniteRepairPasteArmorDamageBonus::clone() const
{
	return new EffectNaniteRepairPasteArmorDamageBonus(*this);
}

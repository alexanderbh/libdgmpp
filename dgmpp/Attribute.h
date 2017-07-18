#pragma once
#include "types.h"
#include "AttributePrototype.h"
#include <limits>

namespace dgmpp {

	extern const TypeID IS_ONLINE_ATTRIBUTE_ID;
	extern const TypeID MASS_ATTRIBUTE_ID;
	extern const TypeID CAPACITY_ATTRIBUTE_ID;
	extern const TypeID VOLUME_ATTRIBUTE_ID;
	extern const TypeID RADIUS_ATTRIBUTE_ID;
	extern const TypeID REQUIRED_SKILL1_ATTRIBUTE_ID;
	extern const TypeID REQUIRED_SKILL2_ATTRIBUTE_ID;
	extern const TypeID REQUIRED_SKILL3_ATTRIBUTE_ID;
	extern const TypeID REQUIRED_SKILL4_ATTRIBUTE_ID;
	extern const TypeID REQUIRED_SKILL5_ATTRIBUTE_ID;
	extern const TypeID REQUIRED_SKILL6_ATTRIBUTE_ID;
	extern const TypeID RACE_ID_ATTRIBUTE_ID;
	extern const TypeID SKILL_LEVEL_ATTRIBUTE_ID;
	extern const TypeID IMPLANTNESS_ATTRIBUTE_ID;
	extern const TypeID BOOSTERNESS_ATTRIBUTE_ID;
	
	extern const TypeID LOW_SLOTS_ATTRIBUTE_ID;
	extern const TypeID MED_SLOTS_ATTRIBUTE_ID;
	extern const TypeID HI_SLOTS_ATTRIBUTE_ID;
	extern const TypeID RIG_SLOTS_ATTRIBUTE_ID;
	extern const TypeID MAX_SUBSYSTEMS_SLOTS_ATTRIBUTE_ID;
	
	extern const TypeID LAUNCHER_SLOTS_LEFT_ATTRIBUTE_ID;
	extern const TypeID TURRET_SLOTS_LEFT_ATTRIBUTE_ID;
	
	extern const TypeID FITS_TO_SHIP_TYPE_ATTRIBUTE_ID;
	extern const TypeID CAN_FIT_SHIP_TYPE1_ATTRIBUTE_ID;
	extern const TypeID CAN_FIT_SHIP_TYPE2_ATTRIBUTE_ID;
	extern const TypeID CAN_FIT_SHIP_TYPE3_ATTRIBUTE_ID;
	extern const TypeID CAN_FIT_SHIP_TYPE4_ATTRIBUTE_ID;
	extern const TypeID CAN_FIT_SHIP_TYPE5_ATTRIBUTE_ID;
	extern const TypeID CAN_FIT_SHIP_TYPE6_ATTRIBUTE_ID;

	extern const TypeID CAN_FIT_SHIP_GROUP1_ATTRIBUTE_ID;
	extern const TypeID CAN_FIT_SHIP_GROUP2_ATTRIBUTE_ID;
	extern const TypeID CAN_FIT_SHIP_GROUP3_ATTRIBUTE_ID;
	extern const TypeID CAN_FIT_SHIP_GROUP4_ATTRIBUTE_ID;
	extern const TypeID CAN_FIT_SHIP_GROUP5_ATTRIBUTE_ID;
	extern const TypeID CAN_FIT_SHIP_GROUP6_ATTRIBUTE_ID;
	extern const TypeID CAN_FIT_SHIP_GROUP7_ATTRIBUTE_ID;
	extern const TypeID CAN_FIT_SHIP_GROUP8_ATTRIBUTE_ID;
	extern const TypeID CAN_FIT_SHIP_GROUP9_ATTRIBUTE_ID;
	
	extern const TypeID SUBSYSTEM_SLOT_ATTRIBUTE_ID;
	extern const TypeID RIG_SIZE_ATTRIBUTE_ID;
	extern const TypeID MAX_GROUP_FITTED_ATTRIBUTE_ID;
	
	extern const TypeID CHARGE_SIZE_ATTRIBUTE_ID;
	extern const TypeID CHARGE_GROUP1_ATTRIBUTE_ID;
	extern const TypeID CHARGE_GROUP2_ATTRIBUTE_ID;
	extern const TypeID CHARGE_GROUP3_ATTRIBUTE_ID;
	extern const TypeID CHARGE_GROUP4_ATTRIBUTE_ID;
	extern const TypeID CHARGE_GROUP5_ATTRIBUTE_ID;

	extern const TypeID MAX_GROUP_ACTIVE_ATTRIBUTE_ID;
	
	extern const TypeID SPEED_ATTRIBUTE_ID;
	extern const TypeID DURATION_ATTRIBUTE_ID;
	extern const TypeID MISSILE_LAUNCH_DURATION_ATTRIBUTE_ID;
	extern const TypeID RELOAD_TIME_ATTRIBUTE_ID;
	extern const TypeID MODULE_REACTIVATION_DELAY_ATTRIBUTE_ID;
	
	extern const TypeID CHARGE_RATE_ATTRIBUTE_ID;
	extern const TypeID CRYSTALS_GET_DAMAGED_ATTRIBUTE_ID;

	extern const TypeID HP_ATTRIBUTE_ID;
	extern const TypeID CRYSTAL_VOLATILITY_CHANCE_ATTRIBUTE_ID;
	extern const TypeID CRYSTAL_VOLATILITY_DAMAGE_ATTRIBUTE_ID;
	extern const TypeID CAPACITOR_NEED_ATTRIBUTE_ID;
	extern const TypeID CAPACITOR_BONUS_ATTRIBUTE_ID;
	extern const TypeID POWER_TRANSFER_AMOUNT_ATTRIBUTE_ID;
	extern const TypeID ENERGY_DESTABILIZATION_AMOUNT_ATTRIBUTE_ID;
	
	extern const TypeID CAPACITOR_CAPACITY_ATTRIBUTE_ID;
	extern const TypeID CHARGE_ATTRIBUTE_ID;
	extern const TypeID RECHARGE_RATE_ATTRIBUTE_ID;
	
	extern const TypeID DISALLOW_ASSISTANCE_ATTRIBUTE_ID;
	extern const TypeID DISALLOW_OFFENSIVE_MODIFIERS_ATTRIBUTE_ID;
	
	extern const TypeID EM_DAMAGE_ATTRIBUTE_ID;
	extern const TypeID KINETIC_DAMAGE_ATTRIBUTE_ID;
	extern const TypeID EXPLOSIVE_DAMAGE_ATTRIBUTE_ID;
	extern const TypeID THERMAL_DAMAGE_ATTRIBUTE_ID;
	extern const TypeID DAMAGE_MULTIPLIER_ATTRIBUTE_ID;
	extern const TypeID MISSILE_DAMAGE_MULTIPLIER_ATTRIBUTE_ID;
	
	extern const TypeID MAX_RANGE_ATTRIBUTE_ID;
	extern const TypeID SHIELD_TRANSFER_RANGE_ATTRIBUTE_ID;
	extern const TypeID POWER_TRANSFER_RANGE_ATTRIBUTE_ID;
	extern const TypeID ENERGY_DESTABILIZATION_RANGE_ATTRIBUTE_ID;
	extern const TypeID EMP_FIELD_RANGE_ATTRIBUTE_ID;
	extern const TypeID ECM_BURST_RANGE_ATTRIBUTE_ID;
	extern const TypeID WARP_SCRAMBLE_RANGE_ATTRIBUTE_ID;
	extern const TypeID CARGO_SCAN_RANGE_ATTRIBUTE_ID;
	extern const TypeID SHIP_SCAN_RANGE_ATTRIBUTE_ID;
	extern const TypeID SURVEY_SCAN_RANGE_ATTRIBUTE_ID;
	extern const TypeID FALLOFF_ATTRIBUTE_ID;
	extern const TypeID FALLOFF_EFFECTIVENESS_ATTRIBUTE_ID;
	extern const TypeID SHIP_SCAN_FALLOFF_ATTRIBUTE_ID;
	extern const TypeID TRACKING_SPEED_ATTRIBUTE_ID;
	extern const TypeID OPTIMAL_SIG_RADIUS_ATTRIBUTE_ID;
	
	extern const TypeID MAX_VELOCITY_ATTRIBUTE_ID;
	extern const TypeID EXPLOSION_DELAY_ATTRIBUTE_ID;
	extern const TypeID AGILITY_ATTRIBUTE_ID;
	
	extern const TypeID ARMOR_DAMAGE_ATTRIBUTE_ID;
	extern const TypeID SHIELD_CHARGE_ATTRIBUTE_ID;
	extern const TypeID DAMAGE_ATTRIBUTE_ID;
	extern const TypeID SHIELD_CAPACITY_ATTRIBUTE_ID;
	extern const TypeID ARMOR_HP_ATTRIBUTE_ID;
	extern const TypeID SHIELD_RECHARGE_RATE_ATTRIBUTE_ID;
	extern const TypeID ARMOR_DAMAGE_AMOUNT_ATTRIBUTE_ID;
	extern const TypeID SHIELD_BONUS_ATTRIBUTE_ID;
	extern const TypeID STRUCTURE_DAMAGE_AMOUNT_ATTRIBUTE_ID;
	
	extern const TypeID KINETIC_DAMAGE_RESONANCE_ATTRIBUTE_ID;
	extern const TypeID THERMAL_DAMAGE_RESONANCE_ATTRIBUTE_ID;
	extern const TypeID EXPLOSIVE_DAMAGE_RESONANCE_ATTRIBUTE_ID;
	extern const TypeID EM_DAMAGE_RESONANCE_ATTRIBUTE_ID;
	extern const TypeID ARMOR_EM_DAMAGE_RESONANCE_ATTRIBUTE_ID;
	extern const TypeID ARMOR_EXPLOSIVE_DAMAGE_RESONANCE_ATTRIBUTE_ID;
	extern const TypeID ARMOR_KINETIC_DAMAGE_RESONANCE_ATTRIBUTE_ID;
	extern const TypeID ARMOR_THERMAL_DAMAGE_RESONANCE_ATTRIBUTE_ID;
	extern const TypeID SHIELD_EM_DAMAGE_RESONANCE_ATTRIBUTE_ID;
	extern const TypeID SHIELD_EXPLOSIVE_DAMAGE_RESONANCE_ATTRIBUTE_ID;
	extern const TypeID SHIELD_KINETIC_DAMAGE_RESONANCE_ATTRIBUTE_ID;
	extern const TypeID SHIELD_THERMAL_DAMAGE_RESONANCE_ATTRIBUTE_ID;
	
	extern const TypeID ENTITY_MISSILE_TYPE_ID_ATTRIBUTE_ID;
	extern const TypeID ACTIVATION_BLOCKED_ATTRIBUTE_ID;
	
	extern const TypeID UPGRADE_COST_ATTRIBUTE_ID;
	extern const TypeID UPGRADE_CAPACITY_ATTRIBUTE_ID;
	extern const TypeID CPU_LOAD_ATTRIBUTE_ID;
	extern const TypeID POWER_LOAD_ATTRIBUTE_ID;
	extern const TypeID POWER_OUTPUT_ATTRIBUTE_ID;
	extern const TypeID CPU_OUTPUT_ATTRIBUTE_ID;
	extern const TypeID DRONE_BANDWIDTH_USED_ATTRIBUTE_ID;
	extern const TypeID DRONE_BANDWIDTH_ATTRIBUTE_ID;
	extern const TypeID DRONE_CAPACITY_ATTRIBUTE_ID;
	extern const TypeID BASE_WARP_SPEED_ATTRIBUTE_ID;
	extern const TypeID WARP_SPEED_MULTIPLIER_ATTRIBUTE_ID;
	extern const TypeID SIGNATURE_RADIUS_ATTRIBUTE_ID;
	extern const TypeID WARP_CAPACITOR_NEED_ATTRIBUTE_ID;
	extern const TypeID MAX_LOCKED_TARGETS_ATTRIBUTE_ID;
	extern const TypeID MAX_TARGET_RANGE_ATTRIBUTE_ID;
	extern const TypeID SCAN_RADAR_STRENGTH_ATTRIBUTE_ID;
	extern const TypeID SCAN_LADAR_STRENGTH_ATTRIBUTE_ID;
	extern const TypeID SCAN_MAGNETOMETRIC_STRENGTH_ATTRIBUTE_ID;
	extern const TypeID SCAN_GRAVIMETRIC_STRENGTH_ATTRIBUTE_ID;
	extern const TypeID MAX_ACTIVE_DRONES_ATTRIBUTE_ID;
	extern const TypeID SCAN_RESOLUTION_ATTRIBUTE_ID;
	extern const TypeID SPECIAL_ORE_HOLD_CAPACITY;

	extern const TypeID HI_SLOT_MODIFIER_ATTRIBUTE_ID;
	extern const TypeID MED_SLOT_MODIFIER_ATTRIBUTE_ID;
	extern const TypeID LOW_SLOT_MODIFIER_ATTRIBUTE_ID;
	extern const TypeID TURRET_HARD_POINT_MODIFIER_ATTRIBUTE_ID;
	extern const TypeID LAUNCHER_HARD_POINT_MODIFIER_ATTRIBUTE_ID;
	
	extern const TypeID HEAT_ATTENUATION_HI_ATTRIBUTE_ID;
	extern const TypeID HEAT_ATTENUATION_LOW_ATTRIBUTE_ID;
	extern const TypeID HEAT_ATTENUATION_MED_ATTRIBUTE_ID;
	extern const TypeID HEAT_CAPACITY_HI_ATTRIBUTE_ID;
	extern const TypeID HEAT_CAPACITY_LOW_ATTRIBUTE_ID;
	extern const TypeID HEAT_CAPACITY_MED_ATTRIBUTE_ID;
	extern const TypeID HEAT_DISSIPATION_RATE_HI_ATTRIBUTE_ID;
	extern const TypeID HEAT_DISSIPATION_RATE_LOW_ATTRIBUTE_ID;
	extern const TypeID HEAT_DISSIPATION_RATE_MED_ATTRIBUTE_ID;
	extern const TypeID HEAT_GENERATION_MULTIPLIER_ATTRIBUTE_ID;
	extern const TypeID HEAT_ABSORBTION_RATE_MODIFIER_ATTRIBUTE_ID;
	extern const TypeID HEAT_DAMAGE_ATTRIBUTE_ID;

	extern const TypeID POWER_ATTRIBUTE_ID;
	extern const TypeID CPU_ATTRIBUTE_ID;
	
	extern const TypeID HULL_KINETIC_DAMAGE_RESONANCE_ATTRIBUTE_ID;
	extern const TypeID HULL_THERMAL_DAMAGE_RESONANCE_ATTRIBUTE_ID;
	extern const TypeID HULL_EXPLOSIVE_DAMAGE_RESONANCE_ATTRIBUTE_ID;
	extern const TypeID HULL_EM_DAMAGE_RESONANCE_ATTRIBUTE_ID;

	extern const TypeID MISSILE_ENTITY_VELOCITY_MULTIPLIER_ATTRIBUTE_ID;
	extern const TypeID MISSILE_ENTITY_FLIGHT_TIME_MULTIPLIER_ATTRIBUTE_ID;

	extern const TypeID DRONE_CONTROL_DISTANCE_ATTRIBUTE_ID;

	extern const TypeID CHARGE_ARMOR_DAMAGE_MULTIPLIER_ATTRIBUTE_ID;

	extern const TypeID TACTICAL_MODES_ATTRIBUTE_ID;
	
	extern const TypeID AOE_DAMAGE_REDUCTION_FACTOR_ATTRIBUTE_ID;
	extern const TypeID AOE_DAMAGE_REDUCTION_SENSITIVITY_ATTRIBUTE_ID;
	extern const TypeID AOE_CLOUD_SIZE_ATTRIBUTE_ID;
	extern const TypeID AOE_VELOCITY_ATTRIBUTE_ID;
	extern const TypeID ENTITY_FLY_RANGE_ATTRIBUTE_ID;
	extern const TypeID ENTITY_CRUISE_SPEED_ATTRIBUTE_ID;
	extern const TypeID WARP_SCRAMBLE_STRENGTH_ATTRIBUTE_ID;
	extern const TypeID WARP_SCRAMBLE_STRENGTH_HIDDEN_ATTRIBUTE_ID;

	extern const TypeID ECU_DECAY_FACTOR_ATTRIBUTE_ID;
	extern const TypeID ECU_NOISE_FACTOR_ATTRIBUTE_ID;

	extern const TypeID SERVICE_SLOT_ATTRIBUTE_ID;
	
	extern const TypeID FIGHTER_ABILITY_EVASIVE_MANEUVERS_EM_RESONANCE_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_EVASIVE_MANEUVERS_THERM_RESONANCE_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_EVASIVE_MANEUVERS_KIN_RESONANCE_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_EVASIVE_MANEUVERS_EXP_RESONANCE_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_EVASIVE_MANEUVERS_DURATION_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_MISSILES_EXPLOSION_RADIUS_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_MISSILES_EXPLOSION_VELOCITY_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_MISSILES_DAMAGE_MULTIPLIER_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_MISSILES_DAMAGE_EM_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_MISSILES_DAMAGE_THERM_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_MISSILES_DAMAGE_KIN_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_MISSILES_DAMAGE_EXP_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_MISSILES_RANGE_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_MISSILES_DURATION_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_SQUADRON_IS_LIGHT_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_SQUADRON_IS_SUPPORT_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_SQUADRON_IS_HEAVY_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_SQUADRON_MAX_SIZE_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ATTACK_MISSILE_DAMAGE_MULTIPLIER_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ATTACK_MISSILE_DAMAGE_EM_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ATTACK_MISSILE_DAMAGE_THERM_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ATTACK_MISSILE_DAMAGE_KIN_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ATTACK_MISSILE_DAMAGE_EXP_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ATTACK_MISSILE_REDUCTION_FACTOR_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ATTACK_MISSILE_REDUCTION_SENSITIVITY_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ATTACK_MISSILE_DURATION_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ATTACK_MISSILE_EXPLOSION_RADIUS_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ATTACK_MISSILE_EXPLOSION_VELOCITY_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ATTACK_MISSILE_RANGE_OPTIMAL_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ATTACK_MISSILE_RANGE_FALLOFF_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ATTACK_TURRET_DAMAGE_EM_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ATTACK_TURRET_DAMAGE_EXP_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ATTACK_TURRET_DAMAGE_KIN_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ATTACK_TURRET_DAMAGE_MULTIPLIER_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ATTACK_TURRET_DAMAGE_THERM_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ATTACK_TURRET_DURATION_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_SQUADRON_ORBIT_RANGE_ATTRIBUTE_ID;

	extern const TypeID FIGHTER_ABILITY_ATTACK_TURRET_RANGE_FALLOFF_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ATTACK_TURRET_RANGE_OPTIMAL_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ECM_RANGE_FALLOFF_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ECM_RANGE_OPTIMAL_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ENERGY_NEUTRALIZER_FALLOFF_RANGE_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_ENERGY_NEUTRALIZER_OPTIMAL_RANGE_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_STASIS_WEBIFIER_FALLOFF_RANGE_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_STASIS_WEBIFIER_OPTIMAL_RANGE_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_ABILITY_WARP_DISRUPTION_RANGE_ATTRIBUTE_ID;

	
	extern const TypeID FIGHTER_CAPACITY_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_SQUADRON_ROLE_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_HEAVY_SLOTS_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_LIGHT_SLOTS_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_SUPPORT_SLOTS_ATTRIBUTE_ID;
	extern const TypeID FIGHTER_TUBES_ATTRIBUTE_ID;

	extern const TypeID SERVICE_MODULE_FUEL_AMOUNT_ATTRIBUTE_ID;
	extern const TypeID SERVICE_MODULE_FUEL_ONLINE_AMOUNT_ATTRIBUTE_ID;
	
	extern const TypeID MAX_TYPE_FITTED_ATTRIBUTE_ID;

	extern const TypeID MINING_AMOUNT_ATTRIBUTE_ID;
	extern const TypeID SPECIALTY_MINING_AMOUNT_ATTRIBUTE_ID;

	extern const TypeID WARFARE_BUFF1_ID_ATTRIBUTE_ID;
	extern const TypeID WARFARE_BUFF1_VALUE_ATTRIBUTE_ID;
	extern const TypeID WARFARE_BUFF2_ID_ATTRIBUTE_ID;
	extern const TypeID WARFARE_BUFF2_VALUE_ATTRIBUTE_ID;
	extern const TypeID WARFARE_BUFF3_ID_ATTRIBUTE_ID;
	extern const TypeID WARFARE_BUFF3_VALUE_ATTRIBUTE_ID;
	extern const TypeID WARFARE_BUFF4_ID_ATTRIBUTE_ID;
	extern const TypeID WARFARE_BUFF4_VALUE_ATTRIBUTE_ID;

	extern const TypeID SCAN_GRAVIMETRIC_STRENGTH_BONUS_ATTRIBUTE_ID;
	extern const TypeID SCAN_LADAR_STRENGTH_BONUS_ATTRIBUTE_ID;
	extern const TypeID SCAN_MAGNETOMETRIC_STRENGTH_BONUS_ATTRIBUTE_ID;
	extern const TypeID SCAN_RADAR_STRENGTH_BONUS_ATTRIBUTE_ID;
	extern const TypeID MISSILE_VELOCITY_BONUS_ATTRIBUTE_ID;
	extern const TypeID EXPLOSION_DELAY_BONUS_ATTRIBUTE_ID;
	extern const TypeID AOE_VELOCITY_BONUS_ATTRIBUTE_ID;
	extern const TypeID FALLOFF_BONUS_ATTRIBUTE_ID;
	extern const TypeID MAX_RANGE_BONUS_ATTRIBUTE_ID;
	extern const TypeID AOE_CLOUD_SIZE_BONUS_ATTRIBUTE_ID;
	extern const TypeID TRACKING_SPEED_BONUS_ATTRIBUTE_ID;
	extern const TypeID MAX_TARGET_RANGE_BONUS_ATTRIBUTE_ID;
	extern const TypeID SCAN_RESOLUTION_BONUS_ATTRIBUTE_ID;
	extern const TypeID SIGNATURE_RADIUS_BONUS_ATTRIBUTE_ID;
	extern const TypeID SENSOR_DAMPENER_RESISTANCE_ATTRIBUTE_ID;
	extern const TypeID WEAPON_DISRUPTION_RESISTANCE_ATTRIBUTE_ID;
	extern const TypeID SPEED_FACTOR_ATTRIBUTE_ID;
	
	class Attribute : public std::enable_shared_from_this<Attribute>
	{
	public:
		static std::shared_ptr<Attribute> getAttribute(std::shared_ptr<Engine> const& engine, TypeID attributeID, std::shared_ptr<Item> const& owner, bool isFakeAttribute = false, Float value = std::numeric_limits<Float>::quiet_NaN());

		Attribute(std::shared_ptr<Engine> const& engine, std::shared_ptr<AttributePrototype> const& prototype, std::shared_ptr<Item> const& owner, bool isFakeAttribute, Float value);
		
//		Attribute(std::shared_ptr<Engine> const& engine, TypeID attributeID, TypeID maxAttributeID, Float value, bool isStackable, bool highIsGood, std::shared_ptr<Item> const& owner = nullptr, const char* attributeName = "", bool isFakeAttribute = false);
//		Attribute(std::shared_ptr<Engine> const& engine, TypeID attributeID, std::shared_ptr<Item> const& owner = nullptr, bool isFakeAttribute = false);
		virtual ~Attribute(void);
		std::shared_ptr<Item> getOwner() const;
		TypeID getAttributeID() const;
		bool isFakeAttribute() const;

		virtual Float getValue();
		virtual Float getInitialValue() const;
		bool isStackable() const;
		bool highIsGood() const;

		virtual void setValue(Float value);
		virtual Float dec(Float value);
		virtual Float inc(Float value);
		
		void reset();
		
		const char* getAttributeName() const;
		friend std::ostream& operator<<(std::ostream& os, Attribute& attribute);
	protected:
	private:
		std::weak_ptr<Engine> engine_;
		Float value_;
		Float initialValue_;
		Float forcedValue_;
		bool calculated_;
		bool isFakeAttribute_;
		
		std::weak_ptr<Item> owner_;
		std::shared_ptr<AttributePrototype> prototype_;

		void calculate();

		bool sync;
		uint32_t generation_;
	};

}

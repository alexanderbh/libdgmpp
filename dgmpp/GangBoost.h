#pragma once
#include "types.h"

namespace dgmpp {
	class GangBoost {
	public:
		enum BufID {
			SHIELD_BURST_SHIELD_HARMONIZING_SHIELD_RESISTANCE_BUF_ID = 10,
			SHIELD_BURST_ACTIVE_SHIELDING_REPAIR_DURATION_CAPACITOR_BUF_ID = 11,
			SHIELD_BURST_SHIELD_EXTENSION_SHIELD_HP_BUF_ID = 12,
			ARMOR_BURST_ARMOR_ENERGIZING_ARMOR_RESISTANCE_BUF_ID = 13,
			ARMOR_BURST_RAPID_REPAIR_REPAIR_DURATION_CAPACITOR_BUF_ID = 14,
			ARMOR_BURST_ARMOR_REINFORCEMENT_ARMOR_HP_BUF_ID = 15,
			INFORMATION_BURST_SENSOR_OPTIMIZATION_SCAN_RESOLUTION_BUF_ID = 16,
			INFORMATION_BURST_ELECTRONIC_SUPERIORITY_EWAR_RANGE_AND_STRENGTH_BUF_ID = 17,
			INFORMATION_BURST_ELECTRONIC_HARDENING_SCAN_STRENGTH_BUF_ID = 18,
			INFORMATION_BURST_ELECTRONIC_HARDENING_RSD_RWD_RESISTANCE_BUF_ID = 19,
			INFORMATION_BURST_SENSOR_OPTIMIZATION_TARGETING_RANGE_BUF_ID = 26,
			SKIRMISH_BURST_EVASIVE_MANEUVERS_SIGNATURE_RADIUS_BUF_ID = 20,
			SKIRMISH_BURST_INTERDICTION_MANEUVERS_TACKLE_RANGE_BUF_ID = 21,
			SKIRMISH_BURST_RAPID_DEPLOYMENT_AB_MWD_SPEED_INCREASE_BUF_ID = 22,
			MINING_BURST_MINING_LASER_FIELD_ENHANCEMENT_MINING_SURVEY_RANGE_BUF_ID = 23,
			MINING_BURST_MINING_LASER_OPTIMIZATION_MINING_CAPACITOR_DURATION_BUF_ID = 24,
			MINING_BURST_MINING_EQUIPMENT_PRESERVATION_CRYSTAL_VOLATILITY_BUF_ID = 25,
			SKIRMISH_BURST_EVASIVE_MANEUVERS_AGILITY_BUF_ID = 60,
			AVATAR_EFFECT_GENERATOR_CAPACITOR_RECHARGE_BONUS_BUF_ID = 39,
			AVATAR_EFFECT_GENERATOR_KINETIC_RESISTANCE_BONUS_BUF_ID = 40,
			AVATAR_EFFECT_GENERATOR_EM_RESISTANCE_PENALTY_BUF_ID = 41,
			EREBUS_EFFECT_GENERATOR_ARMOR_HP_BONUS_BUF_ID = 42,
			EREBUS_EFFECT_GENERATOR_EXPLOSIVE_RESISTANCE_BONUS_BUF_ID = 43,
			EREBUS_EFFECT_GENERATOR_THERMAL_RESISTANCE_PENALTY_BUF_ID = 44,
			RAGNAROK_EFFECT_GENERATOR_SIGNATURE_RADIUS_BONUS_BUF_ID = 45,
			RAGNAROK_EFFECT_GENERATOR_THERMAL_RESISTANCE_BONUS_BUF_ID = 46,
			RAGNAROK_EFFECT_GENERATOR_EXPLOSIVE_RESISTANCE_PENALY_BUF_ID = 47,
			LEVIATHAN_EFFECT_GENERATOR_SHIELD_HP_BONUS_BUF_ID = 48,
			LEVIATHAN_EFFECT_GENERATOR_EM_RESISTANCE_BONUS_BUF_ID = 49,
			LEVIATHAN_EFFECT_GENERATOR_KINETIC_RESISTANCE_PENALTY_BUF_ID = 50,
			AVATAR_EFFECT_GENERATOR_VELOCITY_PENALTY_BUF_ID = 51,
			EREBUS_EFFECT_GENERATOR_SHIELD_RR_PENALTY_BUF_ID = 52,
			LEVIATHAN_EFFECT_GENERATOR_ARMOR_RR_PENALTY_BUF_ID = 53,
			RAGNAROK_EFFECT_GENERATOR_LASER_AND_HYBRID_OPTIMAL_PENALTY_BUF_ID = 54
		};
		
		GangBoost(std::shared_ptr<Engine> const& engine, std::shared_ptr<Attribute> bufID, std::shared_ptr<Attribute> value);
		
		std::list<std::shared_ptr<Modifier>> modifiers();
	private:
		std::weak_ptr<Engine> engine_;
		std::shared_ptr<Attribute> bufID_;
		std::shared_ptr<Attribute> value_;
	};
}
#include "DamagePattern.h"
#include <limits>

using namespace dgmpp;

DamagePattern::DamagePattern() : DamageVector(0.25)
{
}

DamagePattern::DamagePattern(const DamageVector& damage)  : DamageVector(damage > 0 ? damage / static_cast<float>(damage) : DamageVector(0))
{
}

DamagePattern::DamagePattern(float em, float thermal, float kinetic, float explosive) : DamageVector(em, thermal, kinetic, explosive)
{
}

DamagePattern::~DamagePattern(void)
{
}

HitPoints DamagePattern::effectiveHitPoints(const Resistances& resistances, const HitPoints& hitPoints) const
{
	HitPoints ehp;
	ehp.armor = effectivity(resistances.armor, hitPoints.armor);
	ehp.hull = effectivity(resistances.hull, hitPoints.hull);
	ehp.shield = effectivity(resistances.shield, hitPoints.shield);
	return ehp;
}

Tank DamagePattern::effectiveTank(const Resistances& resistances, const Tank& tank) const
{
	Tank et;
	et.armorRepair = effectivity(resistances.armor, tank.armorRepair);
	et.hullRepair = effectivity(resistances.hull, tank.hullRepair);
	et.shieldRepair = effectivity(resistances.shield, tank.shieldRepair);
	et.passiveShield = effectivity(resistances.shield, tank.passiveShield);
	return et;
}

float DamagePattern::effectivity(const ResistancesLayer& resistances, float amount) const
{
	float totalDamage = emAmount + thermalAmount + kineticAmount + explosiveAmount;
	float emResonance		 = 1.0f - resistances.em;
	float thermalResonance	 = 1.0f - resistances.thermal;
	float kineticResonance	 = 1.0f - resistances.kinetic;
	float explosiveResonance = 1.0f - resistances.explosive;
	
	float specificDivider = 0;
	
	if (totalDamage == 0.0)
		totalDamage = 1.0;
	
	specificDivider += emAmount / totalDamage * emResonance;
	specificDivider += thermalAmount / totalDamage * thermalResonance;
	specificDivider += kineticAmount / totalDamage * kineticResonance;
	specificDivider += explosiveAmount / totalDamage * explosiveResonance;
	return specificDivider ? amount / specificDivider : std::numeric_limits<float>::infinity();
}
#pragma once
#include "Types.hpp"

namespace dgmpp {
	namespace SDE {
		constexpr const MetaInfo::Type* skills_array[] = {
			&Types::advancedPlanetology,
			&Types::planetology,
			&Types::interplanetaryConsolidation,
			&Types::commandCenterUpgrades,
			&Types::OREIndustrial,
			&Types::gunnery,
			&Types::smallHybridTurret,
			&Types::smallProjectileTurret,
			&Types::smallEnergyTurret,
			&Types::mediumHybridTurret,
			&Types::mediumProjectileTurret,
			&Types::mediumEnergyTurret,
			&Types::largeHybridTurret,
			&Types::largeProjectileTurret,
			&Types::largeEnergyTurret,
			&Types::rapidFiring,
			&Types::sharpshooter,
			&Types::motionPrediction,
			&Types::surgicalStrike,
			&Types::controlledBursts,
			&Types::trajectoryAnalysis,
			&Types::weaponUpgrades,
			&Types::missileLauncherOperation,
			&Types::rockets,
			&Types::lightMissiles,
			&Types::autoTargetingMissiles,
			&Types::defenderMissiles,
			&Types::heavyMissiles,
			&Types::torpedoes,
			&Types::cruiseMissiles,
			&Types::spaceshipCommand,
			&Types::gallenteFrigate,
			&Types::minmatarFrigate,
			&Types::caldariFrigate,
			&Types::amarrFrigate,
			&Types::gallenteCruiser,
			&Types::minmatarCruiser,
			&Types::caldariCruiser,
			&Types::amarrCruiser,
			&Types::gallenteBattleship,
			&Types::minmatarBattleship,
			&Types::caldariBattleship,
			&Types::amarrBattleship,
			&Types::gallenteIndustrial,
			&Types::minmatarIndustrial,
			&Types::caldariIndustrial,
			&Types::amarrIndustrial,
			&Types::gallenteTitan,
			&Types::minmatarTitan,
			&Types::caldariTitan,
			&Types::amarrTitan,
			&Types::leadership,
			&Types::skirmishCommand,
			&Types::shieldCommand,
			&Types::shieldCommandSpecialist,
			&Types::informationCommandSpecialist,
			&Types::commandBurstSpecialist,
			&Types::social,
			&Types::negotiation,
			&Types::diplomacy,
			&Types::fastTalk,
			&Types::connections,
			&Types::criminalConnections,
			&Types::DEDConnections,
			&Types::corporationManagement,
			&Types::stationManagement,
			&Types::starbaseManagement,
			&Types::factoryManagement,
			&Types::refineryManagement,
			&Types::diplomaticRelations,
			&Types::CFOTraining,
			&Types::chiefScienceOfficer,
			&Types::publicRelations,
			&Types::intelligenceAnalyst,
			&Types::starbaseDefenseManagement,
			&Types::industry,
			&Types::amarrTech,
			&Types::caldariTech,
			&Types::gallenteTech,
			&Types::minmatarTech,
			&Types::reprocessing,
			&Types::mining,
			&Types::massProduction,
			&Types::advancedIndustry,
			&Types::reprocessingEfficiency,
			&Types::mobileRefineryOperation,
			&Types::mobileFactoryOperation,
			&Types::mechanics,
			&Types::repairSystems,
			&Types::hullUpgrades,
			&Types::advancedSmallShipConstruction,
			&Types::advancedIndustrialShipConstruction,
			&Types::advancedMediumShipConstruction,
			&Types::advancedLargeShipConstruction,
			&Types::outpostConstruction,
			&Types::science,
			&Types::research,
			&Types::biology,
			&Types::laboratoryOperation,
			&Types::sleeperEncryptionMethods,
			&Types::metallurgy,
			&Types::astrogeology,
			&Types::cybernetics,
			&Types::astrometrics,
			&Types::powerGridManagement,
			&Types::shieldOperation,
			&Types::capacitorSystemsOperation,
			&Types::capacitorManagement,
			&Types::shieldManagement,
			&Types::tacticalShieldManipulation,
			&Types::energyPulseWeapons,
			&Types::shieldEmissionSystems,
			&Types::capacitorEmissionSystems,
			&Types::energyGridUpgrades,
			&Types::shieldUpgrades,
			&Types::CPUManagement,
			&Types::electronicWarfare,
			&Types::longRangeTargeting,
			&Types::targetManagement,
			&Types::advancedTargetManagement,
			&Types::signatureAnalysis,
			&Types::electronicsUpgrades,
			&Types::sensorLinking,
			&Types::weaponDisruption,
			&Types::propulsionJamming,
			&Types::drones,
			&Types::droneAvionics,
			&Types::miningDroneOperation,
			&Types::repairDroneOperation,
			&Types::salvageDroneOperation,
			&Types::heavyDroneOperation,
			&Types::droneInterfacing,
			&Types::trade,
			&Types::retail,
			&Types::blackMarketTrading,
			&Types::brokerRelations,
			&Types::visibility,
			&Types::smuggling,
			&Types::navigation,
			&Types::afterburner,
			&Types::fuelConservation,
			&Types::accelerationControl,
			&Types::evasiveManeuvering,
			&Types::highSpeedManeuvering,
			&Types::warpDriveOperation,
			&Types::jumpDriveOperation,
			&Types::survey,
			&Types::megacorpManagement,
			&Types::empireControl,
			&Types::joveFrigate,
			&Types::joveCruiser,
			&Types::miningConnections,
			&Types::distributionConnections,
			&Types::securityConnections,
			&Types::microJumpDriveOperation,
			&Types::targetBreakerAmplification,
			&Types::polaris,
			&Types::concord,
			&Types::test,
			&Types::joveIndustrial,
			&Types::joveBattleship,
			&Types::smallRailgunSpecialization,
			&Types::smallBeamLaserSpecialization,
			&Types::smallAutocannonSpecialization,
			&Types::advancedEnergyGridUpgrades,
			&Types::advancedShieldUpgrades,
			&Types::advancedWeaponUpgrades,
			&Types::advancedSensorUpgrades,
			&Types::deepCoreMining,
			&Types::highEnergyPhysics,
			&Types::plasmaPhysics,
			&Types::naniteEngineering,
			&Types::hydromagneticPhysics,
			&Types::amarrStarshipEngineering,
			&Types::minmatarStarshipEngineering,
			&Types::gravitonPhysics,
			&Types::laserPhysics,
			&Types::electromagneticPhysics,
			&Types::rocketScience,
			&Types::gallenteStarshipEngineering,
			&Types::nuclearPhysics,
			&Types::mechanicalEngineering,
			&Types::electronicEngineering,
			&Types::caldariStarshipEngineering,
			&Types::quantumPhysics,
			&Types::astronauticEngineering,
			&Types::molecularEngineering,
			&Types::thermalShieldCompensation,
			&Types::armoredCommandSpecialist,
			&Types::skirmishCommandSpecialist,
			&Types::wingCommand,
			&Types::cloaking,
			&Types::anchoring,
			&Types::hypernetScience,
			&Types::interceptors,
			&Types::covertOps,
			&Types::assaultFrigates,
			&Types::logisticsCruisers,
			&Types::destroyers,
			&Types::interdictors,
			&Types::battlecruisers,
			&Types::researchProjectManagement,
			&Types::arkonorProcessing,
			&Types::bistotProcessing,
			&Types::crokiteProcessing,
			&Types::darkOchreProcessing,
			&Types::gneissProcessing,
			&Types::hedbergiteProcessing,
			&Types::hemorphiteProcessing,
			&Types::jaspetProcessing,
			&Types::kerniteProcessing,
			&Types::mercoxitProcessing,
			&Types::omberProcessing,
			&Types::plagioclaseProcessing,
			&Types::pyroxeresProcessing,
			&Types::scorditeProcessing,
			&Types::spodumainProcessing,
			&Types::veldsparProcessing,
			&Types::scrapmetalProcessing,
			&Types::smallArtillerySpecialization,
			&Types::mediumArtillerySpecialization,
			&Types::largeArtillerySpecialization,
			&Types::mediumBeamLaserSpecialization,
			&Types::largeBeamLaserSpecialization,
			&Types::mediumRailgunSpecialization,
			&Types::largeRailgunSpecialization,
			&Types::mediumAutocannonSpecialization,
			&Types::largeAutocannonSpecialization,
			&Types::smallBlasterSpecialization,
			&Types::mediumBlasterSpecialization,
			&Types::largeBlasterSpecialization,
			&Types::smallPulseLaserSpecialization,
			&Types::mediumPulseLaserSpecialization,
			&Types::largePulseLaserSpecialization,
			&Types::sovereignty,
			&Types::droneNavigation,
			&Types::EMShieldCompensation,
			&Types::kineticShieldCompensation,
			&Types::explosiveShieldCompensation,
			&Types::hypereuclideanNavigation,
			&Types::missileBombardment,
			&Types::missileProjection,
			&Types::amarrDroneSpecialization,
			&Types::minmatarDroneSpecialization,
			&Types::gallenteDroneSpecialization,
			&Types::caldariDroneSpecialization,
			&Types::generalFreight,
			&Types::starshipFreight,
			&Types::mineralFreight,
			&Types::munitionsFreight,
			&Types::droneFreight,
			&Types::rawMaterialFreight,
			&Types::consumableFreight,
			&Types::hazardousMaterialFreight,
			&Types::archaeology,
			&Types::remoteSensing,
			&Types::remoteArmorRepairSystems,
			&Types::iceHarvesting,
			&Types::heavyAssaultCruisers,
			&Types::procurement,
			&Types::daytrading,
			&Types::wholesale,
			&Types::marginTrading,
			&Types::marketing,
			&Types::accounting,
			&Types::miningBarge,
			&Types::iceProcessing,
			&Types::tycoon,
			&Types::omnipotent,
			&Types::transportShips,
			&Types::longDistanceJamming,
			&Types::frequencyModulation,
			&Types::signalDispersion,
			&Types::signalSuppression,
			&Types::weaponDestabilization,
			&Types::targetPainting,
			&Types::signatureFocusing,
			&Types::stealthBombersFakeSkill,
			&Types::rocketSpecialization,
			&Types::lightMissileSpecialization,
			&Types::heavyMissileSpecialization,
			&Types::cruiseMissileSpecialization,
			&Types::torpedoSpecialization,
			&Types::guidedMissilePrecision,
			&Types::targetNavigationPrediction,
			&Types::warheadUpgrades,
			&Types::capitalEnergyTurret,
			&Types::advancedSpaceshipCommand,
			&Types::talocanTechnology,
			&Types::armoredCommand,
			&Types::informationCommand,
			&Types::amarrFreighter,
			&Types::amarrDreadnought,
			&Types::caldariFreighter,
			&Types::gallenteFreighter,
			&Types::minmatarFreighter,
			&Types::caldariDreadnought,
			&Types::gallenteDreadnought,
			&Types::minmatarDreadnought,
			&Types::capitalShips,
			&Types::shieldCompensation,
			&Types::rapidLaunch,
			&Types::cynosuralFieldTheory,
			&Types::jumpFuelConservation,
			&Types::jumpDriveCalibration,
			&Types::capitalHybridTurret,
			&Types::capitalProjectileTurret,
			&Types::XLTorpedoes,
			&Types::hacking,
			&Types::sleeperTechnology,
			&Types::caldariEncryptionMethods,
			&Types::minmatarEncryptionMethods,
			&Types::capitalShieldOperation,
			&Types::capitalRepairSystems,
			&Types::tacticalWeaponReconfiguration,
			&Types::TESTDroneSkill,
			&Types::capitalShipConstruction,
			&Types::miningForeman,
			&Types::miningDroneSpecialization,
			&Types::exhumers,
			&Types::miningDirector,
			&Types::miningUpgrades,
			&Types::reconShips,
			&Types::EMArmorCompensation,
			&Types::explosiveArmorCompensation,
			&Types::kineticArmorCompensation,
			&Types::thermalArmorCompensation,
			&Types::fighters,
			&Types::amarrEncryptionMethods,
			&Types::gallenteEncryptionMethods,
			&Types::takmahlTechnology,
			&Types::yanJungTechnology,
			&Types::advancedDroneAvionics,
			&Types::sentryDroneInterfacing,
			&Types::propulsionJammingDroneInterfacing,
			&Types::droneSharpshooting,
			&Types::droneDurability,
			&Types::commandShips,
			&Types::lightDroneOperation,
			&Types::infomorphPsychology,
			&Types::supplyChainManagement,
			&Types::scientificNetworking,
			&Types::amarrCarrier,
			&Types::caldariCarrier,
			&Types::gallenteCarrier,
			&Types::minmatarCarrier,
			&Types::jumpPortalGeneration,
			&Types::doomsdayOperation,
			&Types::capitalRemoteArmorRepairSystems,
			&Types::capitalShieldEmissionSystems,
			&Types::capitalCapacitorEmissionSystems,
			&Types::cloningFacilityOperation,
			&Types::fighterHangarManagement,
			&Types::advancedLaboratoryOperation,
			&Types::advancedMassProduction,
			&Types::fleetCommand,
			&Types::corporationContracting,
			&Types::contracting,
			&Types::neurotoxinRecovery,
			&Types::neurotoxinControl,
			&Types::gasCloudHarvesting,
			&Types::heavyAssaultMissileSpecialization,
			&Types::heavyAssaultMissiles,
			&Types::astrometricRangefinding,
			&Types::astrometricPinpointing,
			&Types::astrometricAcquisition,
			&Types::salvaging,
			&Types::drugManufacturing,
			&Types::juryRigging,
			&Types::armorRigging,
			&Types::astronauticsRigging,
			&Types::dronesRigging,
			&Types::electronicSuperiorityRigging,
			&Types::projectileWeaponRigging,
			&Types::energyWeaponRigging,
			&Types::hybridWeaponRigging,
			&Types::launcherRigging,
			&Types::shieldRigging,
			&Types::remoteHullRepairSystems,
			&Types::tacticalLogisticsReconfiguration,
			&Types::burstProjectorOperation,
			&Types::capitalRemoteHullRepairSystems,
			&Types::bombDeployment,
			&Types::thermodynamics,
			&Types::taxEvasion,
			&Types::oreCompression,
			&Types::capitalIndustrialShips,
			&Types::industrialReconfiguration,
			&Types::tournamentObservation,
			&Types::heavyInterdictionCruisers,
			&Types::electronicAttackShips,
			&Types::imperialNavySecurityClearance,
			&Types::blackOps,
			&Types::marauders,
			&Types::naniteOperation,
			&Types::naniteInterfacing,
			&Types::jumpFreighters,
			&Types::industrialCommandShips,
			&Types::defensiveSubsystemTechnology,
			&Types::coreSubsystemTechnology,
			&Types::electronicSubsystemTechnology,
			&Types::offensiveSubsystemTechnology,
			&Types::amarrDefensiveSystems,
			&Types::amarrElectronicSystems,
			&Types::amarrOffensiveSystems,
			&Types::amarrPropulsionSystems,
			&Types::amarrCoreSystems,
			&Types::gallenteDefensiveSystems,
			&Types::gallenteElectronicSystems,
			&Types::caldariElectronicSystems,
			&Types::minmatarElectronicSystems,
			&Types::caldariDefensiveSystems,
			&Types::minmatarDefensiveSystems,
			&Types::gallenteCoreSystems,
			&Types::minmatarCoreSystems,
			&Types::caldariCoreSystems,
			&Types::caldariOffensiveSystems,
			&Types::gallenteOffensiveSystems,
			&Types::minmatarOffensiveSystems,
			&Types::caldariPropulsionSystems,
			&Types::gallentePropulsionSystems,
			&Types::minmatarPropulsionSystems,
			&Types::amarrStrategicCruiser,
			&Types::caldariStrategicCruiser,
			&Types::gallenteStrategicCruiser,
			&Types::minmatarStrategicCruiser,
			&Types::propulsionSubsystemTechnology,
			&Types::heavyFighters,
			&Types::XLCruiseMissiles,
			&Types::resistancePhasing,
			&Types::tacticalStrike,
			&Types::miningFrigate,
			&Types::magnetometricSensorCompensation,
			&Types::gravimetricSensorCompensation,
			&Types::ladarSensorCompensation,
			&Types::radarSensorCompensation,
			&Types::armorLayering,
			&Types::amarrDestroyer,
			&Types::caldariDestroyer,
			&Types::gallenteDestroyer,
			&Types::minmatarDestroyer,
			&Types::amarrBattlecruiser,
			&Types::caldariBattlecruiser,
			&Types::gallenteBattlecruiser,
			&Types::minmatarBattlecruiser,
			&Types::infomorphSynchronizing,
			&Types::advancedInfomorphPsychology,
			&Types::customsCodeExpertise,
			&Types::mediumDroneOperation,
			&Types::expeditionFrigates,
			&Types::OREFreighter,
			&Types::amarrTacticalDestroyer,
			&Types::minmatarTacticalDestroyer,
			&Types::caldariTacticalDestroyer,
			&Types::gallenteTacticalDestroyer,
			&Types::commandDestroyers,
			&Types::structureMissileSystems,
			&Types::structureDoomsdayOperation,
			&Types::structureElectronicSystems,
			&Types::structureEngineeringSystems,
			&Types::logisticsFrigates,
			&Types::amarrForceAuxiliary,
			&Types::caldariForceAuxiliary,
			&Types::gallenteForceAuxiliary,
			&Types::minmatarForceAuxiliary,
			&Types::lightFighters,
			&Types::supportFighters,
			&Types::capitalAutocannonSpecialization,
			&Types::capitalArtillerySpecialization,
			&Types::capitalBlasterSpecialization,
			&Types::capitalRailgunSpecialization,
			&Types::capitalPulseLaserSpecialization,
			&Types::capitalBeamLaserSpecialization,
			&Types::XLTorpedoSpecialization,
			&Types::XLCruiseMissileSpecialization,
			&Types::doomsdayRapidFiring,
			&Types::iceHarvestingDroneOperation,
			&Types::iceHarvestingDroneSpecialization,
			&Types::spatialPhenomenaGeneration,
			&Types::invulnerabilityCoreOperation,
			&Types::reactions,
			&Types::massReactions,
			&Types::advancedMassReactions,
			&Types::remoteReactions,
			&Types::ubiquitousMoonOreProcessing,
			&Types::commonMoonOreProcessing,
			&Types::uncommonMoonOreProcessing,
			&Types::rareMoonOreProcessing,
			&Types::exceptionalMoonOreProcessing,
		};
	}
}
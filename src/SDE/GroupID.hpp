#pragma once

namespace dgmpp {
	enum class GroupID: unsigned short {
		none = 0,
		character = 1,
		corporation = 2,
		money = 17,
		mineral = 18,
		faction = 19,
		drug = 20,
		frigate = 25,
		cruiser = 26,
		battleship = 27,
		industrial = 28,
		capsule = 29,
		titan = 30,
		shuttle = 31,
		alliance = 32,
		shieldExtender = 38,
		shieldRecharger = 39,
		shieldBooster = 40,
		remoteShieldBooster = 41,
		capacitorRecharger = 43,
		propulsionModule = 46,
		cargoScanner = 47,
		shipScanner = 48,
		surveyScanner = 49,
		warpScrambler = 52,
		energyWeapon = 53,
		miningLaser = 54,
		projectileWeapon = 55,
		missileLauncher = 56,
		shieldPowerRelay = 57,
		gyrostabilizer = 59,
		damageControl = 60,
		capacitorBattery = 61,
		armorRepairUnit = 62,
		hullRepairUnit = 63,
		stasisWeb = 65,
		remoteCapacitorTransmitter = 67,
		energyNosferatu = 68,
		energyNeutralizer = 71,
		smartBomb = 72,
		hybridWeapon = 74,
		capacitorBooster = 76,
		shieldHardener = 77,
		reinforcedBulkhead = 78,
		burstJammer = 80,
		passiveTargetingSystem = 82,
		projectileAmmo = 83,
		hybridCharge = 85,
		frequencyCrystal = 86,
		capacitorBoosterCharge = 87,
		defenderMissiles = 88,
		torpedo = 89,
		bomb = 90,
		mine = 92,
		automatedTargetingSystem = 96,
		proximityDrone = 97,
		armorCoating = 98,
		combatDrone = 100,
		miningDrone = 101,
		ECM = 201,
		ECCM = 202,
		sensorBackupArray = 203,
		heatSink = 205,
		sensorDampener = 208,
		remoteTrackingComputer = 209,
		signalAmplifier = 210,
		trackingEnhancer = 211,
		sensorBooster = 212,
		trackingComputer = 213,
		cheatModuleGroup = 225,
		corvette = 237,
		gunnery = 255,
		missiles = 256,
		spaceshipCommand = 257,
		fleetSupport = 258,
		corporationManagement = 266,
		obsoleteBooks = 267,
		production = 268,
		rigging = 269,
		science = 270,
		electronicSystems = 272,
		drones = 273,
		trade = 274,
		navigation = 275,
		social = 278,
		general = 280,
		frozen = 281,
		radioactive = 282,
		livestock = 283,
		biohazard = 284,
		CPUEnhancer = 285,
		projectedECCM = 289,
		remoteSensorBooster = 290,
		weaponDisruptor = 291,
		shieldResistanceAmplifier = 295,
		repairDrone = 299,
		cyberimplant = 300,
		magneticFieldStabilizer = 302,
		booster = 303,
		DNAMutator = 304,
		countermeasureLauncher = 308,
		autopilot = 309,
		reprocessingArray = 311,
		drugs = 313,
		miscellaneous = 314,
		warpCoreStabilizer = 315,
		gangCoordinator = 316,
		computerInterfaceNode = 317,
		shieldDisruptor = 321,
		assaultFrigate = 324,
		remoteArmorRepairer = 325,
		armorPlatingEnergized = 326,
		armorHardener = 328,
		armorReinforcer = 329,
		cloakingDevice = 330,
		tool = 332,
		datacores = 333,
		constructionComponents = 334,
		shieldBoostAmplifier = 338,
		auxiliaryPowerCore = 339,
		signatureScrambling = 341,
		QAModule = 353,
		refinables = 355,
		droneBayExpander = 357,
		heavyAssaultCruiser = 358,
		shipMaintenanceArray = 363,
		mobileStorage = 364,
		controlTower = 365,
		ballisticControlsystem = 367,
		shipLogs = 369,
		criminalTags = 370,
		advancedAutocannonAmmo = 372,
		advancedRailgunCharge = 373,
		advancedBeamLaserCrystal = 374,
		advancedPulseLaserCrystal = 375,
		advancedArtilleryAmmo = 376,
		advancedBlasterCharge = 377,
		cruiseControl = 378,
		targetPainter = 379,
		deepSpaceTransport = 380,
		eliteBattleship = 381,
		lightMissile = 384,
		heavyMissile = 385,
		cruiseMissile = 386,
		rocket = 387,
		autoTargetingLightMissile = 394,
		autoTargetingHeavyMissile = 395,
		autoTargetingCruiseMissile = 396,
		assemblyArray = 397,
		silo = 404,
		antiCloakingPulse = 405,
		smartbombSupercharger = 406,
		fighterSupportUnit = 407,
		empireInsigniaDrops = 409,
		mobilePowerCore = 414,
		moonMining = 416,
		mobileMissileSentry = 417,
		mobileShieldGenerator = 418,
		combatBattlecruiser = 419,
		destroyer = 420,
		gasIsotopes = 422,
		iceProduct = 423,
		orbitalAssaultUnit = 425,
		mobileProjectileSentry = 426,
		moonMaterials = 427,
		intermediateMaterials = 428,
		composite = 429,
		mobileLaserSentry = 430,
		mobileReactor = 438,
		electronicWarfareBattery = 439,
		sensorDampeningBattery = 440,
		stasisWebificationBattery = 441,
		warpScramblingBattery = 443,
		shieldHardeningArray = 444,
		forceFieldArray = 445,
		mobileHybridSentry = 449,
		miningBarge = 463,
		stripMiner = 464,
		unanchoringDrone = 470,
		corporateHangarArray = 471,
		systemScanner = 472,
		trackingArray = 473,
		accelerationGateKeys = 474,
		microwarpdrive = 475,
		XLTorpedo = 476,
		scannerProbe = 479,
		stealthEmitterArray = 480,
		scanProbeLauncher = 481,
		miningCrystal = 482,
		frequencyMiningLaser = 483,
		dreadnought = 485,
		surveyProbe = 492,
		overseerPersonalEffects = 493,
		fuel = 497,
		modifications = 498,
		newEWTesting = 499,
		festivalCharges = 500,
		festivalLauncher = 501,
		fakeSkills = 505,
		missileLauncherCruise = 506,
		missileLauncherRocket = 507,
		missileLauncherTorpedo = 508,
		missileLauncherLight = 509,
		missileLauncherHeavy = 510,
		missileLauncherRapidLight = 511,
		missileLauncherDefender = 512,
		freighter = 513,
		ECMStabilizer = 514,
		siegeModule = 515,
		antiBallisticDefenseSystem = 518,
		identification = 521,
		missileLauncherXLTorpedo = 524,
		commodities = 526,
		artifactsandPrototypes = 528,
		materialsandCompounds = 530,
		stationComponents = 536,
		dataMiners = 538,
		commandShip = 540,
		interdictor = 541,
		exhumer = 543,
		energyNeutralizerDrone = 544,
		warpScramblingDrone = 545,
		miningUpgrade = 546,
		carrier = 547,
		interdictionProbe = 548,
		fighterDrone = 549,
		remoteHullRepairer = 585,
		droneModules = 586,
		superWeapon = 588,
		interdictionSphereLauncher = 589,
		jumpPortalGenerator = 590,
		navigationComputer = 638,
		electronicWarfareDrone = 639,
		logisticDrone = 640,
		stasisWebifyingDrone = 641,
		superGangEnhancer = 642,
		droneNavigationComputer = 644,
		droneDamageModules = 645,
		droneTrackingModules = 646,
		droneControlRangeModule = 647,
		advancedRocket = 648,
		tractorBeam = 650,
		lease = 652,
		advancedLightMissile = 653,
		advancedHeavyAssaultMissile = 654,
		advancedHeavyMissile = 655,
		advancedCruiseMissile = 656,
		advancedTorpedo = 657,
		cynosuralField = 658,
		supercarrier = 659,
		energyVampireSlayer = 660,
		mercoxitMiningCrystal = 663,
		jumpPortalArray = 707,
		scannerArray = 709,
		logisticsArray = 710,
		biochemicalMaterial = 712,
		dataInterfaces = 716,
		temp = 721,
		decryptorsSleepers = 732,
		decryptorsYanJung = 733,
		decryptorsTakmahl = 734,
		decryptorsTalocan = 735,
		gasCloudHarvester = 737,
		cyberArmor = 738,
		cyberDrones = 739,
		cyberElectronicSystems = 740,
		cyberEngineering = 741,
		cyberGunnery = 742,
		cyberProduction = 743,
		cyberLeadership = 744,
		cyberLearning = 745,
		cyberMissile = 746,
		cyberNavigation = 747,
		cyberScience = 748,
		cyberShields = 749,
		cyberSocial = 750,
		cyberTrade = 751,
		ECMEnhancer = 753,
		salvagedMaterials = 754,
		inertialStabilizer = 762,
		nanofiberInternalStructure = 763,
		overdriveInjectorSystem = 764,
		expandedCargohold = 765,
		powerDiagnosticSystem = 766,
		capacitorPowerRelay = 767,
		capacitorFluxCoil = 768,
		reactorControlUnit = 769,
		shieldFluxCoil = 770,
		missileLauncherHeavyAssault = 771,
		heavyAssaultMissile = 772,
		rigArmor = 773,
		rigShield = 774,
		rigEnergyWeapon = 775,
		rigHybridWeapon = 776,
		rigProjectileWeapon = 777,
		rigDrones = 778,
		rigLauncher = 779,
		rigCore = 781,
		rigNavigation = 782,
		cyberXSpecials = 783,
		rigElectronicSystems = 786,
		cloneVatBay = 815,
		covertOps = 830,
		interceptor = 831,
		logistics = 832,
		forceReconShip = 833,
		stealthBomber = 834,
		energyNeutralizingBattery = 837,
		cynosuralGeneratorArray = 838,
		cynosuralSystemJammer = 839,
		structureRepairArray = 840,
		burstProjectors = 842,
		missileLauncherBomb = 862,
		bombECM = 863,
		bombEnergy = 864,
		capitalConstructionComponents = 873,
		targetPaintingBattery = 877,
		cloakEnhancements = 878,
		slaveReception = 879,
		sleeperComponents = 880,
		capitalIndustrialShip = 883,
		testCompressedOre = 884,
		rogueDroneComponents = 886,
		planetSatellites = 892,
		electronicAttackShip = 893,
		heavyInterdictionCruiser = 894,
		rigSecurityTransponder = 896,
		blackOps = 898,
		warpDisruptFieldGenerator = 899,
		marauder = 900,
		miningEnhancer = 901,
		jumpFreighter = 902,
		rigMining = 904,
		covertCynosuralFieldGenerator = 905,
		combatReconShip = 906,
		trackingScript = 907,
		warpDisruptionScript = 908,
		trackingDisruptionScript = 909,
		sensorBoosterScript = 910,
		sensorDampenerScript = 911,
		advancedCapitalConstructionComponents = 913,
		naniteRepairPaste = 916,
		effectBeacon = 920,
		industrialCommandShip = 941,
		defensiveSystems = 954,
		depricatedSubsystems = 955,
		offensiveSystems = 956,
		propulsionSystems = 957,
		coreSystems = 958,
		strategicCruiser = 963,
		hybridTechComponents = 964,
		ancientSalvage = 966,
		wormholeMinerals = 967,
		obsoleteProbes = 972,
		hybridPolymers = 974,
		compactXLTorpedo = 1010,
		XLCruiseMissile = 1019,
		prototypeExplorationShip = 1022,
		fighterBomber = 1023,
		extractors = 1026,
		commandCenters = 1027,
		processors = 1028,
		storageFacilities = 1029,
		spaceports = 1030,
		planetaryResources = 1031,
		planetSolidRawResource = 1032,
		planetLiquidGasRawResource = 1033,
		refinedCommoditiesTier2 = 1034,
		planetOrganicRawResource = 1035,
		planetaryLinks = 1036,
		specializedCommoditiesTier3 = 1040,
		advancedCommoditiesTier4 = 1041,
		basicCommoditiesTier1 = 1042,
		extractorControlUnits = 1063,
		mercenaryBases = 1081,
		capsuleerBases = 1082,
		surfaceInfrastructurePrefabUnits = 1118,
		salvager = 1122,
		fuelBlock = 1136,
		researchData = 1141,
		armorResistanceShiftHardener = 1150,
		shieldBoosterScript = 1153,
		targetBreaker = 1154,
		ancillaryShieldBooster = 1156,
		heavyDefenderMissile = 1158,
		salvageDrone = 1159,
		microJumpDrive = 1189,
		ancillaryArmorRepairer = 1199,
		attackBattlecruiser = 1201,
		blockadeRunner = 1202,
		securityTags = 1206,
		shields = 1209,
		armor = 1210,
		personalHangar = 1212,
		targeting = 1213,
		engineering = 1216,
		scanning = 1217,
		resourceProcessing = 1218,
		neuralEnhancement = 1220,
		scanningUpgrade = 1223,
		surveyProbeLauncher = 1226,
		cyberTargeting = 1228,
		cyberResourceProcessing = 1229,
		cyberScanning = 1230,
		cyberBiology = 1231,
		rigResourceProcessing = 1232,
		rigScanning = 1233,
		rigTargeting = 1234,
		scanningUpgradeTime = 1238,
		subsystems = 1240,
		planetManagement = 1241,
		missileLauncherRapidHeavy = 1245,
		empireBountyReimbursementTags = 1248,
		compressionArray = 1282,
		expeditionFrigate = 1283,
		warpAccelerator = 1289,
		droneTrackingEnhancer = 1292,
		jumpDriveEconomizer = 1299,
		tacticalDestroyer = 1305,
		shipModifiers = 1306,
		rigAnchor = 1308,
		entosisLink = 1313,
		unknownComponents = 1314,
		structureCitadelServiceModule = 1321,
		structureResourceProcessingServiceModule = 1322,
		structureObservatoryServiceModule = 1323,
		structureStargateServiceModule = 1324,
		structureAdministrationServiceModule = 1325,
		structureAdvertisementServiceModule = 1326,
		structureXLMissileLauncher = 1327,
		structureGuidedBombLauncher = 1328,
		structureEnergyNeutralizer = 1329,
		structureAreaDenialModule = 1330,
		structureBurstProjector = 1331,
		structureECMBattery = 1332,
		structureDoomsdayWeapon = 1333,
		missileGuidanceEnhancer = 1395,
		missileGuidanceComputer = 1396,
		missileGuidanceScript = 1400,
		engineeringComplex = 1404,
		laboratory = 1405,
		refinery = 1406,
		observatoryArray = 1407,
		navigationStructures = 1408,
		administrationHub = 1409,
		advertisementCenter = 1410,
		structureEngineeringServiceModule = 1415,
		structureResearchServiceModule = 1416,
		structureWeaponUpgrade = 1429,
		structureFittingModule = 1430,
		structureStasisWebifier = 1441,
		structureWarpScrambler = 1442,
		logisticsFrigate = 1527,
		microJumpFieldGenerators = 1533,
		commandDestroyer = 1534,
		structureSignalAmplifier = 1535,
		supportFighter = 1537,
		forceAuxiliary = 1538,
		structureManagement = 1545,
		structureAntiCapitalMissile = 1546,
		structureAntiSubcapitalMissile = 1547,
		structureGuidedBomb = 1548,
		structureECMscript = 1549,
		structureStasisWebifierScript = 1550,
		structureWarpDisruptorScript = 1551,
		structureResistanceSwitcherScript = 1559,
		structureMultiroleMissileLauncher = 1562,
		guidanceDisruptionScript = 1569,
		structureAssemblyRigMSmallTechIShip = 1570,
		structureAssemblyRigMMediumTechIShip = 1579,
		structureAssemblyRigMLargeTechIShip = 1580,
		structureAssemblyRigMSmallTechIIShip = 1581,
		structureAssemblyRigMMediumTechIIShip = 1582,
		structureAssemblyRigMLargeTechIIShip = 1583,
		structureAssemblyRigMDrone = 1584,
		structureAssemblyRigMConsumable = 1585,
		structureAssemblyRigMModule = 1586,
		structureAssemblyRigLModuleConsumableDrone = 1587,
		structureAssemblyRigLTechIShip = 1588,
		structureAssemblyRigLTechIIShip = 1589,
		structureAssemblyRigLTechIIComponent = 1590,
		structureAssemblyRigLTechICapitalComponent = 1591,
		structureAssemblyRigLStructureComponent = 1592,
		structureAssemblyRigLSubsystem = 1593,
		structureAssemblyRigXLEquipment = 1594,
		structureAssemblyRigXLShip = 1595,
		structureAssemblyRigXLAllComponents = 1596,
		structureLaboratoryRigMSmallShip = 1598,
		structureLaboratoryRigMMediumShip = 1599,
		structureLaboratoryRigMLargeShip = 1600,
		structureLaboratoryRigMDrone = 1601,
		structureLaboratoryRigMConsumable = 1602,
		structureLaboratoryRigMModule = 1603,
		structureLaboratoryRigLModuleConsumableDrone = 1604,
		structureLaboratoryRigLShip = 1605,
		structureLaboratoryRigLComponent = 1606,
		structureLaboratoryRigLCapitalComponent = 1607,
		structureLaboratoryRigLStructureComponent = 1608,
		structureLaboratoryRigLSubsystem = 1609,
		structureLaboratoryRigXLEquipment = 1610,
		structureLaboratoryRigXLShip = 1611,
		structureLaboratoryRigXLAllComponents = 1612,
		structureCombatRigMMissileApplication = 1613,
		structureCombatRigMMissileProjection = 1614,
		structureCombatRigMEnergyNeutralizerProjection = 1615,
		structureCombatRigMEnergyNeutralizerCapReduction = 1616,
		structureCitadelRigMDroneHitpoints = 1617,
		structureCitadelRigMDroneSpeed = 1618,
		structureCombatRigMEWprojection = 1619,
		structureCombatRigMEWCapReduction = 1620,
		structureCombatRigMMaxTargets = 1621,
		structureCombatRigMBoostedSensors = 1622,
		structureCombatRigLMissileApplicationandProjection = 1629,
		structureCombatRigLEnergyNeutralizerProjectionandCapReduction = 1630,
		structureCitadelRigLDroneHitpointsandSpeed = 1631,
		structureCombatRigLEWProjectionandCapReduction = 1632,
		structureCombatRigLAoELauncherApplicationandProjection = 1633,
		structureCombatRigLPointDefenseBatteryApplicationandProjection = 1634,
		structureCombatRigLMaxTargetsandSensorBoosting = 1635,
		structureCombatRigXLMissileandAoEMissile = 1639,
		structureCitadelRigXLDroneandPDB = 1640,
		structureCombatRigXLEnergyNeutralizerandEW = 1641,
		structureCombatRigXLDoomsdayandTargeting = 1642,
		OLDStructureResourceRigMHSOreReprocessing = 1647,
		OLDStructureResourceRigLOreReprocessing = 1648,
		OLDStructureResourceRigXLReprocessing = 1649,
		lightFighter = 1652,
		heavyFighter = 1653,
		citadel = 1657,
		stasisGrappler = 1672,
		missileLauncherRapidTorpedo = 1673,
		missileLauncherXLCruise = 1674,
		namedComponents = 1676,
		advancedXLTorpedo = 1677,
		advancedXLCruiseMissile = 1678,
		OLDStructureResourceRigMLNSOreReprocessing = 1693,
		OLDStructureResourceRigMIce1Reprocessing = 1694,
		OLDStructureResourceRigMIce2Reprocessing = 1695,
		OLDStructureResourceRigLIceReprocessing = 1696,
		ancillaryRemoteShieldBooster = 1697,
		ancillaryRemoteArmorRepairer = 1698,
		flexArmorHardener = 1699,
		flexShieldHardener = 1700,
		flexArmorHardenerScript = 1701,
		flexShieldHardenerScript = 1702,
		capitalSensorArray = 1706,
		unpublishedStructureModules = 1717,
		structureDisruptionBattery = 1719,
		specialEditionImplant = 1730,
		shieldCommandBurstCharges = 1769,
		commandBurst = 1770,
		miningForemanBurstCharges = 1771,
		skirmishCommandBurstCharges = 1772,
		informationCommandBurstCharges = 1773,
		armorCommandBurstCharges = 1774,
		titanPhenomenaGenerator = 1815,
		structureEngineeringRigMEquipmentME = 1816,
		strongBoxes = 1818,
		structureEngineeringRigMEquipmentTE = 1819,
		structureEngineeringRigMAmmunitionME = 1820,
		structureEngineeringRigMAmmunitionTE = 1821,
		structureEngineeringRigMDroneandFighterME = 1822,
		structureEngineeringRigMDroneandFighterTE = 1823,
		structureEngineeringRigMBasicSmallShipME = 1824,
		structureEngineeringRigMBasicSmallShipTE = 1825,
		structureEngineeringRigMBasicMediumShipME = 1826,
		structureEngineeringRigMBasicMediumShipTE = 1827,
		structureEngineeringRigMBasicLargeShipME = 1828,
		structureEngineeringRigMBasicLargeShipTE = 1829,
		structureEngineeringRigMAdvancedSmallShipME = 1830,
		structureEngineeringRigMAdvancedSmallShipTE = 1831,
		structureEngineeringRigMAdvancedMediumShipME = 1832,
		structureEngineeringRigMAdvancedMediumShipTE = 1833,
		structureEngineeringRigMAdvancedLargeShipME = 1834,
		structureEngineeringRigMAdvancedLargeShipTE = 1835,
		structureEngineeringRigMAdvancedComponentME = 1836,
		structureEngineeringRigMAdvancedComponentTE = 1837,
		structureEngineeringRigMBasicCapitalComponentTE = 1838,
		structureEngineeringRigMBasicCapitalComponentME = 1839,
		structureEngineeringRigMStructureME = 1840,
		structureEngineeringRigMStructureTE = 1841,
		structureEngineeringRigMInventionCostOptimization = 1842,
		structureEngineeringRigMInventionAccelerator = 1843,
		structureEngineeringRigMMEResearchCostOptimization = 1844,
		structureEngineeringRigMMEResearchAccelerator = 1845,
		structureEngineeringRigMTEResearchCostOptimization = 1846,
		structureEngineeringRigMTEResearchAccelerator = 1847,
		structureEngineeringRigMBlueprintCopyCostOptimization = 1848,
		structureEngineeringRigMBlueprintCopyAccelerator = 1849,
		structureEngineeringRigLEquipmentEfficiency = 1850,
		structureEngineeringRigLAmmunitionEfficiency = 1851,
		structureEngineeringRigLDroneandFighterEfficiency = 1852,
		structureEngineeringRigLBasicSmallShipEfficiency = 1853,
		structureEngineeringRigLBasicMediumShipEfficiency = 1854,
		structureEngineeringRigLBasicLargeShipEfficiency = 1855,
		structureEngineeringRigLAdvancedSmallShipEfficiency = 1856,
		structureEngineeringRigLAdvancedMediumShipEfficiency = 1857,
		structureEngineeringRigLAdvancedLargeShipEfficiency = 1858,
		structureEngineeringRigLCapitalShipEfficiency = 1859,
		structureEngineeringRigLAdvancedComponentEfficiency = 1860,
		structureEngineeringRigLBasicCapitalComponentEfficiency = 1861,
		structureEngineeringRigLStructureEfficiency = 1862,
		structureEngineeringRigLInventionOptimization = 1863,
		structureEngineeringRigLMEResearchOptimization = 1864,
		structureEngineeringRigLTEResearchOptimization = 1865,
		structureEngineeringRigLBlueprintCopyOptimization = 1866,
		structureEngineeringRigXLEquipmentandConsumableEfficiency = 1867,
		structureEngineeringRigXLShipEfficiency = 1868,
		structureEngineeringRigXLStructureandComponentEfficiency = 1869,
		structureEngineeringRigXLLaboratoryOptimization = 1870,
		engineeringComplex_1 = 1876,
		technicalDataChips = 1886,
		structureMoonDrillingServiceModule = 1887,
		nonRepeatingHardeners = 1894,
		structureDrillingRigMEfficiency = 1912,
		structureDrillingRigMStability = 1913,
		structureDrillingRigLProficiency = 1914,
		forwardOperatingBase = 1924,
		structureCompositeReactorRigMTE = 1933,
		structureCompositeReactorRigMME = 1934,
		structureHybridReactorRigMTE = 1935,
		structureHybridReactorRigMME = 1936,
		structureBiochemicalReactorRigMTE = 1937,
		structureBiochemicalReactorRigMME = 1938,
		structureReactorRigLEfficiency = 1939,
		structureResourceRigMAsteroidOreReprocessing = 1941,
		structureResourceRigMIceReprocessing = 1942,
		structureResourceRigMMoonOreReprocessing = 1943,
		structureResourceRigLReprocessing = 1944,
		structureResourceRigXLReprocessing = 1945,
		structureQAModules = 1962,
		mutaplasmids = 1964,
		structureCapacitorBattery = 1966,
		structureCapacitorPowerRelay = 1967,
		structureArmorReinforcer = 1968,
		NOTEXTmessageID532741param = 1969,
		flagCruiser = 1972,
		structureFestivalLauncher = 1974,
		structureFestivalCharges = 1976,
		trinaryDataVaults = 1977,
		abyssalFilaments = 1979,
		outpostConversionRigs = 1984,
		precursorWeapon = 1986,
		exoticPlasmaCharge = 1987,
		entropicRadiationSink = 1988,
		advancedExoticPlasmaCharge = 1989,
		triglavianData = 1995,
		abyssalMaterials = 1996,
		citizenShips = 2001,
		triglavianDatastreams = 2002,
		citizenModules = 2003,
		citizenMiningLaser = 2004,
		massEntanglers = 2008
	};
}

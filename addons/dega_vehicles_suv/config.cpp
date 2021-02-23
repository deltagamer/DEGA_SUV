#include "\dega_vehicles_suv\BasicDefines.hpp"
#include "\dega_vehicles_suv\config_crewanimation.hpp"
class Mode_FullAuto;
class CfgPatches 
{
	class DEGA_Vehicles_Suv 
	{
		units[] = 
		{
		    "DEGA_GunArmoredSUV_PMC",
			"DEGA_ArmoredSUV_PMC"
		};
		weapons[] = {};
		requiredVersion = 0.01;
		requiredAddons[] = {"A3_Soft_F", "A3_anims_f"};
	};
};
class Mod_Base;
class CfgMods 
{
	class DEGA_PMC : Mod_Base 
	{
        #include "\dega_vehicles_suv\data\release\mod.cpp"
	};
};	
class CfgFactionClasses 
{
	class DEGA_Vehicles_PMC 
	{
		displayName = "DEGA PMC";
		priority = 5;
		side = 2;
		icon = "\A3\Data_F\Flags\flag_ion_CO.paa";
	};
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
	    class AnimationSources;
		class NewTurret;
		class Turrets 
		{
			class MainTurret : NewTurret 
			{
				class ViewOptics;
			};
		};		
		class HitPoints
		{
			class HitRGlass;
			class HitLGlass;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;		
			class HitBody;
			class HitFuel;
			class HitEngine;			
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
		};	
		class EventHandlers;
		class CargoTurret;
	};
	class DEGA_ArmoredSUV_Base: Car_F
	{
		htMin = 60;         
		htMax = 1800;       
		afMax = 200; 			
		mfMax = 100; 		
		mFact = 1;           // Metabolism factor - number from interval <0, 1> (0 - metabolism has no influence, 1 - metabolism has full influence (no other temperature source will be considered)).
		tBody = 200;           // Metabolism temperature of the model (in celsius)
		displayName = "Armoured Suburban";
		model = "\dega_vehicles_suv\armoredSUV_PMC.p3d";
    	icon = "\dega_vehicles_suv\data\ui\Icon_suv_minigun_PMC.paa";
    	picture = "\dega_vehicles_suv\data\ui\Picture_suv_minigun_PMC_ca.paa";
    	mapSize = 7;    		
		accuracy = 0.2;
		armor = 30;
		damageResistance = 0.00555;	
		transportMaxWeapons = 5000;
		transportMaxMagazines = 20000;	
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";		
		transportSoldier = 5;
        driverCompartments = "Compartment1";
        cargoCompartments[] = {"Compartment1"};			
		weapons[] = {"SportCarHorn"};
		driverAction = "Driver_low01";
		cargoAction[] = {"SUV_Cargo_EP1", "SUV_Cargo02_EP1", "SUV_Cargo01_EP1"};
		outsideSoundFilter = 1;
        hiddenSelections[] = {"camo1","camo2"};
		crew = "I_soldier_F";
		typicalCargo[] = {Soldier_PMC, Soldier_PMC, Soldier_PMC, Soldier_PMC, Soldier_PMC};		
        #include "\dega_vehicles_suv\config_sound.hpp"
        #include "\dega_vehicles_suv\config_physx.hpp"	
		class SimpleObject
		{
			animate[] = {{"damageHide", 0}, {"damageHideVez", 0}, {"damageHideHlaven", 0}, {"wheel_1_1_destruct", 0}, {"wheel_1_2_destruct", 0}, {"wheel_1_3_destruct", 0}, {"wheel_1_4_destruct", 0}, {"wheel_2_1_destruct", 0}, {"wheel_2_2_destruct", 0}, {"wheel_2_3_destruct", 0}, {"wheel_2_4_destruct", 0}, {"wheel_1_1_destruct_unhide", 0}, {"wheel_1_2_destruct_unhide", 0}, {"wheel_1_3_destruct_unhide", 0}, {"wheel_1_4_destruct_unhide", 0}, {"wheel_2_1_destruct_unhide", 0}, {"wheel_2_2_destruct_unhide", 0}, {"wheel_2_3_destruct_unhide", 0}, {"wheel_2_4_destruct_unhide", 0}, {"wheel_1_3_Damage", 0}, {"wheel_1_4_Damage", 0}, {"wheel_2_3_Damage", 0}, {"wheel_2_4_Damage", 0}, {"wheel_1_3_Damper_Damage_BackAnim", 0}, {"wheel_1_4_Damper_Damage_BackAnim", 0}, {"wheel_2_3_Damper_Damage_BackAnim", 0}, {"wheel_2_4_Damper_Damage_BackAnim", 0}, {"Glass1_destruct", 0}, {"Glass2_destruct", 0}, {"Glass3_destruct", 0}, {"Glass4_destruct", 0}, {"Glass5_destruct", 0}, {"Glass6_destruct", 0}, {"Wheel_1_1", 0}, {"wheel_2_1", 0}, {"wheel_1_2", 0}, {"Wheel_2_2", 0}, {"daylights", 0}, {"reverse_light", 1}, {"pedal_thrust", 0}, {"pedal_brake", 1}, {"wheel_1_1_Damage", 0}, {"wheel_1_2_Damage", 0}, {"wheel_2_1_Damage", 0}, {"wheel_2_2_Damage", 0}, {"wheel_1_1_Damper_Damage_BackAnim", 0}, {"wheel_1_2_Damper_Damage_BackAnim", 0}, {"wheel_2_1_Damper_Damage_BackAnim", 0}, {"wheel_2_2_Damper_Damage_BackAnim", 0}, {"DrivingWheel", 0}, {"Steering_1_1", 0}, {"Steering_2_1", 0}, {"IndicatorSpeed", 0.0012}, {"IndicatorRPM", 0}, {"fuel", 1}, {"Hidedoor1", 0}, {"Hidedoor2", 0}, {"Hidedoor3", 0}, {"Hidedoor4", 0}, {"Hidedoor5", 0}, {"Hidedoor6", 0}, {"Wheel_1_1_Damper", 0.5007}, {"wheel_2_1_Damper", 0.6}, {"wheel_1_2_Damper", 0.5954}, {"Wheel_2_2_Damper", 0.6963}, {"Display_off_hide", 0}};
			hide[] = {"clan", "zasleh"};
			verticalOffset = -0.00731516;
		};	
		class PlateInfos
		{
			name = "spz";
			color[] = {0, 0, 0, 0.75};
		};		
		class AcreIntercoms{};
		class AcreRacks{};
        class CargoTurret;		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				viewGunnerInExternal = 1;
				minElev=-30; maxElev=45; initElev=0;
				soundServo[] = {, db-40, 1.0};
				stabilizedInAxes = StabilizedInAxesNone;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				weapons[] = {"DEGA_LMG_Minigun_Suv"};
				maxHorizontalRotSpeed = 1.8;
				maxVerticalRotSpeed = 1.8;
				magazines[] = {"2000Rnd_65x39_Belt_Tracer_Red"};	
				gunnerRightHandAnimName = "OtocHlavenSUV";
				gunnerLeftHandAnimName = "OtocHlavenSUV";
                animationSourceHatch = "close_cover_source";
                gunnerInAction = "ArmoredSUV_GunnerTurnIn_PMC"; //ArmoredSUV_GunnerIn_PMC
                gunnerAction = "ArmoredSUV_GunnerTurnOut_PMC"; //ArmoredSUV_Gunner_PMC
				gunnerOpticsModel = "";
				gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";				
                memoryPointGunnerOutOptics = "gunnerview";
				memoryPointGunnerOptics = "";
				memoryPointsGetInGunner = "pos cargo rear";
				memoryPointsGetInGunnerDir = "pos cargo dir rear";				
				outGunnerMayFire = 1;
				startEngine = 0;
				inGunnerMayFire = 0;
				LODTurnedIn = 1000;
				LODOpticsIn = 1000;
				LODTurnedOut = 1000;	
				LODOpticsOut = 1000;
				canhideGunner = 1;
				castGunnerShadow = 1;	
                hideProxyInCombat = 0;
				forceHideGunner = 0;
				gunnerCompartments = "Compartment1";
				class ViewOptics: ViewOptics
				{
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
				};
				class ViewGunner: ViewOptics {};
			};		
			class CargoTurret_1: CargoTurret
			{
				minElev = -10;
				maxElev = 23;
				maxTurn = 130;					/// what is the lowest possible elevation of the turret
				minTurn = 25;	
				gunnerAction = "passenger_flatground_2";
				gunnerName = "$STR_A3_REAR_GUNNER";
				proxyIndex = 6;
				LODTurnedIn = 1000;
				LODOpticsIn = 1000;
				LODTurnedOut = 1000;	
				LODOpticsOut = 1000;				
				isPersonTurret = 1;
				memoryPointsGetInGunner = "pos cargo rear";
				memoryPointsGetInGunnerDir = "pos cargo dir rear";
				memoryPointGunnerOptics = "";
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				enabledByAnimationSource = "reardoor_2_source";
				usepip = 0;
				ejectDeadGunner = 1;
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
				gunnerCompartments = "Compartment1";
			};	
			class CargoTurret_2: CargoTurret
			{
				gunnerAction = "SUV_Cargo_Frontleft_Side";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos external_L";
				memoryPointsGetInGunnerDir = "pos external_L dir";
				gunnerName = "Left external (Front)";
				proxyIndex = 11;
				maxElev = 65;
				minElev = -10;
				maxTurn = 105;
				minTurn = 50;
				isPersonTurret = 0;
				ejectDeadGunner = 1;
				memoryPointGunnerOptics = "eye";
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				class dynamicViewLimits{};
				showAsCargo = 1;
			};
			class CargoTurret_3: CargoTurret_2
			{
				proxyIndex = 7;
				gunnerName = "Left external (Rear)";
				gunnerAction = "SUV_Cargo_Back_Side";				
			};
			class CargoTurret_4: CargoTurret_2
			{
				proxyIndex = 8;
				gunnerName = "Left external (Middle)";
				gunnerAction = "SUV_Cargo_Back_Side";				
			};
			class CargoTurret_5: CargoTurret
			{
				gunnerAction = "SUV_Cargo_Frontright_Side";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos external_R";
				memoryPointsGetInGunnerDir = "pos external_R dir";
				gunnerName = "Right external (Front)";
				proxyIndex = 12;
				maxElev = 65;
				minElev = -10;
				maxTurn = 105;
				minTurn = 50;
				isPersonTurret = 0;
				ejectDeadGunner = 1;
				memoryPointGunnerOptics = "eye";
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				class dynamicViewLimits{};
				showAsCargo = 1;
			};
			class CargoTurret_6: CargoTurret_5
			{
				proxyIndex = 9;
				gunnerName = "Right external (Rear)";
				gunnerAction = "SUV_Cargo_Back_Side";				
			};
			class CargoTurret_7: CargoTurret_5
			{
				proxyIndex = 10;
				gunnerName = "Right external (Middle)";
				gunnerAction = "SUV_Cargo_Back_Side";				
			};			
		};
		class AnimationSources : AnimationSources
		{
			class Revolving {source="revolving"; weapon="DEGA_LMG_Minigun_Suv";};
			class CloseCover {source="user"; initPhase=0; animPeriod=1.2;};			
			class reardoor_source {source = "door"; animPeriod = 1; initPhase = 0; sound = "PlasticDoorsSound"; displayName = "Rear Door"; author = "Deltagamer";};
			class reardoor_2_source	: reardoor_source {displayName = "Rear Door Window";};
			class gun_hide_source
			{
				source="user"; 
				animPeriod=0; 
				initPhase=0; 
				displayName = "Hide Turret (Locks Gunner)"; 
				author = "Deltagamer"; 
                onPhaseChanged = "if ((_this select 1) == 0) then { (_this select 0) lockTurret [[0],false]; (_this select 0) setObjectTextureGlobal [0, ""\dega_vehicles_suv\data\armoredsuv_bodygun_co.paa""]; (_this select 0) setObjectTextureGlobal [1, ""\dega_vehicles_suv\data\armoredsuv_interiergun_co.paa""]; } else { (_this select 0) lockTurret [[0],true]; (_this select 0) setObjectTextureGlobal [0, ""\dega_vehicles_suv\data\armoredsuv_body_co.paa""]; (_this select 0) setObjectTextureGlobal [1, ""\dega_vehicles_suv\data\armoredsuv_interier_co.paa""]; };";
			};			
			class ram_hide_source {source="user"; animPeriod=0; initPhase=0; displayName = "Hide Pushbar"; author = "Deltagamer";};			
			class lightbar_hide_source {source="user"; animPeriod=0; initPhase=1; displayName = "Hide Beacon Lights (Unmarked)"; author = "Deltagamer";};	
			class BeaconsStart {source="user"; animPeriod=0; initPhase=1; displayName = "Start Beacon Lights"; author = "Deltagamer";};				
			class roofbar_hide_source 
			{
				source="user"; 
				animPeriod=0; 
				initPhase=0; 
				displayName = "Change Roofbar (Locks Passengers)"; 
				author = "Deltagamer"; 
				useSource = 1;	
                onPhaseChanged = "if ((_this select 1) == 0) then { {(_this select 0) lockturret [[_x],true]} forEach [2,3,4,5,6,7];  } else { {(_this select 0) lockturret [[_x],false]} forEach [2,3,4,5,6,7]; };";				
			};				
			class antenna_hide_source {source="user"; animPeriod=0; initPhase=0; displayName = "Hide Front Antenna"; author = "Deltagamer";};
			class rearseats_source {source="user"; animPeriod=1; initPhase=1; displayName = "Fold Rear Seats (Locks Passengers)"; author = "Deltagamer"; lockCargo[] = {4,5}; lockCargoAnimationPhase = 1; useSource = 1;};			
		};			
		class UserActions 
		{
			class Openreardoor
			{
				displayName= "Open Rear Door";
				displayNameDefault 	= "";
				position="reardoor_mem";
				radius=0.8;
				onlyForplayer=0;
                priority = 1;					
				condition="this doorPhase ""reardoor_source"" < 0.5 AND this doorPhase ""reardoor_2_source"" < 0.5";
				statement="this animateDoor [""reardoor_source"",1];";
			};
			class Closereardoor
			{
				displayName= "Close Rear Door";
				displayNameDefault 	= "";
				position="reardoor_mem";
				radius=0.8;
				onlyForplayer=0;
                priority = 1;					
				condition="this doorPhase ""reardoor_source"" > 0.5 AND this doorPhase ""reardoor_2_source"" < 0.5";
				statement="this animateDoor [""reardoor_source"",0];";
			};
			class Openrearwindow
			{
				displayName = "Open Rear Window";
				displayNameDefault = "";
				position = "";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 10;
				condition = "this doorPhase ""reardoor_source"" < 0.5 AND this doorPhase ""reardoor_2_source"" < 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""reardoor_2_source"",1];";
			};
			class Closerearwindow
			{
				displayName = "Close Rear Window";
				displayNameDefault = "";
				position = "";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 10;
				condition = "this doorPhase ""reardoor_source"" < 0.5 AND this doorPhase ""reardoor_2_source"" > 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""reardoor_2_source"",0];";
			};	
			class beacons_start
			{
                animPeriod = 2;
                condition = "(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['lightbar_hide_source'] > 0.5} AND  {this animationPhase 'BeaconsStart' > 0.5} AND {Alive(this)} ";
                displayName = "Beacons On";
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_ON_ca.paa' size='2.5' />";
                onlyForplayer = 0;
                position = "mph_axis";
                priority = 1.5;
                radius = 1.8;
                showWindow = 0;
                statement = "this animateSource ['BeaconsStart',0];";
                userActionID = 50;
			};		
			class beacons_stop: beacons_start
			{
                animPeriod = 2;
                condition = "(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['lightbar_hide_source'] > 0.5} AND  {this animationPhase 'BeaconsStart' < 0.5} AND {Alive(this)} ";
                displayName = "Beacons Off";
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_OFF_ca.paa' size='2.5' />";
                onlyForplayer = 0;
                position = "mph_axis";
                priority = 1.5;
                radius = 1.8;
                showWindow = 0;
                statement = "this animateSource ['BeaconsStart',1];";
                userActionID = 51;
			};	
			class siren_start
			{
                animPeriod = 2;
                condition = "(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['lightbar_hide_source'] > 0.5} AND {getCustomSoundController [this,'CustomSoundController1'] < 0.5}";
                displayName = "Siren On";
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_ON_ca.paa' size='2.5' />";
                onlyForplayer = 0;
                position = "mph_axis";
                priority = 1.5;
                radius = 1.8;
                showWindow = 0;
                statement = "[this,'CustomSoundController1',1,0.2] remoteExec ['BIS_fnc_setCustomSoundController'];";
                userActionID = 52;
			};			
			class siren_stop
			{
                animPeriod = 2;
                condition = "(driver this == player) AND {{this animationSourcePhase _x isEqualTo 0} count ['lightbar_hide_source'] > 0.5} AND {getCustomSoundController [this,'CustomSoundController1'] > 0.5}";
                displayName = "Siren Off";
                displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_OFF_ca.paa' size='2.5' />";
                onlyForplayer = 0;
                position = "mph_axis";
                priority = 1.5;
                radius = 1.8;
                showWindow = 0;
                statement = "[this,'CustomSoundController1',0,0.4] remoteExec ['BIS_fnc_setCustomSoundController'];";
                userActionID = 53;
			};				
        };			
		class Reflectors
		{
			class Light_L
			{
				color[] = {1900, 1300, 950};
				ambient[] = {5, 5, 5};
				position = "Light_L";
				direction = "Light_L Dir";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 30;
				outerAngle = 179;
				coneFadeCoef = 5;
				intensity = 100;
				useFlare = 1;
				dayLight = 0;
				flareSize = 2.5;
				flareMaxDistance = 90;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 10;
					hardLimitEnd = 120;
				};
			};
			class Light_R: Light_L
			{
				position = "Light_R";
				direction = "Light_R Dir";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class Light_L2: Light_L
			{
				position 	= "Light_L2";
				direction 	= "Light_L2 Dir";				
			};
			class Light_R2: Light_R
			{
				position 	= "Light_R2";
				direction 	= "Light_R2 Dir";				
			};				
		};
		aggregateReflectors[] = {{"Light_L","Light_L2"}, {"Light_R","Light_R2"}};
		selectionBackLights = "lights_running";
        selectionBrakeLights = "lights_brake"; 
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust_1";
				direction = "exhaust_1_dir";
				effect = "ExhaustsEffect";
			};
		};
		class RenderTargets 
		{
			class LeftMirror 
			{
				renderTarget = "rendertarget0";
				class CameraView1 
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			class RightMirror 
			{
				renderTarget = "rendertarget1";
				class CameraView1 
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			class RearCamera 
			{
				renderTarget = "rendertarget2";
				class CameraView1 
				{
					pointPosition = "pip2_pos";
					pointDirection = "pip2_dir";
					renderQuality = 2;
					renderVisionMode = 4; // 0 = HDR, 1 = NightVision, 2 = ThermalVision, 3 = Color, 4 = Mirror
					fov = 0.7;
				};
			};	
        };			
/*		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel {armor=0.19; passThrough=0;}; /// it is easier to destroy wheels than hull of the vehicle
			class HitLF2Wheel: HitLF2Wheel {armor=0.19; passThrough=0;};
			class HitRFWheel: HitRFWheel {armor=0.19; passThrough=0;};
			class HitRF2Wheel: HitRF2Wheel {armor=0.19; passThrough=0;};					
			class HitFuel : HitFuel {armor=2; material=-1; name="palivo"; visual=""; passThrough=0.2;}; /// correct points for fuel tank, some of the damage is aFRLied to the whole
			class HitEngine : HitEngine {armor=4; material=60; name="engine"; visual=""; passThrough=0.2;};
			class HitBody : HitBody {armor = 6; name = "karoserie"; visual = "zbytek"; passThrough =1; radius=0.45;}; /// all damage to the hull is aFRLied to total damage
			class HitGlass1: HitGlass1 {armor=1; explosionShielding = 0.8; minimalHit = 0.1; name = "glass1"; passThrough = 0; radius = 0.11; visual = "glass1";};
			class HitGlass2: HitGlass1 {armor=1; explosionShielding = 0.8; minimalHit = 0.1; name = "glass2"; passThrough = 0; radius = 0.11; visual = "glass2";};
			class HitGlass3: HitGlass1 {armor=1; explosionShielding = 0.8; minimalHit = 0.1; name = "glass3"; passThrough = 0; radius = 0.11; visual = "glass3";};
			class HitGlass4: HitGlass1 {armor=1; explosionShielding = 0.8; minimalHit = 0.1; name = "glass4"; passThrough = 0; radius = 0.11; visual = "glass4";};
			class HitGlass5: HitGlass1 {armor=1; explosionShielding = 0.8; minimalHit = 0.1; name = "glass5"; passThrough = 0; radius = 0.11; visual = "glass5";};
			class HitGlass6: HitGlass1 {armor=1; explosionShielding = 0.8; minimalHit = 0.1; name = "glass6"; passThrough = 0; radius = 0.11; visual = "glass6";};
			class HitGlass7: HitGlass1 {armor=1; explosionShielding = 0.8; minimalHit = 0.1; name = "glass7"; passThrough = 0; radius = 0.11; visual = "glass7";};
			class HitGlass8: HitGlass1 {armor=1; explosionShielding = 0.8; minimalHit = 0.1; name = "glass8"; passThrough = 0; radius = 0.11; visual = "glass8";};
		};*/		
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel {radius=0.2;visual="wheel_1_1_damage";armorComponent="wheel_1_1_hide";armor=-80;minimalHit=0;explosionShielding=4;passThrough=0;};
			class HitLF2Wheel: HitLF2Wheel {radius=0.2;visual="wheel_1_2_damage";armorComponent="wheel_1_2_hide";armor=-80;minimalHit=0;explosionShielding=4;passThrough=0;};
			class HitRFWheel: HitRFWheel {radius=0.2;visual="wheel_2_1_damage";armorComponent="wheel_2_1_hide";armor=-80;minimalHit=0;explosionShielding=4;passThrough=0;};
			class HitRF2Wheel: HitRF2Wheel {radius=0.2;visual="wheel_2_2_damage";armorComponent="wheel_2_2_hide";armor=-80;minimalHit=0;explosionShielding=4;passThrough=0;};
			class HitFuel: HitFuel {name="palivo";armor=2;radius=0.44999999;};
			class HitEngine: HitEngine {name="engine";armor=4;radius=0.25;};
			class HitBody: HitBody 	{name = "body"; visual="zbytek"; passThrough=1;}; /// all damage to the hull is aFRLied to total damage			
			class HitGlass1: HitGlass1 {armor=0.3;};
			class HitGlass2: HitGlass2 {armor=0.3;};
			class HitGlass3: HitGlass3 {armor=0.3;};
			class HitGlass4: HitGlass4 {armor=0.3;};
			class HitGlass5: HitGlass5 {armor=0.3;};
			class HitGlass6: HitGlass6 {armor=0.3;};
			class HitGlass7: HitGlass6 {armor=0.3;name = "glass7";visual = "glass7";};
			class HitGlass8: HitGlass6 {armor=0.3;name = "glass8";visual = "glass8";};
		};		
		class Library {libTextDesc = $STR_PMC_LIB_ARMOREDSUV;};
		class textureSources
		{
			class GunArmoured
			{
				displayName="Armoured (Minigun)";
				author="Deltagamer";
				textures[] = {"\dega_vehicles_suv\data\armoredsuv_bodygun_co.paa", "\dega_vehicles_suv\data\armoredsuv_interiergun_co.paa"};
				factions[]= {};
				//materials[] ={"\dega_vehicles_suv\data\suv_armouredbody.rvmat", "dega_vehicles_suv\data\suv_interier.rvmat"};
			};	
			class Armoured
			{
				displayName="Armoured (Unarmed)";
				author="Deltagamer";
				textures[] = {"\dega_vehicles_suv\data\armoredsuv_body_co.paa", "\dega_vehicles_suv\data\armoredsuv_interier_co.paa"};
				factions[]= {};
				//materials[] ={"\dega_vehicles_suv\data\suv_body.rvmat", "dega_vehicles_suv\data\suv_interier.rvmat"};
			};	
		};
		textureList[]= {};		
	};
	class DEGA_GunArmoredSUV_PMC: DEGA_ArmoredSUV_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		forceInGarage=1;
		side = 2;
		faction = "DEGA_Vehicles_PMC";
		displayName = "Armoured Suburban (Minigun)";
		hiddenSelectionsTextures[] = {"\dega_vehicles_suv\data\armoredsuv_bodygun_co.paa", "\dega_vehicles_suv\data\armoredsuv_interiergun_co.paa"};	
		//hiddenSelectionsMaterials[] = {"\dega_vehicles_suv\data\suv_armouredbody.rvmat", "\dega_vehicles_suv\data\suv_interier.rvmat"};	
        editorPreview = "\dega_vehicles_suv\data\ui\DEGA_GunArmoredSUV_PMC.jpg";			
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"dega_vehicles_suv\data\suv_body.rvmat",
				"dega_vehicles_suv\data\suv_body_damage.rvmat",
				"dega_vehicles_suv\data\suv_body_destruct.rvmat",
				
				"dega_vehicles_suv\data\SUV_chrom.rvmat",
				"dega_vehicles_suv\data\SUV_chrom_damage.rvmat",
				"dega_vehicles_suv\data\SUV_chrom_destruct.rvmat",
				
				"A3\data_f\glass_veh.rvmat",			/// another material
				"A3\data_f\Glass_veh_damage.rvmat",		/// changes into different ones
				"A3\data_f\Glass_veh_damage.rvmat",
				
				//"dega_vehicles_suv\data\SUV_glass.rvmat",
				//"dega_vehicles_suv\data\SUV_glass_damage.rvmat",
				//"dega_vehicles_suv\data\SUV_glass_destruct.rvmat",				
				
				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"A3\data_F\default_destruct.rvmat"
			};
		};	
		animationList[] = {"rearseats_source", 1,  "gun_hide_source", 0};		
	};
	class DEGA_ArmoredSUV_PMC: DEGA_ArmoredSUV_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		forceInGarage=1;
		side = 2;
		faction = "DEGA_Vehicles_PMC";
		displayName = "Armoured Suburban";
		hiddenSelectionsTextures[] = {"\dega_vehicles_suv\data\armoredsuv_body_co.paa", "\dega_vehicles_suv\data\armoredsuv_interier_co.paa"};	
		//hiddenSelectionsMaterials[] = {"\dega_vehicles_suv\data\suv_body.rvmat", "\dega_vehicles_suv\data\suv_interier.rvmat"};	
        editorPreview = "\dega_vehicles_suv\data\ui\DEGA_ArmoredSUV_PMC.jpg";		
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"dega_vehicles_suv\data\suv_body.rvmat",
				"dega_vehicles_suv\data\suv_body_damage.rvmat",
				"dega_vehicles_suv\data\suv_body_destruct.rvmat",
				
				"dega_vehicles_suv\data\SUV_chrom.rvmat",
				"dega_vehicles_suv\data\SUV_chrom_damage.rvmat",
				"dega_vehicles_suv\data\SUV_chrom_destruct.rvmat",
				
				"A3\data_f\glass_veh.rvmat",			/// another material
				"A3\data_f\Glass_veh_damage.rvmat",		/// changes into different ones
				"A3\data_f\Glass_veh_damage.rvmat",
			
				//"dega_vehicles_suv\data\SUV_glass.rvmat",
				//"dega_vehicles_suv\data\SUV_glass_damage.rvmat",
				//"dega_vehicles_suv\data\SUV_glass_destruct.rvmat",				
				
				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"A3\data_F\default_destruct.rvmat"
			};
		};		
		class AnimationSources : AnimationSources
		{		
			class gun_hide_source : gun_hide_source {initPhase=1;};			
			class rearseats_source : rearseats_source {initPhase=0;};	
        };			
		animationList[] = {"rearseats_source", 0,  "gun_hide_source", 1};
	};
};
class CfgWeapons
{
	class LMG_Minigun_Transport;
    class DEGA_LMG_Minigun_Suv: LMG_Minigun_Transport
	{
		displayName = "Gatling 7.62 mm";
			modes[] = {"HighROF", "LowROF", "close", "short", "medium", "far"};		
			class LowROF: Mode_FullAuto
			{
				displayName = "2x M134 Minigun 7.62 mm";
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst", 3.98107, 1, 1300, {2, 36879}};
					soundBegin[] = {"begin1", 1};
				};
				soundContinuous = 1;
				flash = "gunfire";
				flashSize = 0.1;
				recoil = "Empty";
				ffMagnitude = 0.5;
				ffFrequency = 11;
				ffCount = 6;
				reloadTime = 0.0333333;
				dispersion = 0.0092;
				aiRateOfFire = 1;
				aiRateOfFireDistance = 10;
				minRange = 0;
				minRangeProbab = 0.01;
				midRange = 1;
				midRangeProbab = 0.01;
				maxRange = 2;
				maxRangeProbab = 0.01;
				showToPlayer = 0;
				multiplier = 1;
			};
			class HighROF: LowROF
			{
				displayName = "2x M134 Minigun 7.62 mm";
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst", 2.51189, 1, 1500, {2, 36879}};
					soundBegin[] = {"begin1", 1};
				};
				showToPlayer = 1;
				multiplier = 3;
			};
			class close: HighROF
			{
				soundBurst = 0;
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 12;
				burstRangeMax = 42;
				aiRateOfFire = 0.5;
				aiRateOfFireDispersion = 1;
				aiRateOfFireDistance = 50;
				minRange = 0;
				minRangeProbab = 0.7;
				midRange = 100;
				midRangeProbab = 0.75;
				maxRange = 300;
				maxRangeProbab = 0.2;
			};
			class short: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 8;
				burstRangeMax = 36;
				aiRateOfFire = 1;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 150;
				minRange = 100;
				minRangeProbab = 0.75;
				midRange = 300;
				midRangeProbab = 0.75;
				maxRange = 600;
				maxRangeProbab = 0.2;
			};
			class medium: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 8;
				burstRangeMax = 30;
				aiRateOfFire = 2;
				aiRateOfFireDispersion = 2;
				aiRateOfFireDistance = 300;
				minRange = 300;
				minRangeProbab = 0.75;
				midRange = 600;
				midRangeProbab = 0.65;
				maxRange = 800;
				maxRangeProbab = 0.1;
			};
			class far: close
			{
				aiBurstTerminable = 1;
				showToPlayer = 0;
				burst = 8;
				burstRangeMax = 12;
				aiRateOfFire = 4;
				aiRateOfFireDispersion = 4;
				aiRateOfFireDistance = 800;
				minRange = 800;
				minRangeProbab = 0.65;
				midRange = 1000;
				midRangeProbab = 0.3;
				maxRange = 1500;
				maxRangeProbab = 0.05;
			};
			weight = 40;	
	};
};
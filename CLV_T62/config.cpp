class CfgPatches
{
	class CLV_T62
	{
		requiredAddons[]=
		{
			"A3_Armor_F_Beta",
			"rhs_c_heavyweapons"
		};
		units[]=
		{
			"clv_base_T62",
			"clv_T62"
		};
		weapons[]=
		{
			"rhs_weap_2a46m",
			"rhs_weap_pkt"
		};
		author="Rafastein, .Tom, FlyingTarta";
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitFuel;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class clv_base_T62: Tank_F
	{
		vehicleClass="rbc_t62";
		editorSubcategory="rbc_t62";
		model="\CLV_T62\T62.p3d";
		picture="\A3\armor_f_gamma\MBT_02\Data\UI\MBT_02_Base_ca.paa";
		icon="\A3\armor_f_gamma\MBT_02\Data\UI\map_MBT_02_ca.paa";
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm1",
					0.79432821,
					1,
					200
				};
				frequency="0.95	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
				volume="engineOn*camPos*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm2",
					0.89125091,
					1,
					240
				};
				frequency="0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
				volume="engineOn*camPos*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm3",
					1.1220185,
					1,
					280
				};
				frequency="0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
				volume="engineOn*camPos*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm4",
					1.2589254,
					1,
					320
				};
				frequency="0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
				volume="engineOn*camPos*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm5",
					1.4125376,
					1,
					360
				};
				frequency="0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
				volume="engineOn*camPos*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm6",
					1.5848932,
					1,
					400
				};
				frequency="0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
				volume="engineOn*camPos*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm7",
					1.7782794,
					1,
					440
				};
				frequency="0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
				volume="engineOn*camPos*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm1",
					1.1220185,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm2",
					1.4125376,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm3",
					1.7782794,
					1,
					230
				};
				frequency="0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm4",
					1.9952624,
					1,
					290
				};
				frequency="0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm5",
					1.7782794,
					1,
					350
				};
				frequency="0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm6",
					2.2387211,
					1,
					400
				};
				frequency="0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm7",
					2.5118864,
					1,
					450
				};
				frequency="0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm1",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm2",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm3",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm4",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm5",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm6",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm7",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm1",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm2",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm3",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm4",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm5",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm6",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm7",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
			};
			class NoiseInt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
					0.89125091,
					1,
					50
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_01",
					0.39810717,
					1,
					140
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_02",
					0.44668359,
					1,
					160
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_03",
					0.50118721,
					1,
					180
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_04",
					0.56234133,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_05",
					0.56234133,
					1,
					220
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_01",
					0.31622776,
					1,
					120
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_02",
					0.35481337,
					1,
					140
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_03",
					0.39810717,
					1,
					160
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_04",
					0.44668359,
					1,
					180
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_05",
					0.50118721,
					1,
					200
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInH0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_01",
					0.25118864,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_02",
					0.2818383,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_03",
					0.31622776,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_04",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_05",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_01",
					0.31622776,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_02",
					0.31622776,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_03",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_04",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_05",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
		};
		simulation="tankX";
		dampersBumpCoef=0.30000001;
		terrainCoef=0;
		fuelCapacity="650 * 0.165";
		ACE_refuel_fuelCapacity=650;
		maxOmega=251.33;
		minOmega=83.779999;
		enginePower=440;
		peakTorque=1500;
		engineMOI=20;
		idleRpm=800;
		redRpm=2400;
		clutchStrength=15;
		dampingRateFullThrottle=0.25;
		dampingRateZeroThrottleClutchEngaged=8;
		dampingRateZeroThrottleClutchDisengaged=0.25;
		maxSpeed=50;
		thrustDelay=1;
		brakeIdleSpeed=2.8;
		normalSpeedForwardCoef=0.60000002;
		slowSpeedForwardCoef=0.1;
		tankTurnForce=50000;
		tankTurnForceAngMinSpd=1;
		tankTurnForceAngSpd=1;
		accelAidForceCoef=3;
		accelAidForceYOffset=0;
		accelAidForceSpd=8;
		torqueCurve[]=
		{
			{0.36363599,0.68000001},
			{0.45454499,0.80000001},
			{0.54545498,0.94999999},
			{0.60606098,0.98000002},
			{0.66666698,1},
			{0.72727299,0.94},
			{0.84848499,0.80000001},
			{1,0.63999999}
		};
		waterPPInVehicle=0;
		maxFordingDepth=-0.64999998;
		waterResistance=0;
		canFloat=0;
		waterLeakiness=15;
		antiRollbarForceCoef=50;
		antiRollbarForceLimit=20;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=65;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3000,
				"N",
				0,
				"D1",
				50,
				"D2",
				40.123001,
				"D3",
				28,
				"D4",
				23,
				"D5",
				16.6
			};
			TransmissionRatios[]=
			{
				"High",
				1
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.41666701,0.33333299,0,0.875,0.625,0.875,0.625,0.875,0.625,0.875,0.625,0.875,0.625,0.875,0.625,0.875,0.625};
		switchTime=0;
		latency=1.5;
		engineLosses=25;
		transmissionLosses=15;
		driveOnComponent[]={};
		wheelCircumference=2.2;
		numberPhysicalWheels=18;
		turnCoef=5;
		class Wheels
		{
			class L2
			{
				boneName="wheel_podkoloL1";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				damping=75;
				steering=0;
				side="left";
				mass=165;
				width=0.51999998;
				MOI=2;
				latStiffX=2.5;
				latStiffY=50;
				longitudinalStiffnessPerUnitGravity=18000;
				maxBrakeTorque=2e-007;
				sprungMass=3125;
				springStrength=264063;
				springDamperRate=17236;
				dampingRate=260;
				dampingRateInAir=260;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				maxCompression=0.15000001;
				maxDroop=0.15000001;
				frictionVsSlipGraph[]=
				{
					{0,0.5},
					{0.34999999,1.2},
					{1,0.5}
				};
			};
			class L3: L2
			{
				boneName="wheel_podkolol2";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName="wheel_podkolol3";
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName="wheel_podkolol4";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName="wheel_podkolol5";
				center="wheel_1_6_axis";
				boundary="wheel_1_6_bound";
			};
			class L1: L2
			{
				boneName="";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				maxCompression=0;
				maxDroop=0;
			};
			class R2: L2
			{
				boneName="wheel_podkolop1";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				side="right";
			};
			class R3: R2
			{
				boneName="wheel_podkolop2";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName="wheel_podkolop3";
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName="wheel_podkolop4";
				center="wheel_2_5_axis";
				boundary="wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName="wheel_podkolop5";
				center="wheel_2_6_axis";
				boundary="wheel_2_6_bound";
			};
			class R1: L2
			{
				boneName="";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				maxCompression=0;
				maxDroop=0;
			};
		};
		cost=1500000;
		damageResistance=0.02;
		crewVulnerable=0;
		accuracy=0.5;
		side=2;
		scopeCurator=0;
		faction="clv_arg";
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_crew_F"
		};
		animationList[]=
		{
			"Tanks_Hide",
			1,
			"Anim_Hide",
			1
		};
		armor=500;
		armorStructural=6;
		driverAction="crew_tank01_out";
		driverInAction="ManActTestDriver";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"CLV_T62\data\Camo1\Chasis.paa",
			"CLV_T62\data\Camo2\Torreta.paa"
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=1;
				material=-1;
				passThrough=0.1;
				minimalHit=0.14;
				explosionShielding=0.30000001;
				radius=0.2;
				name="hit_hull_point";
				visual="hull";
			};
			class HitEngine: HitEngine
			{
				armor=0.69999999;
				material=-1;
				passThrough=0.2;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.30000001;
				name="hit_engine_point";
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class CLV_Engine_Smoke
					{
						simulation="particles";
						type="SmallWreckSmoke";
						position="engine_smoke1";
						intensity=0.5;
						interval=1;
						lifeTime=60;
					};
					class CLV_Engine_Fire: CLV_Engine_Smoke
					{
						type="SmallFireFPlace";
					};
					class CLV_Engine_Sparks: CLV_Engine_Smoke
					{
						type="FireSparks";
					};
					class CLV_Engine_Sounds: CLV_Engine_Smoke
					{
						simulation="sound";
						type="Fire";
					};
					class CLV_Engine_Smoke_small1: CLV_Engine_Smoke
					{
						type="WeaponWreckSmoke";
						position="engine_smoke2";
					};
					class CLV_Engine_Smoke_small2: CLV_Engine_Smoke_small1
					{
						position="engine_smoke3";
					};
				};
			};
			class HitFuel: HitFuel
			{
				armor=0.5;
				material=-1;
				armorComponent="hit_fuel_point";
				name="hit_fuel_point";
				visual="-";
				passThrough=0.1;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=0.30000001;
			};
			class HitLTrack: HitLTrack
			{
				material=-1;
				armorComponent="hit_trackL";
				name="hit_trackL_point";
				visual="pas_L";
				radius=0.2;
				armor=-400;
				minimalHit=0.090000004;
				explosionShielding=0.80000001;
				passThrough=0;
			};
			class HitRTrack: HitRTrack
			{
				material=-1;
				armorComponent="hit_trackR";
				name="hit_trackR_point";
				visual="pas_P";
				radius=0.2;
				armor=-400;
				minimalHit=0.090000004;
				explosionShielding=0.80000001;
				passThrough=0;
			};
		};
		class TextureSources
		{
			class Green2
			{
				displayName="Green2";
				author="";
				textures[]=
				{
					"CLV_T62\data\Camo1\Chasis.paa",
					"CLV_T62\data\Camo2\Torreta.paa"
				};
				factions[]=
				{
					"GREEN"
				};
			};
			class Green
			{
				displayName="Green";
				author="";
				textures[]=
				{
					"CLV_T62\data\Camo1\Variantes\Green2.paa",
					"CLV_T62\data\Camo2\Variantes\Green2.paa"
				};
				factions[]=
				{
					"GREEN"
				};
			};
			class Desert
			{
				displayName="Desert";
				author="";
				textures[]=
				{
					"CLV_T62\data\Camo1\Variantes\Desert.paa",
					"CLV_T62\data\Camo2\Variantes\Desert.paa"
				};
				factions[]=
				{
					"GREEN"
				};
			};
			class Camuflado
			{
				displayName="Camuflado";
				author="";
				textures[]=
				{
					"CLV_T62\data\Camo1\Variantes\Camuflado.paa",
					"CLV_T62\data\Camo2\Variantes\Camuflado.paa"
				};
				factions[]=
				{
					"GREEN"
				};
			};
			class Camuflado2
			{
				displayName="Camuflado2";
				author="";
				textures[]=
				{
					"CLV_T62\data\Camo1\Variantes\Camuflado2.paa",
					"CLV_T62\data\Camo2\Variantes\Camuflado2.paa"
				};
				factions[]=
				{
					"GREEN"
				};
			};
			class EGYP
			{
				displayName="Egypt";
				author="";
				textures[]=
				{
					"CLV_T62\data\Camo1\Variantes\Egy.paa",
					"CLV_T62\data\Camo2\Variantes\Egy.paa"
				};
				factions[]=
				{
					"GREEN"
				};
			};
			class Camuflado3
			{
				displayName="Camuflado3";
				author="";
				textures[]=
				{
					"CLV_T62\data\Camo1\Variantes\Camuflado3.paa",
					"CLV_T62\data\Camo2\Variantes\Camuflado3.paa"
				};
				factions[]=
				{
					"GREEN"
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerAction="commander_apc_tracked_01_aa_f_out";
						gunnerInAction="mbt2_slot2b_in";
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						startEngine=0;
						viewGunnerInExternal=1;
						outGunnerMayFire=1;
						inGunnerMayFire=1;
						gunnerOpticsModel="CLV_T62\Reticulas\t6c.p3d";
						gunnerForceOptics=1;
						minElev=-5;
						maxElev=5;
						initElev=5;
						minTurn=-90;
						maxTurn=90;
						initTurn=0;
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=60;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal"
							};
							thermalMode[]={0,1};
						};
						class HitPoints
						{
							class HitTurret
							{
								armor=2;
								material=-1;
								name="vezVelitele";
								visual="vezVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
							};
							class HitGun
							{
								armor=0.30000001;
								material=-1;
								name="zbranVelitele";
								visual="zbranVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
							};
						};
					};
				};
				memoryPointGun="usti hlavne2";
				selectionFireAnim="zasleh2";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				stabilizedInAxes=0;
				weapons[]=
				{
					"rhs_weap_2a46m",
					"rhs_weap_pkt"
				};
				magazines[]=
				{
					"rhs_mag_762x54mm_2000",
					"rhs_mag_3bm32",
					"rhs_mag_3of26",
					"rhs_mag_3bk18",
					"rhs_mag_9m124"

				};
				minElev=-5;
				maxElev=13;
				initElev=10;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					0.0099999998,
					1,
					50
				};
				turretInfoType="RscWeaponRangeZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				outGunnerMayFire=0;
				inGunnerMayFire=1;
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=1;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="\CLV_T62\Reticulas\MiraTAM.p3d";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						gunnerOpticsModel="\CLV_T62\Reticulas\MiraTAM.p3d";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\CLV_T62\Reticulas\MiraTAM.p3d";
						initFov=0.028000001;
						minFov=0.028000001;
						maxFov=0.028000001;
					};
				};
				gunnerAction="commander_apc_tracked_01_aa_f_out";
				gunnerInAction="mbt2_slot2b_in";
				forceHideGunner=0;
				viewGunnerInExternal=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=1.2;
						material=-1;
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.25;
						isTurret=1;
						armorComponent="vez";
						name="hit_main_turret";
						visual="vez";
						class DestructionEffects
						{
							ammoExplosionEffect="";
							class CLV_Turret_Smoke
							{
								simulation="particles";
								type="SmallWreckSmoke";
								position="Turret_smoke1";
								intensity=0.5;
								interval=1;
								lifeTime=60;
							};
							class CLV_Turret_Fire: CLV_Turret_Smoke
							{
								type="SmallFireFPlace";
							};
							class CLV_Turret_Sparks: CLV_Turret_Smoke
							{
								type="FireSparks";
							};
							class CLV_Turret_Sounds: CLV_Turret_Smoke
							{
								simulation="sound";
								type="Fire";
							};
							class CLV_Turret_Smoke_small1: CLV_Turret_Smoke
							{
								type="WeaponWreckSmoke";
								position="Turret_smoke2";
							};
							class CLV_Turret_Smoke_small2: CLV_Turret_Smoke_small1
							{
								position="Turret_smoke3";
							};
						};
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.2;
						isGun=1;
						name="hit_main_gun";
						visual="RecoilHlaven";
					};
				};
			};
		};
		class UserActions
		{
			class tanks_poner
			{
				displayNameDefault="Tank p";
				displayName="Tank p";
				position="doplnovani";
				radius=0;
				onlyForPlayer=0;
				condition="alive this && this animationPhase 'Tanks_Hide' > 0.9;";
				statement="this animate ['Tanks_Hide', 0, false];";
			};
			class Tanks_sacar
			{
				displayNameDefault="Tank s";
				displayName="Tank s";
				position="doplnovani";
				radius=0;
				onlyForPlayer=0;
				condition="alive this && this animationPhase 'Tanks_Hide' < 0.1;";
				statement="this animate ['Tanks_Hide', 1, false];";
			};
			class Anim_poner
			{
				displayNameDefault="poner Anim";
				displayName="poner Anim";
				position="doplnovani";
				radius=0;
				onlyForPlayer=0;
				condition="alive this && this animationPhase 'Anim_Hide' > 0.9;";
				statement="this animate ['Anim_Hide', 0, false];";
			};
			class Anim_sacar
			{
				displayNameDefault="sacar Anim";
				displayName="sacar Anim";
				position="doplnovani";
				radius=0;
				onlyForPlayer=0;
				condition="alive this && this animationPhase 'Anim_Hide' < 0.1;";
				statement="this animate ['Anim_Hide', 1, false];";
			};
		};
		class AnimationSources
		{
			class Tanks_Hide
			{
				displayName="Tanks_Hide";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=1e-006;
				initPhase=1;
				lockCargoAnimationPhase=0;
				lockCargo[]={0,1,5};
				forceAnimatePhase=0;
				forceAnimate[]=
				{
					"Tanks_Hide",
					0
				};
				mass=20;
			};
			class Anim_Hide
			{
				displayName="Anim_Hide";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=1e-006;
				initPhase=1;
				lockCargoAnimationPhase=0;
				lockCargo[]={0,1,5};
				forceAnimatePhase=0;
				forceAnimate[]=
				{
					"Anim_Hide",
					0
				};
				mass=20;
			};
			class obsTurret_user
			{
				source="obsTurret_user";
				animPeriod=1;
				initPhase=0;
			};
			class obsGun_user
			{
				source="obsGun_user";
				animPeriod=1;
				initPhase=0;
			};
			class muzzle_rot_coax
			{
				source="ammorandom";
				weapon="Coax";
			};
			class recoil_source
			{
				source="reload";
				weapon="rhs_weap_2a46m";
			};
			class muzzle_hide_cannon: recoil_source
			{
			};
			class muzzle_rot_cannon: recoil_source
			{
				source="ammorandom";
				weapon="rhs_weap_2a46m";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_destruct.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body_destruct.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks_destruct.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret_destruct.rvmat",
				"A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher.rvmat",
				"A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher_destruct.rvmat"
			};
		};
		smokeLauncherGrenadeCount=8;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=120;
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustEffectTankBack";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1300,950};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class Right2: Right
			{
				position="light_R_flare";
				useFlare=1;
			};
			class Left2: Left
			{
				position="light_L_flare";
				useFlare=1;
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right",
				"Left2",
				"Right2"
			}
		};
	};
	class clv_T62: clv_base_T62
	{
		displayName="T62";
		scope=2;
		scopeCurator=2;
		crew="B_crew_F";
		side=2;
		faction="GREEN";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CannonCore;
class cannon_120mm;
class cfgMagazines
{
};
class cfgWeapons
{
	class rhs_weap_2a46m;
	class rhs_weap_pkt;
	class 115_t62: rhs_weap_2a46m
	{
		displayName="2A20";
	};
	class rhs_weap_pkt_ext;
	class Coax: rhs_weap_pkt_ext
	{
		displayName="PKT";
		class GunParticles
		{
			class effect1
			{
				positionName="usti hlavne2";
				directionName="konec hlavne2";
				effectName="MachineGunCloud";
			};
		};
		cursor="EmptyCursor";
		cursoraim="EmptyCursor";
	};
};
class cfgMods
{
	author="El Polaco";
	timepacked="1681697607";
};

class CfgAnimationSourceSounds {
	class wheels {

		class crank_squeak_1 {
			loop = 1;
			terminate = 1;
			sound0[] = {QPATHTOF(spe_m3\sounds\wheels.ogg), 1, 1, 20};
			sound1[] = {QPATHTOF(spe_m3\sounds\wheels.ogg), 1, 1, 20};
			sound[] = {"sound0", 1};
			trigger = "direction";
		};
	};

	class metalmisc {

		class metalmisc_1 {
			loop = 1;
			terminate = 1;
			sound0[] = {QPATHTOF(spe_m3\sounds\metalsqueal.ogg), 5, 1, 50};
			sound1[] = {QPATHTOF(spe_m3\sounds\metalsqueal.ogg), 5, 1, 50};
			sound[] = {"sound0", 1};
			trigger = "direction";
		};
	};

	class close {

		class close_1 {
			loop = 0;
			terminate = 0;
			sound0[] = {QPATHTOF(spe_m3\sounds\close.ogg), 3, 1, 20};
			sound1[] = {QPATHTOF(spe_m3\sounds\close.ogg), 3, 1, 20};
			sound[] = {"sound0", 1};
			trigger = "direction * (phase factor [0.01,0.02])";
		};
		class close_2 {
			loop = 0;
			terminate = 0;
			sound0[] = {QPATHTOF(spe_m3\sounds\close.ogg), 3, 1, 20};
			sound1[] = {QPATHTOF(spe_m3\sounds\close.ogg), 3, 1, 20};
			sound[] = {"sound0", 1};
			trigger = "(1 - direction) * (phase factor [0.1,0.09])";
		};

	};
	class reload {

		class reload_1 {
			loop = 0;
			terminate = 1;
			sound0[] = {QPATHTOF(spe_m3\sounds\reload.ogg), 5, 1, 20};
			sound1[] = {QPATHTOF(spe_m3\sounds\reload.ogg), 5, 1, 20};
			sound[] = {"sound0", 1};
			trigger = "direction";
		};
	};

	class gears {

		class gears_1 {
			loop = 0;
			terminate = 1;
			sound0[] = {QPATHTOF(spe_m3\sounds\gears.ogg), 5, 1, 20};
			sound1[] = {QPATHTOF(spe_m3\sounds\gears.ogg), 5, 1, 20};
			sound[] = {"sound0", 1};
			trigger = "direction";
		};
	};
};
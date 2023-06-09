#ifndef ENUM_H
#define ENUM_H

#include "base.h"

enum BoneFNames {
	Root = 0,
	pelvis = 1,
	spine_01 = 2,
	spine_02 = 3,
	spine_03 = 4,
	neck_01 = 5,
	Head = 6,
	cam_bone = 7,
	clavicle_l = 8,
	upperarm_l = 9,
	lowerarm_l = 10,
	hand_l = 11,
	thumb_01_l = 12,
	thumb_02_l = 13,
	thumb_03_l = 14,
	index_01_l = 15,
	index_02_l = 16,
	index_03_l = 17,
	middle_01_l = 18,
	middle_02_l = 19,
	middle_03_l = 20,
	ring_01_l = 21,
	ring_02_l = 22,
	ring_03_l = 23,
	pinky_01_l = 24,
	pinky_02_l = 25,
	pinky_03_l = 26,
	clavicle_r = 27,
	upperarm_r = 28,
	lowerarm_r = 29,
	hand_r = 30,
	thumb_01_r = 31,
	thumb_02_r = 32,
	thumb_03_r = 33,
	index_01_r = 34,
	index_02_r = 35,
	index_03_r = 36,
	middle_01_r = 37,
	middle_02_r = 38,
	middle_03_r = 39,
	ring_01_r = 40,
	ring_02_r = 41,
	ring_03_r = 42,
	pinky_01_r = 43,
	pinky_02_r = 44,
	pinky_03_r = 45,
	thigh_l = 46,
	calf_l = 47,
	foot_l = 48,
	ball_l = 49,
	thigh_r = 50,
	calf_r = 51,
	foot_r = 52,
	ball_r = 53,
	ik_gun = 54,
	ik_target_r = 55,
	ik_target_l = 56,
	Highest = 57,
	Max = 58
};


enum class EWeaponShootingType : uint8_t
{
	BOLT = 0,
	SEMI_AUTO = 1,
	AUTO = 2,
	EWeaponShootingType_MAX = 3

};


#endif // !ENUM_H

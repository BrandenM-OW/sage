#ifndef TOOLBOX_H
#define TOOLBOX_H


// example 458*sin(90) would be written as (458*LUT_Sin[90])>>8
const int LUT_Sin[] =
	{
		0,
		4,
		9,
		13,
		18,
		22,
		27,
		31,
		36,
		40,
		44,
		49,
		53,
		58,
		62,
		66,
		71,
		75,
		79,
		83,
		88,
		92,
		96,
		100,
		104,
		108,
		112,
		116,
		120,
		124,
		128,
		132,
		136,
		139,
		143,
		147,
		150,
		154,
		158,
		161,
		165,
		168,
		171,
		175,
		178,
		181,
		184,
		187,
		190,
		193,
		196,
		199,
		202,
		204,
		207,
		210,
		212,
		215,
		217,
		219,
		222,
		224,
		226,
		228,
		230,
		232,
		234,
		236,
		237,
		239,
		241,
		242,
		243,
		245,
		246,
		247,
		248,
		249,
		250,
		251,
		252,
		253,
		254,
		254,
		255,
		255,
		255,
		256,
		256,
		256,
		256,
		256,
		256,
		256,
		255,
		255,
		255,
		254,
		254,
		253,
		252,
		251,
		250,
		249,
		248,
		247,
		246,
		245,
		243,
		242,
		241,
		239,
		237,
		236,
		234,
		232,
		230,
		228,
		226,
		224,
		222,
		219,
		217,
		215,
		212,
		210,
		207,
		204,
		202,
		199,
		196,
		193,
		190,
		187,
		184,
		181,
		178,
		175,
		171,
		168,
		165,
		161,
		158,
		154,
		150,
		147,
		143,
		139,
		136,
		132,
		128,
		124,
		120,
		116,
		112,
		108,
		104,
		100,
		96,
		92,
		88,
		83,
		79,
		75,
		71,
		66,
		62,
		58,
		53,
		49,
		44,
		40,
		36,
		31,
		27,
		22,
		18,
		13,
		9,
		4,
		0,
		-4,
		-9,
		-13,
		-18,
		-22,
		-27,
		-31,
		-36,
		-40,
		-44,
		-49,
		-53,
		-58,
		-62,
		-66,
		-71,
		-75,
		-79,
		-83,
		-88,
		-92,
		-96,
		-100,
		-104,
		-108,
		-112,
		-116,
		-120,
		-124,
		-128,
		-132,
		-136,
		-139,
		-143,
		-147,
		-150,
		-154,
		-158,
		-161,
		-165,
		-168,
		-171,
		-175,
		-178,
		-181,
		-184,
		-187,
		-190,
		-193,
		-196,
		-199,
		-202,
		-204,
		-207,
		-210,
		-212,
		-215,
		-217,
		-219,
		-222,
		-224,
		-226,
		-228,
		-230,
		-232,
		-234,
		-236,
		-237,
		-239,
		-241,
		-242,
		-243,
		-245,
		-246,
		-247,
		-248,
		-249,
		-250,
		-251,
		-252,
		-253,
		-254,
		-254,
		-255,
		-255,
		-255,
		-256,
		-256,
		-256,
		-256,
		-256,
		-256,
		-256,
		-255,
		-255,
		-255,
		-254,
		-254,
		-253,
		-252,
		-251,
		-250,
		-249,
		-248,
		-247,
		-246,
		-245,
		-243,
		-242,
		-241,
		-239,
		-237,
		-236,
		-234,
		-232,
		-230,
		-228,
		-226,
		-224,
		-222,
		-219,
		-217,
		-215,
		-212,
		-210,
		-207,
		-204,
		-202,
		-199,
		-196,
		-193,
		-190,
		-187,
		-184,
		-181,
		-178,
		-175,
		-171,
		-168,
		-165,
		-161,
		-158,
		-154,
		-150,
		-147,
		-143,
		-139,
		-136,
		-132,
		-128,
		-124,
		-120,
		-116,
		-112,
		-108,
		-104,
		-100,
		-96,
		-92,
		-88,
		-83,
		-79,
		-75,
		-71,
		-66,
		-62,
		-58,
		-53,
		-49,
		-44,
		-40,
		-36,
		-31,
		-27,
		-22,
		-18,
		-13,
		-9,
		-4,
};

const int LUT_Cos[] =
	{
		256,
		256,
		256,
		256,
		255,
		255,
		255,
		254,
		254,
		253,
		252,
		251,
		250,
		249,
		248,
		247,
		246,
		245,
		243,
		242,
		241,
		239,
		237,
		236,
		234,
		232,
		230,
		228,
		226,
		224,
		222,
		219,
		217,
		215,
		212,
		210,
		207,
		204,
		202,
		199,
		196,
		193,
		190,
		187,
		184,
		181,
		178,
		175,
		171,
		168,
		165,
		161,
		158,
		154,
		150,
		147,
		143,
		139,
		136,
		132,
		128,
		124,
		120,
		116,
		112,
		108,
		104,
		100,
		96,
		92,
		88,
		83,
		79,
		75,
		71,
		66,
		62,
		58,
		53,
		49,
		44,
		40,
		36,
		31,
		27,
		22,
		18,
		13,
		9,
		4,
		0,
		-4,
		-9,
		-13,
		-18,
		-22,
		-27,
		-31,
		-36,
		-40,
		-44,
		-49,
		-53,
		-58,
		-62,
		-66,
		-71,
		-75,
		-79,
		-83,
		-88,
		-92,
		-96,
		-100,
		-104,
		-108,
		-112,
		-116,
		-120,
		-124,
		-128,
		-132,
		-136,
		-139,
		-143,
		-147,
		-150,
		-154,
		-158,
		-161,
		-165,
		-168,
		-171,
		-175,
		-178,
		-181,
		-184,
		-187,
		-190,
		-193,
		-196,
		-199,
		-202,
		-204,
		-207,
		-210,
		-212,
		-215,
		-217,
		-219,
		-222,
		-224,
		-226,
		-228,
		-230,
		-232,
		-234,
		-236,
		-237,
		-239,
		-241,
		-242,
		-243,
		-245,
		-246,
		-247,
		-248,
		-249,
		-250,
		-251,
		-252,
		-253,
		-254,
		-254,
		-255,
		-255,
		-255,
		-256,
		-256,
		-256,
		-256,
		-256,
		-256,
		-256,
		-255,
		-255,
		-255,
		-254,
		-254,
		-253,
		-252,
		-251,
		-250,
		-249,
		-248,
		-247,
		-246,
		-245,
		-243,
		-242,
		-241,
		-239,
		-237,
		-236,
		-234,
		-232,
		-230,
		-228,
		-226,
		-224,
		-222,
		-219,
		-217,
		-215,
		-212,
		-210,
		-207,
		-204,
		-202,
		-199,
		-196,
		-193,
		-190,
		-187,
		-184,
		-181,
		-178,
		-175,
		-171,
		-168,
		-165,
		-161,
		-158,
		-154,
		-150,
		-147,
		-143,
		-139,
		-136,
		-132,
		-128,
		-124,
		-120,
		-116,
		-112,
		-108,
		-104,
		-100,
		-96,
		-92,
		-88,
		-83,
		-79,
		-75,
		-71,
		-66,
		-62,
		-58,
		-53,
		-49,
		-44,
		-40,
		-36,
		-31,
		-27,
		-22,
		-18,
		-13,
		-9,
		-4,
		0,
		4,
		9,
		13,
		18,
		22,
		27,
		31,
		36,
		40,
		44,
		49,
		53,
		58,
		62,
		66,
		71,
		75,
		79,
		83,
		88,
		92,
		96,
		100,
		104,
		108,
		112,
		116,
		120,
		124,
		128,
		132,
		136,
		139,
		143,
		147,
		150,
		154,
		158,
		161,
		165,
		168,
		171,
		175,
		178,
		181,
		184,
		187,
		190,
		193,
		196,
		199,
		202,
		204,
		207,
		210,
		212,
		215,
		217,
		219,
		222,
		224,
		226,
		228,
		230,
		232,
		234,
		236,
		237,
		239,
		241,
		242,
		243,
		245,
		246,
		247,
		248,
		249,
		250,
		251,
		252,
		253,
		254,
		254,
		255,
		255,
		255,
		256,
		256,
		256,
};

#endif
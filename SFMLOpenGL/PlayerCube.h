#pragma once
#include <gl/glew.h>
#include "Vector3.h"
const int PLAYER_CUBE_VERTICES = 24;	// Total Number of Vertices
const int PLAYER_CUBE_INDICES = 12;	// Total Number of Indexes
const int PLAYER_CUBE_UVS = 48;	// Total Number of UVs
const int PLAYER_CUBE_COLORS = 24;	// Total Number of Colors

static const GLfloat PlayerCubeVertices[] =
{
	// Front Face
	-0.50f, -0.50f,  0.50f,	// [0]	// ( 0)
	0.50f, -0.50f,  0.50f,	// [1]	// ( 1)
	0.50f,  0.50f,  0.50f,	// [2]	// ( 2)
	-0.50f,  0.50f,  0.50f,	// [3]	// ( 3)

	// Top Face
	-0.50f,  0.50f,  0.50f,	// [3]	// ( 4)
	0.50f,  0.50f,  0.50f,	// [2]	// ( 5)
	0.50f,  0.50f, -0.50f,	// [6]	// ( 6)
	-0.50f,  0.50f, -0.50f,	// [7]	// ( 7)

	// Back Face
	0.50f, -0.50f, -0.50f,	// [5]	// ( 8)
	-0.50f, -0.50f, -0.50f, // [4]	// ( 9)
	-0.50f,  0.50f, -0.50f,	// [7]	// (10)
	0.50f,  0.50f, -0.50f,	// [6]	// (11)

	// Bottom Face
	-0.50f, -0.50f, -0.50f, // [4]	// (12)
	0.50f, -0.50f, -0.50f, // [5]	// (13)
	0.50f, -0.50f,  0.50f, // [1]	// (14)
	-0.50f, -0.50f,  0.50f, // [0]	// (15)

	// Left Face
	-0.50f, -0.50f, -0.50f, // [4]	// (16)
	-0.50f, -0.50f,  0.50f, // [0]	// (17)
	-0.50f,  0.50f,  0.50f, // [3]	// (18)
	-0.50f,  0.50f, -0.50f, // [7]	// (19)

	// Right Face
	0.50f, -0.50f,  0.50f, // [1]	// (20)
	0.50f, -0.50f, -0.50f, // [5]	// (21)
	0.50f,  0.50f, -0.50f, // [6]	// (22)
	0.50f,  0.50f,  0.50f, // [2]	// (23)
};

static const GLfloat PlayerCubeColors[] = {

	// Front Face
	1.0f, 0.0f, 0.0f, 1.0f, // [0]	// ( 0)
	1.0f, 0.0f, 0.0f, 1.0f, // [1]	// ( 1)
	1.0f, 0.0f, 0.0f, 1.0f, // [2]	// ( 2)
	1.0f, 0.0f, 0.0f, 1.0f, // [3]	// ( 3)

	// Top Face
	1.0f, 0.0f, 0.0f, 1.0f, // [3]	// ( 4)
	1.0f, 0.0f, 0.0f, 1.0f, // [2]	// ( 5)
	1.0f, 0.0f, 0.0f, 1.0f, // [6]	// ( 6)
	1.0f, 0.0f, 0.0f, 1.0f, // [7]	// ( 7)

	// Back Face
	1.0f, 0.0f, 0.0f, 1.0f, // [5]	// ( 8)
	1.0f, 0.0f, 0.0f, 1.0f, // [4]	// ( 9)
	1.0f, 0.0f, 0.0f, 1.0f, // [7]	// (10)
	1.0f, 0.0f, 0.0f, 1.0f, // [6]	// (11)

	// Bottom Face
	1.0f, 0.0f, 0.0f, 1.0f, // [4]	// (12)
	1.0f, 0.0f, 0.0f, 1.0f, // [5]	// (13)
	1.0f, 0.0f, 0.0f, 1.0f, // [1]	// (14)
	1.0f, 0.0f, 0.0f, 1.0f, // [0]	// (15)

	// Left Face
	1.0f, 0.0f, 0.0f, 1.0f, // [4]	// (16)
	1.0f, 0.0f, 0.0f, 1.0f, // [0]	// (17)
	1.0f, 0.0f, 0.0f, 1.0f, // [3]	// (18)
	1.0f, 0.0f, 0.0f, 1.0f, // [7]	// (19)

	// Right Face
	1.0f, 0.0f, 0.0f, 1.0f, // [1]	// (20)
	1.0f, 0.0f, 0.0f, 1.0f, // [5]	// (21)
	1.0f, 0.0f, 0.0f, 1.0f, // [6]	// (22)
	1.0f, 0.0f, 0.0f, 1.0f, // [2]	// (23)
};

static const GLuint PlayerCubeIndices[] =
{
	// Front Face
	0, 1, 2,
	2, 3, 0,

	// Top Face
	4, 5, 6,
	6, 7, 4,

	// Back Face
	8, 9, 10,
	10, 11, 8,

	// Bottom Face
	12, 13, 14,
	14, 15, 12,

	// Left Face
	16, 17, 18,
	18, 19, 16,

	// Right Face
	20, 21, 22,
	22, 23, 20
};
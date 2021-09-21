#pragma once

#include "math.h"
class vec3
{
public:
	float x;
	float y;
	float z;
	float mod;

	vec3();
	vec3(float x, float y, float z, float mod);

	vec3& add(const vec3& vec);
	vec3& subtract(const vec3& vec);
	vec3& multiply(const vec3& vec);
	vec3& divide(const vec3& vec);
	vec3& normalize(const vec3& vec);
	vec3& zero(const vec3& vec);

	friend vec3& operator+(vec3& v1, vec3& v2);
	friend vec3& operator-(vec3& v1, vec3& v2);
	friend vec3& operator*(vec3& v1, vec3& v2);
	friend vec3& operator/(vec3& v1, vec3& v2);

	vec3& operator+=(vec3& vec);
	vec3& operator-=(vec3& vec);
	vec3& operator*=(vec3& vec);
	vec3& operator/=(vec3& vec);

};


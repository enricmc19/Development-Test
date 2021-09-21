#include "vec3.h"

vec3::vec3()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
	mod = sqrt(x*x) + sqrt(y*y) + sqrt(z*z);
}

vec3::vec3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

vec3& vec3::add(const vec3& vec)
{
	this->x += vec.x;
	this->y += vec.y;
	this->z += vec.z;

	return *this;
}

vec3& vec3::subtract(const vec3& vec)
{
	this->x -= vec.x;
	this->y -= vec.y;
	this->z -= vec.z;

	return *this;
}

vec3& vec3::multiply(const vec3& vec)
{
	this->x *= vec.x;
	this->y *= vec.y;
	this->z *= vec.z;

	return *this;
}

vec3& vec3::divide(const vec3& vec)
{
	this->x /= vec.x;
	this->y /= vec.y;
	this->z /= vec.z;

	return *this;
}

vec3& vec3::normalize(const vec3& vec)
{
	this->x = x/mod;
	this->y = y/mod;
	this->z = z/mod;

	return *this;
}

vec3& vec3::zero(const vec3& vec)
{
	this->x = 0;
	this->y = 0;
	this->z = 0;

	return *this;
}

vec3& vec3::operator+=(vec3& vec)
{
	return this->add(vec);
}

vec3& vec3::operator-=(vec3& vec)
{
	return this->subtract(vec);
}

vec3& vec3::operator*=(vec3& vec)
{
	return this->multiply(vec);
}

vec3& vec3::operator/=(vec3& vec)
{
	return this->divide(vec);
}

vec3& operator+(vec3& v1, vec3& v2)
{
	return v1.add(v2);
}

vec3& operator-(vec3& v1, vec3& v2)
{
	return v1.subtract(v2);
}

vec3& operator*(vec3& v1, vec3& v2)
{
	return v1.multiply(v2);
}

vec3& operator/(vec3& v1, vec3& v2)
{
	return v1.divide(v2);
}

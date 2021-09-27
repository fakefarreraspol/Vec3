#ifndef __VECTOR_3__
#define __VECTOR_3__

#include <math.h>

template<class TYPE>

class Vec3
{
protected:
	
public: 
	TYPE x, y, z;

	Vec3()
	{
		x = y = z = 0;
	}

	Vec3(TYPE x, TYPE y, TYPE z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	Vec3(const Vec3<TYPE>& vec)
	{
		this->x = vec.x;
		this->y = vec.y;
		this->z = vec.z;
		
	}
	//operator
	Vec3 operator +(const Vec3& vec) const
	{
		Vec3 r;

		r.x = x + vec.x;
		r.y = y + vec.y;
		r.z = z + vec.z;

		return r;
	}
	Vec3 operator -(const Vec3& vec) const
	{
		Vec3 r;

		r.x = x - vec.x;
		r.y = y - vec.y;
		r.z = z - vec.z;

		return r;
	}

	Vec3& operator -=(const Vec3& vec)
	{
		this->x -= vec.x;
		this->y -= vec.y;
		this->z -= vec.z;

		return(*this);

	}

	Vec3& operator +=(const Vec3& vec)
	{
		this->x += vec.x;
		this->y += vec.y;
		this->z += vec.z;

		return(*this);

	}
	Vec3& operator ==(const Vec3& vec) 
	{
		this->x = vec.x;
		this->y = vec.y;
		this->z = vec.z;
		return (*this);
	}
	bool IsZero() const
	{
		return (x == 0 && y == 0 && z == 0);
	}

	Vec3& SetToZero()
	{
		x = y = z = 0;
		return(*this);
	}

	Vec3& Normalize()
	{
		x = y = z = 1;
		return(*this);
	}

	TYPE DistanceTo(const Vec3& vec) const
	{
		TYPE fx = x - vec.x;
		TYPE fy = y - vec.y;
		TYPE fz = z - vec.z;
		return sqrtf((fx * fx) + (fy * fy) + (fz * fz));
	}
};






#endif __VECTOR_3__
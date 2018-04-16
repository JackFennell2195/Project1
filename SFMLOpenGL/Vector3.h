#ifndef VECTOR3_H
#define VECTOR3_H

// Placeholder for Vector3
// note custom namespace gpp (Gameplay programming)

#include <cmath>
#include <string>
namespace gpp
{
	class Vector3
	{
	public:
		Vector3();
		Vector3(double x1, double y1, double z1);
		~Vector3();
		// return values
		double ReturnX();
		double ReturnY();
		double ReturnZ();

		// set values
		void SetX(double x);
		void SetY(double y);
		void SetZ(double z);

		// math functions
		double Length();
		double LengthSquared();
		void Normalise();

		// operators
		Vector3 operator +(Vector3 V1) const;

		//Vector3D operator + (Vector3D t_vector3D) const;

		Vector3 operator -(Vector3 V1) const;
		Vector3 operator -() const;

		double operator *(Vector3 V1) const;
		Vector3 operator *(double k) const;
		Vector3 operator *(float k) const;
		Vector3 operator *(int k) const;

		Vector3 operator ^(Vector3 V1) const;

		// string
		std::string ToString();

	private:
		// variables
		double m_x;
		double m_y;
		double m_z;
	};
}

#endif
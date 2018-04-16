#include"Vector3.h"

namespace gpp {
	Vector3::Vector3()
	{ // default constructor
		m_x = 0;
		m_y = 0;
		m_z = 0;
	}

	Vector3::Vector3(double x1, double y1, double z1)
		: m_x(x1), m_y(y1), m_z(z1)
		// constructor for entered values
	{
	}

	Vector3::~Vector3()
	{ // destructor
	}

	double Vector3::ReturnX()
	{ // returns x value
		return m_x;
	}

	double Vector3::ReturnY()
	{ // returns y value
		return m_y;
	}

	double Vector3::ReturnZ()
	{ // returns z value
		return m_z;
	}

	void Vector3::SetX(double x)
	{ // sets x value
		m_x = x;
	}

	void Vector3::SetY(double y)
	{ // sets y value
		m_y = y;
	}

	void Vector3::SetZ(double z)
	{ // sets z value
		m_z = z;
	}

	double Vector3::Length()
	{ // returns the vectors length
		return sqrt(m_x * m_x + m_y * m_y + m_z * m_z);
	}

	double Vector3::LengthSquared()
	{ // returns the length squared
		return (Length() * Length());
	}

	void Vector3::Normalise()
	{ // normalise the vector
		if (Length() > 0.0)
		{
			double magnit = Length();
			m_x /= magnit;
			m_y /= magnit;
			m_z /= magnit;
		}
	}


	Vector3 Vector3::operator+(Vector3 V1) const
	{ // adds two vectors together
		return Vector3(m_x + V1.m_x, m_y + V1.m_y, m_z + V1.m_z);
	}

	Vector3 Vector3::operator-(Vector3 V1) const
	{ // subtracts two vectors
		return Vector3(m_x - V1.m_x, m_y - V1.m_y, m_z - V1.m_z);
	}

	Vector3 Vector3::operator-() const
	{ // makes the vector negitive
		Vector3 V1 = Vector3();
		V1.m_x = -m_x;
		V1.m_y = -m_y;
		V1.m_z = -m_z;
		return V1;
	}

	double Vector3::operator*(Vector3 V1) const
	{ // returns scalar product of 2 vectors
		return (m_x * V1.m_x + m_y * V1.m_y + m_z * V1.m_z);
	}

	Vector3 Vector3::operator*(double k) const
	{ // multiplys vector by a double
		return Vector3(m_x * k, m_y * k, m_z * k);
	}

	Vector3 Vector3::operator*(float k) const
	{ // multiplys vector by a float
		return Vector3(m_x * k, m_y * k, m_z * k);
	}

	Vector3 Vector3::operator*(int k) const
	{ // multiplys vector by an int
		return Vector3(m_x * k, m_y * k, m_z * k);
	}

	Vector3 Vector3::operator^(Vector3 V1) const
	{ // returns vector product of 2 vectors
		return Vector3(m_y * V1.m_z - m_z * V1.m_y, m_z * V1.m_x - m_x * V1.m_z, m_x * V1.m_y - m_y * V1.m_x);
	}

	std::string Vector3::ToString()
	{ // converts vector to a string 
		return std::string{ "(" + std::to_string(m_x) + "," + std::to_string(m_y) + "," + std::to_string(m_z) + ")" };
	}
}
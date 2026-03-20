#include <iostream>

class Fixed
{
private:
	int _fixed_point;
	static const int _rawBit;

public:
	Fixed();
	~Fixed();

	Fixed(const int number);
	Fixed(const float number);
	Fixed(const Fixed &obj);

	float toFloat(void) const;
	int toInt(void) const;
	Fixed &operator=(const Fixed &obj);
	friend std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

	bool operator==(const Fixed &fixed) const;
	bool operator!=(const Fixed &fixed) const;
	bool operator>(const Fixed &fixed) const;
	bool operator<(const Fixed &fixed) const;
	bool operator>=(const Fixed &fixed) const;
	bool operator<=(const Fixed &fixed) const;

	Fixed operator+(const Fixed &fixed) const;
	Fixed operator-(const Fixed &fixed) const;
	Fixed operator*(const Fixed &fixed) const;
	Fixed operator/(const Fixed &fixed) const;

	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	static Fixed &min(Fixed &fixed0, Fixed &fixed1);
	const static Fixed &min(const Fixed &fixed0, const Fixed &fixed1);
	static Fixed &max(Fixed &fixed0, Fixed &fixed1);
	const static Fixed &max(const Fixed &fixed0, const Fixed &fixed1);
};

#include <iostream>

class Fixed
{
private:
	int _fixed_point;
	static const int _rawBit;

public:
	Fixed();
	Fixed(const Fixed &obj);
	Fixed &operator=(const Fixed &obj);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

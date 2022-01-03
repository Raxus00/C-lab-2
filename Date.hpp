#ifndef DATE_HPP
#define DATE_HPP
#include <string>

class Date
{
private:
	std::string setDate;



public:
	Date();
	Date(std::string);
	bool operator <= (const Date& other) const;
	bool operator == (const Date& other) const;
	std::string ToString();
};
#endif

#include "Date.hpp"
#include "Booking.hpp"

Date::Date()
{
	this-> setDate = "0000-00-00";
}
Date::Date(std::string in)
{
	this->setDate = in;
}
bool Date::operator<=(const Date& other) const
{
	if(this->setDate <= other.setDate)
    {
        return true;
    }
	return false;
}
bool Date::operator==(const Date& other) const
{
	if(this->setDate == other.setDate)
    {
        return true;
    }
	return false;
}
std::string Date::ToString()
{
	return setDate;
}



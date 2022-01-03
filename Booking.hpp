#include <string>
#include "Date.hpp"
#ifndef BOOKING_HPP
#define BOOKING_HPP

struct Booking
{
	std::string name;
	unsigned int CottageID;
	Date startDate;
	Date endDate;
};
#endif
#ifndef BOOKINGSYSTEM_HPP
#define BOOKINGSYSTEM_HPP
#include <string>
#include <vector>
#include "Booking.hpp"

class BookingSystem
{
public:

	bool BookCottage(const std::string& name, unsigned int cottageNR, const std::string& startDate, const std::string endDate);

	bool RemoveBooking(unsigned int cottageNr, const std::string& startDate);

	BookingSystem(unsigned int cottageNR);

private:
	std::vector<Booking> Totalcottages;
	unsigned int Totcottages;

};
#endif

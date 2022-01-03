#include "BookingSystem.hpp"


BookingSystem::BookingSystem(unsigned int Totalcottages) : Totcottages(Totalcottages)
{

}

bool BookingSystem::BookCottage(const std::string& name, unsigned int cottageNR, const std::string& startDate, const std::string endDate)
{
	Date ReqStartDate = Date(startDate);

	Date ReqEndDate = Date(endDate);
	bool bookingAvileble =true;
	if (cottageNR < this->Totcottages)
	{
		if (Totalcottages.size() > 0)
		{
			for (unsigned int i = 0; i < Totalcottages.size(); i++)
			{
				if (cottageNR == Totalcottages[i].CottageID)
				{
					if (!((ReqEndDate <= Totalcottages[i].startDate && !(ReqEndDate == Totalcottages[i].startDate)) 
					|| (Totalcottages[i].endDate <= ReqStartDate && !(Totalcottages[i].endDate == ReqStartDate))))
					{
					bookingAvileble = false;
					}
				}
			}
		}

		if (bookingAvileble)
		{
			Booking NewBooking;
			NewBooking.name = name;
			NewBooking.CottageID = cottageNR;
			NewBooking.startDate = ReqStartDate;
			NewBooking.endDate = ReqEndDate;
			Totalcottages.push_back(NewBooking);
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool BookingSystem::RemoveBooking(unsigned int cottageNr, const std::string& startDate)
{
	Date mystardate = Date(startDate);
	for (unsigned int i = 0; i < Totalcottages.size(); i++)
	{
		if (Totalcottages[i].startDate == mystardate && Totalcottages[i].CottageID == cottageNr)
		{
			Totalcottages.erase(Totalcottages.begin() + i);
			return true;
		}
	}
	return false;
}



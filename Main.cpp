#include <iostream>
#include "Tests.hpp"

int main()
{
	if(!TestDate())
		return -1;

	if(!TestSystemBookCottage())
		return -1;

	if(!TestSystemRemoveBooking())
		return -1;

	if(!TestSystemCombination())
		return -1;

	std::cout << "All tests succeded!";
	return 0;
}
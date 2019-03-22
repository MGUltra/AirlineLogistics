

#ifndef CITY_HPP
#define CITY_HPP

#include <iostream>
#include <string>

class City
{
private:

	std::string airportName;
	std::string cityName;
	std::string countryName;

	float longitude;
	float latitude;

	int latDegrees, latMinutes, latSeconds;
	char latDirection // N or S


	int longDegrees, longMinutes, longSeconds;
	char longDirection; // E or W



	int altitude;


public:
	
	City();
	~City();

	// Set Functions


	// Get Functions

}

#endif
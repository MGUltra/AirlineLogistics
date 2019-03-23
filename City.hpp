

#ifndef CITY_HPP
#define CITY_HPP

#include <iostream>
#include <string>

class City
{
private:

	std::string ICAO;
	std::string airportName;
	std::string cityName;
	std::string countryName;

	float longitude;
	float latitude;

	int latDegrees, latMinutes, latSeconds;
	char latDirection; // N or S


	int longDegrees, longMinutes, longSeconds;
	char longDirection; // E or W
	
	int altitude;


public:
	
	City();
	~City();

	// Set Functions
	void setAirportName(std::string);
	void setCityName(std::string);
	void setCountryName(std::string);
	void setLongitude(float);
	void setLatitude(float);
	void setLatDegrees(int);
	void setLatMinutes(int);
	void setLatSeconds(int);
	void setLongDegrees(int);
	void setLongMinutes(int);
	void setLongSeconds(int);
	void setLatDirection(char);
	void setLongDirection(char);
	void setAltitude(int);

	// Get Functions
	std::string getAirportName();
	std::string getCityName();
	std::string getCountryName();
	float getLongitude();
	float getLatitude();
	int getLatDegrees();
	int getLatMinutes();
	int getLatSeconds();
	int getLongDegrees();
	int getLongMinutes();
	int getLongSeconds();
	char getLatDirection();
	char getLongDirection();
	int getAltitude();
};

#endif
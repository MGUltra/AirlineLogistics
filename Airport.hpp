

#ifndef AIRPORT_HPP
#define AIRPORT_HPP

#include <iostream>
#include <string>

class Airport
{
private:

	std::string ICAO;
	std::string airportName;
	std::string cityName;
	std::string countryName;

	double longitude;
	double latitude;

	int latDegrees, latMinutes, latSeconds;
	char latDirection; // N or S


	int longDegrees, longMinutes, longSeconds;
	char longDirection; // E or W

	int altitude;


public:
	
	// Constructors
	Airport();
	Airport(std::string, std::string, std::string, std::string,
			double, double, int, int, int, int, int, int, char, char, int);

	// Destructor
	~Airport();

	// Copy Constructor

	// Assignment Operator

	// Set Functions
	void setICAO(std::string);
	void setAirportName(std::string);
	void setCityName(std::string);
	void setCountryName(std::string);
	void setLongitude(double);
	void setLatitude(double);
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
	std::string getICAO();
	std::string getAirportName();
	std::string getCityName();
	std::string getCountryName();
	double getLongitude();
	double getLatitude();
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
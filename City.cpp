#include "City.hpp"



/*******************************************************
*                     CONSTRUCTOR
********************************************************/
City::City()
{

}

/*******************************************************
*                     DESTRUCTOR
********************************************************/
City::~City()
{

}



/*******************************************************
*                     SET FUNCTIONS
********************************************************/
void City::setICAO(std::string stringIn)
{
	this->ICAO = stringIn;
}

void City::setAirportName(std::string stringIn)
{
	this->airportName = stringIn;
}

void City::setCityName(std::string stringIn)
{
	this->cityName = stringIn;
}

void City::setCountryName(std::string stringIn)
{
	this->countryName = stringIn;
}

void City::setLongitude(float floatIn)
{
	this->longitude = floatIn;
}

void City::setLatitude(float floatIn)
{
	this->latitude = floatIn;
}

void City::setLatDegrees(int intIn)
{
	this->latDegrees = intIn;
}

void City::setLatMinutes(int intIn)
{
	this->latMinutes = intIn;
}

void City::setLatSeconds(int intIn)
{
	this->latSeconds = intIn;
}

void City::setLongDegrees(int intIn)
{
	this->longSeconds = intIn;
}

void City::setLongMinutes(int intIn)
{
	this->longSeconds = intIn;
}

void City::setLongSeconds(int intIn)
{
	this->longSeconds = intIn;
}

void City::setLatDirection(char charIn)
{
	this->latDirection = charIn;
}

void City::setLongDirection(char charIn)
{
	this->longDirection = charIn;
}

void City::setAltitude(int intIn)
{
	this->altitude = intIn;
}


/*******************************************************
*                     GET FUNCTIONS
********************************************************/

std::string City::getICAO()
{
	return this->ICAO;
}

std::string City::getAirportName()
{
	return this->airportName;
}


std::string City::getCityName()
{
	return this->cityName;
}


std::string City::getCountryName()
{
	return this->countryName;
}


float City::getLongitude()
{
	return this->longitude;
}


float City::getLatitude()
{
	return this->latitude;
}


int City::getLatDegrees()
{
	return this->latDegrees;
}


int City::getLatMinutes()
{
	return this->latMinutes;
}


int City::getLatSeconds()
{
	return this->latSeconds;
}


int City::getLongDegrees()
{
	return this->longDegrees;
}


int City::getLongMinutes()
{
	return this->longMinutes;
}


int City::getLongSeconds()
{
	return this->longSeconds;
}


char City::getLatDirection()
{
	return this->latDirection;
}


char City::getLongDirection()
{
	return this->longDirection;
}


int City::getAltitude()
{
	return this->altitude;
}





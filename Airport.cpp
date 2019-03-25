#include "Airport.hpp"



/*******************************************************
*                     CONSTRUCTOR
********************************************************/
Airport::Airport()
{

}

Airport::Airport(std::string ICAOIn,
                 std::string airportNameIn,
                 std::string cityNameIn,
                 std::string countryNameIn,
                 double longitudeIn,
                 double latitudeIn,
                 int latDegIn,
                 int latMinIn,
                 int latSecIn,
                 int longDegIn,
                 int longMinIn,
                 int longSecIn,
                 char latDirIn,
                 char longDirIn,
                 int altitudeIn)
{
	setICAO(ICAOIn);
	setAirportName(airportNameIn);
	setCityName(cityNameIn);
	setCountryName(countryNameIn);
	setLongitude(longitudeIn);
	setLatitude(latitudeIn);
	setLatDegrees(latDegIn);
	setLatMinutes(latMinIn);
	setLatSeconds(latSecIn);
	setLongDegrees(longDegIn);
	setLongMinutes(longMinIn);
	setLongSeconds(longSecIn);
	setLatDirection(latDirIn);
	setLongDirection(longDirIn);
	setAltitude(altitudeIn);
}

/*******************************************************
*                     DESTRUCTOR
********************************************************/
Airport::~Airport()
{

}



/*******************************************************
*                     SET FUNCTIONS
********************************************************/
void Airport::setICAO(std::string stringIn)
{
	this->ICAO = stringIn;
}

void Airport::setAirportName(std::string stringIn)
{
	this->airportName = stringIn;
}

void Airport::setCityName(std::string stringIn)
{
	this->cityName = stringIn;
}

void Airport::setCountryName(std::string stringIn)
{
	this->countryName = stringIn;
}

void Airport::setLongitude(double floatIn)
{
	this->longitude = floatIn;
}

void Airport::setLatitude(double floatIn)
{
	this->latitude = floatIn;
}

void Airport::setLatDegrees(int intIn)
{
	this->latDegrees = intIn;
}

void Airport::setLatMinutes(int intIn)
{
	this->latMinutes = intIn;
}

void Airport::setLatSeconds(int intIn)
{
	this->latSeconds = intIn;
}

void Airport::setLongDegrees(int intIn)
{
	this->longSeconds = intIn;
}

void Airport::setLongMinutes(int intIn)
{
	this->longSeconds = intIn;
}

void Airport::setLongSeconds(int intIn)
{
	this->longSeconds = intIn;
}

void Airport::setLatDirection(char charIn)
{
	this->latDirection = charIn;
}

void Airport::setLongDirection(char charIn)
{
	this->longDirection = charIn;
}

void Airport::setAltitude(int intIn)
{
	this->altitude = intIn;
}


/*******************************************************
*                     GET FUNCTIONS
********************************************************/

std::string Airport::getICAO()
{
	return this->ICAO;
}

std::string Airport::getAirportName()
{
	return this->airportName;
}


std::string Airport::getCityName()
{
	return this->cityName;
}


std::string Airport::getCountryName()
{
	return this->countryName;
}


double Airport::getLongitude()
{
	return this->longitude;
}


double Airport::getLatitude()
{
	return this->latitude;
}


int Airport::getLatDegrees()
{
	return this->latDegrees;
}


int Airport::getLatMinutes()
{
	return this->latMinutes;
}


int Airport::getLatSeconds()
{
	return this->latSeconds;
}


int Airport::getLongDegrees()
{
	return this->longDegrees;
}


int Airport::getLongMinutes()
{
	return this->longMinutes;
}


int Airport::getLongSeconds()
{
	return this->longSeconds;
}


char Airport::getLatDirection()
{
	return this->latDirection;
}


char Airport::getLongDirection()
{
	return this->longDirection;
}


int Airport::getAltitude()
{
	return this->altitude;
}





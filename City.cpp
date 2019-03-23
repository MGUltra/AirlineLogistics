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


void City::setAirportName(std::string)
{

}

void City::setCityName(std::string)
{

}

void City::setCountryName(std::string)
{

}

void City::setLongitude(float)
{

}

void City::setLatitude(float)
{

}

void City::setLatDegrees(int)
{

}

void City::setLatMinutes(int)
{

}

void City::setLatSeconds(int)
{

}

void City::setLongDegrees(int)
{

}

void City::setLongMinutes(int)
{

}

void City::setLongSeconds(int)
{

}

void City::setLatDirection(char)
{

}

void City::setLongDirection(char)
{

}

void City::setAltitude(int)
{

}


/*******************************************************
*                     GET FUNCTIONS
********************************************************/


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





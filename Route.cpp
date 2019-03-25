#include "Route.hpp"

/*******************************************************
*                     CONSTRUCTORS
********************************************************/
Route::Route()
	: origin()
	, destination()
	, distance()
{

}

Route::Route(Airport* originIn, Airport* destinationIn)
	: origin(originIn)
	, destination(destinationIn)
	, distance()
{

}

/*******************************************************
*                     DESTRUCTOR
********************************************************/
Route::~Route()
{

}


/*******************************************************
*                  Copy Constructor
********************************************************/
Route::Route(const Route &sourceRoute)
	: origin(sourceRoute.origin)
	, destination(sourceRoute.destination)
	, distance(sourceRoute.distance)
{

}


/*******************************************************
*                 Assignment Operator
********************************************************/
Route& Route::operator=(const Route &sourceRoute)
{
	this->origin = sourceRoute.origin;
	this->destination = sourceRoute.destination;
	this->distance = sourceRoute.distance;

	return *this;
}



/*******************************************************
*                     SET FUNCTIONS
********************************************************/

void Route::setOrigin(Airport* originIn)
{
	this->origin = originIn;
}

void Route::setDestination(Airport* destinationIn)
{
	this->destination = destinationIn;
}

void Route::setDistance(double distanceIn)
{
	this->distance = distanceIn;
}




/*******************************************************
*                     GET FUNCTIONS
********************************************************/

Airport* Route::getOrigin()
{
	return this->origin;
}

Airport* Route::getDestination()
{
	return this->destination;
}

double Route::getDistance()
{
	return this->distance;
}

double Route::getEarthRadiusKm()
{
	return this->EarthRadiusKm;
}

/*******************************************************
*                    OTHER FUNCTIONS
********************************************************/

// HaversineDistance formula from Rosetta Code
// https://rosettacode.org/wiki/Haversine_formula#C.2B.2B
double Route::calculateRouteDistance(Airport* origin, Airport* destination)
{


	double latRad1 = degreeToRadian(origin->getLatitude());

	double latRad2 = degreeToRadian(destination->getLatitude());

	double lonRad1 = degreeToRadian(origin->getLongitude());

	double lonRad2 = degreeToRadian(destination->getLongitude());

	double diffLa = latRad2 - latRad1;
	double doffLo = lonRad2 - lonRad1;
 
	double computation = asin(sqrt(sin(diffLa / 2) * 
						 sin(diffLa / 2) + cos(latRad1) *
						 cos(latRad2) * 
						 sin(doffLo / 2) * 
						 sin(doffLo / 2)));

	return 2 * this->EarthRadiusKm * computation;
}


double Route::degreeToRadian(double angle)
{
	return M_PI * angle / 180.0;
}
 

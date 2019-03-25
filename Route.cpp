#include "Route.hpp"

/*******************************************************
*                     CONSTRUCTORS
********************************************************/
Route::Route()
{

}

Route::Route(Airport* originIn, Airport* destinationIn)
{
	setOrigin(originIn);
	setDestination(destinationIn);

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



/*******************************************************
*                 Assignment Operator
********************************************************/




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

void Route::setDistance(int distanceIn)
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

int Route::getDistance()
{
	return this->distance;
}

/*******************************************************
*                    OTHER FUNCTIONS
********************************************************/

int calculateRouteDistance(Airport*, Airport*)
{
	float testPi = M_PI;
}
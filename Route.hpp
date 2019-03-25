
#ifndef ROUTE_HPP
#define ROUTE_HPP

#include <iostream>
#include <string>
#include <map>
#include <cmath>


#include "Airport.hpp"

class Route
{
private:
	Airport* origin;
	Airport* destination;
	int distance;

public:

	// Constructors
	Route();
	Route(Airport*, Airport*);

	// Destructors
	~Route();

	// Copy Constructor

	// Assignment Operator


	// Set Functions

	void setOrigin(Airport*);
	void setDestination(Airport*);
	void setDistance(int);

	// Get Functions

	Airport* getOrigin();
	Airport* getDestination();
	int getDistance();

	// Other Functions

	int calculateRouteDistance(Airport*, Airport*);

	double degreeToRadian();

};

#endif

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
	double distance;
	const double EarthRadiusKm = 6372.8;

public:

	// Constructors
	Route();
	Route(Airport*, Airport*);

	// Destructors
	~Route();

	// Copy Constructor
	Route(const Route &sourceRoute);

	// Assignment Operator
	Route& operator=(const Route &sourceRoute);

	// Set Functions
	void setOrigin(Airport*);
	void setDestination(Airport*);
	void setDistance(double);

	// Get Functions
	Airport* getOrigin();
	Airport* getDestination();
	double getDistance();
	double getEarthRadiusKm();

	// Other Functions
	double calculateRouteDistance(Airport*, Airport*);
	double degreeToRadian(double);

};

#endif
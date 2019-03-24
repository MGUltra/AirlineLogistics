
#ifndef ROUTE_HPP
#define ROUTE_HPP

#include <iostream>
#include <string>
#include <map>


#include "Airport.hpp"

class Route
{
private:
	Airport* origin;
	Airport* destination;
	int distance;

public:
	Route();
	~Route();

	// Set Functions

	void setOrigin(Airport*);
	void setDestination(Airport*);
	void setDistance(int);

	// Get Functions

	Airport* getOrigin();
	Airport* getDestination();
	
	int getDistance();


};

#endif
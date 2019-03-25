


#include <iostream>
#include <string>

#include "Airport.hpp"
#include "Route.hpp"

int main()
{
	Airport* newcity = new Airport;

	Route* newRoute = new Route;

	delete newcity;

	delete newRoute;

	return 0;
}
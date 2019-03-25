


#include <iostream>
#include <string>
#include <gtest/gtest.h>

#include "Airport.hpp"
#include "Route.hpp"

int main(int argc, char **argv)
{
	Airport* newcity = new Airport;

	Route* newRoute = new Route;

	delete newcity;

	delete newRoute;

	std::cout << newRoute->getEarthRadiusKm() << std::endl;

	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
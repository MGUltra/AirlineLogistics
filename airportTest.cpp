#include <iostream>
#include <string>
#include <gtest/gtest.h>

#include "Airport.hpp"

int main(int argc, char **argv)
{
	Airport* newcity = new Airport;

	delete newcity;

	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
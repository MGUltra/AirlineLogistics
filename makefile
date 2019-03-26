# Compiler/Flag Variables
CXX=g++
CXXFLAGS = -std=c++11
CXXFLAGS += -g
CXXFLAGS += -Wall
CXXFLAGS += -pedantic
CXXFLAGS += -Wextra
CXXFLAGS += -Weffc++

GTESTFLAGS = -lgtest
GTESTFLAGS += -lgtest_main
GTESTFLAGS += -pthread

ROUTEOBJECTS = Airport.o Route.o
ROUTESRCS = Airport.cpp Route.cpp
ROUTEHEADERS = Airport.hpp Route.hpp


all: 

test: routetest airporttest

clean:
	-rm ${ROUTEOBJECTS} routetest airporttest

routetest: ${ROUTEOBJECTS} ${ROUTEHEADERS}
	${CXX} -g routeTest.cpp ${GTESTFLAGS} ${ROUTEOBJECTS} -o routetest

airporttest: ${ROUTEOBJECTS} ${ROUTEHEADERS}
	${CXX} -g airportTest.cpp ${GTESTFLAGS} ${ROUTEOBJECTS} -o airporttest

${ROUTEOBJECTS}: ${ROUTESRCS}
	${CXX} ${GTESTFLAGS} ${CXXFLAGS} -c $(@:.o=.cpp)
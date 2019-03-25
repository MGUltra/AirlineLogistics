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

clean:
	-rm ${ROUTEOBJECTS} routetest test.o

test: ${ROUTEOBJECTS} ${ROUTEHEADERS}
	${CXX} -g test.cpp ${GTESTFLAGS} ${ROUTEOBJECTS} -o routetest



${ROUTEOBJECTS}: ${ROUTESRCS}
	${CXX} ${GTESTFLAGS} ${CXXFLAGS} -c $(@:.o=.cpp)
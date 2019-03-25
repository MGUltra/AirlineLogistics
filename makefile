# Compiler/Flag Variables
CXX=g++
CXXFLAGS = -std=c++11
CXXFLAGS += -g
CXXFLAGS += -Wall
CXXFLAGS += -pedantic
CXXFLAGS += -Wextra
CXXFLAGS += -Weffc++

ROUTEOBJECTS = Airport.o Route.o
ROUTESRCS = Airport.cpp Route.cpp
ROUTEHEADERS = Airport.hpp Route.hpp


all: routetest

clean:
	-rm ${ROUTEOBJECTS} routetest main.o

routetest: ${ROUTEOBJECTS} ${ROUTEHEADERS}
	${CXX} -g main.cpp ${ROUTEOBJECTS} -o routetest



${ROUTEOBJECTS}: ${ROUTESRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)
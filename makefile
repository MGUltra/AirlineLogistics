# Compiler/Flag Variables
CXX=g++
CXXFLAGS = -std=c++11
CXXFLAGS += -g
CXXFLAGS += -Wall
CXXFLAGS += -pedantic
CXXFLAGS += -Wextra
CXXFLAGS += -Weffc++

ROUTEOBJECTS = City.o Routes.o
ROUTESRCS = City.cpp Routes.cpp
ROUTEHEADERS = City.hpp Routes.hpp


all: 

clean:
	-rm ${ROUTEOBJECTS} routetest main.o

routetest: ${ROUTEOBJECTS} ${ROUTEHEADERS}
	${CXX} -g main.cpp ${ROUTEOBJECTS} -o routetest



${ROUTEOBJECTS}: ${ROUTESRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)
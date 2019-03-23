# Compiler/Flag Variables
CXX=g++
CXXFLAGS = -std=c++11
CXXFLAGS += -g
CXXFLAGS += -Wall
CXXFLAGS += -pedantic
CXXFLAGS += -Wextra
CXXFLAGS += -Weffc++

ROUTEOBJECTS = City.o
ROUTESRCS = City.cpp
ROUTEHEADERS = City.hpp


all: 

clean:
	-rm ${ROUTEOBJECTS} citytest main.o

citytest: ${ROUTEOBJECTS} ${ROUTEHEADERS}
	${CXX} -g main.cpp ${ROUTEOBJECTS} -o citytest



${ROUTEOBJECTS}: ${ROUTESRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)
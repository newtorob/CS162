CXX = g++

CXXFLAGS = -std=c++0x



SRC1 = Main.cpp
SRC2 = Ant.cpp
SRC3 = Critter.cpp
SRC4 = Doodlebug.cpp
SRC5 = Grid.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3} ${SRC4} ${SRC5}



#  executables
PROG1 = game
PROGS = ${PROG1}


#make all
all:
	${CXX} ${CXXFLAGS} ${SRCS} -o ${PROG1}


#make clean, to clean out the executables
clean: 
	rm -f ${PROGS} *.o *~
CXX = g++

CXXFLAGS = -std=c++0x



SRC1 = main.cpp
SRC2 = barbarian.cpp
SRC3 = vampire.cpp
SRC4 = blueMen.cpp
SRC5 = medusa.cpp
SRC6 = harryPotter.cpp
SRC7 = creature.cpp
SRC8 = stack.cpp
SRC9 = queue.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3} ${SRC4} ${SRC5} ${SRC6} ${SRC7} ${SRC8} ${SRC9}



# executables
PROG1 = game
PROGS = ${PROG1}
#make all
all:
		${CXX} ${CXXFLAGS} ${SRCS} -o ${PROG1}


#make clean, to clean out the executables
clean: 
		rm -f ${PROGS} *.o *~

CXX = g++

CXXFLAGS = -std=c++0x



SRC1 = main.cpp
SRC2 = utility.cpp
SRC3 = iteration.cpp
SRC4 = queue.cpp

SRCS = ${SRC1} ${SRC2} ${SRC3} ${SRC4}



# executables
PROG1 = lab
PROGS = ${PROG1}
#make all
all:
		${CXX} ${CXXFLAGS} ${SRCS} -o ${PROG1}


#make clean, to clean out the executables
clean: 
		rm -f ${PROGS} *.o *~
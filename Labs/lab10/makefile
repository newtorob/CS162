CXX = g++

CXXFLAGS = -std=c++0x



SRC1 = main.cpp
SRC2 = iFibb.cpp
SRC3 = nFibb.cpp


SRCS = ${SRC1} ${SRC2} ${SRC3} 



# executables
PROG1 = lab10
PROGS = ${PROG1}
#make all
all:
		${CXX} ${CXXFLAGS} ${SRCS} -o ${PROG1}


#make clean, to clean out the executables
clean: 
		rm -f ${PROGS} *.o *~
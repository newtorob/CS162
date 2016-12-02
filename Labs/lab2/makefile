CXX = g++

CXXFLAGS = -std=c++0x




# SRCS are the source files
SRC1 = main.cpp
SRC2 = item.cpp
SRC3 = list.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3} 

# HEADERS is the header files 

HEADER1 = list.hpp
HEADER2 = item.hpp
HEADER3 = 
HEADERS = 

#  executables
PROG1 = list
PROGS = ${PROG1}


#make all
all:
	${CXX} ${CXXFLAGS} ${SRCS} -o ${PROG1}


#make clean, to clean out the executables
clean: 
	rm -f ${PROGS} *.o *~
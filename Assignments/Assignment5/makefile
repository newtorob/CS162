CXX = g++

CXXFLAGS = -std=c++0x



SRC1 = main.cpp
SRC2 = Doors.cpp
SRC3 = BossRoom.cpp
SRC4 = Hall.cpp
SRC5 = Items.cpp
SRC6 = Norm.cpp
SRC7 = Play.cpp
SRC8 = Rooms.cpp
SRC9 = Space.cpp
SRC10 = UsrInv.cpp
SRC11 = Yard.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3} ${SRC4} ${SRC5} ${SRC6} ${SRC7} ${SRC8} ${SRC9} ${SRC10} ${SRC11}



# executables
PROG1 = final
PROGS = ${PROG1}
#make all
all:
		${CXX} ${CXXFLAGS} ${SRCS} -o ${PROG1}


#make clean, to clean out the executables
clean:
		rm -f ${PROGS} *.o *~

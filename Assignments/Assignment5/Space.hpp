/*********************************************************************
** Program Filename: Space.hpp
** Author: Robert Newton
** Date: 12/06/2016
** Description: Final - Interface file for the Space Class functions
*********************************************************************/

#ifndef Space_HPP
#define Space_HPP

#include <string>
using namespace std;



class Space
{


protected:

	Space *n;
	Space *e;
	Space *s;
	Space *w;

	string nameof_Room;
	int room_id;
	bool door1;

	bool brKey;
	bool yardKey;
	bool drKey;
	bool bossTest;
	bool potion;
	bool victorium;

	int usrPlants;
	int dine;
	int brCheck;


public:
	virtual void account() = 0;

	Space *returnN();

	Space *returnS();

	Space *returnE();

	Space *returnW();

	string returnRoom();

	void setN(Space *room);

	void setE(Space *room);

	void setS(Space *room);

	void setW(Space *room);


	void setCompass(Space *room, Space *room2, Space *room3, Space *room4);

	void checkCompass(int);

	void switchRoom(Space **player);

	Space();

	Space(string n1, int room);

	virtual void roomCheck() = 0;

  //sets door1 to True, if all 3 keys are in players inventory
	void doorCheck();


	bool getbrKey();
	void setbrKey();

	bool getYardKey();
	void setYardKey();

	bool getdrKey();
	void setdrKey();


	bool getbossTest();
	void setbossTest();


	bool getPotion();
	void setPotion();


	bool getVictorium();
	void setVictorium();


};

#endif

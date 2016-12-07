/*********************************************************************
** Program Filename: BossRoom.hpp
** Author: Robert Newton
** Date: 12/06/2016
** Description: Final - Interface file for the Yard Class functions
*********************************************************************/
#ifndef BOSSROOM_HPP
#define BOSSROOM_HPP

#include "Space.hpp"




class BossRoom: public Space
{



public:

	void roomCheck();

	void account();

	BossRoom(string, int);

	BossRoom();

	void bossFinal();

};

#endif

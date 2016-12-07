#ifndef PLAY_HPP
#define PLAY_HPP

#include "Norm.hpp"



class Play
{


private:

	int stability;

	bool move;


public:

	void dropStability();

	void instruct();

	void showStability();

	bool getMove();

	void setMove();

	int getStability();

	void mainMenu();

	int showCompass();

	Play();

};

#endif

#pragma once
#include "Enemy.h"
#include <ctime>
class Combat: public Soldier
{
public:

	Combat(Enemy o, Enemy o2);
	//
	void print_stats(Enemy o);
	//
	void clash();
	//
private:

	Enemy enemy1;
	Enemy enemy2;



};


#pragma once
#include <iostream>
#include <string>
class Enemy
{
public: 
	Enemy(std::string, int, int);
	Enemy();

	void set_name(std::string);
	void set_health(int);
	void set_damage(int);

	std::string get_name();
	int get_health();
	int get_damage();

	void print_stats();

protected:
	std::string name;
	int health;
	int damage;
};

class Soldier:public Enemy
{
public: 
	Soldier(std::string, int/*health*/, int/*damage*/, int/*armor*/);
	Soldier();
	void set_armor(int);
	int get_armor();

	void print_stats();

private:
	int armor;



};



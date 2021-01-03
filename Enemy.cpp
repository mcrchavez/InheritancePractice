#include "Enemy.h"

Enemy::Enemy(std::string name, int health, int damage) {
	this->name = name, this->health = health, this->damage = damage;
}
Enemy::Enemy() {
	name = "temp", health = 0, damage = 0;
}

void Enemy::set_name(std::string name) {
	this->name = name;
}

void Enemy::set_health(int health) {
	this->health = health;
}
void Enemy::set_damage(int damage) {
	this->damage = damage;
}

std::string Enemy::get_name() {
	return name;
}
int Enemy::get_health() {
	return health;
}
int Enemy::get_damage() {
	return damage;
}

void Enemy::print_stats() {
	std::cout<< name << "---Health:[" << health <<"] "<< "Damage:[" << damage <<"]"<< std::endl;
}




Soldier::Soldier(std::string name, int health,int damage, int armor) {
	this->name = name, this->health = health, this->damage = damage, this->armor = armor;
}
Soldier::Soldier():Enemy() {
	armor = 0;
}

void Soldier::set_armor(int armor) {
	this -> armor = armor;
}

int Soldier::get_armor() {
	return armor;
}

void Soldier::print_stats() {
	std::cout << name << "---Health:[" << health << "] " << "Damage:[" << damage << "] " << "Armor:[" << armor << "]" << std::endl;
}
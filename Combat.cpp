#include "Combat.h"

Combat::Combat(Enemy enemy1, Enemy enemy2) {
	this->enemy1 = enemy1, this->enemy2 = enemy2;
}
void Combat::print_stats(Enemy o) {
	o.print_stats();
}

void Combat::clash() {
	srand(time(NULL));
	int ch1 = enemy1.get_health(), ch2 = enemy2.get_health(); //base health

	while (ch1>=0 && ch2>=0) {
		int d1 = enemy1.get_damage(),  d2 = enemy2.get_damage(); //base damage of each enemy aswell as random damage but is reset each loop
	//randomize damage values
		d1 = rand() % d1;
		d2 = rand() % d2;

		std::cout << enemy1.get_name() << " hits for " << d1 << " damage" << std::endl;
		std::cout << enemy2.get_name() << " hits for " << d2 << " damage" << std::endl;
		//subtract damage from health of enemy
		ch1 += -(d2);
		ch2 += -(d1);

		if (ch1 > 0 && ch2 > 0) {
			std::cout << enemy1.get_name() << " Current Health: " << ch1 << std::endl;
			std::cout << enemy2.get_name() << " Current Health: " << ch2 << std::endl;
		}
	
	}

	 if (ch1 > 0 && ch2 <= 0) {
		std::cout << enemy1.get_name() << " WON! " << std::endl;
		std::cout << enemy1.get_name() << " Health " <<"["<< ch1 <<"] " << enemy2.get_name() << " Health [DEAD]" << std::endl;
	}
	else if(ch2>0 && ch1<=0) {
		std::cout << enemy2.get_name() << " WON! " << std::endl;
		std::cout << enemy2.get_name() << " Health " << "[" << ch2 << "] " << enemy1.get_name() << " Health [DEAD]" << std::endl;
	}
	enemy1.set_health(ch1);
	enemy2.set_health(ch2);

	
}
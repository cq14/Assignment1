#include <cstdlib>
#include <ctime>
#include "MagicWand.h"

double MagicWand::hit(double armor){
    //there is a 50% chance it will do 30 damage
	//25% chance that it will add 30 to armor (-30 damage)
	//25% chance that it will do nothing
	double damage;
	int identifier;
	srand((unsigned)time(0));
	identifier=rand()%3;
	
	if(identifier==0 || identifier==1)
	{//then it will do 30 damage
		damage=hitPoints-armor;
		if(damage<0)
			return 0;
		return damage;
		
	}
	return armor+30;
}
#include "SimpleAxe.h"


double SimpleAxe::hit(double armor){
    double damage = hitPoints-armor;
    if(armor > 0 && armor<20){
        return hitPoints;	//then axe will ignore all the armor points
    }
	else if(damage<0)
		return 0;
	else 
		return damage;
}
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "CrazyRandomSword.h"
using namespace std;

double CrazyRandomSword::hit(double armor){
	double damage;
	int randomhit,half;
	srand((unsigned)time(0));	//SOURCE: stack overflow
	hitPoints=rand()%90+10;
	floor(hitPoints);
	//find value of half
	half=armor/2;
	randomhit=rand()%(half);	//ignores random from 0 to half armor
	damage=hitPoints-randomhit;
	
	if(damage<0)
		return 0;
	return damage;
	
	/*damage=hitPoints - armor; 	//how much weapon hits
	damage/=2;					//range from zero to HALF of armor 
	
	int actualhit=(int) damage;
	
	actualhit=rand()%actualhit;
	armor-=actualhit;
	
	damage=hitPoints-armor;
	if(actualhit<0)
	{
		return 0;
	}
	
	return damage;*/
	
	
}

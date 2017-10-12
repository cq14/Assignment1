#include <string>
#include "Weapon.h"

#ifndef CrazyRandomSword_H
#define CrazyRandomSword_H

/**
 * Defines the behavior of a common sword (hitpoint = 50, it does not ignore armor points)
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy Ramdom Sword", 0) {	//randomized later in CrazyRandomSword.cpp 
    }
    virtual ~CrazyRandomSword() {}; 
    virtual double hit(double armor);

};

#endif 


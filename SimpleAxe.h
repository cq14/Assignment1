#include <string>
#include "Weapon.h"

#ifndef SimpleAxe_H
#define SimpleAxe_H

/**
 * Defines the behavior of a common sword (hitpoint = 50, it does not ignore armor points)
 */
class SimpleAxe : public Weapon {
public:

    SimpleAxe() : Weapon("Simple Axe", 60.0) {
    }
    virtual ~SimpleAxe() {}; 
    virtual double hit(double armor);

};

#endif 


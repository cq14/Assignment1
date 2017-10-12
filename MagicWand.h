#include <string>
#include "Weapon.h"

#ifndef MagicWand_H
#define MagicWand_H

/**
 * Defines the behavior of a common sword (hitpoint = 50, it does not ignore armor points)
 */
class MagicWand : public Weapon {
public:

    MagicWand() : Weapon("Magic Wand", 30) {
    }
    virtual ~MagicWand() {}; 
    virtual double hit(double armor);

};

#endif 


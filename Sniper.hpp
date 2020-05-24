#pragma once

#include "Soldier.hpp"

class Sniper : public Soldier
{
public:
    Sniper(){};
    Sniper(uint player_number);
    virtual void action(std::vector<std::vector<Soldier *>> &b);
    virtual uint get_initial_hp();
};

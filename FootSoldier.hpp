#pragma once

#include "Soldier.hpp"

class FootSoldier : public Soldier
{

public:
    FootSoldier(){};
    FootSoldier(uint player_number);
    virtual void action(std::vector<std::vector<Soldier *>> &b);
    virtual uint get_initial_hp();
};

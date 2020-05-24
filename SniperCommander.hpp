#pragma once

#include "Sniper.hpp"

class SniperCommander : public Sniper
{
public:
    SniperCommander(uint player_number);
    void action(std::vector<std::vector<Soldier *>> &b);
    uint get_initial_hp();
};

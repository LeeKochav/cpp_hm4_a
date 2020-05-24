#pragma once

#include "FootSoldier.hpp"

class FootCommander : public FootSoldier
{

public:
    FootCommander(uint player_number);
    void action(std::vector<std::vector<Soldier *>> &b);
    uint get_initial_hp();
};

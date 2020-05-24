
#include "FootSoldier.hpp"

FootSoldier::FootSoldier(uint player_number)
{
    m_player_number = player_number;
    m_hp = 100;
    m_power = 10;
    m_t = Type::FootS;
}

void FootSoldier::action(std::vector<std::vector<Soldier *>> &b)
{
    return;
}

uint FootSoldier::get_initial_hp()
{
    return 100;
}
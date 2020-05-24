#include "FootCommander.hpp"

FootCommander::FootCommander(uint player_number)
{
    m_player_number = player_number;
    m_hp = 150;
    m_power = 20;
    m_t = Type::FootC;
}

void FootCommander::action(std::vector<std::vector<Soldier *>> &b)
{
    return;
}

uint FootCommander::get_initial_hp()
{

    return 150;
}
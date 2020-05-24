#include "SniperCommander.hpp"

SniperCommander::SniperCommander(uint player_number)
{
    m_player_number = player_number;
    m_hp = 120;
    m_power = 100;
    m_t = Type::SniperC;
}

void SniperCommander::action(std::vector<std::vector<Soldier *>> &b)
{
    return;
}

uint SniperCommander::get_initial_hp()
{
    return 120;
}
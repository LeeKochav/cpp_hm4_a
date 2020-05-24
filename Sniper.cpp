
#include "Sniper.hpp"

Sniper::Sniper(uint player_number)
{
    m_player_number = player_number;
    m_hp = 100;
    m_power = 50;
    m_t = Type::SniperS;
}

void Sniper::action(std::vector<std::vector<Soldier *>> &b)
{
    return;
}

uint Sniper::get_initial_hp()
{
    return 100;
}
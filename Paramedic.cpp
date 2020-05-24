
#include "Paramedic.hpp"

Paramedic::Paramedic(uint player_number)
{
    m_player_number = player_number;
    m_hp = 100;
    m_power = 0;
    m_t = Type::ParamedicS;
}

void Paramedic::action(std::vector<std::vector<Soldier *>> &b)
{
    return;
}

uint Paramedic::get_initial_hp()
{
    return 100;
}
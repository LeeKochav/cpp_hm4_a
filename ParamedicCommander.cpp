#include "ParamedicCommander.hpp"

ParamedicCommander::ParamedicCommander(uint player_number)
{
    m_player_number = player_number;
    m_hp = 200;
    m_power = 0;
    m_t = Type::ParamedicC;
}

void ParamedicCommander::action(std::vector<std::vector<Soldier *>> &b)
{
    return;
}

uint ParamedicCommander::get_initial_hp()
{
    return 200;
}
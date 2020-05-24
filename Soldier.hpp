#pragma once

#include <iostream>
#include <vector>
using namespace std;

typedef enum Type
{
    FootS,
    FootC,
    SniperS,
    SniperC,
    ParamedicS,
    ParamedicC
} Type;
class Soldier
{
protected:
    uint m_player_number;
    uint m_hp;
    uint m_power;
    Type m_t;

public:
    Soldier(){};
    virtual void action(std::vector<std::vector<Soldier *>> &b) = 0;
    uint get_player_number() { return m_player_number; }
    uint get_hp() { return m_hp; }
    uint get_power() { return m_power; }
    virtual uint get_initial_hp() = 0;
    void set_hp(uint hp) { m_hp = hp; };
    Type get_type() { return m_t; }
};

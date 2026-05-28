#pragma once
#include "pokemon.h"

class Squirtle final : public Pokemon  // is-a
{
private:
    int hydroAttack;
public:
    Squirtle();
    Squirtle(int hp, int hydroAttack);
    Squirtle(const Squirtle& squirtle);
    void set(int hp);
    void set(int hp, int hydroAttack);
    int getHydroAttack() const;
};
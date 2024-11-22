#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall") {}
BrickWall::~BrickWall() {}
ATarget* BrickWall::clone() const
{
    BrickWall* obj = new BrickWall();
    return obj;
}
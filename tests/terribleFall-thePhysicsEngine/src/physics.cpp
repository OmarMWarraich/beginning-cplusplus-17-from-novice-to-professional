#include "physics.h"

// Thing::Thing(float x, float y, float radius)
// {
//   this->setPosition(x, y);
// }
// void Thing::setPosition(float x, float y)
// {
//   this->x = x;
//   this->y = y;
// }
// float Thing::getX()
// {
//   return this->x;
// }
// float Thing::getY()
// {
//   return this->y;
// }
// void Thing::applyForce(float xForce, float yForce)
// {
// }
// void Thing::update()
// {
// }

Thing::Thing(float x, float y, float radius)
  :x(x), y(y), dX(0), dY(0)
{
}
void Thing::setPosition(float x, float y)
{
}
float Thing::getX()
{
  return this->x;
}
float Thing::getY()
{
  return this->y;
}
void Thing::applyForce(float xForce, float yForce)
{
}
void Thing::update()
{
  x += dX;
  y += dY;
}

World::World(float width, float height, float gravity)
{
}
void World::addThing(Thing* thing)
{
}
bool World::didThingsCollide(Thing* thing1, Thing* thing2)
{
  return false;
}
int World::countThings()
{
  return 0;
}
void World::update()
{
}
#include "SimpleText.hpp"
#include "graphics.hpp"

using namespace genv;
using namespace std;

void SimpleText::draw()
{
    gout<<move_to(x,y)<<color(100,100,100)<<box(mx,my)<<move_to(x+15,y+20)<<color(255,0,0)<<text(vtext);
}
void SimpleText::eventHandler(event ev)
{
}

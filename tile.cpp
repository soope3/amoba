#include "tile.hpp"
#include "graphics.hpp"

using namespace genv;


void tile::draw(){

   if(status==0)
   {
       gout<<color(240,240,240);
   }else if(status==1)
   {
       gout<<color(255,0,0);
   }else if(status==2)
   {
       gout<<color(0,255,0);
   }
    gout<<move_to(x,y)<<box(mx,my);
}
void tile::eventHandler(genv::event ev)
{
    if(ev.type==ev_mouse)
    {
        parent->action(parent->jatek.playergetter(),xcord,ycord);
        status=parent->jatek.boardGetter(xcord,ycord);
    }
}
bool tile::over(int px,int py)
{
    if (px>x && px<x+mx && py>y && py<y+my)
    {
        return true;
    }else
    {
        return false;
    }
}
void tile::statussetter(int newstat)
{
    status=newstat;
}
int tile::statusgetter()
{
    return status;
}

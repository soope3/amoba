#include "window.hpp"
#include "widget.hpp"
#include "graphics.hpp"
#include <cstdlib>
#include <vector>
#include "tile.hpp"
#include "simpleText.hpp"

using namespace std;
using namespace genv;

#define max_x 400
#define max_y 400

window::window()
{
}
void window::eventloop()
{
    gout.open(max_x,max_y);
    event ev;
    endTitle= new SimpleText((max_x/2)-50,(max_y/2)-15,100,30,"GAME OVER");
   while(gin >> ev)
    {

    gout<<move_to(0,0)<<color(0,0,0)<<box(max_x,max_y);

    for(int i=0;i<30;i++)
        {
            for(int j=0;j<30;j++)
            {
                        widgets[i][j]->draw();
            }
        }
    if(jatek.endGameGetter())
    {
    if(ev.button==1)
    {
        for(int i=0;i<30;i++)
        {
            if(tfover==true)
            {
                break;
            }
            for(int j=0;j<30;j++)
            {
        if(widgets[i][j]->over(ev.pos_x,ev.pos_y)==true)
        {
        overi=i;
        overj=j;
        tfover=true;
        break;
        }else
        {
        tfover=false;
        }
            }
        }
        if(tfover==true)
        {
        widgets[overi][overj]->eventHandler(ev);
        tfover=false;
        }
    }



    }else
    {
        //endTitle = new SimpleText(max_x/2,max_y/2,100,30,"GAME OVER");
        endTitle->draw();
    }
    gout<<refresh;
    }

    for(int i=0;i<30;i++)
    {
        for(int j=0;j<30;j++)
        {
            delete widgets[i][j];
        }
    }
}

void window::action(int player,int xc,int yc)
{
    jatek.boardSetter(xc,yc);
}


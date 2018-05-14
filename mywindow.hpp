#ifndef MYWINDOW_HPP_INCLUDED
#define MYWINDOW_HPP_INCLUDED
#include "tile.hpp"
#include "SimpleText.hpp"
#include <vector>

#define max_x 400
#define max_y 400

class mywindow : public window
{
    SimpleText* endTitle;
public:
    mywindow(){
    widgets = std::vector<std::vector<Widget *>>(30,std::vector<Widget *>(30,nullptr));
    for(unsigned int i = 0; i < 30; i++)
    {
        for(unsigned int j = 0; j < 30; j++)
        {
            widgets[i][j] = new tile(11*i+10,11*j+10,10,10,this,i,j);
        }
    }

    //endTitle= new SimpleText((max_x/2)-100,(max_y/2)-30,100,30,"GAME OVER");

    }

} ;


#endif // MYWINDOW_HPP_INCLUDED

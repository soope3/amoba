#ifndef WINDOW_HPP_INCLUDED
#define WINDOW_HPP_INCLUDED
#include "graphics.hpp"
#include "widget.hpp"
#include "jatekmester.hpp"
#include <vector>

class window
{
protected:
    int overi,overj;
    bool tfover=false;
    //std::vector<Widget*>widgets;
    std::vector<std::vector<Widget*> > widgets;
    Widget* endTitle;

public:
    jatekmester jatek;
    window();
    virtual void eventloop();
    void action(int plyr,int xc,int yc);
};

#endif // WINDOW_HPP_INCLUDED

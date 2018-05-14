#ifndef WIDGET_HPP_INCLUDED
#define WIDGET_HPP_INCLUDED
#include "graphics.hpp"

class Widget
{
protected:
    int x, y, mx, my,led=0;
    bool selected = false;
    bool Wover=false;
    std::string retval;
public:
    Widget(int _x,int _y, int _mx, int _my);
    virtual bool over(int px,int py){};
    virtual void draw()=0;
    virtual void eventHandler(genv::event ev)=0;
    virtual void click(int px,int py){};
    std::string int2string(int n);
    std::string returnval();
};



#endif // WIDGET_HPP_INCLUDED

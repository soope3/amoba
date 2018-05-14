#ifndef SIMPLETEXT_HPP_INCLUDED
#define SIMPLETEXT_HPP_INCLUDED
#include <iostream>
#include "Widget.hpp"

class SimpleText : public Widget
{
    std::string vtext;
public:
    SimpleText(int _x,int _y,int _mx,int _my,std::string _vtext)
    : Widget(_x, _y, _mx, _my), vtext(_vtext){}
    void draw();
    void eventHandler(genv::event ev);
    bool over(int px,int py){};
    void click(int px,int py){};
};

#endif // SIMPLETEXT_HPP_INCLUDED

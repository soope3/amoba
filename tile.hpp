#ifndef TILE_HPP_INCLUDED
#define TILE_HPP_INCLUDED

#include "widget.hpp"
#include "window.hpp"

class tile : public Widget
{
protected:
    int status=0;
    int xcord;
    int ycord;
    window* parent;
public:
    tile(int _x, int _y, int _mx, int _my, window* _parent,int _xcord, int _ycord)
    : Widget(_x,_y,_mx,_my), parent(_parent), xcord(_xcord), ycord(_ycord){}
    void draw();
    void eventHandler(genv::event ev);
    bool over(int px,int py);
    void statussetter(int newstat);
    int statusgetter();
};

#endif // TILE_HPP_INCLUDED

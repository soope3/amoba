#include "widget.hpp"
#include <iostream>
#define max_x 400
#define max_y 400
#include <sstream>

using namespace std;

Widget::Widget(int _x, int _y, int _mx, int _my)//, bool _selected =false)
{
    x=_x,y=_y,mx=_mx,my=_my;
}
std::string Widget::int2string(int n)
{
    std::string istring;
    std::stringstream sso;
    sso << n;
    sso >> istring;
    return istring;
}
std::string Widget::returnval()
{
    return retval;
}

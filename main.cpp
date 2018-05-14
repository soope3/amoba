#include <iostream>
#include <cstdlib>
#include "graphics.hpp"
#include <vector>
#include <fstream>
#include "widget.hpp"
#include "window.hpp"
#include "mywindow.hpp"
#include "tile.hpp"

using namespace genv;
using namespace std;

#define max_x 400
#define max_y 400

int main()
{
    mywindow wwindow;
    cout<<"khm"<<endl;
    wwindow.eventloop();
    return 0;
}

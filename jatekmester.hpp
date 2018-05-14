#ifndef JATEKMESTER_HPP_INCLUDED
#define JATEKMESTER_HPP_INCLUDED
#include <vector>
#include <iostream>

class jatekmester
{
protected:
    int n,movii,movjj,round=0;
    bool endWhile,ret,endGame;
    int player=1;
    std::vector<std::vector<int> > board;
public:
    jatekmester();
    bool check(int ii,int jj,int player);
    void changePlayer();
    int playergetter();
    void boardSetter(int icord, int jcord);
    int boardGetter(int icord,int jcord);
    bool endGameGetter();
};

#endif // JATEKMESTER_HPP_INCLUDED

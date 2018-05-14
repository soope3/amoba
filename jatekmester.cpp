#include "jatekmester.hpp"
#include <iostream>
#define max_x 400
#define max_y 400
#include <sstream>

using namespace std;

jatekmester::jatekmester()
{
    endGame=true;
    board = std::vector<std::vector<int >>(30,std::vector<int>(30));
        for(int i=0;i<30;i++)
        {
            for(int j=0;j<30;j++)
            {
                board[i][j]=0;
            }
        }
}
bool jatekmester::check(int ii,int jj,int player)
{
    round+=1;
    movii=ii;
    movjj=jj;
    n=0;
    ret=false;
    endWhile=false;


    while(endWhile==false && n<4)
    {
    if(movjj>0 && ret==false)
    {
    if(board[movii][movjj-1] == player && ret==false)
    {
        n++;
        movjj--;
    }else if(ret==false)
    {
        ret=true;
        movii=ii;
        movjj=jj;
    }
    }else if(ret==false)
    {
        ret=true;
    }
    if(movjj<30 && ret==true)
    {
    if(ret==true && board[movii][movjj+1] == player)
    {
        n++;
        movjj++;
    }else if (ret==true)
    {
        endWhile=true;
    }
    }else if (ret==true)
    {
        endWhile=true;
    }
    }

    if(n==4)
    {
        return true;
    }else
    {
    n=0;
    ret=false;
    endWhile=false;
    }




    while(endWhile==false && n<4)
    {
    if(movii<30 && movjj>0 && ret==false)
    {
    if(board[movii+1][movjj-1] == player && ret==false)
    {
        n++;
        movjj--;
        movii++;
    }else if(ret==false)
    {
        ret=true;
        movii=ii;
        movjj=jj;
    }
    }else if(ret==false)
    {
        ret=true;
    }
    if(movii>0 && movjj<30 && ret==true)
    {
    if(ret==true && board[movii-1][movjj+1] == player)
    {
        n++;
        movjj++;
        movii--;
    }else if (ret==true)
    {
        endWhile=true;
    }
    }else if (ret==true)
    {
        endWhile=true;
    }
    }

    if(n==4)
    {
        return true;
    }else
    {
    n=0;
    ret=false;
    endWhile=false;
    }




    while(endWhile==false && n<4)
    {
    if(movii<30 && ret==false)
    {
    if(board[movii+1][movjj] == player && ret==false)
    {
        n++;
        movii++;
    }else if(ret==false)
    {
        ret=true;
        movii=ii;
        movjj=jj;
    }
    }else if(ret==false)
    {
        ret=true;
    }
    if(movii>0 && ret==true)
    {
    if(ret==true && board[movii-1][movjj] == player)
    {
        n++;
        movii--;
    }else if (ret==true)
    {
        endWhile=true;
    }
    }else if(ret==true)
    {
        endWhile=true;
    }
    }

    if(n==4)
    {
        return true;
    }else
    {
    n=0;
    ret=false;
    endWhile=false;
    }




    while(endWhile==false && n<4)
    {
    if(movii<30 && movjj<30 && ret==false)
    {
    if(board[movii+1][movjj+1] == player && ret==false)
    {
        n++;
        movjj++;
        movii++;
    }else if(ret==false)
    {
        ret=true;
        movii=ii;
        movjj=jj;
    }
    }else if(ret==false)
    {
        ret=true;
    }
    if(movii>0 && movjj>0 && ret==true)
    {
    if(ret==true && board[movii-1][movjj-1] == player)
    {
        n++;
        movjj--;
        movii++;
    }else if (ret==true)
    {
        endWhile=true;
    }
    }else if(ret==true)
    {
        endWhile=true;
    }
    }

    if(n==4)
    {
        return true;
    }else
    {
        return false;
    }
}
void jatekmester::changePlayer()
{
    if(player==1)
    {
        player=2;
    }else
    {
        player=1;
    }
    cout<<"player: "<<player<<endl;
}
int jatekmester::playergetter()
{
    return player;
}
void jatekmester::boardSetter(int icord, int jcord)
{
    if(board[icord][jcord]==0)
    {
    board[icord][jcord]=player;
    if(check(icord,jcord,player) || round==900)
    {
        cout<<"meow"<<endl;
        endGame=false;
    }
    changePlayer();
    }

}
int jatekmester::boardGetter(int icord,int jcord)
{
    return board[icord][jcord];
}
bool jatekmester::endGameGetter()
{
    return endGame;
}

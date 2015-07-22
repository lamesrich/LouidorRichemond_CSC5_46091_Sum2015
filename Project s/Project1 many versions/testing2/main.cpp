/* 
 * File:   main.cpp
 * Author: iMACLOUI
 *
 * Created on July 9, 2015, 9:45 PM
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;


void win(int, int);
void lose(int, int);
void bJack(int, int);
void pBust(int);
void dBust(int);
void push(int, int);
int main(int argc, char** argv) 
{
    int dSum, i, sum=20;
    dSum=21;
    if(sum>21)
    {
        pBust(sum);
    }
    else if(dSum>21)
    {
        dBust(dSum);
    }
    else if(dSum==21)
    {
        bJack(sum, dSum);
    }
    else if(dSum<sum)
    {
        win(sum, dSum);
    }
    else if(dSum>sum)
    {
        lose(sum, dSum);
    }
    else if(dSum==sum)
    {
        push(sum, dSum);
    }
    
    
    //cout <<"sum mod: "<<i;
    //Exit Stage Right!
    return 0;
}


void win(int pSum, int dSum)
{
    if(pSum>dSum)
    {
        cout <<"YOU WIN\n";
    }
    
}
void bJack(int pSum, int dSum)
{
    if(pSum==21)
    {
        cout <<"BLACKJACK\n";
    }
    else if(dSum==21)
    {
        cout<<"YOU LOSE\nDEALER BJK\n";
    }
}
void pBust(int pSum)
{
    if(pSum>21)
    {
        cout <<"BUST!!! YOU LOSE\n";
    }
    
}
void push(int pSum, int dSum)
{
    if(pSum==dSum)
    {
        cout <<"Push\n";
    }
}
void lose(int pSum, int dSum)
{
    cout <<"YOU LOSE\n";
}
void dBust(int dSum)
{
    cout <<"\nDealer Bust\nYOU WIN\n";
}
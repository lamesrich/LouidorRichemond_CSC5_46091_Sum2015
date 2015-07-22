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

int pDeal1(int);
void winLose(int, int);
void bJack(int, int);
void pBust(int);
void push(int, int);
int main(int argc, char** argv) 
{
    int dSum, i, sum=20;
    dSum=pDeal1(i);
    if(dSum>21)
    {
        winLose(sum, dSum);
    }
    if(dSum==21)
    {
        bJack(sum, dSum);
    }
    if(dSum<sum)
    {
        winLose(sum, dSum);
    }
    if(dSum>sum)
    {
        winLose(sum, dSum);
    }
    if(dSum==sum)
    {
        push(sum, dSum);
    }
    
    
    //cout <<"sum mod: "<<i;
    //Exit Stage Right!
    return 0;
}



int pDeal1(int sum, int )
{
    //seeding random number 
    //int seed;
    //seed=time(0);
    srand(time(0));
    
    //card one and two deal
    int card1, card2;
    
    for(int x=0; x<52; x++)
    { 
        card1 = rand()% 1 +11;
        card2 = rand()% 1 +10;
    }
    sum=card1+card2;
    
    //cout<<"\nCard 1: "<<card1<<" Card 2: "<<card2<<"\nSUM = "<<sum;
       
    //error checking for bust on first hand

    if (card1 == 11 && card2 == 11) 
    {
        sum -= 1;
        cout << "Card 1: " << card1 << " Card 2: " << card2 << "\nSUM = " << sum;
    } 
    else 
    {
        cout <<"DEALER\n";
        cout << "Card 1: " << card1 << " Card 2: " << card2 << "\nSUM = " << sum;
    }
    cout <<endl;
    int dCard, dSum, sum1, count=2;
    
    if(sum<=17)
    {
        do 
        {
         
         count++;
         
         if(sum>=17)
         {
             sum1=2;
         }
         else
         {
             for (int x = 0; x < 52; x++)
            {
                dCard = rand() % 11 + 1;

            }
             sum += dCard;
      
            cout <<"Card "<<count<<": "<<dCard<<" ";
          } 
         
         }while(sum1!=2);
         cout <<"\nSum = "<<sum;
    }
    return dSum;
    
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
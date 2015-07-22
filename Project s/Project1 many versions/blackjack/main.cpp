/*
 * File:   main.cpp
 * Author: iMACLOUI
 *Black jack
 * Created on July 9, 2015, 8:10 PM
 */

//System Library
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
//int pDeal1(int);
int hitStay(int, int);
int dDeal(int, int, int);
void win(int, int);
void lose(int, int);
void bJack(int, int);
void pBust(int);
void dBust(int);
void push(int, int);

//Execution Begins Here!
int main(int argc, char** argv)
{
   
   
    srand(time(0));
    int sum, sum1, hit, pSum;
    char userIn;
    //card one and two deal
    int card1, card2, dcard1, dcard2, dSum;
    //player cards
    do
    {
        for(int x=0; x<52; x++)
    {
        card1 =  rand()% 1 + 10;
        card2 =  rand()% 1 + 10;
        dcard1 = rand()% 1 + 10;
        dcard2 = rand()% 1 + 10;
    }
    //adding sum of cards
     cout<<"******************************Dealer ***************************\n";
     cout<<"\t\tCard 1: "<<card1<<" Card 2: hidden \n";
            dSum=dcard1+dcard2;//dealer sum
     cout<<"****************************************************************\n";
     cout<<endl;
    sum=card1+card2;//player sum
    
    cout<<"\t\t\tPlayer\n\t\tCard 1: "<<card1<<" Card 2: "<<card2;
   

    //error checking for bust on first hand
    //if(sum==22 || dSum==22)
    //{
         if(card1==11 && card2==11)
         {
             cout<<endl;
             sum-=2;
             cout<<"Card 1: "<<card1<<" Card 2: "<<card2<<"\nSUM = "<<sum;
         }
    else if(dcard1==11 && dcard2==11)
        {
             cout <<endl<<endl;
             dSum-=2;
             cout<<"Card 1: "<<dcard1<<" Card 2: Hidden "<<endl;
        }  
    //}
   
    
    else if((card1==1 && card2==11) || (card1==11 && card2==1)||
       (card1==1 && card2==10) || (card1==10 && card2==1))
    {
        sum=21;
        cout <<endl<<"\t\t\tSUM = "<<sum<<endl;
        cout<<"\t\tYOU WIN BLACKJACK!!!\n";
    }
    else if ((dcard1==1 && dcard2==11) || (dcard1==11 && dcard2==1)||
       (dcard1==1 && dcard2==10) || (dcard1==10 && dcard2==1))
    {
        dSum=21;
        cout <<endl;
        cout<<"YOU LOOSE\nDEALER BLACKJACK\n";
        cout<<"Card 1: "<<dcard1<<" Card 2: "<<dcard2<<"\nSUM = "<<dSum<<endl;
    }
    else if(sum<21 || dSum<21)
    {
    cout<<"\n\t\t\tSUM = "<<sum<<endl;
    cout <<"\n\t\tHit (1) or Stay(2): ";
    cin>>hit;
    pSum=hitStay(hit, sum);
    cout <<"pSum is "<<pSum;
    if(pSum>21)
    {
        pBust(sum);
    }
    else if(pSum==21)
    {
        bJack(pSum, dSum);
    }
    
    else if(pSum<21)
    {  cout<<endl;
        cout<<"******************************Dealer ****************************\n";
        dSum=dDeal(dcard1, dcard2, dSum);
        cout<<"******************************************************************\n";
    }
    
    
    if(dSum>21)
    {
        dBust(dSum);
    }
    else if(dSum==21)
    {
        bJack(pSum, dSum);
    }
    else if(dSum<pSum)
    {
        win(pSum, dSum);
    }
    else if(dSum>pSum)
    {
        lose(pSum, dSum);
    }
    else if(dSum==pSum)
    {
        push(pSum, dSum);
    }
    
    }
    //prompting user to play again
    cout <<"Play Again y/n ?: ";
    cin >> userIn;
    }
    while(userIn!='n');
    cout <<endl;
    cout <<"Thank You For Playing\n";
 
    //exit stage right
    return 0;
}

int hitStay(int uDec, int sum)
{
    srand(time(0));
    int count=2;
    int card;
   
    //card 3 and beyond
    if(uDec==1)
{

        do 
        {
            //cout<<endl;

            for (int x = 0; x < 52; x++)
            {
                card = rand() % 11 + 1;

            }

            count++;
            sum += card;
            cout << "Card " << count << ": " << card;
            cout << "\nsum = " << sum << " ";
            //if player or dealer bust
            if(sum>21 || sum==21)
            {
                uDec=2;
            }
            else
            {
               cout << "\nHit (1) or Stay(2): ";
               cin >> uDec; 
            }
        } 
        while (uDec!=2);

        
    }
    return sum;
   
   
}

int dDeal(int dCard1, int dCard2, int dSum)
{
    int sum1, dCard;
    srand(time(0));//random
    int count=2;//counter
    
    if (dCard1 == 11 && dCard2 == 11) 
    {
        dSum -= 2;
        cout << "Card 1: " << dCard1 << " Card 2: " << dCard2 
             << "\nSUM = " << dSum;
    } 
    else 
    {
        cout <<"DEALER\n";
        cout << "Card 1: " << dCard1 << " Card 2: " << dCard2 
             << "\nSUM = " << dSum;
    }
    
    cout <<endl;cout <<"DEALER\n";
    cout << "Card 1: " << dCard1 << " Card 2: " << dCard2 
         << "\nSUM = " << dSum << endl;
    
  
    
    if(dSum<=17)
    {
        do 
        {
         
         count++;
         
         if(dSum>=17)
         {
             sum1=2;
         }
         else
         {
             for (int x = 0; x < 52; x++)
            {
                dCard = rand() % 11 + 1;

            }
             dSum += dCard;
      
            cout <<"Card "<<count<<": "<<dCard<<" ";
          } 
         
         }while(sum1!=2);
         cout <<"\nSum = "<<dSum;
         cout<<endl;
    }
    return dSum;
    
}

/******************************************************************************
*********************************** winLose ***********************************
 *
 *
 *
 ******************************************************************************/

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
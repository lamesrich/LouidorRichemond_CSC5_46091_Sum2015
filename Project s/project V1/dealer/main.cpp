/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 20, 2015, 7:20 PM
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int dCard(int, int, int);

int main(int argc, char** argv)
{

     
    srand(time(0));
    int sum, dSum, hit, sumc;
    char userIn;
    //card one and two deal
    int card1, card2, dcard1, dcard2;
    //player cards
    do
    {
        for(int x=0; x<52; x++)
    {
        card1 = rand()% 11 +  1;
        card2 =  rand()% 11 + 1;
        dcard1 = rand()% 11 +  1;
        dcard2 =  rand()% 11 + 1;
    }
    //adding sum of cards
    cout<<"Dealer\nCard 1: "<<card1<<" Card 2: hidden \n";
    sum=card1+card2;
    dSum=dcard1+dcard2;
    cout<<"Player\nCard 1: "<<card1<<" Card 2: "<<card2<<"\nSUM = "<<sum;
   

    //error checking for bust on first hand
     if(sum==22||dSum==22)
    {
         if(card1==11 && card2==11)
         {
             sum-=2;
             cout<<"Card 1: "<<card1<<" Card 2: "<<card2<<"\nSUM = "<<sum;
         }
         else
         {
             cout<<"Card 1: "<<card1<<" Card 2: "<<card2<<"\nSUM = "<<sum;
         }
   
    }
   
     dCard(dcard1, dcard2, dSum);
     if(dSum>16)
     {
         cout <<"Dealer win!!!"<<endl;
     }
     else if (dSum == 15)
     {
         cout <<"Push";         
     }
     else if(dSum<21)
     {
         cout <<"YOU WIN!!!"<<endl;
     }
     else if(dSum==21)
     {
         cout <<"YOU LOOSE!!!"<<endl;
     }
     
     
  
    //prompting user to play again
    cout <<"Play Again y/n ?: ";
    cin >> userIn;
 
    }
    while(userIn!='n');
   
    cout <<"\nThank You For Playing\n";
 
    return 0;
}




int dCard(int dCard1, int dCard2, int dSum)
{
    int card;
    int count=2;
    int sum=0;
    cout<<"\n\nDealer Cards\n";
    cout<<"Card 1: "<<dCard1<<" Card 2: "<<dCard2<<" Sum = "<<dSum<<endl;
    do 
    {
         for (int x = 0; x < 52; x++)
            {
                card = rand() % 11 + 1;

            }
         count++;
         dSum += card;
         if(dSum>=15)
         {
             sum=2;
         }
         cout <<"Card "<<count<<": "<<card<<" Sum = "<<dSum<<endl;
        
    }while(sum!=2);
    return dSum;
}

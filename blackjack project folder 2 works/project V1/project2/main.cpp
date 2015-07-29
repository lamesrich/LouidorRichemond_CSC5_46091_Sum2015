/*
 * File:   main.cpp
 * Author: iMACLOUI
 *
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
void winLose(int);
//Execution Begins Here!
int main(int argc, char** argv)
{
   
   
    srand(time(0));
    int sum, sum1, hit, sumc;
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
    sum1=dcard1+dcard2;
    cout<<"Player\nCard 1: "<<card1<<" Card 2: "<<card2<<"\nSUM = "<<sum;
   

    //error checking for bust on first hand
     if(sum==22||sum1==22)
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
   
  
    cout <<"\nHit (1) or Stay(2): ";
    cin>>hit;
    sumc=hitStay(hit, sum);
    if(sumc>21||sumc==21||sumc<21)
    {
     winLose(sumc);
    }
    cout <<"\n\nSum ="<<sumc<<endl;
   
   
   
    //prompting user to play again
    cout <<"Play Again y/n ?: ";
    cin >> userIn;
    }
    while(userIn!='n');
   
    cout <<"Thank You For Playing\n";
 
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


/******************************************************************************
*********************************** winLose ***********************************
 *
 *
 *
 ******************************************************************************/
void winLose(int sumc)
{
    cout << endl;
    if(sumc==21)//automatic win for sum equal to 21
    {
        cout <<"YOU WON BLACK JACK!!!"<<endl;
               
    }
  
    else if(sumc>21)//bust if sum of cards over 21
    {
        cout <<"YOU BUST, YOU LOOSE!!!"<<endl;
              
    }
  
   
    /*else if(sumc>dealer)
    {
       
        cout <<"YOU WON!!!"<<endl;
    }
    else if(sumc<dealer)
    {
       
        cout <<" YOU LOOSE!!!"<<endl;
    }
     if(dealer==21)//automatic win for sum equal to 21
    {
       cout <<"YOU LOOSE!!!"<<endl;
       
    }
  
     else if(dealer > 21)//bust if sum of cards over 21
    {
        cout <<"YOU WIN!!!"<<endl;
       
    }
    else
    {
        cout <<"PUSH!!!\n";
    }
    */
}
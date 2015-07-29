/*
 * File:   main.cpp
 * Author: Richemond Louidor
 * Project 1 ddssd
 * Purpose: Black jack, Friendly blackjack game against a basic A/I
 * Created on July 9, 2015, 8:10 PM
 */
//System library
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>


using namespace std;
//function prototypes
void error1(int [], int[], int [], const int);
void error2(int, int[], int);
void hitStay(string [], int[], const int, int);
void win();
void lose();


//execution begins here

int main(int argc, char** argv) 
{
    //declaring variables
    int y = 0, ct = 0, ct2 = 0, ct3 = 0, ct4;
    const int SIZE = 3;

    srand(time(0));
    //prompting user to enter number of players
    cout << "How many players: \n";
    //cin>> SIZE;

    string name[100] = {"KH", "RL", "ML"};
    int bet[SIZE];
    int chips[SIZE] = {20, 50, 40};
    int card[SIZE];
    int card2[SIZE];
    int sum[SIZE];


    //prompting players to enter name and buy in 
    for (int x = 0; x < SIZE; x++) 
    {
        ct++;
        cout << "Enter player " << ct << " Name: ";
        //cin>>name[x];
        cout << " buy in $";
        //cin >>chips[x];
        cout << endl;
    }
    cout << endl;

    //
    for (int l = 0, n = 0; n < 52, l < SIZE; n++, l++) 
    {
        card[n] = rand() % 11 + 1;
        card2[n] = rand() % 11 + 1;
        sum[l] = card[l] + card2[l];

    }
    cout << endl;

   for (int i = 0; i < SIZE; i++) 
    {
        cout << "\t" << name[i] << "\nCard 1: " << card[i] << " Card 2: " 
             << card2[i] << " Total: " << sum[i] << endl << endl;

    }

    //detecting errors for first two cards dealt
    error1(card, card2, sum, SIZE);
    //hit or stay decision for each player
    hitStay(name, sum, SIZE, ct4);  

    for (int i = 0; i < SIZE; i++) 
    {
        cout << name[i] << " Total: " << sum[i] << endl;

    }



    return 0;
}

void hitStay(string name[], int pSum[], const int SZ, int uDec)
{
    srand(time(0));
    int card;//counter initialize to 2 then next card dealt is the card 3
    int count=2; //player card 3
    uDec=1;
    if(uDec==1)
    {
        for (int t = 0; t < SZ; t++) 
        {
           
             cout << name[t] << " total: " << pSum[t]<<endl;
             cout << "hit(1) or stay(2): ";
             cin >> uDec;
             cout << endl;
             
            while (uDec != 2) 
            { 
                count++;
                            
                for (int v = 0; v < 52; v++) 
                {
                    card = rand() % 11 + 1; //random card generator
                   
                } 
                if(card==11 && pSum[t] >11)
                {
                    error2(card, pSum, SZ);
                }
                else 
                {
                    pSum[t] += card; //adding card to sum
                }
                
                cout <<"Card "<<count <<": "<<card
                     << "  new total: " << pSum[t]<<endl;
                if(pSum[t]>21)
                {
                    cout <<"lose\n";
                    count=2;
                    uDec =2;
                }
                else if(pSum[t]==21)
                {                       
                    cout <<"BJK\n";
                    count=2;
                    win();
                    uDec=2;
                }
                else if(pSum[t]<21)
                {                       
                   cout << "hit(1) or stay(2): ";
                   cin >> uDec;
                   if(uDec==2)
                   {
                       count =2;
                   }
                }

            }
        }
        
    }
}

/*************************************** error1 ******************************
 * 
 * 
 *
 */
void  error1(int card [], int card2 [], int sum[], const int SIZE)
{
    int ct3=0;
    //players win blackjack
 for (int l=0; l<SIZE; l++)
  {
     ct3++;

      if ((card[l]==1 && card2[l]==11) || ((card[l]==11 && card2[l]==1)))
        {
            sum[l] = 21;
            cout << endl;
            cout << "YOU WIN BLACKJACK\n";
            cout << "Card 1: " << card[l] << " Card 2: "
                 << card2[l] << "\nTotal: " <<ct3<<" = "<<sum[l]<< endl;
        }
      else if ((card[l]==10 && card2[l]==1) || ((card[l]==1 && card2[l]==10)))
        {
            sum[l] = 21;
            //cout << endl;
            cout << "YOU WIN BLACKJACK\n";
            cout << "Card 1: " << card[l] << " Card 2: "
                 << card2[l] << "\nTotal: " <<ct3<<" = "<<sum[l]<< endl;
        }
     else if (card[l]==1 && card2[l]==1)
        {
            sum[l] = 12;
            //cout << endl;
            cout << "YOU WIN BLACKJACK\n";
            cout << "Card 1: " << card[l] << " Card 2: "
                 << card2[l] << "\nTotal: " <<ct3<<" = "<<sum[l]<< endl;
        }
       
    }
 
   
}
/*************************************** error2 ******************************
 * 
 * 
 *
 */
void error2(int card, int sum[], int SZ)
{
    for(int x=0; x<SZ; x++)
    {
    if(sum[x]>11 && card ==11 )
    {
       sum[x]+=1;
    }
    }
}
void error3(int chips[], int bet[], int SZ)
{
    for(int x=0; x<SZ; x++)
    {
        if(chips[x]<10)
        {
            cout <<"Min Buy in is $10.00"<<endl;
        }
        else if(bet[x]<10)
        {
            cout <<"Min Bet is $10.00"<<endl;
        }
         else if(bet[x]>500)
        {
           cout <<"Max Bet is $500.00"<<endl;
        }
        else if(bet[x]>chips)
        {
           cout <<"Your Max Bet is: $"<<chips[x]<<endl;
        }
    }
}

void lose()
{
    cout <<"\nyou lose\n\n";
}
void win()
{
    cout <<"\nyou Win!!!\n\n";
}


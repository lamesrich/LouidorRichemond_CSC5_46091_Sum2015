/*
 * File:   main.cpp
 * Author: Richemond Louidor
 * Project 1
 * Purpose: Black jack, Friendly blackjack game against a basic A/I
 * Created on July 9, 2015, 8:10 PM
 */

//System Library
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//declared file I/O as a global variable to used throughout entire program
ofstream file;

//Function Prototypes
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
   
    char userIn;//user decision to play game again
    //card one and two deal
    int card1,//Player card 1
        card2, //Player card 2
        dcard1,//Dealer card 1
        dcard2, //Dealer card 2
        dSum,   //Dealer sum
        hit,    //Player hit
        pSum,//Player sum
        count=0; //game counter 
    string name;//Player name 
    srand(time(0));//random number generator 
    file.open ("BJK.txt");//creating file
    //greeting and getting player name 
    cout <<"\tWELCOME TO LOUI BLACKJACK \n";
    cout <<"Input Your Name: ";
    cin >> name;
    //writing to file
    file <<"PLAYER: "<<name<<endl;
    
    //Game begins here
    do 
    {
        count++;
        cout <<"\n\n\t\t\tGAME: "<<count<<endl;
        file <<"\n\n\t\t\tGAME: "<<count<<endl;//game counter for file
        
        for (int x = 0; x < 52; x++)
        {
            card1 = rand() % 11 + 1;//player card 1 random select 
            card2 = rand() % 11 + 1;//player card 2 random select
            dcard1 = rand() % 11 + 1;//dealer card 1 random select
            dcard2 = rand() % 11 + 1;//dealer card 2 random select
        }
        //dealer card 1 output 
        cout<<"******************************Dealer ************************\n";
        cout << "\t\tCard 1: " << dcard1 << " Card 2: hidden \n";
        dSum = dcard1 + dcard2; //dealer sum
        cout<<"*************************************************************\n";
        
        //********************* writing dealer to file ************************/
        file<<"******************************Dealer ************************\n";
        file<< "\t\tCard 1: " << card1 << " Card 2: hidden \n"
            <<"*************************************************************\n";
        /**********************************************************************/
        cout << endl;
        pSum = card1 + card2; //player sum
        //player card output
        cout<<"\t\t\t"<<name<<"\n\t\tCard 1: " << card1 << " Card 2: " << card2;
        
        //writing player output to file
        file<<"\t\t\t"<<name<<"\n\t\tCard 1: " << card1 << " Card 2: " << card2;
        file<<endl;

        //error checking for bust on first hand dealer and player 
        if (card1 == 11 && card2 == 11) 
        {
            cout << endl;
            pSum -= 2;
            cout<<"Card 1: " <<card1 <<" Card 2: " << card2 << "\nSUM = "<<pSum;
            //writing to file
            file<<"Card 1: " <<card1 <<" Card 2: " << card2 << "\nSUM = "<<pSum;
        }
        else if (dcard1 == 11 && dcard2 == 11) 
        {
            cout << endl << endl;
            dSum -= 2;
            cout << "Card 1: " << dcard1 << " Card 2: Hidden " << endl;
            //writing to file
            file<< "Card 1: " << dcard1 << " Card 2: Hidden " << endl;
        }
            

        //checking if the first two cards is a 1 & 10 or 1 & 11 for automatic
        //blackjack by both dealer and player
        else if ((card1 == 1 && card2 == 11) || (card1 == 11 && card2 == 1) ||
                (card1 == 1 && card2 == 10) || (card1 == 10 && card2 == 1)) 
        {
            pSum = 21;
            cout << endl << "\t\t\tSUM = " << pSum << endl;
            cout << "\t\tYOU WIN BLACKJACK!!!\n";
            //writing to file
            file << endl << "\t\t\tSUM = " << pSum << endl;
            file <<"\t\tYOU WIN BLACKJACK!!!\n";
        }
        //dealer automatic blackjack 
        else if ((dcard1 == 1 && dcard2 == 11)||(dcard1 == 11 && dcard2 == 1) ||
                (dcard1 == 1 && dcard2 == 10) || (dcard1 == 10 && dcard2 == 1))
        {
            dSum = 21;
            cout << endl;
            cout << "YOU LOOSE\nDEALER BLACKJACK\n";
            cout << "Card 1: " << dcard1 << " Card 2: " 
                 << dcard2 << "\nSUM = " << dSum << endl;
            
            //writing to file
            file<<"\nYOU LOOSE\nDEALER BLACKJACK\n"
                 << "Card 1: " << dcard1 << " Card 2: " 
                 << dcard2 << "\nSUM = " << dSum << endl;
        }
        else if (pSum < 21 || dSum < 21) 
        {
            cout << "\n\t\t\tSUM = " << pSum << endl;//output sum
            if (pSum < 21)//player deal 3rd card
            {
                cout << "\n\t\tHit (1) or Stay(2): ";
                cin>>hit;
                //writing to file
                file <<"\n\t\tHit (1) or Stay(2): "<<hit<<endl;

                pSum = hitStay(hit, pSum);
            }

            if (pSum > 21) //player bust
            {
                pBust(pSum);
            } 
            else if (pSum == 21)//player hit blackjack
            {
                bJack(pSum, dSum);
            }
            else if (pSum < 21) //player hit stay then dealer deal third card
            {
                cout << endl;
                cout << "******************************Dealer "
                     <<"****************************\n";
                dSum = dDeal(dcard1, dcard2, dSum);
                cout << "****************************************"
                     << "**************************\n";
                               
            }

            //dealer bust
            if (dSum > 21) 
            {
                dBust(dSum);
            } 
            else if (dSum == 21) //dealer BlackJack
            {
                bJack(pSum, dSum);
            } 
            else if (dSum < pSum)//dealer sum less than player
            {
                win(pSum, dSum);
            } 
            else if (dSum > pSum)//dealer sum greater than player 
            {
                lose(pSum, dSum);
            } 
            else if (dSum == pSum) //dealer sum equal player game is push
            {
                push(pSum, dSum);
            }

        }
        //prompting user to play again
        cout << "Play Again y/n ?: ";
        cin >> userIn;
        //writing to file
        file<<"Play Again y/n ?: "<<userIn<<endl;
        
    }   
    while (userIn != 'n');
    cout << endl;
    cout << "Thank You For Playing\n";
    //writing to file
    file<<"\nThank You for Playing\n";
    file.close();
    //exit stage right
    return 0;
}
/*******************************************************************************
 *********************************** hitStay ***********************************
 * hitStay - player hit or stay if sum is less than 21 
 * uDec, pSum is pass by value
 * deals player 3rd card and beyond until player wishes to stop
 * writes output to file also
 * returns player sum to main
 */
int hitStay(int uDec, int pSum)
{
    srand(time(0));
    int count=2;//counter initialize to 2 then next card dealt is the card 3
    int card; //player card 3 
   
    //card 3 and beyond
    if(uDec==1)
    {

        do 
        {
            for (int x = 0; x < 52; x++)
            {
                card = rand() % 11 + 1;//deals player random cards

            }

            count++;
            pSum += card;
            cout << "Card " << count << ": " << card;
            cout << "\nsum = " << pSum << " ";
             //writing to file
            file << "Card " << count << ": " << card;
            file << "\nsum = " << pSum << " ";
            
            //deciding if player bust or hit blackjack
            if(pSum>21 || pSum==21)
            {
                uDec=2; 
            }
            else
            {
               cout << "\nHit (1) or Stay(2): ";
               cin >> uDec; 
            //writing to file
            file <<"\nHit (1) or Stay(2): "<<uDec;
        }
        } 
        while (uDec!=2);//loops end if uDec =2

        
    }
    return pSum;
   
   
}
/*******************************************************************************
 *********************************** dDeal *************************************
 * dDeal - Dealer deal third card 
 * dSum, dCard1, dCard22 is pass by value
 * deals dealer 3rd card and beyond until dealer sum is greater or equal to 17
 * writes output to file also
 * returns dealer sum to main
 */

int dDeal(int dCard1, int dCard2, int dSum)
{
    int sum1, dCard;
    srand(time(0));//random
    int count=2;//counter
    
    //reveal dealer card 1 and card 2 plus sum
    cout <<endl;
    cout <<"DEALER\n";
    cout << "Card 1: " << dCard1 << " Card 2: " << dCard2 
         << "\nSUM = " << dSum << endl;
     //writing to file
    file <<endl;cout <<"DEALER\n";
    file << "Card 1: " << dCard1 << " Card 2: " << dCard2 
         << "\nSUM = " << dSum << endl;
    
  
    //dealer third card deal begins here
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
                dCard = rand() % 11 + 1;//dealer random deal for 3rd card

            }
             dSum += dCard;
             //output card until dealer sum is greater than 17
            cout <<"Card "<<count<<": "<<dCard<<" ";
            //writing to file
            file <<"Card "<<count<<": "<<dCard<<" ";
          } 
         
         }while(sum1!=2);
         cout <<"\nSum = "<<dSum;
         cout<<endl;
         //writing to file
         file <<"\nSum = "<<dSum;
    }
    return dSum;
    
}

/*******************************************************************************
 *********************************** win ***************************************
 * win- player win if sum greater than dealer 
 * dSum, pSum is pass by value
 * output you win
 * writes output to file also
 * returns nothing
 */

void win(int pSum, int dSum)
{
    if(pSum>dSum)
    {
        cout <<"YOU WIN\n";
         //writing to file
        file <<"YOU WIN\n";
    }
    
}
/*******************************************************************************
 * ******************************** bJack **************************************
 * bJack -> player or dealer blackjack if sum equals to 21
 * dSum, pSum is pass by value
 * output BlackJack or you lose dealer blackjack
 * writes output to file also
 * returns nothing
 */
void bJack(int pSum, int dSum)
{
    if(pSum==21)
    {
        cout <<"BLACKJACK\n";
         //writing to file
        file <<"BLACKJACK\n";
    }
    else if(dSum==21)
    {
        cout<<"YOU LOSE\nDEALER BLACKJACK\n";
         //writing to file
        file <<"YOU LOSE\nDEALER BJK\n";
    }
}
/*******************************************************************************
 * ******************************** pBust ***************************************
 * pBust- player bust if sum greater than 21
 * pSum is pass by value
 * output dealer bust player win
 * writes output to file 
 * returns nothing
 */
void pBust(int pSum)
{
    if(pSum>21)
    {
        cout <<"BUST!!! YOU LOSE\n";
        //writing to file
        file <<"BUST!!! YOU LOSE\n";
    }
    
}
/*******************************************************************************
 * ******************************** push ***************************************
 * push- game push if player sum = dealer sum
 * dSum and pSum is pass by value
 * output dealer bust player win
 * writes output to file also
 * returns nothing
 */
void push(int pSum, int dSum)
{
    if(pSum==dSum)
    {
        cout <<"Push\n";
         //writing to file
        file <<"Push\n";
    }
}
/*******************************************************************************
 * *********************************lose***************************************
 * lose- player lose if over 21 or sum total less than dealer
 * dSum and pSum is pass by value
 * output you lose
 * writes output to file also
 * returns nothing
 */
void lose(int pSum, int dSum)
{
    cout <<"YOU LOSE\n";
     //writing to file
    file <<"YOU LOSE\n";
}
/*******************************************************************************
 * *********************************dBust***************************************
 * dBust- dealer bust if dealer sum is over 21
 * dSum is pass by value
 * output dealer bust player win
 * writes output to file also
 * returns nothing
 */
void dBust(int dSum)
{
    if(dSum>21)
    {
     cout <<"\nDealer Bust\nYOU WIN\n";
      //writing to file
     file <<"\nDealer Bust\nYOU WIN\n";
    }
}
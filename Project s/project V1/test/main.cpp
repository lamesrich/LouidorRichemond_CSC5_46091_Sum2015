/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 20, 2015, 5:28 PM
 */
#include <iostream>
#include <cstdlib>
int hitStay(int, int);
void dCard();

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    int userDec;
    int sum, x, y;
    sum=14;
    y=0;
    //player hit or stay
    cout<<"hit (1) & stay(2): ";
    cin>>userDec;
    x=hitStay(userDec, sum);
    if(x>21)
    {
        cout <<"Your lose";
    }
    else
    {
        cout <<"\nYou won blackjack";
    }
    
    if(sum<21)
    {
        dCard();
    }
    
    return 0;
}

/*****************************************************************************
 *hitStay function
 * 
 * 
 * 
 */
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
void dCard()
{
    int sum;
    cout<<"Dealer Cards\n";
    hitStay(sum, int);
    
}

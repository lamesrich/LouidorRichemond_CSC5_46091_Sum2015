/* 
 * File:   main.cpp
 * Author: iMACLOUI
 *
 * Testings
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
using namespace std;

//these are global variables for the quantity of cards.
int card1, card2, card3, card4, card5;
int dCard1, dCard2, dCard3, dCard4, dCard5;
int totCards;
int chips;

//**************************************************

void deal()
{
   
    card1 = rand() % 2 + 1;
    card2 = rand() % 11 + 1;
}
void dealCard3()
{
   
    card3 = rand() % 11 + 1;
    
}
void dealCard4()
{
   
    card4 = rand() % 11 + 1;
    
}
void dealCard5()
{
    
    card5 = rand() % 11 + 1;
    
}

void win()
{
   cout << "You win this hand \n";
   
}
void lose()
{
    
   cout << "You lose dealer wins \n";
}

//*********************************************************
//*********************************************************
//dealer functions
void dealerCard1()
{
    
    dCard1 = rand() % 2 +1;
    dCard2 = rand() % 11 +1;
}
void dealerCard3()
{
    
    dCard3 = rand() % 11 +1;
}
void dealerCard4()
{
    
    dCard4 = rand() % 11 +1;
}
void dealerCard5()
{
    
    dCard5 = rand() % 11 +1;
}

int main()
 {
    srand(time(0));
         cout << "Welcome user, please tell me your name: ";
         string name;
         cin >> name;
   
        
     cout << "Please choose a game you would like to play\n\n1 for BlackJack \t"
          << "2 for craps \n\n"<< "3 for poker\t\t" << "4 for slots \n\n\t\t";
          int games;
          cin >> games;
          cout <<endl;
          switch (games)
          {
              case 1:
                  cout << "You have selected to play Blackjack "<< name << endl;
                  break;
                 
              case 2:
                  cout << "You have selected to play craps "<< name << endl;
                  break;
                     
              case 3:
                  cout << "You have selected to play poker "<< name << endl;
                  break;
                     
              case 4:
                  cout << "You have selected to play slots "<< name << endl;
                  break;
                     
              default:
                  cout << "Wrong input please enter numbers from 1-4 "
                       << name << endl;;
        
          }
          
        //dealing the first two cards from function deal()
        cout << "PLease press enter to deal cards \n";
        
           dealerCard1();
           cout << "Dealer \nCard 1 : " << dCard1 << endl 
                << "Card 2: "<<endl;
           int totDCard;
           totDCard = dCard1 + dCard2;
           cout << "Dealers total card is: " << totDCard << endl;
           
        
       //determining if card1 or card2 is an ace or not
           string ace1="A";
           string ace2="A";
           string ace3="A";
           string ace4="A";
        //checking to see if dealers first two cards are aces or not   
        if (dCard1==1)
        {
            cout << "Card 1: " << ace1 << endl;
            card1 = 11;
               
        }
        else if(dCard1==11)
        {
            cout <<"Card 1: " << ace2 << endl;
            card2= 11;
            
        }
        if (dCard2==1)
        {
            cout << "Card 2: " << ace1 << endl;
            dCard1 = 11;
               
        }
        else if(dCard2==11)
        {
            cout <<"Card 2: " << ace2 << endl;
            dCard2= 11;
            
        }
        //checking to see if players first two cards are aces or not
        if(card1 == 11) 
        {
            cout << "Card 1: " << ace1 << endl;
            card1 = 11;
        } 
        else if(card1 == 1)
        {
            cout << "Card 1: " << ace1 << endl;
            card1 = 11;      
        }
           
        if(card2 == 11) 
        {
            cout << "Card 1: " << ace2 << endl;
            card2 = 11;
        } 
        else if(card1 == 1)
        {
            cout << "Card 1: " << ace2 << endl;
            card2 = 11;      
        }
        //adding player cards
        deal();
        int totCard = card1 + card2;
        cout <<"Player\n\Card 1: " <<card1 << endl << "Card 2: "<< card2
             << "\ntotal: " << totCard << endl;
           
        
        //deciding to see if player win or not on first deal
        if(totCard == 21)
        {
            win();        
           
        }
        else if(totCard > 21)
        {
               lose();
        }
        //deciding if player want to hit or stay
        string hitStay;
        
        cout << "If you would like to hit press 'h' and enter or 's' to stand: " 
             << endl;
        cin >> hitStay;
        
        if (hitStay == "h")
        {
            
            dealCard3();
        
            
            if(card3 ==1 || card3 ==11)
            {
                cout << "Card 3 is an ace, please enter 1 for its value\n"
                     <<" to be 1 or enter 11 for the value to be eleven \n";
                int card3AceVal;
                
                cin >>card3AceVal;
                if(card3AceVal==1)
                {
                    cout << "Card 3: "<< ace3 <<endl;
                    card3=1;
                    
                }
                else if(card3AceVal==11)
                {
                    cout << "Card 3: "<<  ace3 <<endl;
                    card3=11;
                }
            
            cout <<"Card 1: "<< card1 <<endl <<"Card 2: "
                 <<card2<<endl <<"Card 3: "<< ace3 << endl;
            
            totCard = totCard +card3;
            cout << "Your card total now is: " << totCard << endl;
            }
        }
        else if(hitStay == "s")    
        {
            cout << "Card 1: " <<card1 << endl << "Card 2: "<< card2 <<endl;
            int totCard = card1 + card2;
                   
        }
    
         totCard = totCard + card3;
        cout << "Cards add up to "<< totCard<<endl;
        if(totCard == 21)
        {
            win();        
           
        }
        else if(totCard > 21)
        {
               lose();
        }
    
     cout <<endl;
     
    return 0;
}
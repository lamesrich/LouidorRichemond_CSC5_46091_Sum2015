/*
 * File:   main.cpp
 * Author: Richemond Louidor
 * Project 1
 * Purpose: Black jack, Friendly blackjack game against a basic A/I
 * Created on July 9, 2015, 8:10 PM
 */

//system libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>

using namespace std;

//Global Constants
//declared file I/O as a global variable to used throughout entire program
ofstream file;

struct pData
{
    string NAME;
};
//function prototypes
void error1(int [], int[], int [], const int);
void error2(int, int[], int);
void error3(int [], int [], int);
void chip(int [], int [], int);
void hitStay(string [], int[], const int, int);
void dDeal(int, int, int);
int dError1(int, int, int);
int dError2(int , int);
void dealer();
void win(string[], int [], int[], int[], int, int);
void lose(string[], int [], int[], int[], int, int);
void bJack(string[], int [], int[], int[], int, int);
void pBust(string[], int [], int[], int[], int, int);
void dBust(string[], int [], int[], int[], int, int);
void push(string[], int [], int[], int[], int, int);
void dBjk(string[], int [], int[], int[], int, int);


//execution begins here

int main(int argc, char** argv) 
{
    //struct
     pData* Name= new pData[1000];
    
    //declaring variables
    int ct = 0, ct2 = 0, ct3 = 0, ct4; 
    char uIn;
    const int SIZE=3;
    int dCard1; //dealer card 1 random select
    int dCard2; //dealer card 2 random select
    int dSum=0;//dealer sum

    srand(time(0));
    //prompting user to enter number of players
    cout << "How many players: \n";
    //cin>> SIZE;
    //while (SIZE < 0) 
    //{
        cout << "Please enter a number greater than zero\n";
        cout << "How many players: \n";
        //cin>> SIZE;
   // }
    file.open ("BJK.txt");//creating file
    //declaring array variables
    string name[100]={"kh1", "kh2", "Kh3"};
    int bets[SIZE]={5, 5, 5};
    int chips[SIZE]={20, 55, 50};
    int card[SIZE];
    int card2[SIZE];
    int sum[SIZE];
    int count=0;

   
    //getting user data
    for (int x = 0; x < SIZE; x++) 
    {
        ct++;
        cout << "Enter player " << ct << " Name: ";
        //cin >> name[x];
        //structs write player names to file
        Name[x].NAME=name[x];
        file<<"Player "<<ct<<": "<<Name[x].NAME<<endl;
        cout << "Min chips: $10\nChips buy in: $";
        //cin >> chips[x];
        /*if (chips[x] < 10) 
        {
            error3(chips, bets, SIZE);
        }
*/
        cout << endl;
    }
    //deleting dynamic array
    delete [] Name;
    cout << endl;
    
 do
 {
     //game counter
    count++;
    cout <<"\n\n\t\t\tGAME: "<<count<<endl;
    /*************************************************************************/
     for (int x = 0; x < 52; x++) 
    {
        
        dCard1  = rand() % 1 + 11; //dealer card 1 random select
        dCard2 = rand() % 1 + 11; //dealer card 2 random select
    }
        
    if ((dCard1 == 1 && dCard2 == 11)||(dCard1 == 11 && dCard2 == 1) ||
       (dCard1 == 1 && dCard2 == 10) || (dCard1 == 10 && dCard2 == 1))
    {
        dSum=dError1(dCard1, dCard2, dSum);
                
    }
    else if (dCard1 == 11 && dCard2 == 11)
    {
        dSum=dError1(dCard1, dCard2, dSum); 
        
    }
    else if (dCard1==1 && dCard2==1)
    {
     dSum=dError1(dCard1, dCard2, dSum);   
    }
    else 
    {
    //dealer card 1 output 
    cout<<"****************************** Dealer **************************\n";
    cout << "\n\t\tCard 1: " << dCard1 << " Card 2: hidden "<<dCard2<<endl;
    dSum = dCard1 + dCard2; //dealer sum
    cout<<"****************************************************************\n";
    cout << endl;
    }
    /*************************************************************************/
    if(dSum==21)
    {
     dBjk(name, chips,bets, sum, dSum, SIZE);
     cout <<"Play again y/n: ";
     cin>>uIn;
     
    }
    else
    {
    for (int l = 0, n = 0; n < 52, l < SIZE; n++, l++) 
    {
        card[n] = rand() % 1 + 1;
        card2[n] = rand() % 1 + 1;
        sum[l] = card[l] + card2[l];
    }
    cout << endl;
    //detecting errors for first two cards dealt bjk, bust, two aces, 
    error1(card, card2, sum, SIZE);

    for (int i = 0; i < SIZE; i++) 
    {
        cout << name[i] << " Place bet: $";
        //cin >> bets[i];
        cout << endl;
        cout << "\t" << name[i] << "\nCard 1: " << card[i] << " Card 2: " << card2[i]
            << " Total: " << sum[i] << "\nChips: $" << chips[i] << " Bets: $"
            << bets[i] << endl << endl;
    }
    chip(chips, bets, SIZE);
    //chips bet
    for (int x = 0; x < SIZE; x++)
    {
       ct2++;
       cout<<name[x]<<" chips "<<ct2<<" "<<chips[x]<<endl;
    }
    
    //hit or stay decision for each player
    hitStay(name, sum, SIZE, ct4);
    for (int i = 0; i < SIZE; i++)
    {
        cout << name[i] << " Total: " << sum[i] << endl;
        
    }
    if(sum < 21)
    {
        dDeal(dCard1, dCard2, dSum);  
    }
        
    for(int x=0; x<SIZE; x++)
    {
        if (sum[x] > 21) 
        {
            pBust(name, chips,bets, sum, dSum, SIZE);
            
        } 
        else if (dSum > 21) 
        {
            dBust(name, chips,bets, sum, dSum, SIZE);
            
            
        } 
        else if (dSum == 21) 
        {
            bJack(name, chips,bets, sum, dSum, SIZE);
            
        } 
        else if (dSum < sum[x]) 
        {
            win(name, chips,bets, sum, dSum, SIZE);
            
        } 
        else if (dSum > sum[x])
        {
            lose(name, chips,bets, sum, dSum, SIZE);
            
          
        } 
        else if (dSum == sum[x]) 
        {
            push(name, chips,bets, sum, dSum, SIZE);
            
        }
    }
    cout <<"Play again y/n: ";
    cin>>uIn;
    }
   }
    while(uIn != 'n');
   
   cout << endl;
    cout << "Thank You For Playing\n";
    //writing to file
    file<<"\nThank You for Playing\n";
    file.close();
    //exit stage right
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
             if(uDec<0)
             {
                 do
                   {
                     cout<<"enter 1 for hit or 2 for stay ";
                     cin >> uDec;
                   }while(uDec<0);
             }
             else
             {
             cout << endl;
             
            while (uDec != 2) 
            {
                            
                for (int v = 0; v < 52; v++) 
                {
                    card = rand() % 1 + 1; //random card generator
                   
                } 
                
               if(card==11 && pSum[t] >11)
                {
                    error2(card, pSum, SZ);
                }
                else if(card == 1 && pSum[t]<11)
               {
                   error2(card, pSum, SZ);
               }
                else 
                {
                    pSum[t] += card; //adding card to sum
                }
                                
                cout <<"New Card: "<<card<< "  new total: " << pSum[t]<<endl;
                if(pSum[t]>21)
                {
                    cout <<"lose\n";
                    uDec =2;
                }
                else if(pSum[t]==21)
                {                       
                    cout <<"BJK\n";
                    uDec=2;
                }
                else if(pSum[t]<21)
                {                       
                   do
                   {
                       cout<<"enter 1 for hit or 2 for stay ";
                       cin >> uDec;
                   }while(uDec<0);
                }

            }
        }
        }
        
    }
}
/*******************************************************************************
 *********************************** error1 *************************************
 * checking for player bust on first hand
 * checking player hand for two aces 
 * checking player hand for blackjack
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
            
            cout << "YOU WIN BLACKJACK\n";
            cout << "Card 1: " << card[l] << " Card 2: "
                 << card2[l] << "\nTotal: " <<ct3<<" = "<<sum[l]<< endl;
        }
     else if (card[l]==11 && card2[l]==11)
        {
            sum[l] -= 2;
        }
     else if (card[l]==1 && card2[l]==1)
        {
            sum[l] = 12;
            
            cout << "Dealer\n";
            cout << "Card 1: " << card[l] << " Card 2: "
                 << card2[l] << "\nTotal: " <<ct3<<" = "<<sum[l]<< endl;
        }
       
    }
 
   
}
/*******************************************************************************
 *********************************** error2 *************************************
 * dDeal - Dealer deal third card 
 * dSum, dCard1, dCard22 is pass by value
 * deals dealer 3rd card and beyond until dealer sum is greater or equal to 17
 * writes output to file also
 * returns dealer sum to main
 */

void error2(int card, int sum[], int SZ)
{
    for(int x=0; x<SZ; x++)
    {
    if(sum[x]>11 && card ==11 )
    {
       sum[x]+=1;
    }
    else if(sum[x]<11 && card ==1)
    {
        sum[x]+=11;
    }
    }
}
/*******************************************************************************
 *********************************** error3 *************************************
 * dDeal - Dealer deal third card 
 * dSum, dCard1, dCard22 is pass by value
 * deals dealer 3rd card and beyond until dealer sum is greater or equal to 17
 * writes output to file also
 * returns dealer sum to main
 */
void error3(int chips[], int bet[], int SZ)
{
    for(int x=0; x<SZ; x++)
    {
        if(chips[x]<10)
        {
            cout <<"Min Buy in is $10.00"<<endl;
            cout <<"How much chips do you want to buy: $";
            cin >>chips[x];        
        }
        
        else if(bet[x]<10)
        {
            cout <<"Min Bet is $5.00"<<endl;
       
        }
        
        else if(bet[x]>500)
        {
           cout <<"Max Bet is $500.00"<<endl;
       
        }
        
        else if(bet[x]>chips[x])
        {
        
           cout <<"Your Max Bet is: $"<<chips[x]<<endl;
        }
    }
}

/*******************************************************************************
 *********************************** chip *************************************
 * dDeal - Dealer deal third card 
 * dSum, dCard1, dCard22 is pass by value
 * deals dealer 3rd card and beyond until dealer sum is greater or equal to 17
 * writes output to file also
 * returns dealer sum to main
 */
void chip(int chips[], int bet[], int SZ)
{
       
    for (int x = 0; x < SZ; x++)
    {
        chips[x] -= bet[x];
              
    }
    
}


/*******************************************************************************
 *********************************** dDeal *************************************
 * dDeal - Dealer deal third card 
 * dSum, dCard1, dCard22 is pass by value
 * deals dealer 3rd card and beyond until dealer sum is greater or equal to 17
 * writes output to file also
 * returns dealer sum to main
 */
void dDeal(int dCard1, int dCard2, int dSum)
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
    if(dSum<17)
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
             //calling dCard function
             dCard=dError2(dCard, dSum);
             
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
    
     cout <<" sum "<<dSum<<endl;
}

/*******************************************************************************
 *********************************** dError1 ***********************************
 * dDeal - Dealer deal third card 
 * dSum, dCard1, dCard22 is pass by value
 * deals dealer 3rd card and beyond until dealer sum is greater or equal to 17
 * writes output to file also
 * returns dealer sum to main
 */
int  dError1(int dCard1, int dCard2, int dSum)
{
    int ct3=0;
    //Dealer win blackjack

       //dealer automatic blackjack 
        if ((dCard1 == 1 && dCard2 == 11)||(dCard1 == 11 && dCard2 == 1) ||
                (dCard1 == 1 && dCard2 == 10) || (dCard1 == 10 && dCard2 == 1))
        {
            dSum = 21;
            cout << endl;
            cout << "YOU LOOSE\nDEALER BLACKJACK\n";
            cout << "Card 1: " << dCard1 << " Card 2: " 
                 << dCard2 << "\nSUM = " << dSum << endl;
            
        }
    //dealer sum of two aces on first hand
     else if (dCard1==1 && dCard2==1)
        {
            dSum = 12;
            //cout << endl;
            cout << "YOU WIN BLACKJACK\n";
            cout << "Card 1: " << dCard1 << " Card 2: "
                 << dCard2 << "\nTotal: " <<ct3<<" = "<<dSum<< endl;
        }   
    else if (dCard1 == 11 && dCard2 == 11) 
        {
        //dealer card 1 output 
    cout<<"****************************** Dealer **************************\n";
    cout << "\n\t\tCard 1: " << dCard1 << " Card 2: hidden "<<endl;
    dSum -= 2; //dealer sum
    cout<<"****************************************************************\n";
    cout <<" sum "<<dSum<<endl;
    
            //writing to file
            //file<< "Card 1: " << dCard1 << " Card 2: Hidden " << endl;
     }
    return dSum;     
   
}
/*******************************************************************************
 *********************************** dError2 ***********************************
 * dDeal - Dealer deal third card 
 * dSum, dCard1, dCard22 is pass by value
 * deals dealer 3rd card and beyond until dealer sum is greater or equal to 17
 * writes output to file also
 * returns dealer sum to main
 */
int dError2(int dCard, int dSum)
{
    
    if(dSum>11 && dCard ==11 )
    {
        dCard =1;
    }
    else if(dSum<11 && dCard ==1)
    {
        dSum+=11;
    }
    return dCard;
    
}


void win(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ)
{
    for (int x=0; x<SZ; x++)
    {
        if(pSum[x]>dSum)
        {
            cout <<"YOU WIN\n";
            chips[x]+=bets[x];
            cout <<name[x]<<" chips total: $"<<chips[x]<<endl;
        }
    }
    
    
}
void bJack(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ)
{
    for (int x = 0; x < SZ; x++) 
    {
        if (pSum[x] == 21) 
        {
           cout << "BLACKJACK\n";
           chips[x]+=bets[x];
           cout <<name[x]<<" chips total: $"<<chips[x]<<endl;
        } 
        else if (dSum == 21)
        {
            cout << "YOU LOSE\nDEALER BJK\n";
            for(int y=0; y<SZ; y++)
            {
                chips[x]-=bets[x];
                cout <<name[x]<<" chips total: $"<<chips[x]<<endl;
            }
        }
    }
    
}
void pBust(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ) 
{
    for (int x = 0; x < SZ; x++) 
    {
        if (pSum[x] > 21) 
        {
            cout << "BUST!!! YOU LOSE\n";
            chips[x]-=bets[x];
            cout <<name[x]<<" chips total: $"<<chips[x]<<endl;
        }
    }
    
    
}
void push(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ)
{
    for (int y=0; y<SZ; y++)
    {
     if(pSum[y]==dSum)
     {
        for (int x=0; x<SZ; x++)
        {
           cout <<"Push\n";
           cout <<name[x]<<" chips total: $"<<chips[x]<<endl;
        }  
     }
    }
}
void lose(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ)
{
    for (int x=0; x<SZ; x++)
    {
        if(pSum[x]>dSum)
        {
            cout <<"YOU LOSE!!!\n";
            chips[x]-=bets[x];
            cout <<name[x]<<" chips total: $"<<chips[x]<<endl;
        }
    }
      
}
void dBust(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ)
{
    if(dSum==21)
    {
     for (int x=0; x<SZ; x++)
    {
        cout <<"\nDealer Bust\nYOU WIN\n";     
        chips[x]+=bets[x];
        cout <<name[x]<<" chips total: $"<<chips[x]<<endl;     
    }
    }
   
}
void dBjk(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ)
{
    if(dSum==21)
    {
     for (int x=0; x<SZ; x++)
    {
        //cout << "YOU LOSE\nDEALER BJK\n";       
        chips[x]-=bets[x];
        cout <<name[x]<<" chips total: $"<<chips[x]<<" \n";
            
    }
    }
}


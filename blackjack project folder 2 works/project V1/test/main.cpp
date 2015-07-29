//system library
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//function prototypes

//execution begins here
int main ()
{
     //declaring variables
     int x=0, y=0, ct=0, ct2=0, SIZE;
     
    srand(time(0));
    //prompting user to enter number of players
     cout <<"How many players: ";
     cin>> SIZE;
     
    int bet[SIZE];
    int chips[SIZE];
    int card[SIZE];
    string name[SIZE];
    
     
     
     /*for(x; x<SIZE; x++)
       {
         ct++;
         cout <<"Enter player "<<ct<<" Name: ";
         //cin>>name[x];
         /*cout <<" buy in $";
         cin >>chips[x];
         cout <<endl;
       }
       cout <<endl;*/
     for (int j=0; j<SIZE; j++)
         {
                card[j]=rand()% 11 +1;
            
                
             }
     cout <<endl;
     for (int l=0; l<SIZE; l++)
         {
                ct2++;
                //cout
                cout <<"Card "<<ct2 <<": "<<card[l]<<endl;
                
             }
     
     //USER PLACING BET
     /*for(y; y<SIZE; y++)
       {
         cout <<name[y] <<" PLace Bet: $";
         cin>>bet[y];
       }
       cout <<endl;
       
       //testing for losing and winning bet
       for(int i=0; i<SIZE; i++)
       {
         
         if(bet[i]<10)
         {
         chips[i]-=bet[i];
         
         cout <<name[i] <<" lost bet remaining chips $"<<chips[i]<<endl;
         }
         else 
         {
           chips[i]+=bet[i];
         
           cout <<name[i] <<" won bet remaining chips $"<<chips[i]<<endl;
         }
       }*/
     
     
     
     cout <<endl;
     
     
     
     
     
     
    
     return 0;
}



/* 
 * File:   main.cpp
 * Author: Richemond Louidor
 * project 2 prart 2
 * Created on July 9, 2015, 9:45 PM
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void chipy();
void chip(string[], int [], int[], int[], int , int );
void win(string[], int [], int[], int[], int , int );
void lose(string[], int [], int[], int[], int , int );
void pJack(string[], int [], int[], int[], int , int );
void dBjk(string[], int [], int[], int[], int , int );
void pBust(string[], int [], int[], int[], int , int );
void dBust(string[], int [], int[], int[], int , int );
void push(string[], int [], int[], int[], int , int );

int main(int argc, char** argv) 
{
    int dSum=15, i, sum=18;
    
    int uDec;
     const int SZ=4;
     
    int pSum[SZ]={17, 22, 21, 15};
    int chips [SZ]={100, 60, 80, 75};
    int bets [SZ]={5, 5, 5, 5};
    string name[SZ]={"KH1", "TI", "RL", "JK"};
  
    
    //chip(chips, sum1, SZ);
    do 
    {  
        cout <<"dSum "<<dSum<<endl;
        //chip(name, chips, bets, pSum, dSum, SZ);
        for(int x=0; x<SZ; x++)
        {
            cout<<name[x]<<" total " <<pSum[x]<<endl;
        
            cout << "Sum chips =" << chips[x] << endl<<endl;
        }
        for(int x=0; x<10; x++)
        {
            cout <<endl;
        }
        pBust(name, chips, bets, pSum, dSum, SZ);
        dBust(name, chips, bets, pSum, dSum, SZ);
        win(name, chips, bets, pSum, dSum, SZ);
        pJack(name, chips, bets, pSum, dSum, SZ);
        dBjk(name, chips, bets, pSum, dSum, SZ);
        lose(name, chips, bets, pSum, dSum, SZ);
        push(name, chips, bets, pSum, dSum, SZ);
        
        
        
        cout << "Play again y(1)/n(2): ";
        cin >> uDec;
        for(int x=0; x<10; x++)
        {
            cout <<endl;
        }
    }    while (uDec != 2);
    
    
    //Exit Stage Right!
    return 0;
}


void win(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ)
{
    for (int x=0; x<SZ; x++)
    {
        if((pSum[x]>dSum && pSum[x]<21))
        {
            cout <<"YOU WIN\n";
            chips[x]+=bets[x];
            cout <<name[x]<<" chips total: $"<<chips[x]<<endl;
              
        }
       }
     cout<<endl<<endl;
    
}
void pJack(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ)
{
    for (int x = 0; x < SZ; x++) 
    {
        if (pSum[x] == 21 && dSum!=21) 
        {
           cout << "BLACKJACK\n"<<endl;
           chips[x]+=bets[x];
           cout <<name[x]<<" chips total: $"<<chips[x]<<endl;
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
              cout<<endl<<endl;
        }
    }
    
    
}
void push(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ)
{
    for (int x=0; x<SZ; x++)
        {
        if(pSum[x]==dSum && dSum!=21)
        {
        
           cout <<"Push\n";
           cout <<name[x]<<" chips total: $"<<chips[x]<<endl;
             cout<<endl<<endl;
        }  
    }
    
}
void lose(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ)
{
      cout<<endl<<endl;
    for (int x=0; x<SZ; x++)
    {
        if(pSum[x]<dSum && dSum < 21)
        {
            cout <<"YOU LOSE!!!\n";
            chips[x]-=bets[x];
            cout <<name[x]<<" chips total: $"<<chips[x]<<endl;
              cout<<endl<<endl;
        }
    }
      
}
void dBust(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ)
{
    if(dSum>21)
    {
        cout<<endl<<endl;
     for (int x=0; x<SZ; x++)
    {
        cout <<"\nDealer Bust\nYOU WIN\n";     
        chips[x]+=bets[x];
        cout <<name[x]<<" chips total: $"<<chips[x]<<endl; 
          cout<<endl<<endl;
    }
    }
   
}
void dBjk(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ)
{
    if(dSum==21)
    {
     for (int x=0; x<SZ; x++)
    {
         if(dSum == pSum[x])
         {
             cout <<"Push\n";
             cout <<name[x]<<" chips total: $"<<chips[x]<<endl;
             cout<<endl<<endl;
         }
         else
         {
        cout << "YOU LOSE\nDEALER BJK\n";       
        chips[x]-=bets[x];
        cout <<name[x]<<" chips total: $"<<chips[x]<<endl;
        cout<<endl<<endl;
         }
         
    }
    }
 
}


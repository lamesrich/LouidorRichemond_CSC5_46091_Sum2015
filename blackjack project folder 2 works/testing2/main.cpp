/* 
 * File:   main.cpp
 * Author: iMACLOUI
 *testings 2
 * Created on July 9, 2015, 9:45 PM
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void chipy();
void chip(int [], int [], int);
void win(string[], int [], int[], int[], int, int);
void lose(string[], int [], int[], int[], int, int);
void bJack(string[], int [], int[], int[], int, int);
void pBust(string[], int [], int[], int[], int, int);
void dBust(string[], int [], int[], int[], int, int);
void push(string[], int [], int[], int[], int, int);

int main(int argc, char** argv) 
{
    int dSum, i, sum=18;
    
    int uDec;
    const int SZ=3;
    int sum1[SZ]={12, 20, 15};
    int chips [SZ]={100, 60, 80};
    //chip(chips, sum1, SZ);
    do 
    {  
        chip(chips, sum1, SZ);
        for(int x=0; x<SZ; x++)
        {
        
        cout << "Sum chips =" << chips[x] << endl;
        }
        if (sum > 21) 
        {
            pBust(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ)
        } 
        else if (dSum > 21) 
        {
            dBust(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ);
        } 
        else if (dSum == 21) 
        {
            bJack(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ);
        } 
        else if (dSum < sum) 
        {
            win(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ);
        } 
        else if (dSum > sum)
        {
            lose(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ);
          
        } 
        else if (dSum == sum) 
        {
            push(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ);
        }
        cout << "Play again y(1)/n(2): ";
        cin >> uDec;
    }    while (uDec != 2);
    
    
    //Exit Stage Right!
    return 0;
}


void win(string name[], int chips[], int bets[], int pSum[], int dSum[], int SZ)
{
    for (int x=0; x<SZ; x++)
    {
        if(pSum[x]>dSum[x])
        {
            cout <<"YOU WIN\n";
            chips[x]+=bets[x];
            cout <<name[x]<<" chips total: $"<<chips[x]<<endl;
        }
    }
    
    
}
void bJack(string name[], int chips[], int bets[], int pSum[], int dSum[], int SZ)
{
    for (int x = 0; x < SZ; x++) 
    {
        if (pSum[x] == 21) 
        {
           cout << "BLACKJACK\n";
           chips[x]+=bets[x];
           cout <<name[x]<<" chips total: $"<<chips[x]<<endl;
        } 
        else if (dSum[x] == 21)
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
void pBust(string name[], int chips[], int bets[], int pSum[], int dSum[], int SZ) 
{
    for (int x = 0; x < SZ; x++) 
    {
        if (pSum > 21) 
        {
            cout << "BUST!!! YOU LOSE\n";
            chips[x]-=bets[x];
            cout <<name[x]<<" chips total: $"<<chips[x]<<endl;
        }
    }
    
    
}
void push(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ)
{
     if(pSum==dSum)
    {
        for (int x=0; x<SZ; x++)
        {
           cout <<"Push\n";
           cout <<name[x]<<" chips total: $"<<chips[x]<<endl;
        }  
    }
    
}
void lose(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ)
{
    for (int x=0; x<SZ; x++)
    {
        if(pSum[x]>dSum[x])
        {
            cout <<"YOU LOSE!!!\n";
            chips[x]-=bets[x];
            cout <<name[x]<<" chips total: $"<<chips[x]<<endl;
        }
    }
      
}
void dBust(string name[], int chips[], int bets[], int pSum[], int dSum[], int SZ)
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
        cout << "YOU LOSE\nDEALER BJK\n";       
        chips[x]-=bets[x];
        cout <<name[x]<<" chips total: $"<<chips[x]<<endl;
            
    }
    }
}


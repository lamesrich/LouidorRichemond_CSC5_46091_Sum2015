/* 
 * File:   main.cpp
 * Author: iMACLOUI
 *Dealer testing
 * Created on July 29, 2015, 2:55 AM
 */
#include <iostream>
#include <cstdlib>

using namespace std;

void dDeal(int, int, int);
int dError1(int, int, int);
int dError2(int , int);
int main(int argc, char** argv) 
{
    srand(time(0));
    
    int dCard1; //dealer card 1 random select
    int dCard2; //dealer card 2 random select
    int dSum=0;
    
    for (int x = 0; x < 52; x++) 
    {
        
        dCard1  = rand() % 11 + 1; //dealer card 1 random select
        dCard2 = rand() % 11 + 1; //dealer card 2 random select
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
   
   
    if(dSum<17)
    {
        dDeal(dCard1, dCard2, dSum);
    }
   
     
   
return 0;
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
    //file <<endl;cout <<"DEALER\n";
    //file << "Card 1: " << dCard1 << " Card 2: " << dCard2 
        // << "\nSUM = " << dSum << endl;
    
  
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
             //calling dCard function
             dCard=dError2(dCard, dSum);
             
             dSum += dCard;
             //output card until dealer sum is greater than 17
            cout <<"Card "<<count<<": "<<dCard<<" ";
            //writing to file
           // file <<"Card "<<count<<": "<<dCard<<" ";
          } 
         
         }while(sum1!=2);
         cout <<"\nSum = "<<dSum;
         cout<<endl;
         //writing to file
         //file <<"\nSum = "<<dSum;
    }
    
     cout <<" sum "<<dSum<<endl;
}


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

int dError2(int dCard, int dSum)
{
    
    if(dSum>11 && dCard ==11 )
    {
        dCard =1;
    }
    return dCard;
    
}

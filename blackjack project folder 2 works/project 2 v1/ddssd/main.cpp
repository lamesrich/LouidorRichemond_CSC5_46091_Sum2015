//sorting library
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>

using namespace std;
//function prototypes
void win(int, int);
void lose(int, int);
int hitStay(int[], int[], int, int);

//execution begins here
int main (int argc, char** argv)
{
  //declaring variables
  int x=0, y=0, ct=0, ct2=0, ct3=0, ct4=0;
  const int SIZE=5;
  
 srand(time(0));
 //prompting user to enter number of players
 cout <<"How many players: ";
 //cin>> SIZE;
 
 string name[100]={"Loui", "khara", "JOhn", "Mark", "James"};
 int bet[SIZE];
 int chips[SIZE]={30, 50, 80, 40, 90};
 int card[SIZE];
 int card2[SIZE];
 int sum[SIZE];
 

  
  
  /*for(x; x<SIZE; x++)
  {
    ct++;
    cout <<"Enter player "<<ct<<" Name: ";
    //cin>>name[x];
    cout <<" buy in $";
    cin >>chips[x];
    cout <<endl;
  }
  cout <<endl;*/
    
  for (int l=0, n=0; n<52, l<SIZE; n++, l++)
  {
    ct2++;
    cout <<"Enter player "<<ct2<<" Name: "<<name[l]<<endl;
    //cin>>name[x];
    cout <<" buy in $"<<chips[l];
    //cin >>chips[l];
    //cout <<endl;
    card[n]=rand()% 11 +1;
    card2[n]=rand()% 11 +1;
    sum[l]=card[l] + card2[l];
      
      if(sum[l]<10)
      {
          cout <<setw(5);
          cout <<"Card 1: "<<card[l]<<" Card 2: "<<card2[l]
               <<" --> sum "<<ct2<<" = "<<sum[l]<<" -> YOU LOSE\n";
      }
      else
      {
        cout <<setw(5)<<endl;
        cout <<"Card 1: "<<card[l]<<" Card 2: "<<card2[l]
             <<" --> sum "<<ct2<<" = "<<sum[l]<<" -> YOU WIN\n";
      }
  }
 cout <<endl;
 
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
                 << card2[l] << "\nSUM " <<ct3<<" = "<<sum[l]<< endl;
            
            /*/writing to file
            file<<"\nYOU LOOSE\nDEALER BLACKJACK\n"
                 << "Card 1: " << dcard1 << " Card 2: " 
                 << dcard2 << "\nSUM = " << dSum << endl;*/
        }
     
     
     if(bet[l]<10)
     {
    chips[l]-=bet[l];
    
    cout <<name[l] <<" lost bet remaining chips $"<<chips[l]<<endl;
    }
    else 
    {
      chips[l]+=bet[l];
    
      cout <<name[l] <<" won bet remaining chips $"<<chips[l]<<endl;
    }
     
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
  
  
 for (int i=0; i<SIZE; i++)
 {
    if (sum[i]<21) 
    {
       cout <<endl;
       int uDec=1;
       sum[i]=hitStay(name, sum, SIZE, uDec ); 
    }
 }
  
  
  
  
  

  return 0;
}
int hitStay(int arr[], int SZ, int uDec, int pSum[])
{
    srand(time(0));
    int count=2;//counter initialize to 2 then next card dealt is the card 3
    int card; //player card 3 
   
    //card 3 and beyond
    if(uDec==1)
    {

        do 
        {
            for (int x = 0, i=0; i<SZ, x < 52; i++, x++)
            {
                card = rand() % 11 + 1;//deals player random cards

            }

            
            for (int i=0; i<SZ; i++)
            {
                card = rand() % 11 + 1;//deals player random cards

           
            count++;
            pSum[i] += card;
            cout << "Card " << count << ": " << card;
            cout << "\nsum = " <<  pSum[i] << " ";
          
             //writing to file
            //file << "Card " << count << ": " << card;
            //file << "\nsum = " << pSum << " ";
            
            //deciding if player bust or hit blackjack
            if( pSum[i]>21 ||  pSum[i]==21)
            {
                uDec=2; 
            }
            else
            {
               cout << "\nHit (1) or Stay(2): ";
               cin >> uDec; 
            //writing to file
            //file <<"\nHit (1) or Stay(2): "<<uDec;
        }  
        }
        } 
        while (uDec!=2);//loops end if uDec =2

        
    }
    for (int j=0; j<SZ; j++)
    {
        return pSum[j];
    }
    
   
   
}
/*****************************************************************************/
void lose(int pSum, int dSum)
{
    cout <<"YOU LOSE\n";
     //writing to file
    //file <<"YOU LOSE\n";
}

/*****************************************************************************/
void win(int pSum, int dSum)
{
    if(pSum>dSum)
    {
        cout <<"YOU WIN\n";
         //writing to file
        //file <<"YOU WIN\n";
    }
    
}


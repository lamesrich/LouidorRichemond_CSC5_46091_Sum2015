/*
 * File:   main.cpp
 * Author: Richemond Louidor
 * Project 2
 * Purpose: Black jack, Friendly blackjack game against a basic A/I
 * Created on July 9, 2015, 8:10 PM
 */

//system libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

//Global Constants
struct pData
{
    string NAME;
    int bet;
    int chip;
};
//function prototypes



void error1(string[], int[] , int[], int[], int ,int[], int[], int[], const int);
void error2(int, int[], int);
void error3(int [], int [], int);
int dDeal(int, int, int);
void dError1(string [], int [], int [], int [], int, int, int, int);
int dError2(int , int);
void hitStay(string [], int[], const int);
void win(string[], int [], int[], int[], int, const int);
void lose(string[], int [], int[], int[], int, const int);
void pJack(string[], int [], int[], int[], int, const int);
void pBust(string[], int [], int[], int[], int, const int);
void dBust(string[], int [], int[], int[], int, const int, int, int);
void push(string[], int [], int[], int[], int, const int);
void dBjk(string[], int [], int[], int[], int, const int, int, int, char);
void srt1(int [], int );
void srt2(int[], int);
void rFile();
void clrscr();
void dDealCd(string[], int [], int[], int[], int, int, int, int);

                    
//execution begins here

int main(int argc, char** argv) 
{
    //struct/dynamic array
     pData* Name= new pData[50];
     pData* Chips = new pData[50];
     pData* Bets = new pData[50];

    
    //declaring variables
    int ct = 0;
    char uIn;
    int SIZE;//=3;
    int dCard1; //dealer card 1 random select
    int dCard2; //dealer card 2 random select
    int dSum=0;//dealer sum
    int bets[SIZE];//bets
    int chips[SIZE];//={700, 550, 650};
    int card[SIZE];
    int card2[SIZE];
    int pSum[SIZE];
    int count=0;
    string name[100];
    srand(time(0)); 
    ofstream file;
    file.open ("struct.txt");//creating file for main
    
    //getting user data
    //prompting user to enter number of players
    cout << "How many players: ";
    cin>> SIZE;
    //checking negative number for size
    while (SIZE < 0) 
    {
        cout << "Please enter a number greater than zero\n";
        cout << "How many players: \n";
        cin>> SIZE;
   }
    
//getting players name and chips
    for (int x = 0; x < SIZE; x++) 
    {
        ct++;
        cout << "Enter player " << ct << " Name: ";
        cin >> name[x];
        cout << "Min chips: $10\nChips buy in: $";
        cin >> chips[x];
        if (chips[x] < 10) 
        {
            error3(chips, bets, SIZE);
        } 
        cout << endl;
    }  
    
 do
 {
     //game counter
    count++;
    cout <<"\n\n\t\t\tGAME: "<<count<<endl;
    
    //player place bets
    for (int i = 0; i < SIZE; i++) 
    {
        cout << name[i] << " Place bet: $";
        cin >> bets[i];
        //bets error check 
        if(bets[i]<0 || bets[i]<5 || bets[i]>chips[i]|| bets[i] >200)
        {
            error3(chips, bets, SIZE);
        }
        else if((bets[i] %5) !=0)
        {
            error3(chips, bets, SIZE);
        }
        cout << endl;
    }
    /*************************************************************************/
     for (int x = 0; x < 52; x++) 
    {
        
        dCard1  = rand() % 11 + 1; //dealer card 1 random select
        dCard2 = rand() % 11 + 1; //dealer card 2 random select
    }
        dSum=dCard1+dCard2;
      
       if ((dCard1 == 1 && dCard2 == 11)||(dCard1 == 11 && dCard2 == 1) ||
           (dCard1 == 1 && dCard2 == 10) || (dCard1 == 10 && dCard2 == 1) ||
           (dCard1 == 11 && dCard2 == 11) || (dCard1==1 && dCard2==1)||
           (dCard1==1 && dCard2==1))
         
    {
        dError1(name, chips, bets, pSum, dCard1, dCard2, dSum, SIZE);
                 
    }
    
    else
    { 
     dDealCd(name, chips, bets, pSum, dSum, dCard1, dCard2, SIZE);
     
    for (int l = 0, n = 0; n < 52, l < SIZE; n++, l++) 
    {
        card[n] = rand() % 11 + 1;
        card2[n] = rand() % 11 + 1;
        pSum[l] = card[l] + card2[l];//add player card 1 and 2
    }
    cout << endl;
    //detecting errors for first two cards dealt bjk, bust, two aces, 
     error1(name, chips, bets, pSum, dSum, card, card2, pSum, SIZE);
     for (int i = 0; i < SIZE; i++) 
    {
       cout << endl;
       cout << "\t" << name[i] << "\nCard 1: " << card[i] << " Card 2: " 
             << card2[i] << " Total: " << pSum[i] << "\nChips: $" << chips[i]
             << " Bets: $" << bets[i] << endl << endl;
     }
    
    //hit or stay decision for each player
    //calling hitStay function
    hitStay(name, pSum, SIZE);
    
    for (int i = 0; i < SIZE; i++)
    {
        cout << name[i] << " Total: " << pSum[i] << endl;
    }
    
     //clear screen function
    clrscr(); 
    dSum=dDeal(dCard1, dCard2, dSum);  
  
    //calling game decision functions
    pBust(name, chips, bets, pSum, dSum, SIZE);
    dBust(name, chips, bets, pSum, dSum, SIZE, dCard1, dCard1);
    win(name, chips, bets, pSum, dSum, SIZE);
    pJack(name, chips, bets, pSum, dSum, SIZE);
    dBjk(name, chips, bets, pSum, dSum, SIZE, dCard1, dCard1, uIn);
    lose(name, chips, bets, pSum, dSum, SIZE);
    push(name, chips, bets, pSum, dSum, SIZE);
    //prompt user to play again
   
    }
    
     cout <<"Play again y/n: ";
     cin>>uIn;
   }
    while(uIn != 'n');
    //using Structs with a dynamically allocated array
    file<<"STRUCTS\nLast place bets and Chip totals";
    int ct1=0;
    for (int x = 0; x < SIZE; x++)
    {
        Name[x].NAME = name[x];
        file << "\n" << Name[x].NAME << endl;

        Chips[x].chip = chips[x];
        file << "Chips " << ": $" << Chips[x].chip << endl;
        Bets[x].chip = bets[x];
        file << "Bets " << ": $" << Bets[x].chip << endl;
    }
    //delete dynamic arrays
    delete [] Name;
    delete [] Chips;
    delete [] Bets;
    
    cout << "Thank You For Playing\n";
    //calling sort functions
    srt1(bets, SIZE);
    srt2(chips, SIZE);
    cout << endl;
    //writing to file
    file<<"\nThank You for Playing\n";
    file.close();
    rFile();
    
    //exit stage right
    return 0;
}
/*******************************************************************************
 *********************************** error1 ************************************
 * Purpose: User hit or stay 
 *          hit to deal new card after card2 been dealt
 *           check for errors for dealer bust or 21
 */

void hitStay(string name[], int pSum[], const int SZ)
{
    srand(time(0));
    int card;//counter initialize to 2 then next card dealt is the card 3
    int count=2; //player card 3
    int uDec;
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
                    card = rand() % 11 + 1; //random card generator
                   
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
     
                    uDec =2;
                }
                else if(pSum[t]==21)
                {                       
                    
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
 *********************************** error1 ************************************
 * Purpose: checking for player bust on first hand
 * checking player hand for two aces 
 * checking player hand for blackjack
 * ((card[l]==1 && card2[l]==11) || ((card[l]==11 && card2[l]==1)))
 * ((card[l]==10 && card2[l]==1) || ((card[l]==1 && card2[l]==10)))
 * (card[l]==11 && card2[l]==11)
 * (card[l]==1 && card2[l]==1)
 */

void  error1(string name [], int chips[] , int bets[], int pSum [], int dSum, 
             int card [], int card2 [], int sum[], const int SIZE)
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
           pJack(name, chips, bets, pSum, dSum, SIZE);
            cout <<name[l]<< "Card 1: " << card[l] << " Card 2: "
                 << card2[l] << "\nTotal: " <<ct3<<" = "<<sum[l]<< endl;
        }
      else if ((card[l]==10 && card2[l]==1) || ((card[l]==1 && card2[l]==10)))
        {
            sum[l] = 21;
            
            pJack(name, chips, bets, pSum, dSum, SIZE);
            cout <<name[l]<< "Card 1: " << card[l] << " Card 2: "
                 << card2[l] << "\nTotal: " <<ct3<<" = "<<sum[l]<< endl;
        }
     else if (card[l]==11 && card2[l]==11)
        {
            sum[l] -= 2;
            cout <<name[l]<< "Card 1: " << card[l] << " Card 2: "
                 << card2[l] << "\nTotal: " <<ct3<<" = "<<sum[l]<< endl;
        }
     else if (card[l]==1 && card2[l]==1)
        {
            sum[l] = 12;
            
            cout <<name[l]<< " Card 1: " << card[l] << " Card 2: "
                 << card2[l] << "\nTotal: " <<ct3<<" = "<<sum[l]<< endl<<endl;
        }
       
    }
 
   
}
/*******************************************************************************
 *********************************** error2 *************************************
 * Purpose: checks for user third card draw for aces 
 * (sum > 11 && card == 11) -> sum +=1
 * 
 *  (sum[x] < 11 && card == 1) -> sum+=11
 */
void error2(int card, int sum[], int SZ)
{
    for (int x = 0; x < SZ; x++) 
    {
        if (sum[x] > 11 && card == 11) 
        {
            sum[x] += 1;
        } 
        else if (sum[x] < 11 && card == 1) 
        {
            sum[x] += 11;
        }
    }
}
/*******************************************************************************
 *********************************** error3 ************************************
 * Purpose: check errors for players chips and bets made, checks for negative 
 * numbers, max bets, min bets, min chips and max chips inputs by players
 *          
 */
void error3(int chips[], int bet[], int SZ)
{
    for(int x=0; x<SZ; x++)
    {
        if(chips[x]<10)
        {
            cout <<"Min Buy in is $10.00"<<"!!!"<<endl;
            cout <<"How much chips do you want to buy: $";
            cin >>chips[x];        
        }
        
        else if(bet[x]<5)
        {
            cout <<"Min Bet is $5.00"<<"!!!"<<endl;
            cout <<"Place bet: $";
            cin >>bet[x]; 
       
        }
        
        else if(bet[x]>200)
        {
           cout <<"Max Bet is $200.00"<<"!!!"<<endl;
           cout <<"Place bet: $";
            cin >>bet[x];
       
        }
        
        else if(bet[x]>chips[x])
        {
        
           cout <<"Your Max Bet is: $"<<chips[x]<<"!!!"<<endl;
           cout <<"Place bet: $";
            cin >>bet[x];
        }
        else if((bet[x]) !=0)
        {
            cout <<"bets has to be a multiple of five please!!!\n";
            cout <<"Place bet: $";
            cin >>bet[x];
        }
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
int dDeal(int dCard1, int dCard2, int dSum)
{
    int sum1, dCard;
    srand(time(0));//random
    int count=2;//counter
    
    //reveal dealer card 1 and card 2 plus sum
    cout <<endl;
    cout <<"DEALER\n from dDeal ";
    cout << "Card 1: " << dCard1 << " Card 2: " << dCard2 
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
             dSum=dError2(dCard, dSum);
             
             dSum += dCard;
             //output card until dealer sum is greater than 17
            cout <<"Card "<<count<<": "<<dCard<<" ";
           
          } 
         
         }while(sum1!=2);

    }
    
     cout <<" sum "<<dSum<<endl;
     return dSum;
}
/*******************************************************************************
 *********************************** dError1 ***********************************
 * dError1->  
 * dSum, dCard1, dCard22 is pass by value
 * deals dealer 3rd card and beyond until dealer sum is greater or equal to 17
 * writes output to file also
 * returns dealer sum to main
 */
void dError1(string name[], int chips[], int bets[], int pSum[], int dCard1,
        int dCard2, int dSum, const int SIZE) 
{
    char uIn;
    int ct3 = 0;
    //Dealer win blackjack

    //dealer automatic blackjack 
    if ((dCard1 == 1 && dCard2 == 11) || (dCard1 == 11 && dCard2 == 1) ||
            (dCard1 == 1 && dCard2 == 10) || (dCard1 == 10 && dCard2 == 1)) 
    {
        dSum = 21;
        dBjk(name, chips, bets, pSum, dSum, SIZE, dCard1, dCard2, uIn);

    }        //dealer sum of two aces on first hand
    else if (dCard1 == 1 && dCard2 == 1)
    {
        
        dSum = 12;
        //dealer card 1 output 
    }
    else if (dCard1 == 11 && dCard2 == 11) 
    {
       dSum = 20; //dealer sum
    }


}
/*******************************************************************************
 *********************************** dError2 ***********************************
 * purpose: prevent dealer from busting if drawn an ace after 2nd card
 * or convert an ace to 11 if dSum is less than 11
 * returns dealer sum to main
 */
int dError2(int dCard, int dSum)
{

    if (dSum > 11 && dCard == 11)
    {
        dSum +=1;
    }
    else if (dSum < 11 && dCard == 1)
    {
        dSum += 11;
    }
    return dSum;

}

/*******************************************************************************
 *********************************** win***********************************
 * purpose: Player wins when ((pSum[x]>dSum && pSum[x]<21)) 
 */
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
/*******************************************************************************
 *********************************** pJack ***********************************
 * purpose: Player hits blackjack when ((pSum==21 && sSum !=21)) 
 */
void pJack(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ)
{
    for (int x = 0; x < SZ; x++) 
    {
        if (pSum[x] == 21 && dSum!=21) 
        {
           chips[x]+=bets[x];
           cout << "BLACKJACK\n"<<endl;
           cout <<name[x]<<" chips total: $"<<chips[x]<<endl;
        } 
        
    }
    
}
/*******************************************************************************
 *********************************** pBust ***********************************
 *  purpose: Player bust when ((pSum>21))
 */
void pBust(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ) 
{
    for (int x = 0; x < SZ; x++) 
    {
        if (pSum[x] > 21) 
        {
            cout << "BUST!!! YOU LOSE\n";
            chips[x]-=bets[x];
            cout <<name[x]<<" chips total: $"<<chips[x]<<endl;
            cout<<endl;
        }
    }
    
    
}
/*******************************************************************************
 *********************************** push ***********************************
 * purpose: Player push when ((pSum == dSum))
 */
void push(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ)
{
    for (int x=0; x<SZ; x++)
        {
        if(pSum[x]==dSum && dSum!=21)
        {
        
           cout <<"Push\n";
           cout <<name[x]<<" chips total: $"<<chips[x]<<endl;
             cout<<endl;
        }  
    }
    
}
/*******************************************************************************
 *********************************** lose ***********************************
 *  purpose: Player lose when (pSum<dSum && dSum < 21)
 */
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
              cout<<endl;
        }
    }
      
}
/*******************************************************************************
 *********************************** dBust ***********************************
 * purpose: dealer bust when ((dSum>21))
 * 
 */
void dBust(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ,
       int dCard1, int dCard2)
{
    if(dSum>21)
    {
        clrscr();
    cout <<"\nDealer Bust\nYOU WIN\n";  
    for (int x=0; x<SZ; x++)
    {
        cout <<"\nDealer Bust\nYOU WIN\n";     
        chips[x]+=bets[x];
        cout <<name[x]<<" chips total: $"<<chips[x]<<endl; 
        cout<<endl;
    }
    }
   
}
/*******************************************************************************
 *********************************** dBjk **************************************
 * Purpose: Dealer Blackjack when (dSum==21)
 */
void dBjk(string name[], int chips[], int bets[], int pSum[], int dSum, int SZ,
          int dCard1, int dCard2, char uDec)
{
    
    if(dSum==21)
    {
    cout<<"****************************** Dealer **************************\n";
    cout << "\n\t\tCard 1: " << dCard1 << " Card 2: "<<dCard2<<endl;
    cout<<"****************************************************************\n";
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
        cout<<endl;
         }
         
    }
    }
    
 
}
/*******************************************************************************
 *********************************** clrscr ************************************
 * Purpose: clear screen
 */
void clrscr()
{
    for (int x=0; x<10; x++)
    {
        cout <<endl;
    }
}
/*******************************************************************************
 *********************************** srt1 **************************************
 * Purpose: sorting bets largest to smallest 
 * write values into vBet.txt file
 */
void  srt1(int bets[], int SZ) 
{
    ofstream file;
    file.open("vBets.txt");
    unsigned xSZ= sizeof(bets) / sizeof(int);
    vector<int> vBets;
    for (int i = 0; i < SZ; i++) 
    {
        cout <<" array bets "<<bets[i]<<endl<<endl;
    }
    
    for (unsigned int i = 0; i < SZ; i++) 
    {
        
        vBets.reserve(vBets.size() + xSZ);
       // vBets.push_back(bets[i]);
        copy(&bets[i], &bets[xSZ], back_inserter(vBets));
        cout <<" vector bets "<<vBets[i]<<endl<<endl;
        //result output to both file and console output
        file << "$" << vBets[i] << endl;
    }
    int temp1=0;
    cout << endl;
    //sorting bets in array  largest to smallest 
    for (int i = 0; i < SZ; i++) 
    {
        for (int j = 0; j < SZ; j++) 
        {
            if (bets[j] > bets[j + 1])
            {
                temp1 = bets[j];
                bets[j] = bets[j + 1];
                bets[j + 1] = temp1;
            }
        }
    }
  
    //passing bets to vector vBets
    file<<"Vector Bets sort from largest to smallest\n";
    file <<"Bets made during game\n";
    for (unsigned int i = 0; i < SZ; i++) 
    {
        cout <<"bets "<<bets[i]<<endl<<endl;
        vBets.reserve(vBets.size() + SZ);
        vBets.push_back(bets[i]);
        copy(&bets[i], &bets[SZ], back_inserter(vBets));
        
        //result output to both file and console output
        file << "$" << vBets[i] << endl;
    }
    file.close();

}
/*******************************************************************************
 *********************************** srt2 **************************************
 * Purpose: sorting chips smallest to largest
 * write values into vChips.txt file
 */
void  srt2(int chips[], int SZ) 
{
    ofstream file;
    file.open("vChips.txt");
    vector<int> vChips(0);
   
    int temp1;
    cout << endl;
    //sorting bets in array smallest to largest 
    for (int i = 0; i < SZ; i++) 
    {
        for (int j = 0; j < SZ; j++) 
        {
            if (chips[j] > chips[j + 1])
            {
                temp1 = chips[j];
                chips[j] = chips[j + 1];
                chips[j + 1] = temp1;
            }
        }
    }
    //passing bets to vector vBets
    file<<"Vector\nChips sort from smallest to largest\n";    
    file <<"Smallest to Largest\nChips Remaining in game\n";
    file <<"Chips\n";
    cout <<"Smallest to Largest\nChips Remaining in game\n";
    for (unsigned int i = 0; i < SZ; i++) 
    {
        
        vChips.reserve(vChips.size() + SZ);
        vChips.push_back(chips[i]);
        copy(&chips[i], &chips[SZ], back_inserter(vChips));
        
        //result output to both file and console output
        file << "$" << vChips[i] << endl;
        cout << "$" << vChips[i] << endl;
    }
    file.close();

}
/****************************** rFile ****************************************
 * Reads last place bets from file 
 */
void rFile() 
{
    ifstream file;
    string bets;
    file.open("vBets.txt");
    cout << "largest to smallest\nLast Placed ";
    while (getline(file, bets))
    {
        file>>bets;
        cout << bets << "\n";
    }
    file.close();
}
/*********************************** dDealCd ***********************************
 * Purpose: to error check dealer first drawn cards
 * check for dealer bust, dealer blackjack and sum of two aces
 */
void dDealCd(string name[], int chips[], int bets[], int pSum[], int dSum,
        int dCard1, int dCard2, int SIZE)
{ 
    cout<<"****************************** Dealer **************************\n";  
    cout << "\n\t\tCard 1 main: " << dCard1 << " Card 2: hidden "<<endl;
    dSum = dCard1 + dCard2; //dealer sum
    cout<<"****************************************************************\n";
    cout << endl;    
    
    if ((dCard1 == 1 && dCard2 == 11)||(dCard1 == 11 && dCard2 == 1) ||
       (dCard1 == 1 && dCard2 == 10) || (dCard1 == 10 && dCard2 == 1))
    {
        dError1(name, chips, bets, pSum, dCard1, dCard2, dSum, SIZE);
                
    }
    else if (dCard1 == 11 && dCard2 == 11)
    {
        dError1(name, chips, bets, pSum, dCard1, dCard2, dSum, SIZE);
        
    }
    
    else if (dCard1==1 && dCard2==1)
    {
        
   
     dError1(name, chips, bets, pSum, dCard1, dCard2, dSum, SIZE); 
    
    }
    
    
}
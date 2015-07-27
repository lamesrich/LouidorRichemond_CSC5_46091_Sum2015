/*
 * File:   main.cpp 
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 7 problem 6, Lottery
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 25, 2015, 6:47 AM
 */
//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;
//global variables
const int lotteryDigits = 10;
const int SZ = 5;

// Function Prototypes
int ltGen(int[], int, int);//lottery generator
int uIn(int[], int);//user inputs
int counter(int[], int[], int);//counter
void nums(int[], int[]);//numbers
void winLose(int);//win/lose

//Execution begins here

int main(int argc, char** argv)
{
    // declaring variables
    int ltr[SZ] = {0, 0, 0, 0, 0};
    int user[SZ] = {0, 0, 0, 0, 0};
    int mtch = 0;

    //Function Calls
    ltGen(ltr, SZ, lotteryDigits);//lottery number generator
    uIn(user, SZ);//user input
    mtch = counter(ltr, user, mtch);//counter
    nums(ltr, user);//numbers
    winLose(mtch);//win or lose

  
    return 0;
} 
/*****************************************************************************
 * Randomly generates winning lottery numbers
 * 
 * 
 */ 

int ltGen(int ltr[], int, int) 
{
    unsigned seed = time(0);
    srand(seed);

    for (int y = 0; y < SZ; y++) 
    {
        ltr[y] = rand() % lotteryDigits;
    }
    
    for (int x = 0; x < SZ; x++) 
    {
        return ltr[x];
    }

    //return lottery[0], lottery[1], lottery[2], lottery[3], lottery[4];
} 

/*****************************************************************************
 * Reads user lottery number choices
 * error check for numbers between 0-9
 * prompt user to enter lottery numbers
 */

int uIn(int user[], int) 
{
    
    for (int y = 0; y < SZ; y++) 
    {
        //prompt user to enter lottery numbers
        cout << "Enter a number between 0-9: ";
        cin >> user[y];
        
        //error check for numbers between 0-9
        while (user[y] < 0 || user[y] > 9) 
        {
            cout << "Error! Entry must be between 0 and 9: ";
            cin >> user[y];
        }
    }

    for (int x = 0; x < SZ; x++) 
    {
        return user[x];
    }
    
} 

/************************* counter *********************************************
 * Counts the number of matches
 * 
 * 
 */

int counter(int ltr[], int input[], int)
{
	int match = 0;

	for (int x = 0; x < SZ; ++x)
	{
           if (ltr[x] == input[x])
           {
             match++;
             match = match + 1;
           }
	}

	return match;
} 

/********************************* nums ****************************************
 * Displays the winning numbers and the user's numbers
 * 
 * 
 */ 

void nums(int ltr[], int user[])
{
    //output lottery numbers user and A/I        
    cout << "\nWinning numbers: \n";
    for (int x = 0; x < SZ; x++) 
    {
        
        cout << ltr[x] << " "; 
        
    }
        cout <<endl;
    //user lottery output    
    cout << "Your lottery numbers are: \n";
    for (int x = 0; x < SZ; x++) 
    {
    
        cout << user[x] << " " ;
        
    }
        cout <<endl;
        
} 

/******************************* winLose ***************************************
 * Displays the number of matches and whether or not the user has won 
 */
void winLose(int match)
{
    
    cout << "You matched " << match << " numbers";
    if (match != SZ)
    {
        cout << "\nYou lose\n";
    }  
    else
    {
          cout << "\nYou WIN\n";
    }
      

} 
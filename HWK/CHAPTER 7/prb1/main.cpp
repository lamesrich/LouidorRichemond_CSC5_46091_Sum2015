/*
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 7 problem 1, math tutor
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 24, 2015, 6:47 AM
 */
//System Libraries
#include <iostream>
#include <cstdlib>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    //declaring variables
    int SIZE;//array size
    int scores[SIZE];//array
    int ct=0, ct2=0;//counter
    
    //prompting user to enter tests
    cout <<"How many Test scores do you have: ";
    cin >> SIZE;
    for(int x=0, i=1; i<SIZE, x<SIZE; i++, x++)
    {
       ct++; 
        do 
        {
            cout <<"Enter Test Score "<<ct<<": ";
            cin >>scores[x];
            if(scores[x] < 0 || scores[x] > 100)
            {
               cout <<"\nPlease enter score greater than 0 and less than 100\n";
            }
            
        }while(scores[x] < 0);
    }
    cout <<"\nTest Scores Entered\n";
    
    for(int y=0;  y<SIZE; y++)
    {
        ct2++;
        if(scores[y]==100)
        {
            cout <<"Test Score: "<<ct2<<" ";
            cout <<scores[y]<<" perfect score\n";
        } 
          else if(scores[y] < 100)
        {
           cout <<"Test Score: "<<ct2<<" ";
           cout <<scores[y]<<" \n"; 
      
        }
      
      
    }
    
    return 0;
}

/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 4 problem 3, Roman Numeral Converter
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 5, 2015, 5:10 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
    //declaring variables
    int book;
    //prompting user to enter the quantity of book purchased 
    cout<<"How many books did you purchase: ";
    cin>>book;
    
    //deciding points earned for quanty of books purchased       
    if(book==0)
    {
        cout <<"0 pts earned: ";
    }
    else if(book==1)
    {
        cout <<"5 pts earned: ";
        
    }
    else if(book==2)
    {
        cout <<"15 pts earned: ";
        
    }
    else if(book==3)
    {
        cout <<"30 pts earned: ";
        
    }
    else if(book>=4)
    {
        cout <<"60 pts earned: ";
        
    }
    else//checking to see if number is a negative number
    {
       cout <<"Enter positive numbers only! \nPlease run again:";
    }
        
    
    //exit stage right
    return 0;
}


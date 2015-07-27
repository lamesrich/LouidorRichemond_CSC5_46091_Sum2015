/*
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 7 problem 2, Roman Numeral numbers
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 25, 2015, 9:47 AM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    const int SIZE=20;
    int uIn;
    string num[SIZE]={"I", "II", "III", "IV", "V", "VI", "VII", "VIII",  
                      "IX", "X", "XI", "XII", "XIII", "XIV", "XV", 
                      "XVI", "XVII", "XVIII", "XIX", "XX"};
    int uDec;
    
    do 
    {
        //Prompting user to enter a number
        cout <<"Enter a Number ";
        cin >>uIn;
        
        //output roman numeral number 
        cout<<"\nNum entered "<<num[uIn-=1];
        cout <<endl;
        
        //user to enter a number again or not
        cout <<"\nEnter a number again 1 for yes/-1 for no: ";
        cin >>uDec;
        
    }   while(uDec!= -1);
    

    return 0;
}


/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 4 problem 3, Roman Numeral Converter
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 5, 2015, 11:45 AM
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
    int month, day, year, magic;
    
    //prompting user to enter month in numeric form
    cout <<"Enter a month numeric digits: ";
    cin>>month;
    
    //prompting user to enter day 
    cout<<"Enter the day: ";
    cin>>day;
        
    //prompting user to enter two digit year
    cout<<"two digit year: ";
    cin>>year;
    
    magic = month*day;//calculating magic
    
    //comparing magic and year
    if(magic == year)//if magic equal to year then year is magic
    {
        cout << "This date "<<month<<"/"<<day<<"/"<<year<<" is magic";
    }
    else//if statement is false then year is not magic
    {
        cout << "This date "<<month<<"/"<<day<<"/"<<year<<" is not magic";
    }
    
    //exit stage right
    return 0;
}


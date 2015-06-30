/* 
 * File:   main.cpp
 * Author: Richemond Louidor
 * Created on June 25, 2015, 4:09 PM
 * Purpose: Lab 2 military budget as a percentage of federal budget.
 */

//System Libraries
#include <iostream> //I/O Library 
#include <iomanip>//user library
using namespace std; //Namespace for iostream

//User Libraries

//Global Constant

const float CNVPCT = 100.0f;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) 
{
//Declaring and initializing variables
   float fedBud = 3.8e12f; //federal budget
   float milSpnd = 6.06e11f; // military spending
   float perc; //purpose to hold the milSpnd to fedBud spending in percentage.
   
   perc = (milSpnd/fedBud)*CNVPCT; //calculating the percentage
   
   //displaying military spending and federal budget to console
   cout <<"Military spending is $"<<milSpnd <<"\nFederal Budget is "<<fedBud;
   
   //displaying military spending percentage of the federal budget
   cout <<"\nMilitary spending is only " << setprecision(4)<<perc 
        <<"% of the federal budget";
   
    return 0;
}


/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 3 problem 4, How much insurance?
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 3, 2015, 3:23 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) 
{
    //declaring variables
    float insPct=.80f;//purpose is the 80% of insurance needed of total cost
    float rpCost,//purpose is for user to enter replacement cost of property
          minIns;//purpose is to calculate the minimum insurance needed 
    
    //prompting user to enter input replacement cost of property
    cout <<"Enter replacement cost for Property: $";
    cin >>rpCost;
    
    minIns=insPct*rpCost;//calculating minimum insurance needed
    cout <<"\nNeed at least a minimum of $"
         <<fixed<<showpoint<<setprecision(2)<<minIns<<" to insure property\n";
    
    //program exits after successful completion
    return 0;
}


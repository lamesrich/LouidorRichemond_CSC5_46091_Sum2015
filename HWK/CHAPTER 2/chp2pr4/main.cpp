/* 
 * File:   main.cpp
 * Author: Richemond Louidor
 * Purpose: Homework, Chapter 2, problem 4, Restaurant bill
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on June 24, 2015, 10:35 PM
 */

//System libraries
#include <iostream>
#include <iomanip>
using namespace std;
//global constant

//function prototype

//execution begins here
int main(int argc, char** argv)
{
     //declaring variables
    float tax=.0675, //tax on meal cost 6.75%
          tip=.15,  //tip recommendation 15%
          mCost=44.50,//meal cost
          tot,  //calculate total cost
          aftertax, //meal cost after cost
          aftertip,//tip cost of meal
          tax2; //taxes in dollars
    
    //Here tips, tax, and total cost on meal
        tax2=mCost*tax;//tax amount in $
        aftertax=(mCost*tax)+mCost;//meal price after tax added on
        aftertip=(mCost*tip); //tip on meal in $
        tot = aftertax + aftertip;//total of the whole bill
        
        //displaying results
        cout << "Meal cost: "<<mCost <<"\n6.75% tax: $" <<tax2 <<"\n15% tip: $"
         <<aftertip <<"\nTotal: $"<<tot;
         
    
    return 0;
}


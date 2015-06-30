/* 
 * File:   main.cpp
 * Author: Richemond Louidor
 * Purpose: Homework, Chapter 2, problem 3, sales tax
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on June 23, 2015, 10:35 PM
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
    float stTax=.04,//state tax
          ctTax=.02,//county sales tax
          cost = 52.00,//item cost
          totCost;//total cost
    
    totCost = cost+((stTax*cost)+(ctTax*cost));
    

    stTax=stTax*cost;//state tax in $"s
    ctTax=ctTax*cost;//county tax in $'s
             
   //outputting sales tax, county tax and total cost
    cout <<"State tax $ " <<stTax<<"\nCounty tax $"<<ctTax<<"\nItem cost $"
         <<cost<<".00\nTotal Cost $"<<totCost;
         
    
    return 0;
}

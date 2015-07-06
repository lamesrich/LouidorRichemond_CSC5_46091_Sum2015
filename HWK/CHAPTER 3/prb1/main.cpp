/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 3 problem 1, Gas mileage
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Testing Program
 *
 * Created on June 30, 2015, 9:59 PM
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
    int miles,//total miles on a full tank
        glGas,//total gallons tank can hold
        mpg;//average miles per gallon
    
    //prompting user to input total gallon tank can hold
    cout<<"Please enter the number of gallons the tank can hold ";
    cin>>glGas;
    
    //prompting user to input total miles on a full tank
    cout <<"Please enter number of miles can be driven on a full tank ";
    cin >>miles;
    
    mpg=miles/glGas;//calculating miles per gallon
    
    //outputting result
    cout <<"The average MPG of the car is "<<mpg <<" miles per gallon of gas\n";
   
    //program exit after successful run
    return 0;
}
/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 3 problem 3, Housing Costs
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 3, 2015, 12:51 PM
 */

//system libraries
#include <cstdlib>
#include <iostream>

//name space 
using namespace std;

//global variables 

//function prototypes

int main(int argc, char** argv)
{
    //declaring variable for monthly expenses
    float rent,
          util, 
          phones, 
          cable,
          monthly,
          yearly;
    
    //prompting user to enter rent payment
    cout <<"Enter rent or mortgage payment $";
    cin >>rent;
    //prompting user to enter utility payment
    cout<<"Enter utilities payment for month $";
    cin >> util;
    //prompting user to enter Phone payment
    cout<<"Enter Phone payment for month $";
    cin >> phones;
    //prompting user to enter Cable payment
    cout<<"Enter Cable payment for month $";
    cin >> cable;
    
    cout <<endl;
    
    monthly = rent+util+cable;//total month calculation
    yearly= monthly*12;//total year calculation
    
    //output result
    cout <<"Total monthly cost is $"<<monthly<<"\nTotal yearly cost $"<<yearly;
    cout<<endl;
    //exit stage right
    return 0;
}


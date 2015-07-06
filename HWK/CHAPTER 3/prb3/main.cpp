/* 
 * File:   main.cpp
 * Author: lamesrich
 *
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
    float rent,
          util, 
          phones, 
          cable,
          monthly,
          yearly;
    
    cout <<"Enter rent or morgage payment $";
    cin >>rent;
    
    cout<<"Enter utilities payment for month $";
    cin >> util;
    
    cout <<"Enter phonee payment $";
    cin>>cable;
    cout <<endl;
    monthly = rent+util+cable;
    yearly= monthly*12;
    cout <<"Total monthly cost is $"<<monthly<<"\nTotal yearly cost $"<<yearly;
    cout<<endl;
    return 0;
}


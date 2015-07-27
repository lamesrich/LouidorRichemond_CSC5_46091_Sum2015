/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 5 problem 4, celsius fahrenheit table
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 13, 2015, 9:35 AM
 */
//System Library
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) 
{
    float mph;//Miles per hour
    
    //looping 60-130 kph incremented by 5 to mph
    for(int kph=60; kph<=130; kph+=5)
    {
        
        //output KPH results incrementing by five
        cout<<kph<<" KMH->\t";
        
        mph=kph*.6214;//converting KPH to MPH
        //output MPH results
        cout <<showpoint<<fixed<<setprecision(2)<<mph<<" MPH"<<endl;
    }
    
    //exit stage right
    return 0;
}
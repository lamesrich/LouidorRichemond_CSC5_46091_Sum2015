/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 5 problem 4, celsius fahrenheit table
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 13, 2015, 9:05 AM
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
    float fahr;//fahrenheit temp 
    
    //looping 0-20 celsius to fahrenheit
    for(int celsius=0; celsius<21; celsius++)
    {
        fahr=((1.8) * celsius) + 32.0;
        
        //output resut
        cout <<"celsius temps "<<celsius <<" fahrenheits temp: "
             <<showpoint<<fixed<<setprecision(2)<<fahr<<endl;
    }
  
    return 0;
}
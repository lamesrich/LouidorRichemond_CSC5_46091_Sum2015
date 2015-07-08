/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 3 problem 5, Batting Average
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 3, 2015, 3:48 PM
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
    //declaring variable
    float bats,//number of bats
          hits,//number of hits
          avg;//to calculate average
    //prompting user to enter # of times at bats    
    cout <<"enter # of time at bats ";
    cin >>bats;
    //prompting user to enter # of hits
    cout <<"enter # of hits at bats ";
    cin >>hits;
    
    avg = hits/bats;//calculating players batting average
    cout <<"Player batting average is "<<showpoint<<fixed<<setprecision(4)<<avg;
    cout<<endl;
    //exit stage right
    return 0;
}


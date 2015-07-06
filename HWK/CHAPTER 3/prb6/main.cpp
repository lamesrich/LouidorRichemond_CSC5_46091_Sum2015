/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 3 problem 6, Test Average
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 3, 2015, 3:59 PM
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
    //declaring variable for test scores and test average
    float test1, test2, test3, test4, test5, tstavg;
    //prompting user to enter test scores 1-5    
    cout <<"enter 5 test scores, press space or enter after each one: ";
    cin >>test1>>test2>>test3>>test4>>test5;
     
    //calculating test averages
    tstavg = (test1+test2+test3+test4+test5)/5;
    
    //Displaying test average on console
    cout <<"test averages is "<<fixed<<setprecision(1)<<tstavg;
    cout<<endl;
    return 0;
}
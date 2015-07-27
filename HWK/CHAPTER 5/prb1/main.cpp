/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 5 problem 1, characters for the ascii codes
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 12, 2015, 9:34 PM
 */

//System Library
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) 
{
    int num, seed=time(0);
    srand(seed);
    for(int x=0;x<16;x++)
    {
       num =32 + rand()% 96;//generating number from 32-127
        //outputing static cast version of num to char 
        cout <<"ascii number "<<num<<" char-> "<<static_cast<char>(num)<<endl;
    }
    //exit stage right
    return 0;
}
/* 
 * File:   main.cpp 
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 6 problem 3, falling distance
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 14, 2015, 2:27 PM
 */
//system libraries
#include <iostream>
#include <cstdlib>
//user libraries
using namespace std;
//global variables
//function prototype
float fDst(float);
//execution begins here
int main(int argc, char** argv)
{
    //declaring variables 
    float dst;
    int time=0;
    int count=0;
    //output table header
    cout <<"Falling distance of object\nSec\tDistance m/s\n";
    
    //generating 0-10 sec for time
    for(int x=0; x<=10; x++)
    {
      dst=fDst(time++);
      cout<<" "<<count <<"\t  "<<dst<<endl;
      count++;
       
    }
   
    //exit stage right
    return 0;
}
/*****************************fDst*********************************************
 * purpose: calculate the falling distance of a falling object
 * time is passed from main and then return the total distance object falls 
 * dst=(((.5)*9.8)*fnTime);
 * 
 *  
 */

//Function falling distance (fDst)
float fDst(float fnTime)
{
    float dst;
    fnTime*=fnTime;//time squared
   
    dst=(((.5)*9.8)*fnTime);//calculating distance formula
   
    //return dst to main
    return dst;
    
}


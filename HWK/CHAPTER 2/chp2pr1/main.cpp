/* 
 * File:   main.cpp
 * Author: Richemond Louidor
 * Purpose: Homework, Chapter 2, problem 1, sum of two numbers
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on June 23, 2015, 10:17 PM
 */

//System libraries
#include <iostream>
using namespace std;
//global constant

//function prototype

//execution begins here
int main(int argc, char** argv)
{
    //Declaring variables for numbers
    int num1=62, //num1 to hold 62
        num2=99, //num1 to hold 99
        total;   //variable to hold the sum of the two numbers
    
    total = num1 + num2; //adding the two numbers
    
    //Displying the sum of the two numbers
    cout <<"62 + 99 = " << total;
    return 0;
}


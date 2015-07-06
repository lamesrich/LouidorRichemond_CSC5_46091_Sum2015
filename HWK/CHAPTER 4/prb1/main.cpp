/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 4 problem 1, maximum and minimum
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Testing Program
 *
 * Created on July 5, 2015, 9:59 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
    //declaring variables
    int num1, num2;
    
    //prompting user to input two numbers
    cout<<"Please enter two numbers follow by a space or enter: ";
    cin >>num1>>num2;
    
    //comparing numbers max and min
    if(num1<num2)//comparing if number 1 is less than number 2
    {
        cout <<num1<<" is less than "<<num2;
        
    }
    else if(num1>num2)//comparing if number 1 is greater than number 2
    {
        cout <<num1<<" is greater than "<<num2;
    }
    else// number 1 is equal to number 2
    {
        cout <<num1<<" is equal to "<<num2;
    }
    
    //exit stage right
    return 0;
}


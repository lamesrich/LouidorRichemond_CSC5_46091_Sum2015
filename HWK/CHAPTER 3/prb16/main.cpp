/*
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 3 problem 16, math tutor
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 6, 2015, 6:47 AM
 */
//System Libraries
#include <iostream>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
    int num1, num2;//random number 1&2
    int seed;//srand initializer

    //initializing and configuring random number 1 and 2
    seed=time(0);
    srand(seed);
    num1=1 + rand() % 9;//random number 1
    num2=1 + rand() % 9;//random number 2

    //prompting user to input the sum of the two random numbers
    cout<<"what is the sum\n"<<"\t "<<num1<<"\n\t "<<num2<<"\n\t----\n\t ";
    int userSum, //user sum of two numbers
        sumTot; //purpose is add the sum of the two numbers
    cin>>userSum;
    
    sumTot=num1+num2;//calculating the sum of the two random numbers
    
    cout <<"The sum is: "<<sumTot;//outputting the correct sum of random numbers

    //exit stage right
    return 0;
}
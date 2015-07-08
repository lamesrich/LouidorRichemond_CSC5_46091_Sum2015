/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 4 problem 8, math tutor
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
    int num1, num2;
    int seed;
    
    //generating random number 10 - 50
    seed=time(0);
    srand(seed);
    num1=(rand() %41)+ 10;
    num2=(rand() %41)+ 10;
    
    cout<<"what is the sum\n"<<"\t "<<num1<<"\n\t+"<<num2<<"\n\t----\n\t ";
    int sum, sumTot;
    cin>>sum;
    sumTot=num1+num2;//calculating the sum of the two numbers
    
    //determining if user answer is correct or wrong
    if(sum==sumTot)
    {
        cout <<"Correct!'_'\n";
    }
    else
    {
        cout <<"Wrong!'^'\ncorrect answer is :"<<sumTot;
    }
    

    return 0;
}
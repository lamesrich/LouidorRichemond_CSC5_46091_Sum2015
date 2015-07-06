/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 3 problem 23 part 1, using files - writing to file 
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 4, 2015, 3:45 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
    //declaring ofstream variable
    ofstream out;
    //declaring float number variables
    float num1, num2, num3, num4, num5;
    
    out.open("fnums.txt");//creating file for floating numbers
    
    //promting user to enter float numbers
    cout <<"please enter 5 floating numbers: ";
    cin>>num1>>num2>>num3>>num4>>num5;
    cout<<"Thank you ";
    
    //writing user input to file
    out<<num1<<endl<<num2<<endl<<num3<<endl<<num4<<endl<<num5;
    
    //closing file 
    out.close();
    
    //exit stage right
    return 0;
}


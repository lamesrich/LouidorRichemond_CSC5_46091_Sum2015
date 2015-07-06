/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 3 problem 23 part 2, using files - reading files 
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 4, 2015, 3:57 PM
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
    ifstream in;
    //declaring float number variables
    float num1, num2, num3, num4, num5;
    
    in.open("fnums.txt");//opening floating numbers file
        
    //reading numbers from file
    in >>num1;
    cout<<fixed<<showpoint<<setprecision(2)<<num1<<"  \n";
    in>>num2;
    cout<<fixed<<showpoint<<setprecision(2)<<num2<<endl;
    in>>num3;
    cout<<fixed<<showpoint<<setprecision(2)<<num3<<endl;
    in>>num4;
    cout<<fixed<<showpoint<<setprecision(2)<<num4<<endl;
    in>>num5;
    cout<<fixed<<showpoint<<setprecision(2)<<num5<<endl;
    //cout<<num1<<endl<<num2<<endl<<num3<<endl<<num4<<endl<<num5;
    
    
    //closing file 
    in.close();
    
    //exit stage right
    return 0;
}


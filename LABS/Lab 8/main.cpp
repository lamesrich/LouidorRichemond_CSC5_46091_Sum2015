/* 
 * File:   main.cpp
 * Author: Richemond, Louidor
 * Purpose: Lab 8, display numbers, squared numbers, and multiplication table
 * Created on July 22, 2015, 5:41 PM
 */
//system libraries
#include <iostream>
#include <iomanip>

//user libraries
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    //declaring variables
    int SIZE=10;//Array size 1
    int SIZE2=12;//Array size 2
    int ar1[SIZE],//array one 
        ar2[SIZE];//array two 
    int ar3[SIZE2][SIZE2];//two dimensional arrays
        
    //numbers output
    cout<<"Numbers: \t ";
    for(int x=1; x<=SIZE; x++)
    {
        cout<<setw(5)<<(ar1[x]=x)<<" ";
                
    }
    
    //numbers squared output
    cout<<endl<<"Numbers squared: ";
    for(int x=1; x<=SIZE; x++)
    {
       
        cout<<setw(5)<<(ar2[x]=x*x)<<" ";
        
    }
    
    //multiplication table
    cout<<endl<<"\n\t\tMULTIPLICATION TABLE \n";
    for(int x=1; x<=SIZE2; x++)
    {
       
        for(int y=1; y<=SIZE2; y++)
        {
           cout<<" "<<setw(3)<<(ar3[x][x]=x*y);
        }
       
        cout<<endl;
    }
    
    //exit stage right
    return 0;
}
/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 5 problem 18, rectangle display
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 12, 2015, 4:28 PM
 */
#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    int length, width;
        
    cout<<" what is the length of rectangle: ";
    cin >>length;
    
    cout <<" \nwhat is the width of rectangle: ";
    cin >>width;
    //initializing loop
    if(length<=width)
    {
    for (int i=0; i < length; i++)//number of rows
    {
        for (int j=0; j < width; j++) //number of columns
        {
            cout << "X"; 
        }
        cout<<endl;
    }
    }
    else
    {
       for (int i=0; i < width; i++)//number of rows
    {
        for (int j=0; j < length; j++) //number of columns
        {
            cout << "X"; // two rows 
        }
        cout<<endl;
    } 
    }

    return 0;
}


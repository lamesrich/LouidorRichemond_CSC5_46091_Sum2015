/*
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 8 problem 1, Lottery
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 25, 2015, 6:47 AM
 */
//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;
//global variables


// Function Prototypes

void lsrch() 
{
    int key, i, size=10;
    
    int array[10] = {2, 3, 4, 5, 6, 2, 3, 44, 5, 3};

    i = 0;
    cout << "Enter the item you want to find: ";
    cin >> key;
    for (i = 0; i < size; i++)
    {
        if (key == array[i]) 
        {
            cout << "Key Found At Index Number :  " << i << endl;
            break;
        }
    }


    if (i != size) 
    {
        cout << "KEY FOUND at index :  " << i;
    } 
    else 
    {
        cout << "KEY NOT FOUND in Array  ";
    }

}
 

//Execution begins here

int main(int argc, char** argv)
{
    const int sz=18;
    int num1;
    int num[sz]={5658845, 4520125, 8080152, 4562555, 1005231, 6545231,
                 7895122, 8777541, 8451277, 5552012, 5050552, 7825877, 
                 3852085, 7576651, 7881200, 1302850, 1250255, 4581002};
    
    
    cout <<"Enter acct# ";
    cin>>num1;
    for (int i = 0; i < sz; i++)
    {
        if (num1 == num[i]) 
        {
            cout << "Number is valid :  " << i << endl;
            //break;
        }
        else
        {
            cout <<"Number invalid ";
            //break;
        }
        break;
    }


    return 0;
}


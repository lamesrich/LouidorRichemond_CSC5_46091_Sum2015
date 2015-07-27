/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 5 problem 2, sum numbers
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 12, 2015, 10:21 PM
 */
//System Library
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) 
{
    
    //declaring variables
    int num, userIn;
    int i = 0; //counter
    do {
        //prompting user to enter a number
        cout << "enter a number greater than 0: ";
        cin >> userIn;

        //getting sum from 1 to userIn value
        while (i <= userIn && userIn > 0) 
        {
            num += i;
            i++;
        }
    } while (userIn <!0);
    
    //displaying result
    cout << "sum from 1 to " << userIn << " = " << num << endl;
   
   //exit stage right
    return 0;
}
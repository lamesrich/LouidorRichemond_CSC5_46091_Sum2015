/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 5 problem 3, distance traveled
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 12, 2015, 11:21 PM
 */
//System Library
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) 
{
   
 //declaring variables
    int spd, hrs; //speed and hours
    float totDst;//total distance travel
    int count = 1;//counter initialize to one

    //logic starts here
    do 
    {
          //prompting user to enter mph and distance         
        cout << "vehicle MPH must be greater than 0: ";
	cin >> spd;
        cout << "Hour(s) traveled: ";
	cin >> hrs;
        //warning user of the restrictions on speed and hours
        if(spd<0 || hrs<1)
        {
            cout <<"speed must be greater than 0\n";
            cout <<"also hours have to be greater than 1\n";
            cout<<"please start over\n";
        }
	
        else
        {
          cout << "Hour\tDistance" << endl;//header for output
          while (count <= hrs && spd>0 && hrs>1)
          {
            totDst = spd * count;//calculating distance traveled
            cout <<" "<< count<< " \t  " << totDst << endl;//result ouput
            count += 1;
	  }
        }
        
    } while (spd <!0 || hrs<!1);
    
  
    //exit stage right
    return 0;
}
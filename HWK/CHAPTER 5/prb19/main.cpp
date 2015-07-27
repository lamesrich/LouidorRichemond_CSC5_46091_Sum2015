/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 5 problem 19, diamond display
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 10, 2015, 10:29 PM
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
//function prototypes
//exercusion begins here
int main(int argc, char** argv) 
{
    
    //initializing loop
    for (int i; i < 1; i++)
    {
        for (int j; j < 1; j++) {
            cout << "\t   *\n\t  ***\n"; //ouputing first two rows 
            cout << "\t *****\n\t*******\n";//third and fourth row

        }
        //displaying stars in reverse order
        for (int x; x < 1; x++) 
        {

            
            for (int y; y < 1; y++) {

                cout << "\t *****\n";//fifth row
                cout << "\t  ***\n\t   *\n";//sixth and seventh row

            }
        }
    }
    
    return 0;
}


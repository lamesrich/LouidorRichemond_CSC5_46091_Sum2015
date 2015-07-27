/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 5 problem 20, Triangle pattern
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 12, 2015, 4:11 PM
 */
#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    for (int i; i < 3; i++) {


        for (int j; j < 1; j++) 
        {
            cout << "*\n***\n";//ouputing first two rows 
            cout << "*****\n*******\n";//third and fourth row

        }
        //displaying stars in reverse order
        for (int x; x < 3; x++) 
        {

            //initiating loop for rows
            for (int y; y < 1; y++) {

                cout << "*****\n";//fifth row
                cout << "***\n*\n";//sixth and seventh row

            }
        }
    }

    return 0;
}


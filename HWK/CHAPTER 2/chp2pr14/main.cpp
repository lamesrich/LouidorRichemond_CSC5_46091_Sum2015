/* 
 * File:   main.cpp
 * Author: Louidor Richemond 46091
 * Created on June 28, 2015, 12:12 PM
 * Purpose: Basketball Player Height, problem #14
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 */

//System libraries
#include <iostream>
using namespace std;
//global constant

//function prototype

//execution begins here
int main(int argc, char** argv)
{
    //declaring variables
    const int CVNFT = 12;//conversion from inches to feet factor
    int hght =73; //Players height
    int ft, in; //conversion variables for feet and inches 
    
    ft=73/12; //converting to ft
    in=73%12; //getting remainder which will represents inches in output
    
    //outputting results here
    cout <<"Players height "<<hght<<" inches\nEquivalent to "<<ft<<"'"
         <<in<<" ft'in";
    
    
    //program to exit after a successful run
    return 0;
}


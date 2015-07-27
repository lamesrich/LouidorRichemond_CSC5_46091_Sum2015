/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 6 problem 1, Markup
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 13, 2015, 3:11 PM
 */
//System Library
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float calRtl(float, float);

//Execution Begins Here!
int main(int argc, char** argv) 
{
    //declaring variables
    float wholeS, PCT, retailP;
    char userDec;
    
    do 
    {
        //prompting user to enter wholesale price and markup percentage
        cout << "What is the wholesale price: $";
        cin >>wholeS;
        cout << "what is the markup Percentage %";
        cin>>PCT;
        
        if (wholeS < 0 || PCT < 0) 
        {
            cout << "enter a $/% value greater than 0, try again\n";

        } 
        else 
        {
           
            //passing users input as arguments to calRtl function
            retailP = calRtl(wholeS, PCT);
            //output result
            cout << "Retail price is $" << showpoint << fixed
                 << setprecision(2) << retailP << endl;
     
            cout <<"\nwill you like to enter in another item y/n: ";
            cin>>userDec;
        }
    
    }
    while(userDec!='n');
    
    
    //exit stage right
    return 0;
}
/*******************************************************************************
 ********************************calRtl*****************************************
 * arguments
 * wSale //wholesale price
 * PCT //markup percentage converter
 *
 * variable  
 * rPrice ->retail price 
 * rPrice=wSale+((PCT/100)*wSale) retail price calculation
 * 
 * return rPrice to main
 */

float calRtl(float wSale, float PCT)
{
    //declaring variable
    float rPrice;
    
    //calculating retail price with markup percentage
    rPrice=wSale+((PCT/100)*wSale);
    
    //returned rPrice to main
    return rPrice;
    
}
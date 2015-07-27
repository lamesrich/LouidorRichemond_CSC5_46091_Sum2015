/* 
 * File:   main.cpp 
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 6 problem 2, fahrenheit temperature table
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 14, 2015, 12:42 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float ftoc(float);
float ftcItrp(float,float,float,float,float);

//Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare variables
    float f1=32.0f,f2=212.0f,c1=0.0f,c2=100.0f;
    
    //Loop and output all the values
    cout<<"Fahrenheit";
    cout<<"   Celsius";
    cout<<"   Celsius";
    cout<<endl;
    
    for(float fahren=f1;fahren<=f2;fahren++)
    {
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<setw(10)<<fahren;//Fahrenheit temperature ouput
        cout<<setw(10)<<ftoc(fahren);//passing fahren to ftotoc function
         //passing f1, f2, c1, c2 and fahren to ftcItrp function
        cout<<setw(10)<<ftcItrp(fahren,f1,f2,c1,c2);
        cout<<endl;
    }

    //Exit stage right!
    return 0;
}
/******************************************************
 ***************** ftcItrp *****************************
 ******************************************************
 * Purpose:  converting Fahrenheit temperatures to celsius
 * Input:f, f1, f2, c1, c2
 * Return c1+(c2-c1)*(f-f1)/(f2-f1)
 */

float ftcItrp(float f,float f1,float f2,
                      float c1,float c2)
{
    return c1+(c2-c1)*(f-f1)/(f2-f1);
}
/******************************************************
 ***************** ftcItrp *****************************
 ******************************************************
 * Purpose:  converting fahrenheit formula to decimal form
 * Input:f
 * Return 5.0f/9*(f-32)
 */
float ftoc(float f)
{
    return 5.0f/9*(f-32);
}
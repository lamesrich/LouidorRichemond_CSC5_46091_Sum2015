/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 3 problem 18, Monthly Payments
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 3, 2015, 7:19 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
    //Declaring Variables
    float lMnt,//loan amount
          nPmnt,//number of payments
          anIr;//annual interest rate
    cout <<"Please enter loan amount: $";
    cin >>lMnt;
    cout<<"Enter number of payments: ";
    cin >>nPmnt;
    cout <<"Enter annual interest rate: ";
    cin >>anIr;
    
    
    float rates,//purpose to hold annual interest rate on loan 
          payments;//purpose it display payment amounts monthly
                 
    rates=(anIr/12);//calculating monthly interest rate
    
    //outputting loan amount and rates in percentage
    cout<<"Loan Amount:\t\t\t$"<<lMnt<<endl;
    cout<<"Monthly Interest Rate:\t\t"<<rates<<"%"<<endl;
    
    float r,//purpose is to hold 1+rate
          mRate;//To rase temp value to the power of payments
    
    rates=(anIr/12)/100.00f;//rates conversion from percentage to decimal
    r=1+rates;//temp variable to hold (1+rate)
    mRate = pow(r, nPmnt);//raising r to the power of nPmnt
    
    //calculating monthly payments 
    payments=((rates*mRate)*lMnt)/(mRate-1);
        
   //outputting number of payments 
    cout<<"Number of Payments:\t\t"<<nPmnt<<endl;
   //outputting monthly payments to a fixed point of 2 decimals
    cout<<"Monthly Payments:\t\t$"<<fixed<<setprecision(2)<<payments<<endl;
    
    float payBack,//paid back amount
          irPaid;//interest paid on loan
   
    payBack=payments*nPmnt;//calculating pay back amount
    irPaid=payBack-lMnt;//calculating interest paid
    //outputting amount need to be paid back and interest paid
    cout<<"Amount Paid Back:\t\t$"<<fixed<<setprecision(2)<<payBack<<endl;
    cout<<"Interest Paid:\t\t\t$"<<fixed<<setprecision(2)<<irPaid<<endl;

    //exit stage right
    return 0;
}


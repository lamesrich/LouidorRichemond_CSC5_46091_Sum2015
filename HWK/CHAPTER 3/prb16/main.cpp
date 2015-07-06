/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 3 problem 16, math tutor
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 3, 2015, 3:59 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char nMonths=36; //Number of Months to payoff loan
    unsigned short loan=10000;//Loan Amount in $'s
    float ir=0.01f;           //Interest Rate per Month
    float mnthPay;            //Monthly Payment in $'s
    float temp=1.0f;          //Intermediate value found in Monthly Payment equation
    float cstLoan;            //Cost of the loan in $'s
    float totCost;            //Total paid back to lender
    
    //Calculate the intermediate value
    float onePlsi=(1+ir);
    for(int months=1;months<=nMonths;months++){
        temp*=onePlsi;
    }
    
    //Calculate the monthly payment
    mnthPay=ir*temp*loan/(temp-1);
    mnthPay=static_cast<int>(mnthPay*100)/100.0f;//Exact amount in pennies
    totCost=nMonths*mnthPay;
    cstLoan=totCost-loan;
    
    //Output the results
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Loan Amount:          $"<<setw(8)<<loan*1.0f<<endl;
    cout<<"Monthly Interest Rate: "<<setw(8)<<ir*100<<"%"<<endl;
    cout<<"Number of Payments:    "<<setw(8)<<static_cast<int>(nMonths)<<endl;
    cout<<"Monthly Payment:      $"<<setw(8)<<mnthPay<<endl;
    cout<<"Amount Paid Back:     $"<<setw(8)<<totCost<<endl;
    cout<<"Interest Paid:        $"<<setw(8)<<cstLoan<<endl;
    
    //Exit stage right!
    return 0;
}

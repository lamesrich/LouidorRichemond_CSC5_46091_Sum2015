/* 
 * File: main.cpp
 * Author: Dr. Mark E. Lehr, Richemond Louidor
 * Created on July 8, 2015, 10:45 AM
 * Purpose: Retirement Calculator
 */


//System Library
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void header(float &, float &, float &, float &, float &);//header function
void retire(float &, float &, float &, float &);//retirement function 
void table(float &, float &, float &, float &);//table function
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    float savings = 0; //Initial Savings at start of Employment
    float year = 0; //Start at year 0
    //Variable for End of Year Interest
    float endResult;
    //Using Function
    float salary, invRate, deposit, savReq, pDep;
    header(salary, invRate, deposit, savReq, pDep);//function header
    //Display Beginning 
    cout << salary <<" = Salary\n";
    cout << invRate*100 << "% = " << "Investment Rate -> See Muni Bonds"<< endl;
    cout << pDep*100  << "% = " << "Deposit as a % of Salary" << endl;
    cout << fixed << setprecision(0) << savReq << " = " 
         << "Amount needed to Retire $'s" << endl << endl;
    
    cout << "Year" << setw(20) << "B of Yr Savings" << setw(20) 
         << "End of Yr Interest" << setw(20) << "End of Yr Deposit" << endl;
    
    // calculating Retirement
    do 
    {
        //Find End of Yr Interest
        endResult = savings*invRate;
        //Display
        cout << fixed << setprecision(0);
        table(savings, endResult, deposit, year);
        //Using Retire Function
        retire(savings, invRate, deposit, year);
    }
    while(savings < savReq);//When we have enough to retire then exit the loop
    
    //Find End of Yr Interest for year 31
    endResult = savings*invRate;
    
    //Final Result for year 31
    cout << year << setw(14) << savings << setw(20) << endResult << setw(20) 
         << deposit << endl;
    //Exit Stage Right!
    return 0;
}

void header(float &salary, float &invRate, float &deposit, 
            float &savReq, float &pDep) 
{
    salary = 100000; //Average Salary in $'s
    invRate = 0.06f;//Investment Rate -> see Calif Muni Bonds
    pDep = 0.20f;//Of your gross Salary -> Percentage Deposited 
    savReq = salary / invRate;//Savings required at retirement
    deposit = pDep*salary;  //Yearly deposit in $'s
}
//receiving values from main and doing calculation for main
void retire(float &savings, float &invRate, float &deposit, float &year) 
{
    savings = savings * (1 + invRate); //Earning based upon investment rate
    savings = savings + deposit; //Add the deposit after earning interest
    year++;
}

//creating table
void table(float &savings, float &endResult, float &deposit, float &year)
{
    //line formatting
    if (year < 10) {
        cout << year << setw(15) << savings << setw(20) << endResult << setw(20)
             << deposit << endl;
    }
    if (year >= 10) 
    {
        cout << year << setw(14) << savings << setw(20) << endResult << setw(20)
             << deposit << endl;
    }
}
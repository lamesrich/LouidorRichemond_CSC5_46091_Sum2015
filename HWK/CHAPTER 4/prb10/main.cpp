/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 4 problem 10, bank charges
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 7, 2015, 12:46 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
    //declaring bank monthly charge as constant
    const int bank = 10;
    
    //prompting user to enter amount of checks written in the past month
    cout <<"Enter checks written in the past month: ";
    int user;//purpose is for user input 
    cin >>user;
    
    if(user<20)
    {
        float total,
              chkTot,
              charge=.10f;
        
        chkTot=user * charge;
        total=bank + (user*charge);
        //displaying total fees acquired since the past month
        cout<<"Bank monthly fee: \t$10.00\nChecks fee: $" 
            <<showpoint<<fixed<<setprecision(2)<<charge<<"EA \t$ "<<chkTot<<"\nTotal Fee:\t\t$"
            <<showpoint<<fixed<<setprecision(2)<<total<<endl;
      
    }
    else if(user>=20 && user<=39)
    {
        float total,
               chkTot,
              charge=.08f;
        
        chkTot=user * charge;
        total=bank + (user*charge);
        //displaying total fees acquired since the past month
        cout<<"Bank monthly fee: \t$10.00\nChecks fee: $"<<showpoint<<fixed
            <<setprecision(2)<<charge<<"EA   \t$ "<<chkTot<<"\nTotal Fee:\t\t$"
            <<showpoint<<fixed<<setprecision(2)<<total<<endl;
      
    }
     else if(user>=40 && user<=59)
    {
        float total,
              chkTot,
              charge=.06f;
              
              chkTot=user * charge;
            total=bank + (user*charge);
        //displaying total fees acquired since the past month
        cout<<"Bank monthly fee: \t$10.00\nChecks fee: $"<<showpoint<<fixed
            <<setprecision(2)<<charge<<"EA  \t$ "<<chkTot<<"\nTotal Fee:\t\t$"
            <<showpoint<<fixed<<setprecision(2)<<total<<endl;
      
    }
     else if(user>=60)
    {
        float total,
              chkTot,
              charge=.04f;
        
            chkTot=user * charge;
            total=bank + (user*charge);
            
        //displaying total fees acquired since the past month
        cout<<"Bank monthly fee: \t$10.00\nChecks fee: $"<<showpoint<<fixed
            <<setprecision(2)<<charge<<"EA  \t$ "<<chkTot<<"\nTotal Fee:\t\t$"
            <<showpoint<<fixed<<setprecision(2)<<total<<endl;
      
    }
    
    
    return 0;
}


/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 3 problem 2, stadium seating
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on June 30, 2015, 10:35 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) 
{
    //declaring variables
    int classA=15,//class 'A' ticket cost
        classB=12,//class 'B' ticket cost
        classC=9;//class 'C' ticket cost
 
    int tktQtyA, //class 'A' ticket quantities
        tktQtyB, //class 'B' ticket quantities
        tktQtyC; //class 'C' ticket quantities
 
    cout <<"Enter Tickets sold under Class A $15.00: ";
    cin >> tktQtyA;
    cout <<"Enter Tickets sold under Class B $12.00: ";
    cin >> tktQtyB;
    cout <<"Enter Tickets sold under Class C $9.00: ";
    cin >> tktQtyC;
 
  
    float tktTotA, //class 'A' ticket sales total
          tktTotB, //class 'B' ticket sales total
          tktTotC, //class 'C' ticket sales total
          total;   //total sales generated
 
    tktTotA=classA*tktQtyA;//calculating class 'A' ticket total sale
    tktTotB=classB*tktQtyB;//calculating class 'B' ticket total sale
    tktTotC=classC*tktQtyC;//calculating class 'C' ticket total sale
    total =tktTotA+tktTotB+tktTotC;
    
    //outputting sales amount for each class seating and total for all classes
    cout<<"Class A Total sales is $"<<fixed<<showpoint<<setprecision(2)
        <<tktTotA<<endl;
    cout<<"Class B Total sales is $"<<fixed<<showpoint<<setprecision(2)
        <<tktTotB<<endl;
    cout<<"Class C Total sales is $"<<showpoint<<fixed<<setprecision(2)
        <<tktTotC<<endl;
    cout<<"Total sales generated is $"<<showpoint<<fixed<<setprecision(2)
        <<total<<endl;
    
    //exit stage right
    return 0;
}

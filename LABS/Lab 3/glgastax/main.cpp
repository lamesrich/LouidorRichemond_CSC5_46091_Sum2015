/* 
 * File:   main.cpp
 * Author: Richemond Louidor
 * Created: on June 26, 2015, 2:15 PM
 * Purpose: Lab 3, calculating taxes on a gallon of gas
 */

//system libraries
#include <iostream> //file I/O
#include <iomanip>
#include <cstdlib>

using namespace std;//std namespace -> iostream
//User Libraries
//Global constants
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) 
{
    //declaring variables
    float fedTax = .18f; //Federal Tax $'s
    float calTax = .36f; //California Tax $'s
    float slsTax = .08f; //California Sales Tax%
    float gallon = 3.69f;//Price of a gallon of gas $'s with all taxes included
    float wFedTax, //Gallon of gas total without federal taxes  
          wCalTax, //Gallon of gas total without California taxes
          wSlsTax, //Gallon of gas total without sales tax
          wTotTax, //Gallon of gas total without taxes
          taxes;   //total taxes $'s
    
    slsTax = (gallon * slsTax); //calculating sales tax in the $amount
    
    wFedTax= gallon - fedTax; //calculating without federal taxes 
    wCalTax=gallon - calTax; //calculating without cal tax added on
    wSlsTax=gallon - slsTax; //calulating without sales taxes added on
    wTotTax=gallon-(fedTax+calTax+slsTax); //calculating withou taxes
    taxes = fedTax+calTax+slsTax; //calculating total taxes
    
    //value outputs for federal, sales, and california tax also galon gas 
    cout <<"Federal Tax \t\t$"<< fedTax << "\nCalifornia Tax \t\t$"<<calTax;
    cout <<"\nSales Tax \t\t$"<<fixed<<setprecision(2)<< slsTax
         << "\nGallon of gas total \t$"<<gallon<<endl;
    
    //outputing total taxes and without taxes
    cout <<"\nGallon of gas without Federal taxes $" 
         <<fixed<<setprecision(2)<<wFedTax<<endl //gallon without federal tax
         <<"Gallon of gas without California Tax $"
         <<fixed<<setprecision(2)<<wCalTax<<endl //gallon without Cal tax
         <<"Gallon of gas without sales tax $"
         <<fixed<<setprecision(2)<<wSlsTax<<endl //gallon without sales tax
         <<"Gallon of gas before taxes $"
         <<fixed<<setprecision(2)<<wTotTax<<endl //gallon without any tax
         <<"Total tax on gallon of gas $" 
         <<fixed<<setprecision(2)<<taxes<<endl; //total tax on gallon of gas
            
    //program exit after successful run        
    return 0;
}


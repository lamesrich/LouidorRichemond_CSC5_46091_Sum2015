/*
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 7 problem 3, chips and salsa
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 25, 2015, 6:47 AM
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
    const int SZ=5;
    string nm[SZ]={"Mild", "Medium", "Sweet", "Hot", "Zetsy"};
    int sQty[SZ];
    int sml, lrg;
   
    for(int x=0; x<SZ; x++)
    {        
        cout <<"Enter Sales QTY for "<<nm[x]<<": ";
        cin >> sQty[x];
       
    } 
    
    //output sales report
    cout <<endl<<endl;
    cout <<"Sales Report\n";
    for(int x=0; x<SZ; x++)
    {        
       cout <<nm[x]<<": "<<sQty[x]<<endl;
       nm[x]=sQty[x];
    } 
    
    //small and large number logic
    sml=sQty[0];
    lrg=sQty[0];
    string smst, lrgst;
    for (int i = 1; i < SZ; i++)
    {
        //large number 
        if (sQty[i] > lrg) 
        {
            lrg = sQty[i];
            lrgst=nm[i];
        }
        //small number
        if (sQty[i] < sml) 
        {
            sml = sQty[i];
        }
    }
    
    //output smallest and highest number
    cout <<endl<<endl;
    cout <<"Highest sale number: "<<lrg<<endl
         <<"Lowest sale number: "<<sml<<endl;
  
    //exit stage right
    return 0;
}

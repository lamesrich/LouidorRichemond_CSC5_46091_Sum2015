/* 
 * File:   main.cpp 
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 6 problem 14, Overloaded Hospital
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 15, 2015, 1:29 AM
 */
//system libraries
#include <iostream>
#include <fstream>
using namespace std;
//global variables

//function prototypes
float inPat(float, float, float, float);
float outPat(float, float);

//execution begins here
int main(int argc, char *argv[])
{
    
    //declaring variables
    int days;
    float rate, medChg, hsChg;
    float total;
    char userDec;
       
    //prompting user for in/outpatient
    cout << "Enter I for in patient or O for out patient: ";
    cin>>userDec;
    //deciding if in or out patient depending on user input
    if (userDec == 'I' || userDec == 'i') 
    {
        //prompting user to enter in-patient info
        cout<<"Number of days spent in hospital: ";
        cin>>days;
        cout<<"Daily rates: $";
        cin>>rate;
        cout<<"Hospital medication charges: $";
        cin>>medChg;
        cout<<"Hospital charges: $";
        cin>>hsChg;
         //output total charges for in-patient
        total = inPat(days, rate, medChg, hsChg);
        cout << "Patient total charges $"<<total;
        cout << endl;
    
    } 
    else if (userDec == 'O' || userDec == 'o')
    {
        //prompting user to enter in-patient info
        cout <<"Hospital  medication charges: $";
        cin>>medChg;
        cout<<"Charges for hospital services: $";
        cin>>hsChg;
        //output total charges for out-patient
        total = outPat(medChg, hsChg);
        cout<<"Patient total charges $"<<total;
    }
    //exit stage right
    return 0;
}
/*****************************************************************************
 ******************************** inPat ************************************* 
 * Purpose: is to calculate the number of days spent in the hospital,The daily 
 * rate, charges for hospital services and hospital medication charges
 * accepts medical charges, days spent, Hospital rates and, hospital service 
 * charges 
 * calculate total charges for in-patient care then return totChr main 
 */

float inPat(float days, float rates, float medChgs, float hsChrgs)
{
    float totChrg;
    float temp;
    if (medChgs < 0 || hsChrgs < 0 || rates < 0 || days < 0) 
    {
        cout << "Enter a positive number pleased\n";
    }
    
    //calculating patient total charges
    temp = medChgs + hsChrgs;
    totChrg = days * rates;
    totChrg += temp;
    //return totChrg main
    return totChrg;
}
/*****************************************************************************
 ******************************** outPat ************************************* 
 * purpose: to calculate charges for hospital services and Hospital medication
 * 
 * accepts medical charges and hospital service charges 
 * calculate total charges for out-patient care then return totChrg main 
 */
float outPat(float medChgs, float hsChrgs)
{
    float totChrg;
    if (medChgs < 0 || hsChrgs< 0) 
    {
        cout << "Enter a positive number pleased\n";
    }
    
    //calculating patient total charges
    totChrg = medChgs + hsChrgs;
    //return totChrg main
    return totChrg;
}
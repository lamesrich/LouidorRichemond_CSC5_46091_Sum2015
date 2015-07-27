/* 
 * File:   main.cpp 
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 6 problem 6, Winning Division
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 10, 2015, 2:47 pM
 */

//system libraries 
#include <iostream>
#include <cstdlib>
using namespace std;

//global variable

//function prototypes
float getNum();
void fLwst(float, float, float, float, float);

//Execution begins heres
int main(int argc, char** argv) 
{
    //declaring variables
    float reg1, reg2, reg3, reg4, reg5;
    
    //prompting user to enter sales for each division
    cout << "Enter traffic incidents for North: ";
    reg1=getNum();
    
    cout << "Enter traffic incidents for South: ";
    reg2=getNum();
      
    cout << "Enter traffic incidents for West: ";
    reg3=getNum();
    
    cout << "Enter traffic incidents for East: $";
    reg4=getNum();
    
    cout << "Enter traffic incidents for Central: ";
    reg5=getNum();
    
    fLwst(reg1, reg2, reg3, reg4, reg5);
    
    //exit stage right
    return 0;
}

/*****************************************************************************
 ******************************** getNum ************************************* 
 * purpose:
 * is to passed the name of a region. prompts the user for the number of 
 * traffic accidents reported in that region and validates the input, then
 * returns it for each region.
 */
float getNum() 
{
    //declaring variables
    float incd;
    
    //checking for negative values
    do
    {
        cin>>incd;
        
        if(incd<0)
        {
         cout<<"\nEnter a value greater than 0: ";   
        }
        
    }
    while (incd<!0); 
    //return incd to main
    return incd;
}
/*****************************************************************************
 ******************************** fLwst ************************************** 
 *Purpose: passed the five accident totals, and determines which is the
 *smallest, then prints the name of the region, along with its accident figure.
 * 
 * 
 */


void fLwst(float reg1, float reg2, float reg3, float reg4, float reg5)
{
    //determining the division with the highest sale amount
    if(reg1<reg2 && reg1<reg3 && reg1<reg4 && reg1<reg5)
    {
       cout<< "North region have the Lowest traffic incidents: "<<reg1<<endl;
       cout<<"It is the safest in that category\n";
        
    }
    if(reg2<reg1 && reg2<reg3 && reg2<reg4 && reg2<reg5)
    {
       cout<< "South region have the Lowest traffic incidents: "<<reg2<<endl;
       cout<<"It is the safest in that category\n";
        
    } 
    if(reg3<reg1 && reg3<reg2 && reg3<reg4 && reg3<reg5)
    {
        cout<< "West region have the Lowest traffic incidents: "<<reg3<<endl;
        cout<<"It is the safest in that category\n";
        
    }
    if(reg4<reg1 && reg4<reg2 && reg4<reg3 && reg4<reg5)
    {
        cout<< "East region have the Lowest traffic incidents: "<<reg4<<endl;
        cout<<"It is the safest in that category\n";
        
    }
    if(reg5<reg1 && reg5<reg2 && reg5<reg3 && reg5<reg4)
    {
        cout<< "Central region have the Lowest traffic incidents:"<<reg5<<endl;
        cout<<"It is the safest in that category\n";
        
    }
    
    else
    
    {
        cout<<"All regions have the same amount of traffic incidents\n";
    
    }
}


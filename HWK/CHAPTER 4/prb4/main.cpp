/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 4 problem 4, Gas mileage
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Testing Program
 * Created on July 5, 2015, 1:38 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
    //declaring variable for length, width, and area
    int width1, width2, length1, length2, area1, area2;
   
    //prompting using to enter length and width of rectangle 1
    cout <<"Please enter width of rectangle1: ";
    cin>>width1;
    cout <<"Please enter length of rectangle1: ";
    cin>>length1;
    
    area1=width1*length1;//calculating area 1
    
    //prompting using to enter length and width of rectangle 2
    cout <<"Please enter width of rectangle 2: ";
    cin>>width2;
    
    cout <<"Please enter length of rectangle 2 ";
    cin>>length2;
    
    area2=width2*length2;//calculating area 2
    
    //determine if rectangle 1 and 2 are equal, greater-than or less-than 
    if(area1>area2)
    {
     cout<<"Rectangle 1 area of "<<area1
         <<" is greater area than Rectangle 2 area of: "<<area2;   
    }
    else if(area1<area2)
    {
       cout<<"Rectangle 1 area of "<<area1
         <<" is less area than Rectangle 2 area of: "<<area2;   
    }
    else
    {
     cout<<"Rectangle 1 area of "<<area1
         <<" is equal to Rectangle 2 area of: "<<area2;     
    }
    
    //exit stage right
    return 0;
}


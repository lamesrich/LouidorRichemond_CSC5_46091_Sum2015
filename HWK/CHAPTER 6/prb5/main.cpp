/* 
 * File:   main.cpp 
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 6 problem 5, Winning Division of highest sales
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 14, 2015, 10:04 PM
 */

//system libraries 
#include <iostream>
#include <cstdlib>
using namespace std;

//global variable

//function prototypes
float getSls();
void fHgst(float, float, float, float);

//Execution begins heres
int main(int argc, char** argv) 
{
    //declaring variables
    float div1, div2, div3, div4;
    
    //prompting user to enter sales for each division
    cout << "Enter Sales for Northeast: $";
    div1=getSls();
    
    cout << "Enter Sales for Northwest: $";
    div2=getSls();
      
    cout << "Enter Sales for SouthWest $";
    div2=getSls();
    
    cout << "Enter Sales for Southeast: $";
    div4=getSls();
    
    fHgst(div1, div2, div3, div4);
    
    //exit stage right
    return 0;
}

/*****************************************************************************
 ******************************** getSls ************************************* 
 * purpose: is to passed the name of a division. Prompt the user for a divi’s
 * quarterly sales figure, validates the input, then returns it. is called
 *  once for each division.
 */
float getSls() 
{
    float sls;
    
    cout<<"Enter sale $"; 
    do
    {
        cin>>sls;
        
        if(sls<0)
        {
         cout<<"\nEnter a value greater than 0: ";   
        }
        
    }
    while (sls<!0); 
    
    return sls;
}
/*****************************************************************************
 ******************************** fHgst ************************************* 
 *is passed the four sales totals. It determines which is the largest and 
 * outputs the name of the high grossing division, along with its sales figure.
 *passing arguments div1-div4
 * 
 * 
 */

void fHgst(float div1, float div2, float div3, float div4)
{
    //determining the division with the highest sale amount
    if(div1>div2 && div1>div3 && div1>div4)
    {
       cout << "Northwest have the highest sales this quarter: $"<<div1<<endl;
       cout<<"Winning Division\n";
    }
    else if(div2>div1 && div2>div3 && div2>div4)
    {
         cout << "Southwest have the highest sales this quarter: $"<<div2<<endl;
         cout<<"Winning Division\n";
        
    } 
    else if(div3>div1 && div3>div2 && div3>div4)
    {
         cout << "Northeast have the highest sales this quarter: $"<<div3<<endl;
         cout<<"Winning Division\n";
        
    }
    else if(div4>div1 && div4>div2 && div4>div3)
    {
         cout << "SouthEast have the highest sales: $"<<div4<<endl;
         cout<<"Winning Divisions\n";
        
    }
    else
    
    {
        cout<<"All sales are equal \nAll division are losers";
    
    }
}


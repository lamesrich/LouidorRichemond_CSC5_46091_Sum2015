/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 4 problem 9, discount
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 5, 2015, 5:48 PM
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
    //declaring variables
    float qty, cost=99.00f,tot, tot1;
    //prompting user to enter the quantity of product purchased 
    cout<<"How many did you purchase: ";
    cin>>qty;
    
    //determining percentage of discount earned
    if(qty>=10 && qty<=19)//discount percentage earned in the range of 10-19
    {
        tot1=qty*cost;//calculating total before discount
        tot=(qty*cost)-(qty*cost*.20);//calculating total with discount
        cout<<"total: $"<<tot1 <<"\n20% discount\nTotal cost: $"<<tot;
    }
     
    else if(qty>=20 && qty<=49)//discount percentage earned from 20-49
    {
         tot1=qty*cost;//calculating total before discount
         tot=(qty*cost)-(qty*cost*.30);//calculating total with discount
         cout <<"total: $"<<tot1<<"\n30% discount\nTotal cost: $"<<tot;
    }
    else if(qty>=50 && qty<=99)//discount percentage earned from 50-99
    {
         tot1=qty*cost;//calculating total before discount
         tot=(qty*cost)-(qty*cost*.40);//calculating total with discount
         cout<<"total: $"<<tot1 <<"\n40% discount\nTotal cost: $"<<tot;
    }
        else if(qty>=100)//discount percentage earned 10
    {
        tot1=qty*cost;//calculating total before discount
        tot=(qty*cost*.50);//calculating total with discount
        cout <<"total: $"<<tot1<<"\n50% discount\nTotal cost: $"<<tot;
    }
    else if(qty<0)//executes if number is less than 0
    {
        cout <<"You did not enter a number greater zero\n";
    }
    else
    {
        tot=cost*qty;//calculating total without discounts
        cout <<"Total cost: $"<<tot;
    }
    return 0;
}

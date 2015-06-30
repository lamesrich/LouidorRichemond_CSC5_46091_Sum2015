/* 
 * File:   main.cpp
 * Author: Richemond Louidor
 * Purpose: Homework, Chapter 2, problem 2, sale predictions
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on June 23, 2015, 10:21 PM
 */

//System libraries
#include <iostream>
#include <iomanip>
using namespace std;
//global constant

//function prototype

//execution begins here
int main(int argc, char** argv)
{
    //declaring variables
    float com,
          sales = 4.6e6,
          salesPrc=.62;
          
    
    com = sales - (sales*salesPrc);//calculating company commissions
    
   //outputting company 62% commission of 4.6 million dollar total sales
    cout <<"Base on a 62% of commission sales on a $4.6 millions total sale\n"
         <<"a company will generate $" <<fixed<<setprecision(2)
         << com<<" in commission sales\n";
    
    return 0;
}


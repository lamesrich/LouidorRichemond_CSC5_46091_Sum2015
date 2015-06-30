/* 
 * File:   main.cpp
 * Author: Richemond Louidor
 * Purpose: Homework, Chapter 2, problem 15, stocks loss
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on June 24, 2015, 12:38 PM
 */
#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    float oPrice, sPrice, mLost;
    oPrice = 600*21.77;
    sPrice = 600*16.44;
    mLost = oPrice - sPrice;
    
    cout<<"Originally Kathryn bought 600 shares of stocks priced at $21.77 " 
        <<"per shares for $"<<oPrice;
    cout<<" She sold the stocks a year later priced at 16.44 for $"<<sPrice
            <<" per \nshares";
    cout <<" Kathryn lost about $"<<mLost <<endl;
    
    return 0;
}


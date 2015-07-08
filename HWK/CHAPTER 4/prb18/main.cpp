/* 
* File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 4 problem 18, spectral analysis
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Purpose:  What band is the EMS
 * Created on July 7, 2015, 9:48 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float wvLnMtr;//Wave length in Meters
    
    //Loop
    do{
        //Prompt for input
        cout<<"Input the wave length in meters"<<endl;
        cin>>wvLnMtr;
        //Output the spectrum band
        if     (wvLnMtr>1e-2 )cout<<wvLnMtr<<"(mtrs) is in the Radio Wave band "<<endl;
        else if(wvLnMtr>1e-3 )cout<<wvLnMtr<<"(mtrs) is in the Micro Wave band "<<endl;
        else if(wvLnMtr>7e-7 )cout<<wvLnMtr<<"(mtrs) is in the Infrared band   "<<endl;
        else if(wvLnMtr>4e-7 )cout<<wvLnMtr<<"(mtrs) is in the Visible band    "<<endl;
        else if(wvLnMtr>1e-8 )cout<<wvLnMtr<<"(mtrs) is in the Ultraviolet band"<<endl;
        else if(wvLnMtr>1e-11)cout<<wvLnMtr<<"(mtrs) is in the X-Ray band      "<<endl;
        else                  cout<<wvLnMtr<<"(mtrs) is in the Gamma Ray band  "<<endl;
    }while(wvLnMtr!=1);
    
    //Exit stage right!
    return 0;
}
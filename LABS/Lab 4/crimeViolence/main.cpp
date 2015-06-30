/* 
 * File:   main.cpp
 * Author: Richemond Louidor
 * Created on June 27, 2015, 1:47 PM
 * Purpose: Lab , calculating violent crime percentage in the U.S and U.K
 */

//System libraries
#include <iostream>//I/O output
#include <iomanip>//cout formating fixed, setpricision(), set(w)...

using namespace std;

//Global constant
const float CVNPC=100.00F;

//Function prototype

//executions begins here
int main(int argc, char** argv) 
{
    //Declaring variables
    float usVc =1.188e7f; //United Sates Violent crime rate in millions
    float ukVc = 6.52e6f; //England Violent crime rate in millions
    float usPop = 3.18e8f; //United States Population in millions
    float ukPop =6.4e7f; //England Violent crime rate in millions
    float usVcPc, //us violent crime rate percentage
          ukVcPc;//uk violent crime rate percentage
    
    usVcPc= (usVc/usPop)*CVNPC;//calculating percentage of U.S. violent crime
    ukVcPc= (ukVc/usPop)*CVNPC;//calculating percentage of england violent crime
    
    //Displaying crime rate percentage in the U.S.
    cout <<"U.S. violent crime is " << fixed<<setprecision(2)<<usVcPc 
         <<"% of the 318 million total population and\n" 
    //Displaying crime rate percentage in England
         <<"England violent crime is "<<fixed <<setprecision(2)<<ukVcPc
         <<"% of the 64 million total population\n";
    
    //program exit after a successful run
    return 0;
}


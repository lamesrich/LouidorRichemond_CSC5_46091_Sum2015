/* 
 * File:   main.cpp
 * Author: Richemond Louidor
 * Purpose: Homework, Chapter 2, problem 5, cyborg data type sizes
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on June 25, 2015, 12:17 PM
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
    //displaying character size
    cout << "size of a character data type: " << sizeof(char)<<" byte"<<endl;
    
    //displaying integer size
    cout << "size of an integer data type: " << sizeof(int)<<" bytes"<<endl;
    
    //displaying float size
    cout << "size of a float data type: " << sizeof(float)<<" bytes"<<endl;
    
    //displaying double size
    cout << "size of a double data type: " << sizeof(double)<<" bytes"<<endl;
    
    
    return 0;
}

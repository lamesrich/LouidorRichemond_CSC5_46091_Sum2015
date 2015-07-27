/* 
 * File:   main.cpp 
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 6 problem 4, kinetic energy
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 14, 2015, 3:46 PM
 */

//system libraries 
#include <iostream>
using namespace std;

//global variable
//function prototypes
float KE(float, float);
//Execution begins heres
int main(int argc, char** argv) 
{
    float mass, velo, knEn;
    
    //prpmpting user to enter mass and velocity
    cout << "input the mass of moving object: ";
    cin >>mass;
    cout <<endl;
    cout << "please input time in second: ";
    cin >>velo;
    cout <<endl;
    
    
    knEn=KE(mass, velo);//calling and passing user mass and velocity to KE funct
    cout <<"Kinetic Energy of object is: "<<knEn<<endl;
    return 0;
}

/******************************************************************************
 ******************************** KE ****************************************** 
 * formula KE=(1/2)*Mass*(Velocity squared)
 * 
 * arguments
 * mg-> Mass
 * vel-> Velocity
 * 
 * kinEn-> calculates total kinetic energy
 */

float KE(float mg, float vel)
{
    float kinEn;
    vel *= vel;//vel squared
    kinEn = (.5 * mg * vel);//calculating Kinetic Energy
    
    //return kinEn to main
    return kinEn;

}


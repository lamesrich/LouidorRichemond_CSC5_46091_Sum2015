/* 
 * File:   main.cpp 
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 6 problem 9, isPrime function
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 14, 2015, 9:34 PM
 */
//system libraries
#include <iostream>
#include <cstdlib>

using namespace std;
//global variable
//function prototypes
bool isPrime(int);
//Execution begins heres


int main() 
{
    //declaring variables
    char userDec='y';
    int prime;
    
    
   
    while (userDec == 'y' || userDec == 'Y') 
    {
        //prompting user to enter a number 
        cout<<"Enter an integer if it is prime: ";
        cin >> prime;
        
        //calling bool function
        bool isPrime(int prime);
        
        //checking for negative values
        if (prime < 0)
        {
            cout << "Enter a number greater than 0: " ;
            cin >> prime;
            
        }

        //output if number prime or not
        if (isPrime(prime))
        {
            cout << prime << " is a prime number. " << endl;
        }
        else
        {
            cout << prime << " is not a prime number. " << endl;
        }
        //prompting user to continue y/n
        cout<<"Would you like to try again? Y/N: "<<endl;
        cin >> userDec;

    }

    return 0;
}
/******************************************************************************
 ******************************** isPrime ****************************************** 
 * purpose: to determine a prime number
 */
bool isPrime(int num) 
{
    //calculating prime numbers 
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
//return to main
    return true;

}

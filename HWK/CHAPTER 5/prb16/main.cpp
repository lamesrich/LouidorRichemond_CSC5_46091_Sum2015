/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 5 problem 16, math tutor
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 10, 2015, 10:29 PM
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;
//function prototypes
//exercusion begins here
int main(int argc, char** argv) 
{
    char userIn;//user mul, add, and sub decision input
    int num1, //random number generator one
        num2; //random number generator two
    int seed; // s-random seed
    char userDec;//use
    cout<<"Choose one or Addition 'A' or Subtraction 'S'Multiplication 'M': ";
    do
    { 
        //user input for Add, Mul, or Sub
        cin>>userIn;
        //Addition starts to execute here
        do
        {  
        if (userIn == 'A' || userIn == 'a') 
        {
            //generating random number 10 - 50
            seed = time(0);
            srand(seed);
            num1 = (rand() % 41) + 10;
            num2 = (rand() % 41) + 10;
            
            //prompting user to enter the Difference of the two random #
            cout << "what is the Difference\n" << "\t " << num1 
                 << "\n\t+" << num2 << "\n\t----\n\t ";
            int sum, //users Addition input 
                sumTot;//PC Addition calculation
            cin>>sum;
            sumTot = num1 + num2; //calculating the sum of the two numbers

                //determining if user answer is correct or wrong
                if (sum == sumTot) {
                    cout << "Correct!'_'\n";
                } 
                else 
                {
                    cout << "Wrong!'^'\ncorrect answer is :" << sumTot<<endl;
                }
        }
        //promting user to y/n continue with additions
        cout <<"will you like to continue with sum y/n: ";
        cin >>userDec;
         
    }while(userDec!='n');
    
    //Subtractions
    do
    {  
        if (userIn == 'S' || userIn == 's') 
        {
            //generating random number 10 - 50
            seed = time(0);
            srand(seed);
            num1 = (rand() % 41) + 10;
            num2 = (rand() % 41) + 10;
            
            //prompting user to enter the Difference of the two random #
            cout << "what is the Difference\n" << "\t " << num1 
                 << "\n\t-" << num2 << "\n\t----\n\t ";
            int sub, //users difference input 
                subTot;//PC Difference calculation
            cin>>sub;
            subTot = num1 - num2; //calculating the sum of the two numbers

                //determining if user answer is correct or wrong
                if (sub == subTot) {
                    cout << "Correct!'_'\n";
                } 
                else 
                {
                    cout << "Wrong!'^'\ncorrect answer is :" << subTot<<endl;
                }
        }
        //promting user to y/n continue with additions
        cout <<"will you like to continue with Differences y/n: ";
        cin >>userDec;
         
    }while(userDec!='n');
    
    //multiplication 
    if(userIn=='M'|| userIn=='m')
    { 
     int count=0;
        do
        {  
        if (userIn == 'M' || userIn == 'm') 
        {
            //generating random number 10 - 50
            seed = time(0);
            srand(seed);
            num1 = (rand() % 41) + 10;
            num2 = (rand() % 41) + 10;
            
            //prompting user to enter the Difference of the two random #
            cout << "Multiply the two number \n" << "\t " << num1 
                 << "\n\tx" << num2 << "\n\t----\n\t ";
            int mul, //users difference input 
                mulTot;//PC Difference calculation
            cin>>mul;
            mulTot = num1 * num2; //calculating the sum of the two numbers

                //determining if user answer is correct or wrong
                if (mul == mulTot) {
                    cout << "Correct!'_'\n";
                } 
                else 
                {
                    cout << "Wrong!'^'\ncorrect answer is :" << mulTot<<endl;
                }
        }
        //promting user to y/n with multiplication 
        cout <<"will you like to continue with Differences y/n: ";
        cin >>userDec;
         
    }while(userDec!='n');
    }
    
    cout<< "\nWill you like to select Mult., Add, or Sub again"
        <<"\n-> 1 for yes or -1 for no: ";
    cin>>userIn;
    cout<<"Choose one Multiplication 'M' or Addition 'A' or Subtraction 'S': ";
     
}while(userIn !=-1 );

    
    return 0;
}


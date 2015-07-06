/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 4 problem 2, Roman Numeral Converter
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 5, 2015, 10:54 AM
 */
#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    //declaring variables
    int num;
    
    //prompting user to enter a number
    cout <<"Enter a number 1-10 ";
    cin>>num;
    
    //deciding the number in roman numerals
    switch(num)
    {
        case 1 : cout <<"You enter I in roman numeral\n";
        break;
        case 2 : cout <<"You enter II in roman numeral\n";
        break;
        case 3 : cout <<"You enter III in roman numeral\n";
        break;
        case 4 : cout <<"You enter IV in roman numeral\n";
        break;
        case 5 : cout <<"You enter V in roman numeral\n";
        break;
        case 6 : cout <<"You enter VI in roman numeral\n";
        break;
        case 7 : cout <<"You enter VII in roman numeral\n";
        break;
        case 8 : cout <<"You enter VIII in roman numeral\n";
        break;
        case 9 : cout <<"You enter IX in roman numeral\n";
        break;
        case 10 : cout <<"You enter X in roman numeral\n";
        break;
        
        //checking for error 
        default : cout <<"You did not enter a number 1-10";
    }
    
    //exit stage right
    return 0;
}


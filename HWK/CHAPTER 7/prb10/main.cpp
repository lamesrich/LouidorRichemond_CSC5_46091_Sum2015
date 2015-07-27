/*
 * File:   main.cpp testing
 * Author: Louidor Richemond , Mark Lehr
 * Purpose: Homework Chapter 7 problem 10, grade test
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 25, 2015, 7:47 PM
 *///System Libraries
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype
void filAray(char [],int);
void prntAry(const char [],int,int);
int grade(char [],char [],char [],int);


int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=20;
    char qstns[SIZE],answrs[SIZE],rhtwrg[SIZE];
    
    //Initialize the array
    filAray(qstns,SIZE);
    filAray(answrs,SIZE);
    
    //Grade the Test
    int score=grade(qstns,answrs,rhtwrg,SIZE);
    
    //Output the initial arrays and the results
    cout<<"The Test Question Solutions"<<endl;
    prntAry(qstns,SIZE,5);
    cout<<"The Test Question Answers"<<endl;
    prntAry(answrs,SIZE,5);
    cout<<"The scores received"<<endl;
    prntAry(rhtwrg,SIZE,5);
    cout<<"Your results were "<<score<<" out of "<<SIZE<<endl;
    
    //Exit stage right!
    return 0;
}

/**************************************************
 *              Score the Test                    *
 **************************************************
 * Purpose:  To print a character type array with any
 *           number of columns
 * Input:
 *    n-> The size of the array
 *    q-> The question Array
 *    a-> The answer Array
 * Output:
 *    c-> The score Array
 *    score-> The total correct
 */
int grade(char q[],char a[],char c[],int n){
    //Declare the count/score
    int score=0;
    //Grade each answer
    for(int i=0;i<n;i++){
        if(q[i]==a[i]){
            c[i]='c';
            score++;
        }else c[i]='i';
    }
    //Return the score
    return score;
}

/**************************************************
 *                Print Array                      *
 **************************************************
 * Purpose:  To print a character type array with any
 *           number of columns
 * Input:
 *    n-> The size of the array
 *    a-> The character Array
 *    nCols->Number of columns to display the array.
 * Output:
 *    On Screen
 */
void prntAry(const char a[],int n,int nCols){
    //Separate outputs with a line
    cout<<endl;
    //Loop and output every element in the array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        //When column is reached go to next line
        if((i%nCols)==(nCols-1))cout<<endl;
    }
    //Separate outputs with a line
    cout<<endl;
}

/**************************************************
 *                Fill Array                      *
 **************************************************
 * Purpose:  To fill an array with a,b,c,d
 * Input:
 *    n-> The size of the array
 * Input-Output:
 *    a-> The character Array
 * Output:
 */
void filAray(char a[],int n){
    //Loop on every element and equate to 2 digits
    for(int i=0;i<n;i++){
        a[i]=rand()%4+97;//[a,b,c,d]
    }
}
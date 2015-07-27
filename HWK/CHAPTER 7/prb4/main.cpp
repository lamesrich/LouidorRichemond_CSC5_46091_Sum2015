/*
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 7 problem 4, Monkey Business
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 25, 2015, 6:47 PM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    //declaring variables
    const int SZ1=3;//size 1
    const int SZ2=7;//size 2
    int sml, lrg;//small and large number
    int arr[SZ1][SZ2];//array
    int ct=0, ct2=0,  ct3=0;//counter
    float  sum, sum1, avg, tAvg;//sum and average
    
    for(int x=0; x<SZ1; x++)
    {
        ct++;
        cout <<"Enter Monkey "<<ct<<endl;
        for(int y=0; y<SZ2; y++)
        {
           ct3++;
           ct2++;
           cout <<"Day "<<ct2<<" Food lbs: ";
           cin>>arr[x][y]; 
           sum=(sum+arr[x][y]);
           sum1=(sum1+arr[x][y]);
           
        } 
        //total lbs of food per monkey
        avg=(sum/ct2);
        cout <<fixed<<showpoint<<setprecision(2);
        cout <<"total lbs consumed by monkey "<<ct<<" = "<<sum<<" lbs"
             <<"\nAverage lbs consumed by monkey "<<ct<<" = "<<avg<<" lbs";
        cout <<endl<<endl;
        
        //reinitializing ct2 to zero for days
        if(ct2>=7)
           {
               ct2=0;
               sum=0;
           }
         
    }
    
//small and large number logic
    sml=arr[0][0];
    lrg=arr[0][0];
    string smst, lrgst;
    for (int i = 1; i < SZ1; i++)
    {
        for(int j=0; j<SZ2; j++)
        {
        //large number 
        if (arr[i][j] > lrg) 
        {
            lrg = arr[i][j];
          
        }
        //small number
        if (arr[i][j] < sml) 
        {
            sml = arr[i][j];
        }
        }
    }
    //output smallest and highest number
    cout <<endl<<endl;
    cout <<"Highest Amount of food consumed: "<<lrg<<endl
         <<"Lowest Amount of food consumed: "<<sml<<endl;
    //displaying average for total monkeys 
    tAvg=sum1/ct3;
    cout <<"Total lbs of food consumed: "<<sum1<<" lbs"<<endl;
    cout <<"Total Average lbs of food consumed : "<<tAvg<<" lbs";
  
    //exit stage right
    return 0;
}

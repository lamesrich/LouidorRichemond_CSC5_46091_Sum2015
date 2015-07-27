/*
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 7 problem 7, rainfall statistics
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 25, 2015, 6:47 AM
 */
//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//global variabl Array Size
const int SZ = 12;
//Prototypes
float Inpt(string name[], float month[]);
float dMonth(float[]);
float wMonth(float[]);
void dResult (string[],float[],float);

int main(int argc, char** argv)
{
    //Declaring array variables
    string name [SZ] = {"January", "February", "March", "April", "May",
                        "June", "July", "August", "September", "October", 
                        "November", "December"};
    float month [SZ];

    //display header 
    cout << "The 2010 Rain Report for Neversnows County" << endl;
    cout << endl;

    float TRF = Inpt(name, month);
    dResult(name, month, TRF);

    //exit stage right
    return 0;
}
/****************************** Inpt ****************************************
 * Data input 
 *
 */
float Inpt(string name[], float month[])
{
	float total=0;
        float sum=0;
        //prompting user to enter data
	cout << "Please enter the amount of rainfall for each month" << endl;
	for (int ct=0; ct <12; ct++)
	{
            cout<< name[ct] << " : ";
            cin >> month[ct];
            while (month[ct] < 0)
            {
                cout <<"Please enter a positive number " 
                         << name[ct] << endl;
                cin >> month[ct];
            }
            total+=month[ct];
	}
	return total;
}

/****************************** dResult ****************************************
 * output result
 * output wettest month
 *driest month
 * average rainfall
 * total rainfall
 */
void dResult(string name[],float sls[], float total)
{
	int wMth=wMonth(sls);
	int dMth=dMonth(sls);
        float avg;
        avg=total/SZ;

        cout<<fixed<<showpoint<<setprecision(2);
	cout<<"\nTotal rainfall is: "<<total<<endl;
        cout<<"Average rainfall is: "<<avg<<endl;
	cout<<"wettest month is: "<<name[wMth]<<endl;
	cout<<"Driest month is: "<<name[dMth]<<endl;
}

/****************************** wMOnth ****************************************
 * determines the wettest month
 * 
 *
 */
float wMonth(float ar[]) 
{
    //declaring variable
    int lrg = 0;

    for (int x = 1; x < SZ; x++) 
    {
        if (ar[x] > ar[lrg])
        {
            lrg = x;
        }
    }
    return lrg;
}
/****************************** dMonth ****************************************
 *determines the driest month
 *
 */
float dMonth (float ar[])
{
    //variable declared    
    int sml=0;

    for(int x=1; x<SZ; x++)
    {
        if(ar[x]<ar[sml])
        {
           sml=x;
        }
    }
	return sml;
}
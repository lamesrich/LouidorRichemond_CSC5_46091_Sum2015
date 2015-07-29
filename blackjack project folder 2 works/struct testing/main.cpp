/* 
 * File:   main.cpp
 * Author: iMACLOUI
 *
 * Created on July 29, 2015, 12:20 PM
 */
#include <iostream>
#include <cstdlib>

using namespace std;

struct pData
{
    string NAME;
 };


void sort(int [], int);
int main(int argc, char** argv) 
{
    pData* name= new pData[1000];
    pData* strSum=new pData[1000];
    int aray[10]={12,8,9,7,5,31,6,2,1,14};
    int ct=0;
    int sz=0;
    cout <<"How many names: ";
    cin>> sz;
    
    for (int x=0; x<sz; x++)
    {
        ct++;
        cout <<"enter name "<<ct<<": ";
        cin>> name[x].NAME;
    }
    for (int x=0; x<sz; x++)
    {
       cout <<name[x].NAME<<endl;
     }
    const int SZ=10;
    sort(aray, SZ);
     
 
    delete [] name;
    delete [] strSum;
       //sort();
    
    return 0;
}

void sort(int aray[], int sum)
{
    

	for(int i=0; i<10; i++)
	{
		cout<<i+1<<") "<<aray[i]<<endl;
	}



/////////////////Bubble Sort/////////////////////
	for (int i =9 ;  i >= 0 ; i--)
	{
		for (int  x = 0 ; x< 10; x++)
		{
			if(aray[x]>aray[x+1])
			{

				int temp=aray[x+1];

				aray[x+1]=aray[x];

				aray[x]=temp;

			}
		}
	}
/////////////////END:Bubble Sort///////////////

	cout<<"\n---Sorted---\n\n";

	for(int i=0; i<10; i++)
	{
		cout<<i+1<<") "<<aray[i]<<endl;
	}

    
}
/* 
 * File:   main.cpp testing
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 4 problem 22, Internet Service Provider Part 1
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 7, 2015, 7:55 PM
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;
//global variable
//function prototypes
//execution begins here
int main(int argc, char** argv)
{
    //declaring variable 
    ofstream uFile;//user file
    string cstNm;//customer name
    char pkg;//package used
    
    
    uFile.open("isp.txt");
          
    //writing the package details to file
     uFile<<"Package A: For $9.95 per month 10 hours of access are provided. "
          <<"\n\t   Additional hours are $2.00 per hour.\n\n";
     uFile<<"Package B: For $14.95 per month 10 hours of access are provided. "
          <<"\n\t   Additional hours are $1.00 per hour.\n\n";
     uFile<<"Package C: For $19.95 per month unlimited access is provided.\n\n";
     
    //prompting user to input their name
    cout<<"Hello, please enter your name please: ";
    getline(cin, cstNm);
    uFile<<"customer name: "<<cstNm<<endl;//writing username to file
    //prompting user to select a package
    cout<<cstNm<<", which package do you have A, B, or C: ";
    //user user package selection input
    cin>>pkg;
    
    uFile<<"You have Package: "<<pkg<<endl;//user package selection to file
     
    //Package A
    if(pkg=='a'|| pkg=='A')
    {
        //declaring variables
        float hrUsed,//hours used 
              hrRate=2.00,//hourly rate for additional hours used after 10 hours
              cost=9.95,//monthly flat bill flat rate cost 
              hrTotCt,//hold hourly cost total after ten hours of usage
              total;//hold total monthly bill
        
       
        
        cout<<"Package A has been selected\n";//outputting package selected
                
        //prompting user to enter hours used on package
        cout <<"How many hours did you use this package for: ";
        cin>>hrUsed;
        
        uFile<<"Hours used: "<<hrUsed<<endl;//hours used to file
        
        //determining total cost of bill
        if(hrUsed>10 && hrUsed <744)//package A conditions
        {
            hrTotCt=(hrUsed - 10)*hrRate;//overage total
            total=hrTotCt + cost;//final bill cost
            
            cout<<"total monthly bill: $"<<total;//outputting total bill
            
            //writing overage to file
            uFile<<"overage: "<<(hrUsed-10)<<" \nhourly rate $2.00"<<endl;
            uFile<<"billed total: "<<total<<endl;//billed total to file
        }
        else if(hrUsed<=10)//total for less than or equal to of 10hrs of usage
        {
           cout<<"total monthly bill: $"<<cost; //displaying total bill
           
            //writing overage to file
           uFile<<"overage hour: "<<(hrUsed-10)<<" \nhourly rate $2.00"<<endl;
           uFile<<"billed total: "<<cost<<endl;//billed total to file
        }
        else//checking for over monthly hour of 744
        {
            cout <<"cannot have more than 744 hrs of usage for the month";   
        }
        
    }
    
    else if(pkg=='b'|| pkg=='B')//package B conditions
    {
       //declaring variables
        float hrUsed,//hours used 
              hrRate=1.00,//hourly rate for additional hours used after 10 hours
              cost=14.95,//monthly flat bill flat rate cost 
              hrTotCt,//hold hourly cost total after ten hours of usage
              total;//hold total monthly bill
        
        cout<<"Package B has been selected\n";//outputting package selected
                
        //prompting user to enter hours used on package
        cout <<"How many hours did you use this package for: ";
        cin>>hrUsed;
        
        uFile<<"Hours used: "<<hrUsed<<endl;//hours used to file
        
        //determining total cost of bill
        if(hrUsed>20 && hrUsed <744)//package A conditions
        {
            hrTotCt=(hrUsed - 20)*hrRate;//overage total
            total=hrTotCt + cost;//final bill cost
            
            cout<<"total monthly bill: $"<<total;//outputting total bill
            
            //writing overage to file
            uFile<<"overage: "<<(hrUsed-20)<<" \nhourly rate $2.00"<<endl;
            uFile<<"billed total: "<<total<<endl;//billed total to file
        }
        else if(hrUsed<=20)//total for less than or equal to of 10hrs of usage
        {
           cout<<"total monthly bill: $"<<cost; //displaying total bill
           
            //writing overage to file
           uFile<<"overage hour: "<<(hrUsed-20)<<" \nhourly rate $2.00"<<endl;
           uFile<<"billed total: "<<cost<<endl;//billed total to file
        }
        else//checking for over monthly hour of 744
        {
            cout <<"cannot have more than 744 hrs of usage for the month";   
        }
    }
    
    else if(pkg=='c'|| pkg=='C')//package C conditions
    {
        float cost=19.95;//monthly flat bill flat rate cost 
        
        cout<<"Package C has been selected\n";
            
        cout<<"total monthly bill: $"<<cost; //displaying total bill
        
        uFile<<"billed total: "<<cost<<endl;//billed total to file
        
    }
    else //prompting user for selection of the wrong package
    {
        cout <<"Please choose Package 'A' or 'B' or 'C' \n";
    }
    
    //closing file
    uFile.close();
    //exit stage right
    return 0;
}


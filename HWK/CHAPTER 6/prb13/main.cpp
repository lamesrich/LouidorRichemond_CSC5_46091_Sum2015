/* 
 * File:   main.cpp 
 * Author: Louidor Richemond 46091
 * Purpose: Homework Chapter 6 problem 13, kinetic energy
 * Gadis 7ed http://www.m5zn.com/newuploads/2013/11/06/pdf/978d5f9ac9d682d.pdf
 * Created on July 14, 2015, 5:51 PM
 */

//system libraries 
#include <iostream>
#include <cstdlib>
using namespace std;

//global variable
//function prototypes
void order(float &, float &, float &);
void rShip(float, float, float);
//Execution begins heres

int main(int argc, char** argv)
{
    //declaring variable
    float qtySpool,//spool quantity
          inStock,//In stock spools
          xtCharge;//extra charges
    //calling functions
    order(qtySpool, inStock, xtCharge);
    rShip(qtySpool, inStock, xtCharge);

    return 0;
}
/******************************************************************************
 ******************************** order ****************************************** 
 * Purpose to get user input
 * 
 * pass by reference arguments
 * & spoolQty, & stock, & xtra
 * 
 * checking for input validations for none negative numbers
 * 
 */


void order(float & spoolQty, float & stock, float & xtra) 
{
    //declaring variables
    char userDec;
    float total;
   
    //prompting user to enter quantity of spools need
    cout << "Enter QTY spools needed: ";
    cin>>spoolQty;
    //checking for errors quantity must be equal to or greater than 1
    while (spoolQty < 1) {
        cout << "Enter a spool number greater than 0: ";
        cin >> spoolQty;
    }

    //prompting user to enter number of spools in stock currently
    cout << "Enter stools in stock: ";
    cin >>stock;
    
    //checking for errors quantity must be greater than 0
    while (stock < 0) 
    {
        cout << "Enter a stock number greater than 0: ";
        cin >> stock;
    }

    //prompting user to enter extra charges for shipping and handling
    cout << "special S&H Charges, y/n: ";
    cin >> userDec;
    //validating user input
    if (userDec == 'Y' || userDec == 'y')
    {
        cout << "Please enter in the amount of the special charges: ";
        cin >> xtra;

        while (xtra < 0) 
        {
            cout << "Enter number greater than 0: ";
            cin >> xtra;
        }
        total = xtra; //set special charges to total
    }


}
/******************************************************************************
 ******************************** order ****************************************** 
 * arguments
 *  ship, inStock, extra
 *
 *  Purpose to output a data to user 
 * subtotal, shipping total, and final total 
 * 
 
 */

void rShip(float ship, float inStock, float extra) 
{
    //declaring variables
    float bOrder, needQty, sTotal, shTotal, total;
    bOrder = ship - inStock;//calculating backorder status
    //checking for negative result for back order
    if( bOrder < 0 ) 
    {
        bOrder = 0;
    }
    //output spools on backorder
    cout << "The amount of spools on back order is: " << bOrder << "\n";

    needQty = ship - bOrder;//calculating spools needed to be ship
    cout << "Spools ready to ship now: " << needQty << ".\n";

    sTotal = needQty * 100; //calculating subtotal
    cout << "Your subtotal before Shipping & Handling fees are $"
            << sTotal << endl;

    shTotal = needQty * 10.00 + extra;//calculating shipping and handling total

    cout << "Your cost of shipping the spools of copper is $" << shTotal << endl;

    total = sTotal + shTotal;//calculating total
    cout << "Your total cost of order is: $" << total << ".\n";
}

/* 
 * File:   main.cpp
 * Author:Richemond Louidor
 * Created on June 30, 2015, 4:10 PM
 * Purpose:  To the show the truth
 * 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins 
int main(int argc, char** argv) {
    
    //Declare variables
    bool x,y;
    
    //Output the heading of the table
    cout<<"The Truth Table"<<endl;
    cout<<"X Y !X !Y X&&Y X||Y X^Y (X^Y)^Y ";
    cout<<"(X^Y)^X !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    
    //Row 1 output
    x=true;y=true; //X and Y conditions for row 1
    cout<<(x?'T':'F')<<"|";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"|";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    
    //my modification starts here for row 1
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F');
    
    cout<<endl;
    
    //Row 2 output
    x=true;y=false; //X and Y conditions for row 2
    cout<<(x?'T':'F')<<"|";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"|";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    
    //my modification starts here for row 2
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x && !y?'T':'F');
    cout <<endl;
    
    
     //row 3 output
   //Row 1 output
    x=false;y=true; //X and Y conditions for row 1
    cout<<(x?'T':'F')<<"|";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"|";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F');
    cout <<endl;
    
    //Row 4 output
    x=false;y=false; //X and Y conditions for row 1
    cout<<(x?'T':'F')<<"|";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"|";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"       ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F');
    
    
    
    return 0;
}


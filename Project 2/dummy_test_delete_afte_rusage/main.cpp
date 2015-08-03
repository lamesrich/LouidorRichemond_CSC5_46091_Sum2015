/*#include <fstream>
#include <iostream>
#include <vector>
using namespace std;
 void vec();
int main ()
{
    
   char data[100];

   // open a file in write mode.
   ofstream outfile;
   outfile.open("afile.dat");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(data, 100);

   // write inputted data into the file.
   outfile << data << endl;

   cout << "Enter your age: "; 
   cin >> data;
   cin.ignore();
   
   // again write inputted data into the file.
   outfile << data << endl;

   // close the opened file.
   outfile.close();

   // open a file in read mode.
   ifstream infile;
   cout << "Reading from the file" << endl;  
   infile.open("afile.dat"); 
   for (int x=0; x<5; x++)
   {
       
   infile >> data;  
   cout << data << endl; 
   }
   

   // write the data at the screen.
 
   
   // again read the data from the file and display it.
   infile >> data; 
   cout << data << endl; 

   // close the opened file.
   infile.close();
vec();
   return 0;
}
void vec()
{
    ofstream file;
    file.open("testings.txt");
    int x[3];//={10, 25, 36};
    unsigned xSZ = sizeof(x) / sizeof(int);
    vector<int> student_marks(3);
    vector<int> mark;
    vector<int> marks;
    for(int i=0; i<3; i++)
    {
        cout <<"enter number ";
        cin >> x[i];
    }

    for (vector<int> :: size_type i = 0; i < 3; i++)
    {
        cout << "Enter marks for student #" << i+1 
             << ": " << flush;
        cin >> student_marks[i];
        file <<student_marks[i]<<endl;
    }
    cout <<endl;
     for (unsigned int i =0; i<3; i++)
    {
        cout << "Enter marks for student #" << i+1 
             << ": ";
        cout << student_marks[i]<<endl;
    }
    cout <<endl;
     for (unsigned int i =0; i<3; i++)
    {
         
    mark.reserve(mark.size() + xSZ);
    copy(&x[i], &x[xSZ], back_inserter(mark));
    cout << mark[i]<<endl;
    }
    int count=0;
    while(file >> marks.size())
    {
        marks.push_back(marks);
        
        
    }
    
    file.close();
}*/
#include <iostream>
#include <string>
#include <fstream>
#include <time.h>
#include <vector>
#include <algorithm>
using namespace std;

// structure holding info on a player
struct player
{
int time,date,score, scores;
};

// vector to store the players
std::vector<player> vectorplayers;

// basic bubblesort, slow sort but depends how fast you want to be.

void BasicBubbleSort(std::vector<player> &vector)
{
    for (int x = 0; x < vector.size(); x++) 
    {
        for (int y = 0; y < vector.size() - 1; y++) 
        {
            if (vector[y].score > vector[y + 1].score) 
            {
                player temp = vector[y + 1];
                vector[y + 1] = vector[y];
                vector[y] = temp;
            }
        }
    }

}

void print()
{
// iterate vector and print each players score
for(int i(1); i<vectorplayers.size(); i++)
cout << "score : " << vectorplayers[i].score << std::endl;
}

void mains()
{
// create some data to put in the vector to sort
player player1,player2,player3,player4;
player1.score = 2;
player2.score = 21;
player3.score = 34;
player4.score = 1;
int plyr[5];//={2, 21, 34, 1};


vectorplayers.push_back(player1);
vectorplayers.push_back(player2);
vectorplayers.push_back(player3);
vectorplayers.push_back(player4);

int highscore;

for(int x=0; x<1; x++)
{
// read in a new score, you could just have the score of the player
//cin >> highscore;
player newplayer;
newplayer.score = highscore;
// add the new score to the vector
vectorplayers.push_back(newplayer);
// sort the vector so its in order and print
BasicBubbleSort(vectorplayers);
print();
}
//return 0;
}
void srt();
int main()
{
    mains();
    print();
    srt();
    return 0;
}
void srt() {


    for (int x = 0; x < 5; x++) {
        cout << endl;
    }
    cout << "Sorting\n\n";
    int hold;
    int array[5];
    cout << "Enter 5 numbers: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> array[i];
    }
    cout << endl;
    cout << "Orignally entered array by the user is: " << endl;

    for (int j = 0; j < 5; j++) {
        cout << array[j];
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (array[j] > array[j + 1]) {
                hold = array[j];
                array[j] = array[j + 1];
                array[j + 1] = hold;
            }
        }
    }
    cout << "Sorted Array is: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << array[i] << endl;
    }


}
void rFile()
{
    ifstream file;
    file.open("BJK.txt");
    string files[500];
    for(int x =0; x<1000; x++)
    {
    file>>files[x];
    cout <<files[x] <<endl;
    }
}

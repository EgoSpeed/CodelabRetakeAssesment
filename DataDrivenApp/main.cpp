#include <iostream> // Iostream provides streams which perform input and output operations
#include <fstream> // Fstreams extracts data from an external document
#include <string>
#include <windows.h>// Store data from a sequence of letters and other characters (to store data the string must be declared and then a value must be stored in it)
#include "Header.h" // Includes the header file in the main.cpp extracting data from it and presenting it on the application


using namespace std;	//std is an abreviation of standard and provides the functions of cout, cin and many other functions

int main() { //Int main is used instead of Void main due to standard c++ requring the function to be present to work

	cout << "Welcome to Max Korner's twitter application!"<< endl; //c "out" used to export text and endl to end the line
	cout << "(This application uses the downloaded tweets from SampleTweets.csv)" << "\n"; // \n creates line breaks to provide easier view of text for the user
		cout <<"\n" << "Please choose an option using the arrow keys" << endl;

		Sleep(5000);


		scrollingMenu();


	system("Pause"); //Bad practice but is used to open the terminal and leave it running for the user to view
}	
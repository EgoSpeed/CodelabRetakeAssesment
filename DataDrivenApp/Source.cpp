#include <iostream>
#include <string>
#include <fstream>
#include <windows.h> 
#include "Header.h"

using namespace std;

 //Creating menu value using int
int scrollingMenu()
{
	string line;
	int phrase;
	ifstream inFile;

	inFile.open("SampleTweets.csv"); //Opens File

	string scrollingMenu[8] =//Name of the string scrolling data
	{ "Count the number of tweets in the file", "Count the number of tweets that mention money", "Count the number of tweets relation to politics",
			"Display all the tweets mentioning Paris", "Display all the tweets mentioning DreamWorks", "Display all the tweets mentioning Car", "Display all the tweets mentioning Garden",
			"Display all the tweets mentioning House", "Display all the tweets mentioning Life", };

	int pointer = 0;
	int answerTotal;

	while (true) { //Repeats the target statement if the conditions are true
		system("cls"); //Clears output screen of programs 

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

		cout << "Main Menu\n\n";

		for (int i = 0; i < 10; ++i) //creating values for the asking options and exit

		{
			if (i == pointer) //if the user has selected of the following options
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); //highlight colour
				cout << scrollingMenu[i] << endl;
			}
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //highlight colour
				cout << scrollingMenu[i] << endl;
			}

		}
		while (true) //This command will enable the up and down arrow keys, the if statement allows the option to move up from 
		{
			if (GetAsyncKeyState(VK_UP) != 0) // Allows the user to up arrow while navigating the menu
			{
				pointer -= 1;
				if (pointer == -1)
				{
					pointer = 2;
				}
				break; //redraws new option highlighted
			}
			else if (GetAsyncKeyState(VK_DOWN) != 0) //Allows the user to use the down arrow while navigating the menu
			{
				pointer += 1;
				if (pointer == 8)
				{
					pointer = 0;
				}
				break;
			}



			else if (GetAsyncKeyState(VK_RETURN) != 0) //Uses the enter key on different cases which are the strings above asking the questions to be inputted
			{
				switch (pointer)
				{
				case 0: //Case for number of tweets to be opened

					if (inFile.good()) {
						cout << "File being read..." << endl;
						while (!inFile.eof()) {
								getline(inFile, line);
								answerTotal++; //Stores the number
							 //Provides the text including the stored number 
						} cout << "Total number of tweets is: " << answerTotal << endl;
						Sleep(10000);
						break;
					}

				case 1:

					if (inFile.good()) {
						cout << "File being read..." << endl;
						while (getline(inFile, line)) {
							if ((phrase = line.find("money", 0  /*finds money text in sampleTweets/csv file*/)) != string::npos || (phrase = line.find("Money", /*Second time is for any capitlisation used in the code to provide certain result */ 0))
								!= string::npos) { //Npos allows the static value to be it's greatest value for an element of type size
								answerTotal++;
							}

						}
					}
					cout << "Total number of money mentioned tweets is: " << answerTotal << endl;
					Sleep(10000);
					break;

				case 2:
					if (inFile.good()) {
						cout << "File being read..." << endl;
						while (getline(inFile, line)) {
							if ((phrase = line.find("Politics", 0)) != string::npos || ((phrase = line.find("Government", 0)) != string::npos || ((phrase = line.find("Brexit", 0)) != string::npos))) {
								answerTotal++;
							}
						}


					} cout << "Total number of political tweets is: " << answerTotal << endl;
					Sleep(10000);
					break;

				case 3:
					if (inFile.good()) {
						cout << "File being read..." << endl;
						while (getline(inFile, line)) {
							if ((phrase = line.find("Paris", 0)) != string::npos || ((phrase = line.find("paris", 0)) != string::npos || ((phrase = line.find("PARIS", 0)) != string::npos))) {
								answerTotal++;
							}
							cout << "Here are tweets relating to paris" << line << endl;
							Sleep(10000);
						}


					} break;

				case 4:
					if (inFile.good()) {
						cout << "File being read..." << endl;
						while (getline(inFile, line)) {
							if ((phrase = line.find("Dreamworks", 0)) != string::npos || ((phrase = line.find("dreamworks", 0)) != string::npos || ((phrase = line.find("DREAMWORK", 0)) != string::npos))) {
								answerTotal++;
							}
							cout << "Here are tweets relating to Dreamworks" << line << endl;
							Sleep(10000);
						}

					}break;

				case 5:
					if (inFile.good()) {
						cout << "File being read..." << endl;
						while (getline(inFile, line)) {
							if ((phrase = line.find("Car", 0)) != string::npos || ((phrase = line.find("car", 0)) != string::npos || ((phrase = line.find("CAR", 0)) != string::npos))) {
								answerTotal++;
							}
							cout << "Here are tweets relating to Car" << line << endl;
							Sleep(10000);
						}

					}break;

				case 6:
					if (inFile.good()) {
						cout << "File being read..." << endl;
						while (getline(inFile, line)) {
							if ((phrase = line.find("Garden", 0)) != string::npos || ((phrase = line.find("garden", 0)) != string::npos || ((phrase = line.find("GARDEN", 0)) != string::npos))) {
								answerTotal++;
							}
							cout << "Here are tweets relating to Garden" << line << endl;
							Sleep(10000);
						}

					}break;
				case 7:
					if (inFile.good()) {
						cout << "File being read..." << endl;
						while (getline(inFile, line)) {
							if ((phrase = line.find("House", 0)) != string::npos || ((phrase = line.find("house", 0)) != string::npos || ((phrase = line.find("HOUSE", 0)) != string::npos))) {
								answerTotal++;
							}
							cout << "Here are tweets relating to House" << line << endl;
							Sleep(10000);
						} break;
					}

				case 8:
					if (inFile.good()) {
						cout << "File being read..." << endl;
						while (getline(inFile, line)) {
							if ((phrase = line.find("Life", 0)) != string::npos || ((phrase = line.find("life", 0)) != string::npos || ((phrase = line.find("LIFE", 0)) != string::npos))) {
								answerTotal++;
							}
							cout << "Here are tweets relating to Life" << line << endl;
							Sleep(10000); //Forgot to add that this allows terminal to view the message to be read for 10000 miliseconds
						}


					}break;
				}
			}
		}
	}
	return 0;
}



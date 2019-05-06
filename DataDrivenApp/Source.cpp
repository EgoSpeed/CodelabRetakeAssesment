#include <iostream>
#include <string>
#include <fstream>
#include <windows.h> //
#include "Header.h"

using namespace std;

int scrollingMenu() //Creating menu value using int

{
	string scrollingMenu[10] =//Name of the string scrolling data
	{ "Count the number of tweets in the file", "Count the number of tweets that mention money", "Count the number of tweets relation to politics",
			"Display all the tweets mentioning Paris", "Display all the tweets mentioning DreamWorks", "Display all the tweets mentioning Car", "Display all the tweets mentioning Garden"
			"Display all the tweets mentioning House", "Display all the tweets mentioning Life" "Exit" };

	int pointer = 0;
	while (true) //Repeats the target statement if the conditions are true
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
		while (true) //This command will enable the up and down arrow keys, the if statement allows the option to move up from 
		{
			if (GetAsyncKeyState(VK_UP) != 0)
			{
				pointer -= 1;
				if (pointer == -1)
				{
					pointer = 2;
				}
				break; //redraws new option highlighted
			}
			else if (GetAsyncKeyState(VK_DOWN) != 0)
			{
				pointer += 1;
				if (pointer == 3)
				{
					pointer = 0;
				}
				break;
			}

		}
	}


	return 0;




}
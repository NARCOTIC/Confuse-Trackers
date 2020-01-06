#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include<ctime>

using namespace std;

int main()
{
	int i = 0;
	int rnd1 = 0;
	int rnd2 = 0;
	int counter = 0;

	string pre;
	string post;
	string browser;
	string searchesURL;
	string websitesURL;
	string input;

	string banner[12];
	string searches[1001];
	string websites[1001];

	time_t timeNow = time(0);

	ifstream fin;

	fin.open("settings.txt");								// Open settings.txt

	system("mode 86,20");									// Width and Height of the Terminal Window
	system("color 0C");									// Text Color

	getline(fin, pre);									// Get the first line of file
	getline(fin, post);									// Get the second line of file
	getline(fin, browser);									// Get the third line of file (You can define your browser here)
	getline(fin, searchesURL);								// Get the URL of searches.txt file
	getline(fin, websitesURL);								// Get the URL of websites.txt file

	cout << "Updating Searches and Websites With Servers..." << endl << endl;

	system(("curl " + searchesURL + " -O").c_str());					// Download the latest copy of searches.txt file from Github repo
	system(("curl " + websitesURL + " -O").c_str());					// Download the latest copy of websites.txt file from Github repo

	system("cls");										// Clears the screen

	while (!fin.eof())									// While it's not the end of file, Input all in file to an array.
	{
		getline(fin, input);
		banner[i] = input;
		i++;
	}

	i = 0;

	fin.close();
	fin.open("searches.txt");								// Open searches.txt

	while(!fin.eof())									// While it's not the end of file, Input all in file to an array.
	{
		getline(fin, input);
		searches[i] = input;
		i++;
	}

	i = 0;

	fin.close();										// Close searches.txt
	fin.open("websites.txt");								// Open websites.txt

	while (!fin.eof())									// While it's not the end of file, Input all in file to an array.
	{
		getline(fin, input);
		websites[i] = input;
		i++;
	}

	banner[6] = "                  --------> > > GITHUB/NARCOTIC < < <--------";

	for (int i = 0; i < 12; i++)
	{
		cout << banner[i] << endl;							// Print the Banner
	}
	cout << endl;

	while (1 > 0)										// Infinite Loop
	{
		rnd1 = rand() * timeNow % 1000 + 1;						// Generate a Random Number Between 1 and 1000
		rnd2 = rand() * timeNow % 1000 + 1;						// Generate a Random Number Between 1 and 1000

		system(("start " + browser + " " + pre + " " + searches[rnd1] + post).c_str());	// Search for a Random Word
		system(("start " + browser + " " + websites[rnd2]).c_str());			// Go to a Random Website

		system("timeout /t 10");							// 10 seconds interval

		counter++;

		if (counter == 20)
		{
			system(("taskkill /im " + browser + ".exe" + " /f").c_str());		// Close the Browser after 20 Loops
			counter = 0;
		}
	}
	
	system("pause");
	return 0;
}

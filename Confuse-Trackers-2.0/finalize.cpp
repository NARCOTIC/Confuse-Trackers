#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	int i = 0;
	char select;
	char quotes;
	string input;
	string inarray[40];

	ifstream fin;
	ofstream fout;

	fin.open("incode.txt");
	fout.open("finalcode.txt");

	fin >> quotes;

	while (!fin.eof())
	{
		getline(fin, input);
		inarray[i] = input;
		i++;
	}

	fin.close();

	for (int i = 0; i < 26; i++)
	{
		fout << inarray[i] << endl;
	}

	cout << "Use the latest search keywords from NARCOTIC's repository? [Y/N] : ";
	cin >> select;

	if (select == 'y' || select == 'Y')
	{
		system("color 0C");
		cout << endl;
		cout << "If you're using 'Attiny85' board, you will get a error when you're trying to flash the final code to Attiny85 board." << endl;
		cout << "Because it can hold only upto 50 lines. Keep 50 search keywords and delete the rest and flash." << endl;
		
		system("timeout /t 5");
		system("curl https://raw.githubusercontent.com/NARCOTIC/Confuse-Trackers/master/Confuse-Trackers-1.0/searches.txt -O");
	}

	fin.open("searches.txt");	

	i = 0;

	while (!fin.eof())
	{
		getline(fin, input);
		fout << "  case " << i << ":" << endl;
		fout << "    DigiKeyboard.println(" << quotes << input << quotes << ");" << endl;
		fout << "    break;" << endl;
		i++;
	}

	for (int i = 26; i < 34; i++)
	{
		fout << inarray[i] << endl;
	}
		
	fin.close();
	fout.close();
	
	return 0;
}

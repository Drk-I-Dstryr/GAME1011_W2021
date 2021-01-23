#include <iostream>
#include <string>
using namespace std;

/*
  Program Created by: Russell Li (101309707)
  Date: Thursday January 21, 2021
  Purpose: create a simple interactive menu using pointers, classes, and arrays
 */

class Achievement
{
public:
	string title, description;
	int value;
public:
	Achievement(string Title, string Description, int ScoreValue)
	{
		title = Title;
		description = Description;
		value = ScoreValue;
	}
	Achievement()
	{
		title = "none";
		description = "none";
		value = 0;
	}
};



class Game
{
public:
	string gName, publisher, developer;
	Achievement *ada;
public:
	Game()
	{
		gName = "none";
		publisher = "none";
		developer = "none";
		ada = new Achievement[3];
		for (int i = 0; i < 3; i++)
		{
			ada[i].title = "none";
			ada[i].description = "none";
			ada[i].value = 0;
		}
	}

	Game(string GameName, string Publisher, string Developer, Achievement achievements[])
	{
		gName = GameName;
		publisher = Publisher;
		developer = Developer;
		ada = new Achievement[3];
		for (int i = 0; i < 3; i++)
		{
			ada[i].title = achievements[i].title;
			ada[i].description = achievements[i].description;
			ada[i].value = achievements[i].value;
		}
	}

	string showSpecs2()
	{
		string wares = "\n--------------------------------------------\nGame Name: " + gName;
		wares += "\nPublisher: " + publisher;
		wares += "\nDeveloper: " + developer;
		for (int i = 0; i < 3; i++)
		{
			wares += "\nachievements\n";
			wares += "\nTitle: " + ada[i].title + "\n";
			wares += "\nDescription: " + ada[i].description + "\n";
			wares += "\nScore value:" + to_string(ada[i].value) + "\n";
		}
		wares += "\n\n";
		return wares;
	}
};

class Platform
{
public:
	string pName, manufacturer;
	Game* prada;
public:
	Platform(string PlatformName, string Manufacturer, Game games[])
	{
		pName = PlatformName;
		manufacturer = Manufacturer;
		prada = new Game[3];
		for (int i = 0; i < 3; i++)
		{
			prada[i].gName = games[i].gName;
			prada[i].publisher = games[i].publisher;
			prada[i].developer = games[i].developer;
		}
	}
	Platform()
	{
		pName = "none";
		manufacturer = "none";
		prada = new Game[3];
		for (int i = 0; i < 3; i++)
		{
			prada[i].gName = "none";
			prada[i].publisher = "none";
			prada[i].developer = "none";
		}
	}

	string showSpecs3()
	{
		string wares = "\nPlatform name: " + pName;
		wares += "\nManufacturer " + manufacturer;
		for (int i = 0; i < 3; i++)
		{
			wares += "\nGames\n";
			wares += "\nGame name: " + prada[i].gName + "\n";
			wares += "\nPublisher: " + prada[i].publisher + "\n";
			wares += "\nDeveloper: " + prada[i].developer + "\n";
		}
		wares += "\n";
		return wares;
	}
};


int main()
{
	Platform platforms[3];
	Game Games[3];
	Achievement Achievements[3];
	int howMuch = 0;
	string platformName, 
		manufacturer, 
		gameName, 
		publisher, 
		developer, 
		title, 
		description;
	int scoreValue = 0;
	cout << "Hello user!" << endl;
	
	for (int i = 0; i<3; i++) 
	{
		cout << "\nYou can make 3 platforms please enter the following information: " << endl << endl;
		cout << "Platform name: ";
		cin >> platformName;
		cout << "Manufacturer: ";
		cin >> manufacturer;
		cout << "\nYou can make 1 game(s) for this platform please enter the following information:" << endl;
		cout << "Game name: ";
		cin >> gameName;
		cout << "Publisher: ";
		cin >> publisher;
		cout << "Developer: ";
		cin >> developer;
		cout << "\nYou can create 1 achievement(s) for this game please enter the following information:" << endl;
		cout << "Title: ";
		cin >> title;
		cout << "Description: ";
		cin >> description;
		cout << "Score value: ";
		cin >> scoreValue;

		Achievements[i] = Achievement(title, description, scoreValue);
		Games[i] = Game(gameName, publisher, developer, Achievements);
		platforms[i] = Platform(platformName, manufacturer, Games);
		/*cout << Games[i].showSpecs2();
		cout << platforms[i].showSpecs3();*/
	}

	for (int i = 0; i < 3; i++)
	{
		cout << Games[i].showSpecs2();
		cout << platforms[i].showSpecs3();
	}

}
#include <iostream>
#include <string>
using namespace std;

/*
  Program Created by: Russell Li
  Date: Thursday January 21, 2021
  Purpose: create a simple interactive menu using pointers, classes, and arrays
 */

class Platform
{
public:
	string pName, manufacturer;
public:
	Platform(string PlatformName, string Manufacturer, Game games[])
	{
		pName = PlatformName;
		manufacturer = Manufacturer;
	}
	Platform()
	{
		pName = "none";
		manufacturer = "none";
	}
};

class Game
{
public:
	string gName, publisher, developer;
public:
	Game(string GameName, string Publisher, string Developer, Achievement achievements[])
	{
		gName = GameName;
		publisher = Publisher;
		developer = Developer;
	}
	Game()
	{
		gName = "none";
		publisher = "none";
		developer = "none";
	}
};

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

int main()
{
	Platform platforms[4];
	Game Games1[5], Games2[5], Games3[5], Games4[5];
	Platform* ptrPlatform;
	Game* ptrGames;
}
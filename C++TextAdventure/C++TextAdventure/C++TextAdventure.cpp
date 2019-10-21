// C++TextAdventure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

std::string getName() {
	std::string name;
	std::cout << "What is your name traveler?\n";
	getline(std::cin, name);

	 return name;
}

 std::string getLocation(std::string name) {
	std::string location;
	std::cout << "Where are we going " << name << "?\n";
	getline(std::cin, location);
	std::cout << "That sounds good " << name << ".\nLet's go to " << location << ".\n...\n...\n...\n...\n";
	std::cout << "Okay, we've arrived at " << location << ".\n";

	return location;
}

 std::string getActivity(std::string name, std::string location)
{
	std::string activity;
	std::cout << "Okay, " << name << ", what are we doing at " << location << "?\n";
	getline(std::cin, activity);
	
	return activity;
}

 std::string getConfirmation(std::string action)
{
	std::string response;
	std::cout << "Are you sure you want to " << action << "?\n";
	getline(std::cin, response);

	return response;
}

/*std::string iterationRequest(std::string action)
{
	std::string iterations;
	std::cout << "How many times would you like to " << action << "?\n";
	getline(std::cin, iterations);

	return iterations;
}*/

int main()
{
	std::string name = getName();
	std::string location = getLocation(name);
	std::string activity = getActivity(name, location);
	std::string response = getConfirmation(activity);
	if (response == "yes") {
		std::cout << "Okay, let's do this!";
		
	}
}


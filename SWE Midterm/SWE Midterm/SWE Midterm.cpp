#include <iostream>
#include <string>

int main()
{
	std::cout << "User 59125 successfully logged in." << std::endl;
	std::cout << "\nWelcome to the test of random test questions I found on Google" << std::endl;
	bool testBool = true;
	while (testBool)
	{


		bool questionBool = true;
		int questionNum = -1;
		while (questionBool)
		{
			std::cout << "\nPlease enter a number 1 - 5 to recieve a test question." << std::endl;
			std::cout << "Your Choice: ";
			std::cin >> questionNum;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(INT_MAX, '\n');
			}
			else if (questionNum >= 1 && questionNum <= 5)
			{
				std::cin.clear();
				std::cout << std::endl;
				questionBool = false;
			}
		}
		std::string question = "";
		switch (questionNum)
		{
		case 1:
			question = "What is the only letter that doesn't appear on the periodic table?";
			break;
		case 2:
			question = "How many years in jail will you be penalized if you cut down a cactus in Arizona?";
			break;
		case 3:
			question = "At birth, a panda is smaller than what animal?";
			break;
		case 4:
			question = "What is the main ingredient to house hold dust?";
			break;
		case 5:
			question = "What year did Club Penguin release?";
			break;
		}
		std::string answers = "";
		switch (questionNum)
		{
		case 1:
			answers = "1) R\n2) W\n3) Y\n4) J";
			break;
		case 2:
			answers = "1) 35\n2) 25\n3) 15\n4) 5";
			break;
		case 3:
			answers = "1) Mouse\n2) Horse\n3) Chicken\n4) Kitten";
			break;
		case 4:
			answers = "1) Cheese\n2) Dead Hair Cells\n3) Outside Dirt\n4) Dead Skin Cells";
			break;
		case 5:
			answers = "1) 2007\n2) 2005\n3) 2009\n4) 2003";
			break;
		}
		bool answerBool = true;
		int answ = -1;
		while (answerBool)
		{
			std::cout << question << std::endl;
			std::cout << answers << std::endl;
			std::cout << std::endl;
			std::cout << "Your Choice: ";
			std::cin >> answ;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(INT_MAX, '\n');
			}
			else if (answ >= 1 && answ <= 4)
			{
				std::cin.clear();
				std::cout << std::endl;
				answerBool = false;
			}
		}
		if (questionNum == 1 && answ == 4) std::cout << "Correct!" << std::endl;
		else if (questionNum == 2 && answ == 3) std::cout << "Correct!" << std::endl;
		else if (questionNum == 3 && answ == 1) std::cout << "Correct!" << std::endl;
		else if (questionNum == 4 && answ == 4) std::cout << "Correct!" << std::endl;
		else if (questionNum == 5 && answ == 2) std::cout << "Correct!" << std::endl;
		else std::cout << "Incorrect..." << std::endl;

		bool endBool = true;
		int endInt = -1;
		while (endBool)
		{
			std::cout << "\nWant to test your luck again?" << std::endl;
			std::cout << "1) Yes\n2) No" << std::endl;
			std::cout << "Your Choice: ";
			std::cin >> endInt;
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(INT_MAX, '\n');
			}
			else if (endInt == 1)
			{
				std::cin.clear();
				std::cout << std::endl;
				endBool = false;
			}
			else if (endInt == 2)
			{
				std::cin.clear();
				testBool = false;
				endBool = false;
			}
		}
	}
}

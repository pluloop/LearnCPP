#include <iostream>
#include "final score needed.h"

int main()
{
	double finalExamScoreNeeded{ finalScoreNeeded() };
	std::cout << "You will need a " << finalExamScoreNeeded << " on your final\n";
	

	if (finalExamScoreNeeded >= 80)
		std::cout << "Looks like no sleep for you";
	else if (finalExamScoreNeeded >= 50)
		std::cout << "You got this!";
	else if (finalExamScoreNeeded >= 30)
		std::cout << "It will be a breeze";
	else
		std::cout << "You don't even have to study";

	return 0;
}
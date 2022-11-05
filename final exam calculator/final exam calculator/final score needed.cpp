#include <iostream>

double finalScoreNeeded()
{
	std::cout << "What is your current grade? (ex: 80): ";
	double currentGrade{};
	std::cin >> currentGrade;

	std::cout << "What is your final exam worth? (ex: 20): ";
	double finalWorth{};
	std::cin >> finalWorth;

	std::cout << "What grade do you want? (ex: 70): ";
	double desiredGrade{};
	std::cin >> desiredGrade;

	double finalScoreNeeded = ((desiredGrade - (currentGrade * ((100 - finalWorth)/100))) / (finalWorth/100));

	return finalScoreNeeded;
}
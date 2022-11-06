// for std::cout and std::cin
#include <iostream>

// to calculate score needed on final, we need inputs
double finalScoreNeeded()
{
	// to know current grade
	std::cout << "What is your current grade? (ex: 80): ";
	double currentGrade{};
	std::cin >> currentGrade;

	// to know worth of final
	std::cout << "What is your final exam worth? (ex: 20): ";
	double finalWorth{};
	std::cin >> finalWorth;

	// to know desired grade
	std::cout << "What grade do you want? (ex: 70): ";
	double desiredGrade{};
	std::cin >> desiredGrade;

	// to calculate score needed
	double finalScoreNeeded = ((desiredGrade - (currentGrade * ((100 - finalWorth)/100))) / (finalWorth/100));

	// to return it for main to use
	return finalScoreNeeded;
}
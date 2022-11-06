// this program calculates what score you need on the final exam based on inputs and tells you it

// for std::cout, std::cin, and access to header file
#include <iostream>             
#include "final score needed.h" 

// tells you score needed for final by outputting it and it also gives comment
int main()
{
	// to output to score
	double finalExamScoreNeeded{ finalScoreNeeded() };
	std::cout << "You will need a " << finalExamScoreNeeded << " on your final\n";
	
	// to output comment 
	if (finalExamScoreNeeded >= 80)
		std::cout << "Looks like no sleep for you";
	else if (finalExamScoreNeeded >= 50)
		std::cout << "You got this!";
	else if (finalExamScoreNeeded >= 30)
		std::cout << "It will be a breeze";
	else
		std::cout << "You don't even have to study";
	
	// to end program
	return 0;
}
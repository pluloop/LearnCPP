// program asks for your age and tells you what type of movies you can watch

// for std::cout and std::cin 
#include <iostream>

// we need a function to ask for age and then output result
int main()
{
	// to ask for age
	std::cout << "What is your age?: ";
	int age{};
	std::cin >> age;

	// to output result
	if (age < 8)
		std::cout << "Go back to studying";
	else if (age > 17)
		std::cout << "You can watch any rated movie";
	else if (age >= 13)
		std::cout << "You can watch rated PG and PG13 movies";
	else
		std::cout << "You can watch rated PG movies";

	// to end function
	return 0;
}
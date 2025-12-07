#include <iostream>
#include <random>
#include <string>

int gen_random_number() {
	std::random_device rd;
	std::mt19937 gen(rd());

	int min = 1;
	int max = 100;

	std::uniform_int_distribution<> distrib(min, max);

	return distrib(gen);
}

int main() {

	int number = gen_random_number();

	std::cout << number << std::endl;

	std::string input;

	bool run = true;
	while(run) {
		std::cout << "Enter your guess: ";
		std::cin >> input;

		int a = std::stoi(input);

		if(a > number) {
			std::cout << "Too big!" << std::endl;
		} else if (a < number) {
			std::cout << "Too small!" << std::endl;
		} else if (a == number) {
			std::cout << "You got it right!" << std::endl;
			run = false;
		}
	}
	return 0;
}

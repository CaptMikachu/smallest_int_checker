#include<iostream>

int min_2(int, int);
int min_3(int, int, int);
int min_4(int, int, int, int);

int main() {

	int amount;

	int one, two;


	std::cout << "How many integers do you want to input? (2 - 4): ";
	std::cin >> amount;


	switch (amount)
	{

	case 2:
	{
		std::cout << "Input first number: ";
		std::cin >> one;
		std::cout << "Input second number: ";
		std::cin >> two;


		std::cout << "Smaller of the 2 numbers is: " << min_2(one, two);
		break;
	}

	case 3:
	{
		int three;

		std::cout << "Input first number: ";
		std::cin >> one;
		std::cout << "Input second number: ";
		std::cin >> two;
		std::cout << "Input third number: ";
		std::cin >> three;

		std::cout << "Smallest of the 3 numbers is: " << min_3(one, two, three);
		break;
	}

	case 4:
	{
		int three, four;

		std::cout << "Input first number: ";
		std::cin >> one;
		std::cout << "Input second number: ";
		std::cin >> two;
		std::cout << "Input third number: ";
		std::cin >> three;
		std::cout << "Input fourth number: ";
		std::cin >> four;

		std::cout << "Smallest of the 4 numbers is: " << min_4(one, two, three, four);
		break;
	}

	}


	return 0;
}


int min_2(int one_f, int two_f) {

	int min = 0;


	if (one_f < two_f)
	{
		min = one_f;
	}

	else
	{
		min = two_f;
	}


	return min;
}


int min_3(int one_f, int two_f, int three_f) {

	int min = 0;
	int min_temp = min_2(one_f, two_f);


	if (min_temp < three_f)
	{
		min = min_temp;
	}

	else
	{
		min = three_f;
	}


	return min;
}


int min_4(int one_f, int two_f, int three_f, int four_f) {

	int min = 0;
	int min_temp1 = min_2(one_f, two_f);
	int min_temp2 = min_2(three_f, four_f);


	if (min_temp1 < min_temp2)
	{
		min = min_temp1;
	}

	else
	{
		min = min_temp2;
	}


	return min;
}
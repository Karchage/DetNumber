#include <iostream>
void deterNum (int number)
{	int detCount =0;
	for (;number > 0;detCount++)
	{
		number = number/10;
	}
	std::cout << detCount;
}
int main() 
{
	int number;
	std::cout << "This program determines the number of tens\nPlease write your number!\n";
	std::cin >> number;
	deterNum(number);
	return 0;
}


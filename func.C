#include <iostream>
int getnum()
{
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	return number;
}
int main()
{
	int x = getnum();
	int y = getnum();
	for(int i = 0; i<=2; i++)
	{
		std::cout << x+y << std::endl;
	}
}

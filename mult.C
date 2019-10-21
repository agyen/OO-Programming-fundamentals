#include <iostream>
int main()
{	
	int firstNumber, secondNumber, result;
	std::cout << "Enter two numbers to be multiplied: ";
	std::cin >> firstNumber >> secondNumber;
	result = firstNumber * secondNumber;
	
	if(result > 100)
	{
		std::cout << "HIGH" << std::endl;
	}
	else	
		std::cout << "LOW" <<  std::endl;

}

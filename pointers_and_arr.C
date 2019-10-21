#include <iostream>
using namespace std;

int main()
{
	int arr[4] = {1, 2, 3, 4};
	&arr[0];
	*(arr + 1) = 3;
	cout << arr[1] << endl;
}

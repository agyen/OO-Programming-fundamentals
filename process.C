#include <iostream>
using namespace std;

int main()
{
	setenv("COLOR", "BLUE", 1);
	cout << getenv("COLOR") << endl;
}

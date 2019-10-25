#include <iostream>
#include <Date.H>
using namespace std;

int main()
{

	Date newdate{};
	newdate.year = 1991;
	newdate.month = 1476;
	newdate.day = 1589;

	nicePrint(newdate);

}

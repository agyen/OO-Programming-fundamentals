iinclude <iostream>
#include <vector>
#include <iomanip>
#include <ctime>
#include <chrono>
using namespace std;

struct Date
{
	int year;
        int month;
        int day;
};



int main()
{
	Date birthDate{};
	birthDate.year = 1996;
	birthDate.month = 9;
	birthDate.day = 21;

	Date chrismasDay{};
	chrismasDay.year = 2019;
	chrismasDay.month = 12;
	chrismasDay.day = 21;


	Date independentDay{};
	independentDay.year = 1957;
	independentDay.month = 3;
	independentDay.day = 6;

	if(chrismasDay.year > independentDay.year
	   && chrismasDay.month > independentDay.month
	   && chrismasDay.day > independentDay.day)
	{
		cout << chrismasDay.year << "-"
                     << chrismasDay.month << "-"
                     << chrismasDay.day ;
	}
	else
		 cout << independent.year << "-" 
                      << independent.month << "-"
                      << independent.day ;


	vector<Date> threedates
        {
		{2017, 4, 21},
		{2018, 5, 22},
		{2019, 6, 23}	
        };
	
	cout << threedates[1].year << endl;

	threedates[1] = {1984, 2, 1984};

	//printing current time
	
	chrono::system_clock::time_point now = chrono::system_clock::now();
	time_t now_c = chrono::system_clock::to_time_t(now);
	cout << put_time(localtime(&now_c), "%F %T") << endl;

}
 


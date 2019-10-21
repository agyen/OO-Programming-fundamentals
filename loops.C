#include <iostream>
#include <vector>
using namespace std;

struct Date
{
	int year;
	int month;
	int day;	
};

void nicePrint(Date d)
        {
                string postfix;
                if(d.day == 11 || d.day == 12 || d.day == 13)
                        {postfix ="th";}
                else if (d.day == 1 || d.day == 21|| d.day == 31)
                        {postfix = "st";}
                else if(d.day == 2 || d.day == 22 )
                        {postfix = "nd";}
                else if (d.day == 3 ||d.day == 23)
                        {postfix = "rd";}
                else
                        {postfix = "th";}

		 switch(d.month)
                 {
                        case 1:
                                cout << d.day << postfix << "January" << d.year << endl;
                                break;
                        case 2:
                                cout << d.day << postfix << "February" << d.year << endl;
                                break;
                        case 3:
                                cout << d.day << postfix << "March" << d.year << endl;
                                break;
                        case 4:
                                cout << d.day << postfix << "April" << d.year << endl;
                                break;
                        case 5:
                                cout << d.day << postfix << "May" << d.year << endl;
                                break;
                        case 6:
                                cout << d.day << postfix << "June" << d.year << endl;
                                break;
                        case 7:
                                cout << d.day << postfix << "July" << d.year << endl;
                                break;
                        case 8:
                                cout << d.day << postfix << "August" << d.year << endl;
                                break;
                        case 9:
                                cout << d.day << postfix << "September" << d.year << endl;
                                break;
                        case 10:
                                cout << d.day << postfix << "October" << d.year << endl;

			case 11:
                                cout << d.day << postfix << "November" << d.year << endl;
                                break;
                        case 12:
                                cout << d.day << postfix << "December" << d.year << endl;
                                break;
                        default:
                                cout << "invalid month";
                                break;
                }



        }


int main()
{
	Date firstDate{};
        firstDate.year = 2017;
        firstDate.month = 4;
        firstDate.day = 21;

	Date secondDate{};
	secondDate.year = 2018;
	secondDate.month = 5;
	secondDate.day = 22;

	Date thirdDate{};
	thirdDate.year =2019;
	thirdDate.month = 6;
	thirdDate.day = 23;

	vector <Date> threeDates {firstDate, secondDate, thirdDate};

        for(auto date : threeDates)
	{
		nicePrint(date);
	}

 	Date earliestDate{};
	earliestDate.year = firstDate.year;
	earliestDate.month = firstDate.month;
	earliestDate.day = firstDate.day;

	for(int i = 0; i <= 2; ++i)
	{
		if(earliestDate.year > threeDates[i].year)
		{
			earliestDate = threeDates[i];
			
		}
	}
	 cout << "The earliestDate is ";
         nicePrint(earliestDate);


 
	for (auto date : threeDates)
	{
		int n{0};
		while(n<3)
                {
			nicePrint(date);
			++n;
		}
	}





	for (int x = 0; x<3; ++x)
	{
		for(auto date : threeDates)
		{
			nicePrint(date);
		}
	}























}

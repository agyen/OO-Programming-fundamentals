#include <iostream>
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
                                break;
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

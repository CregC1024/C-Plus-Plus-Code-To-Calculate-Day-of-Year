//******************************************************************************************************
//Filename: Sullivan_Creg_Assignment_7
//Purpose: To Calculate the day of the year
//Author: Creg C. Sullivan Sr.
//Date: March 24, 2010
//******************************************************************************************************

// Headers and other Technical Items




#include <iostream>
using namespace std;

class D
{
      private:
              int d;
              static const int eom[];
              static const string wk[];
              static const string m[];
              static const int dm[];
              static const int lp[];
      public:
             D(int da)
             {
                d = da;
             }
             static void print(int);
};

const int D::eom[] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
const int D::dm[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const string D::wk[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
const string D::m[] = {"January", "February", "March", "April", "May", "June", "July", "August",
                       "September", "October", "November", "December"};
const int D::lp[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
                    
void D::print(int d)
{
     int n = 0;
     int day = 0;
     int day2 = d;
     int day3 = 0;
     int mon = 0;
     int w = 0;
     int yr = 1900;
     int y = 0;
     int i = 0;
     int m1 = 0;
     
     cout << d / 365 << endl;
     cout << " and the day is " << d % 365 << endl;
     while(d > 365)
     {
         if (d < 0)
         {
            break;
         }
         d = d - 365;
         yr++;
         if (i == 3)
         {
             if (d < 0)
             {
                break;
             }
             d = d - 366;
             i = 0; 
             yr++;            
         }
         cout << yr << "  Day  " << d << endl;
         i++;
     }
                
     cout << "The year is: " << yr << endl << endl;
     
     if (yr % 4 == 0)
     {
         cout << yr << " is a leap year.";
         cout << endl;
     }
     else
     {
         cout << yr << " is not a leap year.";
         cout << endl;
     }
     
     cout << d << endl;
     if (d < 32)
     {
         cout << "January" << d;
     }
     else
     {
       i = 0;
         while (eom[mon] < d)
         {
          cout << "Day is: " << day << endl;          
          day = d - eom[mon];                 
          mon = (mon + 1) % 12;     
          i++ - 1;               
         }
     }
     cout << day;
     cout << "\nThe month is: " << m[i];
     cout << endl;    
     
     w = day2 % 7;
          
     cout << "\nThe day of the week is: " << wk[w];
     cout << endl;
     cout << d << endl;

     cout << "\nThe day of the month is: " << day;
     cout << endl;
}

int main()
{
    int num;
    
    cout << "This program will convert any number to\n";
    cout << "Day Of Week/Month/Day/Year format.\n";
    cout << endl;
    cout << "Enter any number: ";
    cout << endl;
    cin  >> num;
    cout << endl;
    
    while(num < 0)
    {
        cout << "There are no negative dates in the history of the world.\n";
        cout << "Please re-enter any number.";
        cin  >> num;
    }
    
    cout << "The number " << num << " is also known as the date: \n";
    cout << endl;
    D::print(num);
    cout << endl << endl;
    
    system("pause");
    return 0;
}

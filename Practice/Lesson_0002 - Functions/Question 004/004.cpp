// ==========================================================
// CATEGORY: Header Files
// Purpose : Import libraries needed for input/output,
//           formatting, and spacing control
// ==========================================================

#include <iostream>   // Allows use of input/output objects such as cin and cout
#include <iomanip>    // Allows use of formatting functions such as setw()

using namespace std;  // Allows us to use cout, cin, setw directly without std::


// ==========================================================
// CATEGORY: Function Prototypes
// Purpose : Tell the compiler these functions exist before main()
// ==========================================================

int yearInputValidation();
// Ask the user to enter a year and return a valid year value

int monthInputValidation();
// Ask the user to enter a month and return a valid month value (1 to 12)

bool isLeapYear(int year);
// Check whether the given year is a leap year
// Returns true if leap year, false otherwise

int findDaysInMonth(int month, int year, string &monthName);
// Determine the number of days in the selected month
// Also update monthName through pass-by-reference

int getStartDay(int year, int month);
// Calculate which weekday the 1st day of the month falls on
// Return value: 0 = Sunday, 1 = Monday, ..., 6 = Saturday

void displayCalendar(int year, int month, string monthName, int daysInMonth, int startDay);
// Display the full calendar in table format



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{
    int year;
    // Store the year entered by the user

    int month;
    // Store the month entered by the user

    int daysInMonth;
    // Store the total number of days in the selected month

    int startDay;
    // Store the starting weekday of the selected month

    string monthName;
    // Store the month name such as "January" or "June"

    int choice;
    // Store the user's choice to continue or stop


    // ======================================================
    // CATEGORY: Repetition Loop
    // Purpose : Allow the user to display multiple calendars
    // ======================================================

    do
    {
        year = yearInputValidation();
        // Call function to get a valid year from the user

        month = monthInputValidation();
        // Call function to get a valid month from the user

        daysInMonth = findDaysInMonth(month, year, monthName);
        // Find the number of days in that month
        // Also update monthName with the correct month text

        startDay = getStartDay(year, month);
        // Calculate which weekday the 1st of the month starts on

        displayCalendar(year, month, monthName, daysInMonth, startDay);
        // Display the formatted monthly calendar

        cout << endl;
        // Print a blank line for cleaner output spacing

        cout << "Do you want to see other month? 1 = Yes, others = No: ";
        // Ask user whether they want to continue

        cin >> choice;
        // Read the user's choice

        cout << endl;
        // Print another blank line for spacing

    } while (choice == 1);
    // Repeat only if user enters 1

    return 0;
    // End the program successfully
}



// ==========================================================
// CATEGORY: Year Input Validation Function
// Purpose : Ask user for a valid year and reject invalid input
// ==========================================================

int yearInputValidation()
{
    int year;
    // Variable to temporarily store the user's year input

    while (true)
    // Keep asking until valid input is entered
    {
        cout << "Enter calendar's year: ";
        // Prompt user to enter the year

        cin >> year;
        // Read the year from the keyboard

        if (year >= 1)
        // Check whether the year is a positive number
        {
            break;
            // Exit the loop if input is valid
        }
        else
        {
            cout << "Invalid year. Please enter a positive number." << endl;
            // Show error message if year is invalid
        }
    }

    return year;
    // Return the valid year to the calling function
}



// ==========================================================
// CATEGORY: Month Input Validation Function
// Purpose : Ask user for a valid month between 1 and 12
// ==========================================================

int monthInputValidation()
{
    int month;
    // Variable to temporarily store the user's month input

    while (true)
    // Keep looping until valid month is entered
    {
        cout << "Enter calendar's month: ";
        // Prompt user to enter the month

        cin >> month;
        // Read month input

        if (month >= 1 && month <= 12)
        // Check whether month is between 1 and 12
        {
            break;
            // Exit loop if valid
        }
        else
        {
            cout << "Invalid month. Please enter a value between 1 and 12." << endl;
            // Display error message if invalid
        }
    }

    return month;
    // Return the valid month value
}



// ==========================================================
// CATEGORY: Leap Year Checking Function
// Purpose : Determine whether a year is a leap year
// ==========================================================

bool isLeapYear(int year)
{
    if (year % 400 == 0)
    // If divisible by 400, it is a leap year
        return true;

    else if (year % 100 == 0)
    // If divisible by 100 but not 400, it is not a leap year
        return false;

    else if (year % 4 == 0)
    // If divisible by 4 but not 100, it is a leap year
        return true;

    else
    // Otherwise, it is not a leap year
        return false;
}



// ==========================================================
// CATEGORY: Days In Month Function
// Purpose : Determine number of days in a month and set month name
// ==========================================================

int findDaysInMonth(int month, int year, string &monthName)
{
    int days;
    // Store the number of days for the selected month

    switch (month)
    // Check month one by one
    {
        case 1:
            monthName = "January";
            // Set month name to January
            days = 31;
            // January has 31 days
            break;

        case 2:
            monthName = "February";
            // Set month name to February

            if (isLeapYear(year))
                days = 29;
            // February has 29 days in a leap year
            else
                days = 28;
            // February has 28 days in a normal year
            break;

        case 3:
            monthName = "March";
            days = 31;
            break;

        case 4:
            monthName = "April";
            days = 30;
            break;

        case 5:
            monthName = "May";
            days = 31;
            break;

        case 6:
            monthName = "June";
            days = 30;
            break;

        case 7:
            monthName = "July";
            days = 31;
            break;

        case 8:
            monthName = "August";
            days = 31;
            break;

        case 9:
            monthName = "September";
            days = 30;
            break;

        case 10:
            monthName = "October";
            days = 31;
            break;

        case 11:
            monthName = "November";
            days = 30;
            break;

        case 12:
            monthName = "December";
            days = 31;
            break;

        default:
            monthName = "Unknown";
            // Default fallback month name
            days = 30;
            // Default fallback number of days
            break;
    }

    return days;
    // Return the total number of days in the selected month
}



// ==========================================================
// CATEGORY: Start Day Calculation Function
// Purpose : Calculate the weekday of the 1st day of the month
// ==========================================================

int getStartDay(int year, int month)
{
    int d = 1;
    // Always calculate the first day of the month

    int y = year;
    // Copy year into a working variable

    int m = month;
    // Copy month into a working variable

    if (m == 1 || m == 2)
    // January and February are treated as month 13 and 14
    {
        m += 12;
        // Convert January to 13 and February to 14

        y -= 1;
        // Reduce the year by 1
    }

    int k = y % 100;
    // Extract last two digits of the year

    int j = y / 100;
    // Extract first two digits of the year

    int h = (d + (13 * (m + 1)) / 5 + k + (k / 4) + (j / 4) + 5 * j) % 7;
    // Apply Zeller-like formula to calculate day code

    int dayOfWeek = (h + 6) % 7;
    // Adjust formula result so that:
    // 0 = Sunday, 1 = Monday, ..., 6 = Saturday

    return dayOfWeek;
    // Return starting weekday
}



// ==========================================================
// CATEGORY: Calendar Display Function
// Purpose : Print the full monthly calendar in formatted layout
// ==========================================================

void displayCalendar(int year, int month, string monthName, int daysInMonth, int startDay)
{
    cout << endl;
    // Print blank line before calendar output

    cout << "Calendar Title : " << monthName << " - " << year << endl;
    // Display calendar title with month name and year

    cout << "----------------------------------------------------------" << endl;
    // Print top border line

    cout << setw(8) << "Sunday"
         << setw(8) << "Monday"
         << setw(9) << "Tuesday"
         << setw(10) << "Wednesday"
         << setw(9) << "Thursday"
         << setw(8) << "Friday"
         << setw(9) << "Saturday" << endl;
    // Print weekday headers with spacing alignment

    cout << "----------------------------------------------------------" << endl;
    // Print separator line below header

    int currentPosition = 0;
    // Track current column position in the week row

    for (int i = 0; i < startDay; i++)
    {
        cout << setw(8) << " ";
        // Print blank spaces before day 1 starts

        currentPosition++;
        // Move column position forward
    }

    for (int day = 1; day <= daysInMonth; day++)
    {
        cout << setw(8) << day;
        // Print day number with spacing

        currentPosition++;
        // Move to next column

        if (currentPosition == 7)
        {
            cout << endl;
            // Move to next row after Saturday

            currentPosition = 0;
            // Reset column count for new week row
        }
    }

    cout << endl;
    // Print ending line break after all dates are shown

    cout << "----------------------------------------------------------" << endl;
    // Print bottom border line
}

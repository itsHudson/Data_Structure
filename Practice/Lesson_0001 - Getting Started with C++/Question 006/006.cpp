// ==========================================================
// CATEGORY: Header Files
// Purpose : Import libraries needed for input, string handling,
//           and character conversion
// ==========================================================

#include <iostream>   // Allows use of input/output objects such as cin and cout
#include <string>     // Allows use of the string data type
#include <cctype>     // Allows use of character functions such as toupper() and tolower()

using namespace std;  // Allows us to use standard library names without writing std::


// ==========================================================
// CATEGORY: Function Prototypes
// Purpose : Tell the compiler these functions exist before main()
// ==========================================================

void ConvertLetterString(string &MonthName);
// Convert the month name into proper letter format
// Example: "aUgUsT" becomes "August"

int FindDaysInMonth(const string &MonthName, int YearValue);
// Return the number of days in the given month and year

bool IsLeapYear(int YearValue);
// Check whether the given year is a leap year

void WeatherReport(int TotalDays, int &HotDays, int &RainyDays, int &CloudyDays);
// Read daily weather data and count hot, rainy, and cloudy days

void DisplayReport(const string &MonthName, int YearValue, int TotalDays,
                   int HotDays, int RainyDays, int CloudyDays);
// Display the summary report for the selected month

void DisplayRangeGraph(int TotalDays, int HotDays, int RainyDays, int CloudyDays);
// Display a star graph based on the total number of recorded days



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{
    string UserInputText, MonthName;
    // UserInputText stores the full user input such as "August 2019"
    // MonthName stores only the extracted month name such as "August"

    int YearValue;
    // Store the extracted year value

    int DaysInMonth;
    // Store the total number of days in the selected month

    int HotDays, RainyDays, CloudyDays;
    // Store the total number of hot, rainy, and cloudy days

    char UserChoice;
    // Store the user's choice whether to repeat the program


    // ======================================================
    // CATEGORY: Main Repetition Loop
    // Purpose : Allow the user to run the program multiple times
    // ======================================================

    do
    {
        cout << "Enter your month (example: August 2019): ";
        // Prompt the user to enter month and year in one line

        getline(cin, UserInputText);
        // Read the full input line including spaces


        while (UserInputText == "")
        {
            // Keep asking if the user enters an empty line

            cout << "Please enter a month and year: ";
            // Show message to request proper input

            getline(cin, UserInputText);
            // Read input again
        }


        size_t SpacePosition = UserInputText.find(' ');
        // Find the position of the first space in the input
        // Example: "August 2019" → space is between month and year

        if (SpacePosition == string::npos)
        {
            // If no space is found, the format is invalid

            cout << "Invalid format. Use: August 2019\n\n";
            // Show error message

            continue;
            // Restart the loop and ask for input again
        }


        MonthName = UserInputText.substr(0, SpacePosition);
        // Extract the month part from the beginning up to the space

        YearValue = stoi(UserInputText.substr(SpacePosition + 1));
        // Extract the year part after the space and convert it to integer


        ConvertLetterString(MonthName);
        // Standardize the month text
        // Example: "aUgUsT" becomes "August"


        DaysInMonth = FindDaysInMonth(MonthName, YearValue);
        // Get the number of days for that month and year


        if (DaysInMonth == 0)
        {
            // If function returns 0, the month name is invalid

            cout << "Invalid month name.\n\n";
            // Show error message

            continue;
            // Restart loop
        }


        WeatherReport(DaysInMonth, HotDays, RainyDays, CloudyDays);
        // Collect weather data for each day of the month


        DisplayReport(MonthName, YearValue, DaysInMonth, HotDays, RainyDays, CloudyDays);
        // Display the final monthly weather report


        cout << "\nDo another? (Y/N): ";
        // Ask the user whether they want to repeat the program

        cin >> UserChoice;
        // Read the user's choice

        cin.ignore(1000, '\n');
        // Clear leftover newline character from input buffer

        cout << endl;
        // Print a blank line for better spacing

    } while (UserChoice == 'Y' || UserChoice == 'y');
    // Repeat if user enters Y or y


    cout << "Program ended.\n";
    // Show termination message

    return 0;
    // End the program successfully
}



// ==========================================================
// CATEGORY: Month Letter Formatting Function
// Purpose : Convert month name into proper capitalized format
// ==========================================================

void ConvertLetterString(string &MonthName)
{
    if (MonthName.empty()) return;
    // If the string is empty, stop the function immediately

    MonthName[0] = toupper(MonthName[0]);
    // Convert the first letter into uppercase

    for (size_t CharacterIndex = 1; CharacterIndex < MonthName.length(); ++CharacterIndex)
        MonthName[CharacterIndex] = tolower(MonthName[CharacterIndex]);
    // Convert all remaining letters into lowercase
}



// ==========================================================
// CATEGORY: Leap Year Checking Function
// Purpose : Determine whether a year is a leap year
// ==========================================================

bool IsLeapYear(int YearValue)
{
    return (YearValue % 4 == 0 && YearValue % 100 != 0) || (YearValue % 400 == 0);
    // A year is a leap year if:
    // 1. It is divisible by 4 but not divisible by 100
    // OR
    // 2. It is divisible by 400
}



// ==========================================================
// CATEGORY: Find Days In Month Function
// Purpose : Return the total number of days in the given month
// ==========================================================

int FindDaysInMonth(const string &MonthName, int YearValue)
{
    if (MonthName == "January" || MonthName == "March" ||
        MonthName == "May" || MonthName == "July" ||
        MonthName == "August" || MonthName == "October" ||
        MonthName == "December")
        return 31;
    // These months always have 31 days

    else if (MonthName == "April" || MonthName == "June" ||
             MonthName == "September" || MonthName == "November")
        return 30;
    // These months always have 30 days

    else if (MonthName == "February")
        return IsLeapYear(YearValue) ? 29 : 28;
    // February has 29 days in leap year, otherwise 28 days

    else
        return 0;
    // Return 0 if month name is invalid
}



// ==========================================================
// CATEGORY: Weather Data Input Function
// Purpose : Read daily weather code and count each weather type
// ==========================================================

void WeatherReport(int TotalDays,
                   int &HotDays, int &RainyDays, int &CloudyDays)
{
    char WeatherCode;
    // Store the weather code entered for each day

    HotDays = RainyDays = CloudyDays = 0;
    // Initialize all counters to zero

    cout << "\nEnter weather data:\n";
    // Display instruction header

    for (int DayNumber = 1; DayNumber <= TotalDays; ++DayNumber)
    {
        // Loop through every day in the month

        while (true)
        {
            // Repeat until valid code is entered

            cout << "Day " << DayNumber
                 << " : Enter H (Hot), R (Rainy), C (Cloudy): ";
            // Ask user to enter weather code for the current day

            cin >> WeatherCode;
            // Read weather code

            WeatherCode = toupper(WeatherCode);
            // Convert input to uppercase so both lowercase and uppercase are accepted

            if (WeatherCode == 'H')
            {
                HotDays++;
                // Increase hot day counter

                break;
                // Exit inner loop because input is valid
            }
            else if (WeatherCode == 'R')
            {
                RainyDays++;
                // Increase rainy day counter

                break;
                // Exit inner loop because input is valid
            }
            else if (WeatherCode == 'C')
            {
                CloudyDays++;
                // Increase cloudy day counter

                break;
                // Exit inner loop because input is valid
            }
            else
            {
                cout << "Invalid input. Try again.\n";
                // Show error message if entered code is not H, R, or C
            }
        }
    }
}



// ==========================================================
// CATEGORY: Report Display Function
// Purpose : Show the final weather report summary
// ==========================================================

void DisplayReport(const string &MonthName, int YearValue, int TotalDays,
                   int HotDays, int RainyDays, int CloudyDays)
{
    cout << "\n----------------------------------------\n";
    // Print top border line

    cout << "Weather report for " << MonthName << " " << YearValue << endl;
    // Display report title with month and year

    cout << "----------------------------------------\n";
    // Print separator line

    cout << "Number of hot days this month   : " << HotDays << endl;
    // Display total number of hot days

    cout << "Number of rainy days this month : " << RainyDays << endl;
    // Display total number of rainy days

    cout << "Number of cloudy days this month: " << CloudyDays << endl;
    // Display total number of cloudy days

    cout << "\nThe analysis star design as below:\n";
    // Display graph section title

    cout << "----------------------------------------\n";
    // Print separator line before graph

    DisplayRangeGraph(TotalDays, HotDays, RainyDays, CloudyDays);
    // Call function to display the star graph
}



// ==========================================================
// CATEGORY: Star Graph Display Function
// Purpose : Show a star graph grouped by day ranges
// ==========================================================

void DisplayRangeGraph(int TotalDays, int HotDays, int RainyDays, int CloudyDays)
{
    int RemainingRecordedDays = HotDays + RainyDays + CloudyDays;
    // Calculate total recorded days
    // In this program, it should be equal to TotalDays

    // ------------------------------------------------------
    // RANGE: 1 to 10
    // ------------------------------------------------------

    cout << "1  - 10  | ";
    // Print range label for first 10 days

    for (int StarIndex = 0; StarIndex < min(10, RemainingRecordedDays); StarIndex++)
        cout << "*";
    // Print up to 10 stars for this range

    cout << endl;
    // Move to next line

    RemainingRecordedDays -= min(10, RemainingRecordedDays);
    // Reduce remaining count after printing first range


    // ------------------------------------------------------
    // RANGE: 11 to 20
    // ------------------------------------------------------

    if (TotalDays > 10)
    {
        // Only display this range if month has more than 10 days

        cout << "11 - 20  | ";
        // Print range label

        for (int StarIndex = 0; StarIndex < min(10, RemainingRecordedDays); StarIndex++)
            cout << "*";
        // Print up to 10 stars

        cout << endl;
        // Move to next line

        RemainingRecordedDays -= min(10, RemainingRecordedDays);
        // Reduce remaining count
    }


    // ------------------------------------------------------
    // RANGE: 21 to 30
    // ------------------------------------------------------

    if (TotalDays > 20)
    {
        // Only display this range if month has more than 20 days

        cout << "21 - 30  | ";
        // Print range label

        for (int StarIndex = 0; StarIndex < min(10, RemainingRecordedDays); StarIndex++)
            cout << "*";
        // Print up to 10 stars

        cout << endl;
        // Move to next line

        RemainingRecordedDays -= min(10, RemainingRecordedDays);
        // Reduce remaining count
    }


    // ------------------------------------------------------
    // RANGE: 31
    // ------------------------------------------------------

    if (TotalDays == 31)
    {
        // Only display day 31 if the month has 31 days

        cout << "31       | *" << endl;
        // Print one star for day 31
    }
}

// ==========================================================
// CATEGORY: Header Files
// Purpose : Import library for input and output
// ==========================================================

#include <iostream>

using namespace std;



// ==========================================================
// CATEGORY: Class Definition
// Purpose : Store population data and calculate rates
// ==========================================================

class Population
{
private:

    int TotalPopulation;
    // Store total population size

    int NumberOfBirths;
    // Store number of births during the period

    int NumberOfDeaths;
    // Store number of deaths during the period

public:

    Population(int PopulationSize, int BirthCount, int DeathCount);
    // Constructor used to initialize the object

    double GetBirthRate();
    // Function to calculate birth rate

    double GetDeathRate();
    // Function to calculate death rate
};



// ==========================================================
// CATEGORY: Constructor
// Purpose : Initialize population values with validation
// ==========================================================

Population::Population(int PopulationSize, int BirthCount, int DeathCount)
{
    if (PopulationSize < 1)
    {
        PopulationSize = 1;
        // Prevent population from being less than 1
    }

    if (BirthCount < 0)
    {
        BirthCount = 0;
        // Prevent negative birth numbers
    }

    if (DeathCount < 0)
    {
        DeathCount = 0;
        // Prevent negative death numbers
    }

    TotalPopulation = PopulationSize;
    NumberOfBirths = BirthCount;
    NumberOfDeaths = DeathCount;
}



// ==========================================================
// CATEGORY: Member Function - Birth Rate
// Purpose : Calculate births divided by population
// ==========================================================

double Population::GetBirthRate()
{
    return static_cast<double>(NumberOfBirths) / TotalPopulation;
    // Convert births to double and divide by population
}



// ==========================================================
// CATEGORY: Member Function - Death Rate
// Purpose : Calculate deaths divided by population
// ==========================================================

double Population::GetDeathRate()
{
    return static_cast<double>(NumberOfDeaths) / TotalPopulation;
    // Convert deaths to double and divide by population
}



// ==========================================================
// CATEGORY: Main Function
// Purpose : Program execution starts here
// ==========================================================

int main()
{
    int PopulationSize;
    int BirthCount;
    int DeathCount;


    // ======================================================
    // CATEGORY: User Input
    // ======================================================

    cout << "Enter total population: ";
    cin >> PopulationSize;

    cout << "Enter number of births: ";
    cin >> BirthCount;

    cout << "Enter number of deaths: ";
    cin >> DeathCount;


    // ======================================================
    // CATEGORY: Create Population Object
    // ======================================================

    Population PopulationData(PopulationSize, BirthCount, DeathCount);
    // Create object using constructor


    // ======================================================
    // CATEGORY: Display Results
    // ======================================================

    cout << endl;

    cout << "Birth Rate: "
         << PopulationData.GetBirthRate()
         << endl;

    cout << "Death Rate: "
         << PopulationData.GetDeathRate()
         << endl;


    // ======================================================
    // CATEGORY: Program Termination
    // ======================================================

    return 0;
}

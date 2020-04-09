#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 int
 char 
 float
 bool
 double
 void
 
 
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
 */

void variableDeclarations()
{
    int myAge = 25;
    int myBirthday = 92294;
    int currentTemperature = 75;

    char myFirstInitial = 'S';
    char myLastInitial = 'R';
    char myFriendsInitial = 'R';

    float myExactAge = 25.5f;
    float proLineLevel = 1.228f;
    float consumerLineLevel= .316f;

    bool sittingDown = true;
    bool standingUp = false;
    bool havingFun = true;

    double myNumber = 1.234567891;
    double yourNumber = 9.87654321987654321;
    double guitarCap = 0.0000022;

    ignoreUnused(myAge,myBirthday,currentTemperature,myFirstInitial,myLastInitial,myFriendsInitial,myExactAge,proLineLevel,consumerLineLevel, sittingDown,standingUp, havingFun,myNumber,yourNumber,guitarCap);
}




/*
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    

4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
/*
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
}

 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
double fileTaxReturn(bool W2, bool TenNinetyNine, float income)
{
 ignoreUnused(W2, TenNinetyNine, income);
    return {};
}
/*
 2)
 */
bool waterBoiling(float temperature, bool boilingPoint)
{
    ignoreUnused(temperature, boilingPoint);
    return {};
}
/*
 3)
 */
double measureVoltage(float Voltage)
{
    ignoreUnused(Voltage);
    return {};
}
/*
 4)
 */
bool checkIfHungry(float timeLastEaten, bool stomachGrowl, bool hungry)
{
    ignoreUnused(timeLastEaten, stomachGrowl, hungry);
    return {};
}
/*
 5)
 */
bool checkIfTired(float timeWokenUp, int hoursSlept)
{
    ignoreUnused(timeWokenUp, hoursSlept);
    return {};
}
/*
 6)
 */
float measureCap(double capacitance, double ESR, bool shortCircuit, bool open)
{
    ignoreUnused(capacitance, ESR, shortCircuit, open);
    return {};
}
/*
 7)
 */
bool finishCourse(int lessonsCompleted, bool allLessonsDone)
{
    ignoreUnused(lessonsCompleted, allLessonsDone);
    return {};
}
/*
 8)
 */
bool learnSpanish(int lessonsCompleted, bool fluent)
{
    ignoreUnused(lessonsCompleted, fluent);
    return {};
}
/*
 9)
 */
int countCoffeesDrank(bool morningCup, bool afternoonCup, int extraCups)
{
    ignoreUnused(morningCup, afternoonCup, extraCups);
    return {};
}
/*
 10)
 */
bool checkAmp(bool tubes, bool caps, bool hardware)
{
    ignoreUnused(tubes, caps, hardware);
    return {};
}

/* default values for functions step 4 */

void variableDeclarations2()
{
    double capacitance = .0000022;
    float temperature = 100;
    bool W2 = true;
    float voltage = 3.16f;

    ignoreUnused(capacitance, temperature, W2, voltage);
}





int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto taxReturn = fileTaxReturn(true, false, 75000);
    //2)
    auto isWaterBoiling = waterBoiling(100, 0);
    //3)
    auto measuredVoltage = measureVoltage(3.16f);
    //4)
    auto isHungry = checkIfHungry(12, 1, 1);
    //5)
    auto isTired = checkIfTired(7, 6);
    //6)
    auto capacitance = measureCap(.0000022, 1, 0, 0);
    //7)
    auto courseFinished = finishCourse(2, 0);
    //8)
    auto spanishLearned = learnSpanish(5, 0);
    //9)
    int coffeesDrank = countCoffeesDrank(1, 1, 1);
    //10)
    bool ampOk = checkAmp(1, 1, 1);

    ignoreUnused(taxReturn,isWaterBoiling,measuredVoltage,isHungry,isTired,capacitance,courseFinished,spanishLearned,coffeesDrank,ampOk);  
    
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;  
}

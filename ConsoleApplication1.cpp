//Name: John Marc Meyer
//Date: 08/16/2021
//Course: INFO 3200
//Description: This program calucates the cost of getting to a destination using a vechile

#include <iostream>
using namespace std;

int main()
{
	//variables
	float totalMilesPerDay;
	float costOfGas;
	float avgMilePerGallon;
	float parkingFees;
	float finalCalc;

	//get user input and store it
	cout << "Enter in the total miles driven per day: ";
	cin >> totalMilesPerDay;
	cout << "Enter in the cost per gallon of gasoline: ";
	cin >> costOfGas;
	cout << "Enter in the average miles per gallon: ";
	cin >> avgMilePerGallon;
	cout << "Enter in the parking fees per day: ";
	cin >> parkingFees;
	
	//do calculations
	finalCalc = (((totalMilesPerDay / avgMilePerGallon) * costOfGas) + parkingFees);
	cout << "The final cost of the trip is $" << finalCalc;
	
	//end program
	return 0;

}


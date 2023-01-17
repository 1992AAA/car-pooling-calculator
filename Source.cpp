#include<iostream>
using namespace std;

int main()
{
	cout << "Welcome to car pooling application\n\n";
	int MilesPerDay;
	cout << "Enter total miles driven per day: \n";
	cin >> MilesPerDay;
	int CostOfGallon;
	cout << "Enter cost of gasoline gallon: \n";
	cin >> CostOfGallon;

	int AvgMilesPerGallon;
	cout << "Enter the average of gallon per miles: \n";
	cin >> AvgMilesPerGallon;

	int ParkingFees;
	cout << "Enter Parking fees per days: \n";
	cin >> ParkingFees;

	int tollsPerDay;
	cout << "Enter tolls per day: \n";
	cin >> tollsPerDay;

	cout << "The total costs of the car per day: " << (MilesPerDay /AvgMilesPerGallon)* CostOfGallon  + ParkingFees + tollsPerDay << endl;
}
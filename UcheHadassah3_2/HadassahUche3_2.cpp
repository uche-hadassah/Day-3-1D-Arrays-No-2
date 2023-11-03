/*Name:Uche Hadassah
This program takes in an integer and stores it's digits into an array, then prints the array out with 
spaces in between the numbers*/
#include<iostream>
using namespace std;
int main()
{
	const int MAX = 100;
	int Array[100];
	int num;
	int i = 0;
	cout << "Enter a number:";
	cin >> num;//Receives the number from the user
	if (num <= 0)//Ensures that the number is positive
	{
		cout << "Invalid! Enter a positive number:";
		cin >> num;
	}
	while (num > 0)
	{
		//Stores the number into the array in reverse
		Array[i] = num % 10;//Saves the last digit of the number into the first position in the array
		num = num / 10;//Removes the last digit of the number
		i++;//Increments the counter
	}
	cout << "The number with spaces is:";
	for (int j = i - 1; j >= 0; j--)//j is initialized to i - 1 since that is the actual size of the array
	{
		cout << Array[j] << " ";//outputs the array with spaces in between
	}
	return 0;
}
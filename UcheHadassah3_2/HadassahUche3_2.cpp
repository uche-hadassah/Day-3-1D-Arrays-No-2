/*Separating digits: Write a program that takes an integer, stores its digits into an 
array, and then prints the array with spaces separating the digits. Test your function.
Example run (user response in bold): 
Enter a number: 3456
The number with spaces is: 3 4 5 6 
HINT: Use the process of separating digits, as in Exercise Sheet 2, Question 4. */
#include<iostream>
using namespace std;
int main()
{
	const int MAX = 100;
	int num;
	int Array[100];
	int i = 0;
	cout << "Enter an integer:";
	cin >> num;
	while(num > 0)
	{
		Array[i] = num % 10;
		num = num / 10;
		i++;
	}
	cout << "The number with spaces is:";
	for (int j = i - 1; j >= 0; j--)
	{
		cout << Array[j] << " ";
	}
	return 0;
}
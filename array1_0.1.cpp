// Topic: Array
// Purpose: Calculate the average of a number of integer variables
// Ver: 0.1
// The number of the integer variable is decided by users
// Language: C++

#include <stdio.h>
#include <iostream>

using namespace std;

int main (void)
{
	int total = 0;
  int count = 0;	
  int number;

	printf( "How many integer variables you want to calculate the average: " );
	cin >> count;
	for (int i = 0; i < count; i++) {
		
		printf( "Enter number: ");
		cin >> number;
		total += number;
	}
	float averNum = (float) total / count;
	printf( "The average is: %f\n", averNum);
}

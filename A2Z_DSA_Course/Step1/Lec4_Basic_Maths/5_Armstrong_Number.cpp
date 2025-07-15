/*
 	Problem Statement: Given an integer N, return true it is an Armstrong number otherwise return false.

	An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

                Example 1:
                Input:N = 153
               
                Output:True
                
                Explanation: 13+53+33 = 1 + 125 + 27 = 153
                                        
                Example 2:
                Input:N = 371                
                
                Output: True
                
                Explanation: 33+53+13 = 27 + 343 + 1 = 371
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int number, count = 0, sum = 0;
	cout << "Enter a number : ";
	cin >> number;

	for (int i = number; i != 0;)
	{
		i = i / 10;
		count++;
	}
	cout << "Count : " << count << endl;


	for(int i=number; i != 0;)
	{
		cout << "Entering" << endl;
		sum += pow((i%10),count);
		cout << "Digit : " << (i%10) << " sum : " << sum << endl;
		i=i/10;
		cout << "Exiting" << endl;
	}

	cout << "sum : " << sum << "  number : " << number << endl;

	if (number == sum)
	{
		cout << "Given Number is Armstrong number" << endl;
	}
	else
	{
		cout << "Given Number is NOT an Armstrong number" << endl;
	}

	return 0;
}

/*
 * Tip : Count the digits and calculate pow() for each digit, sum of it should be equal to the given number
 */


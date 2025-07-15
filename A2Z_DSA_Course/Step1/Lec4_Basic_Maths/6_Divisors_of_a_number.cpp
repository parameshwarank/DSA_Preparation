/*
	Problem Statement: Given an integer N, return all divisors of N.

	A divisor of an integer N is a positive integer that divides N without leaving a remainder. 
	In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.

                Example 1:
                Input:N = 36
               
                Output:[1, 2, 3, 4, 6, 9, 12, 18, 36]
                
                Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36.
                                        
                Example 2:
                Input:N =12                
                
                Output: [1, 2, 3, 4, 6, 12]
                
                Explanation: The divisors of 12 are 1, 2, 3, 4, 6, 12.
*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int number;
	vector<int> divisors;

	cout << "Enter a number : " ;
	cin >> number;

	for (int i = 1; i <= sqrt(number); i++)
	{
		if(number%i == 0)
		{
			divisors.push_back(i);
			if(i != number/i)
				divisors.push_back(number/i);
		}
	}

	cout << "Divisors : ";

	for (auto i=divisors.begin(); i != divisors.end(); i++)
	{
		cout << *i << " ";
	}

	cout << endl;
	return 0;
}

/*
 * Tip - Loop fail condition can't be % since it will be the middle elements. better take the sqrt as common ground. Also to avoid duplicate sqrt as twice check if first and last are not same.
 */

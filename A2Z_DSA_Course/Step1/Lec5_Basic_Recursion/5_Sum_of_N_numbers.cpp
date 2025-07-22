/*
Given an integer N, return the sum of first N natural numbers. Try to solve this using recursion.


Examples:
Input : N = 4

Output : 10

Explanation : first four natural numbers are 1, 2, 3, 4.

Sum is 1 + 2 + 3 + 4 => 10.

Input : N = 2

Output : 3

Explanation : first two natural numbers are 1, 2.

Sum is 1 + 2 => 3. 
*/

#include <iostream>

using namespace std;

int NnumbersSum(int N)
{
	if(N <= 0)
        	return 0;
	return (N + (NnumbersSum(N-1)));
}

int main()
{
	int number;
	cout << "Enter N value : ";
	cin >> number;
	cout << "Sum : " << NnumbersSum(number) << endl;
}

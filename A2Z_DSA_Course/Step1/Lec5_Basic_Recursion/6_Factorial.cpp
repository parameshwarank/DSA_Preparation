/*
		Given an integer n, return the factorial of n.

		Factorial of a non-negative integer, is the multiplication of all integers smaller than or equal to n (use 64-bits to return answer).


		Examples:
		Input : n = 3

		Output : 6

		Explanation : Factorial = 1 * 2 * 3 => 6

		Input : n = 5

		Output : 120

		Explanation : Factorial = 1 * 2 * 3 * 4 * 5 => 120
 */ 

#include <iostream>

using namespace std;

long long int factorial(int n){
	if (n <= 0)
        	return 1;
	return (n*factorial(n-1));
}

int main()
{
    int number;
    cout << "Enter N value : ";
    cin >> number;
    cout << "Factorial : " << factorial(number) << endl;
    return 0;
}

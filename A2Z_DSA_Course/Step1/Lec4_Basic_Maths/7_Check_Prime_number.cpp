/*
	Problem Statement: Given an integer N, check whether it is prime or not.
	A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2.

               Example 1:
                Input:N = 2
               
                Output:True
                
                Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).
                                        
                Example 2:
                Input:N =10                
                
                Output: False
                
                Explanation: 10 is not prime, it is a composite number because it has 4 divisors: 1, 2, 5 and 10. 	
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	int number, count = 0;
	cout << "Enter a number : ";
	cin >> number;

	for(int i = 1; i <= sqrt(number) ; i++)
	{
		if(number%i == 0)
			count++;
		if((number%(number/i)) == 0)
			count++;
	}

	if(count == 2)
	{
		cout << "Given Number is PRIME number" << endl;
	}
	else
	{
		cout << "Given Number is NOT a PRIME number" << endl;
	}
}

/*
 * Tip - Brute force approach only by can save the iteration by exiting till sqrt and check both low and high end numbers inside loop.
 */

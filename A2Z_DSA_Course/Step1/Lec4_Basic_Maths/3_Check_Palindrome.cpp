/*
	Problem Statement: Given an integer N, return true if it is a palindrome else return false.
		A palindrome is a number that reads the same backward as forward. For example, 121, 1331, and 4554 are 
		palindromes because they remain the same when their digits are reversed.
	
		Example 1:
			Input:N = 4554

			Output:Palindrome Number

			Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number

		Example 2:
			Input:N = 7789
	
			Output: Not Palindrome

			Explanation: The reverse of number 7789 is 9877 and therefore it is not palindrome
*/

#include <iostream>

using namespace std;

int main()
{
	int number, duplicate_number, reverse_number;
	cout << "Enter a number : " << endl;
	cin >> number;
	
	duplicate_number = number;

	reverse_number = 0;
	while(number)
	{
		reverse_number = (reverse_number * 10) + (number % 10);
		number = number / 10;
	}
	
	if (duplicate_number == reverse_number)
	{
		cout << "It is a Palindrome Number" << endl;
	}
	else
	{
		cout << "It is NOT a Palindrome Number" << endl;
	}

	return 0;
}

/*
 * Tip - Reverse the number using division and module and then compare against given number.
 */ 

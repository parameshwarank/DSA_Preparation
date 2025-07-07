/*

https://takeuforward.org/data-structure/count-digits-in-a-number/

	Problem Statement: Given an integer N, return the number of digits in N.

	Example 1:
        Input:N = 12345
               
        Output:5
              
        Explanation:  The number 12345 has 5 digits.
                                        
        Example 2:
        Input:N = 7789                
                
        Output: 4
                
        Explanation: The number 7789 has 4 digits.
*/

#include <iostream>

using namespace std;

int main()
{
	int number, count = 0;

	cout << "Enter a number:" << endl;
	cin >> number;

	while (number)
	{
		count++;
		number = number / 10;
	        cout << "Number : " << number << endl;
	}

	cout << "Total digits : " << count << endl;
	return 0;
}


/*
 * Tips - Divide by 10. It works on both positive and negative numbers.
 */


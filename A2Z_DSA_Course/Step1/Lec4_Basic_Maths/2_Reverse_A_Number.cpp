/*
 * https://takeuforward.org/maths/reverse-digits-of-a-number
 *
	Example 1:
	Input:N = 12345
   
	Output:54321
	
	Explanation: The reverse of 12345 is 54321.
							
	Example 2:
	Input:N = 7789                
	
	Output: 9877
	
	Explanation: The reverse of number 7789 is 9877.
 *
 */

#include <iostream>

using namespace std;

int main()
{
	int number, reverse_number;

	cout << "Enter a number: " << endl;
	cin >> number;

	reverse_number = 0;

	while (number)
	{
		reverse_number = (reverse_number * 10) + (number % 10);
		number = number / 10;
	}
	cout <<  "Reverse of the number : "<< reverse_number << endl;

	return 0;
}

/*
 * Tip - Use division and modulo/
 */

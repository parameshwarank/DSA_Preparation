/*
Problem Statement: "Given a string, check if the string is palindrome or not."  A string is said to be palindrome if the reverse of the string is the same as the string.

Examples:

Example 1:
Input: Str =  “ABCDCBA”
Output: Palindrome
Explanation: String when reversed is the same as string.

Example 2:
Input: Str = “TAKE U FORWARD”
Output: Not Palindrome
Explanation: String when reversed is not the same as string.
 */

#include <iostream>

using namespace std;

bool palindrome(string &s, int start, int end)
{
	if(start >= end)
		return true;

	if(s[start] != s[end])
		return false;
	return palindrome(s, start+1, end-1);
}

bool palindromeCheck(string& s){
	//your code goes here
	return palindrome(s, 0, s.size()-1);
}
int main()
{
	string s;
	cout << "Enter a string to check if it is palindrome or not : ";
	cin >> s;
	if(palindromeCheck(s))
		cout << "It is a palindrome" << endl;
	else
		cout << "It is NOT a palindrome" << endl;
	return 0;
}

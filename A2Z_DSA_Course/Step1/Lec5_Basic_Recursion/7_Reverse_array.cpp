/*
Given an array nums of n integers, return reverse of the array.


Examples:
Input : nums = [1, 2, 3, 4, 5]

Output : [5, 4, 3, 2, 1]

Input : nums = [1, 3, 3, 3, 5]

Output : [5, 3, 3, 3, 1]
*/

#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int>& nums, int start, int end)
{
    if(start >= end)
        return;
    nums[start] ^= nums[end];
    nums[end] ^= nums[start];
    nums[start] ^= nums[end];
    reverse(nums, start+1, end-1);
}

vector<int> reverseArray(vector<int>& nums){			
	//your code goes here
        reverse(nums, 0, nums.size()-1);
        return nums;
}

int main()
{
	vector<int> numbers;
	int N, num;
	cout << "Enter N value : ";
	cin >> N;

	for (int i=0; i<N; i++)
	{
		cout << "Enter number[" << i << "] : ";
		cin >> num;
		numbers.push_back(num);	
	}

	cout << "\nEntered Numbers : ";
	for(auto i=numbers.begin(); i != numbers.end(); i++)
		cout << " " << *i;

	reverseArray(numbers);

	cout << "\nReversed Numbers : ";
	for(auto i=numbers.begin(); i != numbers.end(); i++)
		cout << " " << *i;
	cout << endl;
	return 0;
}

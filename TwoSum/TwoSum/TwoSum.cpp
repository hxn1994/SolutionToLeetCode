// TwoSum.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target);

int main()
{
	vector<int> a = { 2, 7, 11, 15 };
	int target = 9;

	vector<int> b = twoSum(a, target);
	for (int i = 0; i < b.size(); i++)
		cout << b[i] << '\t';
	cout << endl;

    return 0;
}

vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> indices;
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = i + 1; j < nums.size(); j++)
		{
			if (nums[i] + nums[j] == target)
			{
				indices.push_back(i);
				indices.push_back(j);
			}
		}
	}
	return indices;

}

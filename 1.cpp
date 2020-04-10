#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution1 {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> output;
        for (int i = 0; i < nums.size() - 1; i++)
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    output.push_back(i);
                    output.push_back(j);
                    return output;
                }
            }
        return output;
    }
};
class Solution2 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++)
            m[nums[i]] = i;         //向map中添加元素 3.0 2.1 7.2

        for (int i = 0; i < nums.size(); i++)
        {
            if (m.find(target - nums[i]) != m.end() && m[target - nums[i]] != i)     //如果m中存在对应的键值，并且不为i
                return { i , m[target - nums[i]] };
        }
        return {};
    }
};
int main()
{
    vector<int> a{ 3,2,7 }; int target = 9;
    Solution2 Test;
    vector<int> op(Test.twoSum(a, target));
    for (int i = 0; i < op.size(); i++)
        cout << op[i] << " ";
}
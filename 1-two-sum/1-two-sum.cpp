class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map; //hash map store the value of every number and the index to operate the map
        vector<int> result; //vector of the result
        for (int i = 0; i < nums.size(); i++)
        {
            if (map.find(nums[i]) == map.end())
            {
                map[target - nums[i]] = i; //target - nums is the searched number
            }else{ //found the second value searched
                result.push_back(map[nums[i]]); //asign the values of the number in the position
                result.push_back(i);
                break;
            }
        }
        return result;
    }
};
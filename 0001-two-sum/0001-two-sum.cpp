class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
         unordered_map<int, int> num_map; // Map to store (value, index)

        for ( int i = 0; i < nums.size(); ++i) 
        {
            int complement = target - nums[i];

            if (num_map.find(complement) != num_map.end()) 
            {
                return {num_map[complement], i};
            }
            num_map[nums[i]] = i;
        }
        return {};
            // for(int i=0; i<nums.size(); i++)
        // {
        //     for(int j=i+1; j<nums.size();j++)
        //     {
        //         if(nums[i]+nums[j] == target)
        //         {
        //             return {i,j};
        //         }
        //     }
        // }
        // return {};unordered_map<int, int> nums_map;
    

    }
};
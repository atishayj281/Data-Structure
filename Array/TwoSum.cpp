class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ansNums;
        map<int, int> mp;
        for(int i: nums) {
            mp[i]++;
        }
        for(pair<int, int> i: mp) {
            if(mp[target-i.first] > 0) {
                if(target == 2*i.first) {
                    if( mp[i.first] > 1) {
                        ansNums.push_back(i.first);
                        ansNums.push_back(i.first);
                        break;
                    }
                } else {
                    ansNums.push_back(i.first);
                    ansNums.push_back(target-i.first);
                    break;
                }
            }
        }
        int n=nums.size();
        vector<int> ans;
        for(int i = 0; i<n; i++) {
            if(nums[i] == ansNums[0]) {
                ans.push_back(i);
                break;
            }
        }
        for(int i = 0; i<n; i++) {
            if(nums[i] == ansNums[1] and i != ans[0]) {
                ans.push_back(i);
                break;
            }
        }
        return ans;
        
    }
};
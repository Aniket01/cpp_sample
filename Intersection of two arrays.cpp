// solution to leetcode problem no.349
// problem description in README.md

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1;
        unordered_set<int> res_set;
        vector<int> result;
        
        for (int i = 0; i< nums1.size(); i++){
            set1.insert(nums1[i]);
        }

        for (int i = 0; i< nums2.size();i++){
            int key = nums2[i];
            if (set1.find(key) != set1.end()) {
                res_set.insert(key);
            }
        }
        
        for(auto itr = res_set.begin(); itr != res_set.end();itr++){
            result.push_back((*itr));
        }
        return result;
    }
};

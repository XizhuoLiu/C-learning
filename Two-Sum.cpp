#include <vector>
#include <unordered_map>
using namespace std;

class solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int, int> pos;
        pos.reserve(nums.size());
        pos.max_load_factor(0.7f);

        for (int i = 0; i < (int)nums.size(); ++i){
            int need = target - nums[i];
            if (pos.find(need) != pos.end()){
                return {pos[need], i};
            }
            pos[nums[i]] = i;
        }
        return {};
    }
};
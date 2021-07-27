#include <iostream>
#include <vector>
using namespace std;

bool canJump(vector<int>& nums){
    int n = nums.size()-1;
        if(n<=0) return true;
        int currLevelEnd = 0, nextLevelEnd = 0, ans = 0;
        for(int i=0;i<=n;i++)
        {
            if(i>currLevelEnd)
            {
                if(i>nextLevelEnd) return false;
                currLevelEnd = nextLevelEnd;
                ans++;
            }
            nextLevelEnd = max(nextLevelEnd, nums[i]+i);
        }
        if(currLevelEnd<n)
        {
            if(nextLevelEnd < n) return false;
            ans++;
        }
        return true;
}

int main(){
    vector<int> nums = {2,3,1,1,4};
    cout<<canJump(nums);
    return 0;
}
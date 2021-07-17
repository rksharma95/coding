/*
Algorithm: kadane's algorithm
Time Complexity: O(n)
Space Complexity: O(1)
*/

int maxSubArray(vector<int>& nums) {
    int max_so_far = INT_MIN;
    int max=0;
    
    for(auto i = nums.begin(); i != nums.end(); i++){
        max += *i;
        
        if(max_so_far<max){
            max_so_far = max;
        }
        
        if(max < 0){
            max=0;
        }
    }
    
    return max_so_far;
}
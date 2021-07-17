/*
this solution having 
    time complexity: O(nlogn)
    space complexity: O(n)
can also be solved in O(n) with hashmap    
*/
vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    pair<int, int> num[n];
    vector<int> res;
    for(int i=0; i<nums.size();i++){
        num[i] = make_pair(nums[i], i);
    }
    sort(num, num+n);
    int i=0, j=nums.size()-1;
    while(i!=j){
        if(num[i].first + num[j].first == target ){
            cout<<i<<" "<<j<<endl;
            res.push_back(num[i].second);
            res.push_back(num[j].second);
            break;
        }
        if(num[i].first + num[j].first < target){
            i++;
        }
        else{
            j--;
        }
    }
    
    return res;
}
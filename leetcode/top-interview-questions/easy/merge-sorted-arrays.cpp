void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    /*
    the size of nums1 is m+n with padded 0 after m elements
    this solution is without using an auxiliary array
    */
    int i=m+n-1, j=m-1, k=n-1;
    
    while(j>=0 && k>=0){
        if(nums1[j]<nums2[k]){
            nums1[i--] = nums2[k--];
        }
        else{
            nums1[i--] = nums1[j--];
        }
    }
    
    while(k>=0){
        nums1[i--] = nums2[k--];
    }
}
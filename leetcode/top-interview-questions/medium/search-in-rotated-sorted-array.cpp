/*
solution is based on binary search
modified to search in rotated sorted array

time complexity: O(log(n))
space complexity: O(1)
*/
#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& a, int x) {
    int i=0, j=a.size()-1;
    while(i<=j){
        int mid = i+(j-i)/2;
        if(a[mid]==x){
            return mid;
        }
        if(x<a[mid]){
            if(a[i]<=a[mid] && x<a[i]){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        else{
            if(a[mid]<=a[j] && x>a[j]){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        cin>>x;
        cout<<search(v, x);
    }
    return 0;
}
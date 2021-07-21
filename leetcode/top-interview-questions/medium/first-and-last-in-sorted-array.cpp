/*
the solution is based on binary search
time complexity: O(n)
space complexity: O(1)
*/
#include <iostream>
#include <vector>

using namespace std;

vector<int> searchRange(vector<int>& a, int x) {
    
    int i=0, j=a.size()-1;
    int s=-1, e=-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(a[mid]==x){
            s=mid;
            j=mid-1;
        }
        else if(x<a[mid]){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    i=0, j=a.size()-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(a[mid]==x){
            e=mid;
            i=mid+1;
        }
        else if(x<a[mid]){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    vector<int> res;
    res.push_back(s);
    res.push_back(e);
    
    return res;
}    

int main(){
    vector<int> v = {5,7,7,8,8,10};
    vector<int> res = searchRange(v, 8);
    for(auto i: res){
        cout<<i<<" ";
    }

    return 0;
}
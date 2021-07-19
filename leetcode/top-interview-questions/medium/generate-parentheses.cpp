/*
the solution is based on backtracking
time complexity: exponential O(2^n)
*/
#include <iostream>
#include <vector>
using namespace std;

#define print_vec(vec) for(auto i=vec.begin();i!=vec.end();i++) cout<<*i<<" ";

void generate(vector<string> &res, string s, int open, int close, int n){
    if(s.length()==2*n){
        res.push_back(s);
    }

    if(open<n){
        s += '(';
        generate(res, s, open+1, close, n);
        s.pop_back();
    }

    if(close<open){
        s += ')';
        generate(res, s, open, close+1, n);
        s.pop_back();
    }
}

void generateParentheses(int n){
    string s="";
    vector<string> res;
    generate(res, s, 0, 0, n);
    print_vec(res);
}

int main(){
    int n;
    cin>>n;
    generateParentheses(n);
    return 0;
}
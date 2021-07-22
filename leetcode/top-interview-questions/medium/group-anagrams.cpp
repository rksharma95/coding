/*
solution using hashmap
time complexity: O(n d*log(d)) 
    where d is maximum length of a string 
*/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int i=0;
        vector<vector<string>> res;
        map<string, int> m; 
        for(string s: strs){
            string s1 =s;
            sort(s1.begin(), s1.end());
            if(m.count(s1)){
                int idx = m[s1];
                res[idx].push_back(s);
            }
            else{
                m.insert({s1, i++});
                vector<string> v;
                v.push_back(s);
                res.push_back(v);
            }
        }
        
        return res;
    }
};
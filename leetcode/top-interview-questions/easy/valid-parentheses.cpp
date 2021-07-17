/*
time complexity: O(n)
space complextiy: stack space in worst case O(n)

the map can be eliminated with use of switch case or condition
*/
bool isValid(string str) {
    map<char, char> m = {{'(',')'}, {'{','}'}, {'[',']'}};
    stack<char> s;
    for(int i=0; i<str.length(); i++){
        if(s.size()==0 && (str[i]==')' || str[i]=='}' || str[i]==']')){
            return false;
        }
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            s.push(str[i]);
        }
        if(str[i]==')' || str[i]=='}' || str[i]==']'){
            if(str[i]==m[s.top()]){
                s.pop();
            }
            else {
                return false;
            }
        }
    }
    
    if(s.empty()){
        return true;
    }
    return false;
}
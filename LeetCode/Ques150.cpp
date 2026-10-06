#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(int a, int b, char op){
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    if (op == '/') return a / b;
    return 0;
    }
    int evalRPN(vector<string>& arr) {
        stack<int> st;
        for(string s : arr) {
            if(s == "+" || s == "-" || s == "*" || s == "/") {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                st.push(solve(a, b, s[0]));
            }
            else {
                st.push(stoi(s));
            }
        }
        return st.top();
    }
};
int main() {
    return 0;
}
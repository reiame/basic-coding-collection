#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        string output;
        stack<string> space;
        string r;
        cout << s.size();
        if (!s.size()) return "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (r.empty()) continue;
                space.push(r);
                r.clear();
            }
            else
                r = r + s[i];
        }
        if(!r.empty()) space.push(r);
        while (!space.empty())
        {
            output = output + space.top();
            space.pop();
            if (space.empty()) break;
            output = output + ' ';
        }
        return output;
    }
}; 
int main()
{
    string a = " ";
    Solution b;
   cout<< b.reverseWords(a);
}
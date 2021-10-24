/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    bool isValid(string s) {
        stack<int> stack;

        for (char& c : s) {
            switch (c) {
                case '(':
                case '{':
                case '[':
                    stack.push(c);
                    break;
                case ')':
                    if (stack.empty() || stack.top() != '(')
                        return false;
                    else
                        stack.pop();
                    break;
                case ']':
                    if (stack.empty() || stack.top() != '[')
                        return false;
                    else
                        stack.pop();
                    break;
                case '}':
                    if (stack.empty() || stack.top() != '{')
                        return false;
                    else
                        stack.pop();
                    break;
                default:
                    break;
            }
        }
        return stack.empty();
    }
};
// @lc code=end

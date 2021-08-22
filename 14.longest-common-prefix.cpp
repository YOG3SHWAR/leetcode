/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string res = "";
        for (int i = 0; i < strs[0].size(); i++) {
            if (strs[0][i] == strs[strs.size() - 1][i])
                res += strs[0][i];
            else
                break;
        }
        return res;
    }
};
// @lc code=end

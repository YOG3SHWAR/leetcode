/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int ans = 0;
        unordered_map<char, int> m;
        m.insert(pair<char, int>('I', 1));
        m.insert(pair<char, int>('V', 5));
        m.insert(pair<char, int>('X', 10));
        m.insert(pair<char, int>('L', 50));
        m.insert(pair<char, int>('C', 100));
        m.insert(pair<char, int>('D', 500));
        m.insert(pair<char, int>('M', 1000));
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (m[s[i]] >= m[s[i + 1]])
                ans += m[s[i]];
            else
                ans -= m[s[i]];
        }
        ans += m[s[s.length() - 1]];
        return ans;
    }
};
// @lc code=end

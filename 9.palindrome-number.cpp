/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x == 0)
        {
            return true;
        }
        if (x < 0 || x % 10 == 0)
            return false;

        int temp = 0;
        int preX = x;
        while (x > temp)
        {
            int pop = x % 10;
            preX = x;
            x /= 10;

            temp = temp * 10 + pop;
        }
        if (x == temp || preX == temp)
            return true;
        else
            return false;
    }
};
// @lc code=end

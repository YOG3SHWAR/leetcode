/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode head(0);
        ListNode* current = &head;
        while (l1 && l2) {
            ListNode** next = (l1->val < l2->val ? &l1 : &l2);
            current->next = *next;
            *next = (*next)->next;
            current = current->next;
        }
        current->next = l1 ? l1 : l2;
        return head.next;
    }
};
// @lc code=end

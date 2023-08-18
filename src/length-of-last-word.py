class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        strings = s.split()
        return len(strings[-1])

# https://leetcode.com/problems/length-of-last-word

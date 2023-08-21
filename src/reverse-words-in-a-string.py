class Solution:
    def reverseWords(self, s: str) -> str:
        strings = s.split()
        strings.reverse()
        ret = " ".join(strings)
        return ret

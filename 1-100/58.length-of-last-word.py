class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        wordList = s.split()
        if wordList:
            return len(wordList[-1])
        else:
            return 0

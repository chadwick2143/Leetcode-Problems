class Solution:
    def isValid(self, s: str) -> bool:
        match_dict = {'(': ')', '[': ']', '{': '}', 0: 0}
        stack = [0]
        for x in s:
            if x in match_dict:
                stack.append(x)
            elif match_dict[stack.pop()] != x:
                return False
        return len(stack) == 1

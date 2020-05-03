class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        mag=list(magazine)
        for i in ransomNote:
            if i in mag:
                mag.remove(i)
            else:
                return False
        return True

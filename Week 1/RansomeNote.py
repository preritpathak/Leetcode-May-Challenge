class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        c = 0
        for i in ransomNote:
            index = magazine.find(i)
            if(index >= 0):
                magazine = magazine[0 : index : ] + magazine[index + 1 : :]
            else:
                c+=1
        if(c == 0):
            return True
        else:
            return False


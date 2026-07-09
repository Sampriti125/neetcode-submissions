class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        l=0
        maxf=0
        dic={}
        res=0
        for i in range(0,len(s)):
            dic[s[i]]=dic.get(s[i],0)+1
            maxf=max(maxf,dic[s[i]])
            while (i-l+1)-maxf>k:
                dic[s[l]]-=1
                l=l+1
            res=max(res,i-l+1)
        return res


        
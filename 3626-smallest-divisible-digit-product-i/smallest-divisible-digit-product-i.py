class Solution:
    def smallestNumber(self, n: int, t: int) -> int:
        while(1):
            s=str(n)
            pro=1
            for i in s:
                pro*=int(i)
            if(pro%t==0):
                return n
            n+=1

        
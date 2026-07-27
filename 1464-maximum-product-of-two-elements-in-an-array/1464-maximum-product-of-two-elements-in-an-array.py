class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        l = nums
        mx = max(l)
        l.remove(mx)
        t = max(l)
        return ((mx-1)*(t-1))
        # for i in range(0,len(nums)):
            
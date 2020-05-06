class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        if nums==[]:
            return 0
        else:
            nums.sort()
            index=int(len(nums)/2)
            return nums[index]
        

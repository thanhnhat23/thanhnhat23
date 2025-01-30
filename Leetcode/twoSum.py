def twoSum(nums, target):
    seen = {} # Flag
    for i in range(len(nums)):
        diff = target - nums[i]
        if diff in seen:
            return [seen[diff], i]
        seen[nums[i]] = i
nums = list(map(int, input().split()))
target = int(input())
result = twoSum(nums, target)
print(result)
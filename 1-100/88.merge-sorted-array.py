class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        i, j, des = m - 1, n - 1, m + n - 1
        while i >= 0 and j >= 0:
            if nums2[j] >= nums1[i]:
                nums1[des] = nums2[j]
                j -= 1
            else:
                nums1[des] = nums1[i]
                i -= 1
            des -= 1

        while j >= 0:
            nums1[des] = nums2[j]
            j -= 1
            des -= 1

/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var countSubarrays = function(nums, k) {
    const maxNum = Math.max(...nums);
    let left = 0;
    let countMax = 0;
    let ans = 0;

    for (let right = 0; right < nums.length; right++) {
        if (nums[right] === maxNum) countMax++;

        while (countMax >= k) {

            ans += nums.length - right;
            if (nums[left] === maxNum) countMax--;
            left++;
        }
    }

    return ans;
};

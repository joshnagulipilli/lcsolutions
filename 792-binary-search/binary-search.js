/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(nums, target) {
    const n=nums.length;
    var low=0,high=n-1;
    while(low<=high)
    {
        var mid=(low+high) >> 1;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target) high=mid-1;
        else low=mid+1;
    }
    return -1;

};
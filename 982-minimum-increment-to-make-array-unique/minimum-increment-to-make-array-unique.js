/**
 * @param {number[]} nums
 * @return {number}
 */
var minIncrementForUnique = function(nums) {
    let n=nums.length;
    nums = nums.sort((a,b)=> a-b);
    var res=0;
    for(let i=1;i<n;i++){
        if(nums[i]<=nums[i-1]){
            res+=nums[i-1]-nums[i]+1;
            nums[i]=nums[i-1]+1;
        }
    }
    return res;
};
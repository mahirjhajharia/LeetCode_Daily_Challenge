class Solution {
public:

    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum=0, curr=0, maxSum=0, flag=1, ans=INT_MIN;
        // check if all elements are negative
        for(int i : nums){
            if(i >= 0){
                flag = 0;
                break;
            }
            ans = max(ans, i);
        }
        // if all elements are negative return the largest one
        if(flag)
            return ans; 
        // find max subarray sum using kadane's algorithm
        for(int i : nums){
            totalSum += i;
            curr += i;
            maxSum = max(maxSum, curr);
            if(curr<0)
                curr=0;
        }
        int minSum=INT_MAX;
        curr=0;
        // find min subarray sum
        for(int i : nums){
            curr += i;
            minSum = min(minSum, curr);
            if(curr>0)
                curr = 0;
        }

        int ans2 = totalSum - minSum;
        return max(maxSum, ans2);
 }
};
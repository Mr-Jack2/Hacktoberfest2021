class Solution {
public:
  bool isGoodArray(vector<int>& nums) {
    int g = nums[0];
    for (int x : nums)
      g = gcd(g, x);    
    return g == 1;
  }
};
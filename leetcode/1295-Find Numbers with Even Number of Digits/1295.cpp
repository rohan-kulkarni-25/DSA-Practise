class Solution
{
public:
  int findNumbers(vector<int> &nums)
  {
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      int num = nums[i];
      int dig = 0;
      while (num > 0)
      {
        num = num / 10;
        dig++;
      }
      if (dig % 2 == 0)
      {
        count++;
      }
    }
    return count;
  }
};
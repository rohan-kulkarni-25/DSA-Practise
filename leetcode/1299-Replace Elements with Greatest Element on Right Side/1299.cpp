class Solution
{
public:
  vector<int> replaceElements(vector<int> &arr)
  {
    int len = arr.size();
    vector<int> ans;
    for (int i = 0; i < len; i++)
    {
      int max = 0;
      for (int j = (i + 1); j < len; j++)
      {
        if (max < arr[j])
        {
          max = arr[j];
        }
      }
      if (i == (len - 1))
      {
        ans.push_back(-1);
      }
      else
      {
        ans.push_back(max);
      }
    }
    return ans;
  }
};
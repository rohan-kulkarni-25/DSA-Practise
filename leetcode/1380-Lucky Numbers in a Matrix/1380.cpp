class Solution
{
public:
  vector<int> luckyNumbers(vector<vector<int>> &matrix)
  {
    int len = matrix.size();
    vector<int> ans;

    for (int i = 0; i < len; i++)
    {
      int subLen = matrix[i].size();
      int minRow = matrix[i][0];
      for (int k = 0; k < subLen; k++)
      {
        if (matrix[i][k] < minRow)
        {
          minRow = matrix[i][k];
        }
      }
      int maxCol = 0;
      for (int l = 0; l < len; l++)
      {
        for (int m = 0; m < matrix[l].size(); m++)
        {
          if (matrix[l][m] > maxCol && l != i)
          {
            maxCol = matrix[l][m];
          }
        }
      }
      if (minRow >= maxCol)
      {
        ans.push_back(minRow);
      }
    }
    return ans;
  }
};
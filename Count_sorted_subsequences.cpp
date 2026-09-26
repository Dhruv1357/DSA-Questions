class Solution {
  public:
    int countTriplets(vector<int> &arr) 
    {
        // code here
        int countij,countjk,count = 0;
        
        for(int j = 1;j<arr.size()-1;j++)
        {
            countij = 0,countjk = 0;
            for(int i=0;i<j;i++)
            {
                if(arr[i] < arr[j])
                    countij++;
            }
            for(int k=j+1;k<arr.size();k++)
            {
                if(arr[j] < arr[k])
                    countjk++;
            }
            count += countij * countjk;
        }
        return count;
    }
};
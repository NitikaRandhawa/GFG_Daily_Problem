class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      //Code Here
      unordered_set<long long int >col;
      unordered_set<long long int>row;
      long long int ans=1ll* n*n;
      vector<long long int>res;
      for(int i=0;i<k;i++){
          if(row.find(arr[i][0])==row.end()){
            ans-=(n-col.size());
             row.insert(arr[i][0]);
          }
          if(col.find(arr[i][1])==col.end()){
            ans-=(n-row.size());
            col.insert(arr[i][1]);
          }
               
          res.push_back(ans);
      }
      return res;
  }
};

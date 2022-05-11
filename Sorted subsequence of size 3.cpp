Method :1 

class Solution
{
  public:
    vector<int> find3Numbers(vector<int> arr, int n) 
    {
        int min=INT_MAX,a=INT_MAX,b=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=min)
                min=arr[i];
            else if(arr[i]<=b)
            {
                b=arr[i];
                a=min;
            }
            else
              return {a,b,arr[i]};
        }
        return {};
    }
};

Method :2

class Solution
{
  public:
    vector<int> find3Numbers(vector<int> arr, int n) 
    {
       int mini=INT_MAX,maxi=INT_MIN;
       int mina[n],maxa[n];
       vector<int>ans;
       for(int i =0;i<n;i++)
       {
           mini=min(mini,arr[i]);
           mina[i]=mini;
       }
       for(int i=n-1;i>=0;i--){
           maxi=max(maxi,arr[i]);
           maxa[i]=maxi;
       }
       for(int i=0;i<n;i++)
       {
           if(arr[i]>mina[i] && arr[i]<maxa[i])
               return {mina[i],arr[i],maxa[i]};
       }
       return {};
    }
};

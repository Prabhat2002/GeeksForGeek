 string solve(int arr[], int n) 
    {
        sort(arr, arr + n, greater<>());
        string s;
        int c = 0;
        for(int i=0;i<n;i+=2) 
        {
           int sum=arr[i]+c;
           if(i+1<n) 
             sum+=arr[i+1];
           c=sum/10;
           s.push_back(sum%10+'0');
        }
        s.push_back(c + '0');
        while (s.back() == '0') 
           s.pop_back();
        reverse(s.begin(), s.end());
        return s;
    }

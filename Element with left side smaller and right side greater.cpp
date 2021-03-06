int findElement(int arr[], int n) 
{
    int large[n], small[n], mx = INT_MIN, mn = INT_MAX;
    for(int i=0; i<n; i++)
    {
        mx = max(mx, arr[i]);
        large[i] = mx;
    }
    // 4 4 5 7 
    for(int i=n-1; i>=0; i--){
        mn = min(mn, arr[i]);
        small[i] = mn;
    }
    //2 2 5 7
    for(int i=1; i<n-1; i++){
        if(small[i+1]>=arr[i] && arr[i]>=large[i-1])
            return arr[i];
    }
    return -1;
}

    void quickSort(int arr[], int low, int high)
    {
        if(low < high) 
        {
            int pivertIndex = partition(arr, low, high);
            quickSort(arr, low, pivertIndex-1);
            quickSort(arr, pivertIndex+1, high);
        }
   
    }
    int partition(int arr[], int low, int high)
    {
        
        int pivert = arr[low];
        int i = low;
        int j = high;
        
        while(i<j) 
        {
            while(i< high && arr[i] <= pivert)
                i++;
            while(arr[j] > pivert)
                j--;
            if(i < j) 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;
        return j;
    }

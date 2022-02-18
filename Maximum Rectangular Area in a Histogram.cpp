long long getMaxArea(long long hist[], int n)
    {
            stack<long long int> s;
    long long int max_area = 0; 
    long long int tp;  
    long long int area_with_top; 
    long long int i = 0;
        while (i < n)
       {
          if (s.empty() || hist[s.top()] <= hist[i])
            s.push(i++);
          else
          {
            tp = s.top();  
            s.pop(); 
            area_with_top = hist[tp] * (s.empty() ? i :
                                   i - s.top() - 1);
            if (max_area < area_with_top)
                max_area = area_with_top;
           }
      }
    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        area_with_top = hist[tp] * (s.empty() ? i :
                                i - s.top() - 1);
 
        if (max_area < area_with_top)
            max_area = area_with_top;
    }
 
    return max_area;
}

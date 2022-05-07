string isDivisibleBy5(string s)
{
    int n=s.size();
    int rem=0;
    for(int i=0;i<n;i++) 
    {
        if (s[i]=='0')
            rem=(rem*2)%5;
        else
            rem=(rem*2+1)%5;
    }
    if(rem==0) 
       return "Yes";
    return "No";
}

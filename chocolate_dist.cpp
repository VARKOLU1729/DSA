#include<bits/stdc++.h>
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        sort(a.begin(), a.end());
        long long mini = 0;
        long long maxi = m-1;
        long long ans = LLONG_MAX;
        while(maxi<n)
        {
            ans=min(ans, a[maxi]-a[mini]);
            maxi++;
            mini++;
        }
        return ans;
    }   
};

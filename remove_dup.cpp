class Solution {
public:
    int removeDuplicates(vector<int>&a) 
    {
        int n = a.size();
        if(n==1) return 1;
        int i=0;
         int j=0;
         while(j<n-1)
         {
             if(a[j]!=a[j+1]) 
             {
                a[i]=a[j];
                i++;
             }
             j++;
         }
         
         a[i] = a[n-1];
         i++;
         return i;
    }
};

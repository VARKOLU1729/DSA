//approach-1
//quick sort

#include <bits/stdc++.h>

using namespace std;


int solve(vector<int>&a, int l, int h)
{
    int pivot = l;
    int i=l+1;
    int j=h;
    while(i<j)
    {
        while(a[i] <= a[pivot])
        {
            i++;
        }
        while(a[j] > a[pivot])
        {
            j--;
        }
        if(i<j) swap(a[i], a[j]);
    }
    swap(a[j], a[pivot]);
    return j;
}
void quick(vector<int>&a, int l, int h, int k)
{
    if(l<h)
    {    
        int j = solve(a, l, h);
        if(k==j) cout<<endl<<a[j]<<endl;
        if(k<j) quick(a, l, j-1, k);
        else if(k>j) quick(a, j+1, h, k);
    }
}
vector<int> sortArray(vector<int>&a)
{
    quick(a, 0, a.size()-1, 3);
    return a;
}

int main()
{
   vector<int>a = {10, 25,11,14};
   a = sortArray(a);
   for(int i=0; i<a.size(); i++)
   {
       cout<<a[i]<<" ";
   }
}





//approach-2
// sorting - nlog(n)
int n = nums.size();
sort(nums.begin(), nums.end());
return nums[n-k];

//approach-3
// inbuilt function
nth_element(nums.begin(), nums.begin() + k - 1, nums.end(), greater<int>());
return nums[k - 1];





/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

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

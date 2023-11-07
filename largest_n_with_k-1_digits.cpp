#include <iostream>

using namespace std;

int largest_N(int k) 
{
    int n = 0;
    for (int i = 1; i < k; i++) 
    {
        n *= 10;
        n += k - 1;
    }
    return n;
}

int main() 
{
  int k;
  bool check = true;
  while(check)
  {
      cout<<"Please enter a value between 2-9";
      cin>>k;
      if(k>1 && k<10) check = false;
  }
  cout<<largest_N(k);
}

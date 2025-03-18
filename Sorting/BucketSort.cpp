#include<bits/stdc++.h>

using namespace std;

void bucketSort(vector<int>& arr)
{
  vector<int> count(1000);
  for(int i:arr)
  {
    count[i]++;
  }

  int k = 0;
  for(int i=0;i<count.size();i++)
  {
    for(int j=0;j<count[i];j++)
    {
      arr[k] = i;
      k++;
    }
  }
}

int main()
{
  vector<int> kill{12,7,23,47,90,34,32,29,700,3,5,4};
  //vector<int> kill{1,2,3,4,5,6,7};
  bucketSort(kill);
  for(int i:kill)
  {
    cout<<i<<" ";
  }
}
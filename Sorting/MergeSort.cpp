#include<bits/stdc++.h>

using namespace std;

void merge(vector<int>& arr,int s,int m,int e)
{
  vector<int> left(arr.begin()+s,arr.begin()+m+1);
  vector<int> right(arr.begin()+m+1,arr.begin()+e+1);

  int i = 0;
  int j = 0;
  int k = s;
  while(i<left.size() && j<right.size())
  {
    if(left[i]<=right[j])
    {
      arr[k] = left[i++];
    }
    else
    {
      arr[k] = right[j++];
    }
    k++;
  }
  while(i<left.size())
  {
    arr[k++] = left[i++];
  }
  while(j<right.size())
  {
    arr[k++] = right[j++];
  }
}

void mergeSort(vector<int>& arr,int s,int e)
{
  if(e==s)
    return;

  int m = (s+e)/2;
  mergeSort(arr,s,m);
  mergeSort(arr,m+1,e);

  merge(arr,s,m,e);
}

int main()
{
  vector<int> kill{12,7,23,47,90,34,32,29,700,3,5,4};
  mergeSort(kill,0,kill.size()-1);
  for(int i:kill)
  {
    cout<<i<<" ";
  }
}
#include<bits/stdc++.h>

using namespace std;

void quickSort(vector<int>& arr,int s,int e)
{
  if(e<=s)
    return;

  int pivot = arr[e];
  int left = s;

  for(int i=s;i<e;i++)
  {
    if(arr[i]<pivot)
    {
      int temp = arr[i];
      arr[i] = arr[left];
      arr[left] = temp;
      left++;
    }
  }

  arr[e] = arr[left];
  arr[left] = pivot;

  quickSort(arr,s,left-1);
  quickSort(arr,left+1,e);
}

int main()
{
  //vector<int> kill{12,7,23,47,90,34,32,29,700,3,5,4};
  vector<int> kill{1,2,3,4,5,6,7};
  quickSort(kill,0,kill.size()-1);
  for(int i:kill)
  {
    cout<<i<<" ";
  }
}
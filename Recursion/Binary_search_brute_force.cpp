#include<iostream>
using namespace std ;
int sortarr(int arr[],int size)
{
 for(int i=0 ;i<size;i++)
 {
  if(arr[i+1]>arr[i])
  {
    int temp = arr[i];
    arr[i] = arr[i+1];
    arr[i+1] = temp;
  }
 }
}
bool binarysearch(int arr[], int left, int right, int key)
{
  int mid;
  mid = (left + right)/2;
  for(int i=0;i<size;i++)
  {
    if(arr[mid]==key)
    {
      return True; 
    }
    else if (arr[mid] > key)
    {
      
      return False;
    }
  }
}
int main()
{
  int n,key;
  cin >> n >> key;
 sortarr(arr, n);
  binarysearch(arr,n,key);
  
  
}

// 1 3 5 7  key =7
// (3+0)/2 = 3/2 = 2 = mid , left = 0 and right = 3
// arr[mid] = arr[2] = 5
// key = 7 
// arr[2] < key : left++

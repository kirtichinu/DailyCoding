//code 360 coding ninjas for searching the largest element of the array

#include <bits/stdc++.h> 
int largestElement(int arr[], int n) {
    // Write your code here.
    int larg = arr[0];
  if (n == 0 || n<1) {
    return -1;
  } 

    for (int i = 1; i < n; i++) {
      if (arr[i] > larg) {
        larg = arr[i];
      }
    }
  return larg;
}
int main()
{
    int arr[]={12,23,45,2,87};
    int n=sizeof(arr)/sizeof(arr[0]);
    std::cout<<"largest elt in the givem array is = "<<largestElement(arr,n);
    return 0;
}

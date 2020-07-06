 #include <bits/stdc++.h>
 using namespace std;
 void insertion(int arr[], int n)
 {
 int i, j,key;
 for (i = 1; i < n; i++)
 {
  key = arr[i];
  j = i - 1;
  while (j >= 0 && arr[j] > key)
 {
 arr[j + 1] = arr[j];
 j = j - 1;
 }
 arr[j + 1] = key;
 }
 }

 void fun1(int arr[], int n)
 {
 int i;
 for (i = 0; i < n; i++)
 cout << arr[i] << " ";
 cout << endl;
 }

 int main()
 {
 int arr[] = { 49, 67, 56, 23, 34 };
 int n = sizeof(arr) / sizeof(arr[0]);
 insertion(arr, n);
 fun1(arr, n);
 return 0;
 } 

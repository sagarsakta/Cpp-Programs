 #include<iostream>
 using namespace std;
 int i,j;
 void bubbleSort(int &a, int &b) 
 { 
  int temp;
  temp = a;
  a = b;
  b = temp;
}
void display(int *array, int size) 
{

 for( i = 0; i<size; i++)
 cout << array[i] << " ";
 cout << endl;
}
 void bubbleSort(int *array, int size) 
{
  for( i = 0; i<size; i++) 
{
  int swap = 0;
  for( j = 0; j<size-i-1; j++) 
{
 if(array[j] > array[j+1]) 
{ 
  bubbleSort(array[j], array[j+1]);
  swap = 1; 
}
}
if(!swap)
break;
}
}
int main() 
{
 int n;
 cout << "Enter the length: ";
 cin >> n;
 int arr[n]; 
 cout << "Enter all the elements:" << endl;
 for(int i = 0; i<n; i++) 
{
 cin >> arr[i];
 }
 cout << "Array before Sorting is : ";
 display(arr, n);
 bubbleSort(arr, n);
 cout << "Array after Sorting is : ";
 display(arr, n);
}

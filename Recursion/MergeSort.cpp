#include<bits/stdc++.h>
using namespace std;


void merge(int *a,int l,int mid, int h){
    int n1 = mid - l + 1;
    int n2 = h - mid;
 
    // Create temp arrays
    int L[n1], R[n2];
 
    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j];
 
    // Merge the temp arrays back into arr[l..r]
 
    int i = 0;
    int j = 0;
    int k = l;
 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        }
        else {
            a[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }

//   int i=l;
//   int j = mid+1;
//   int k=i;
//   int temp[10];

//   while(i<=mid && j<=h){
//       if(a[i]<a[j]){
//           temp[k++]=a[i++];
//       }else
//       temp[k++] = a[j++];
//   }

// for( ;i<=mid;i++){
//     temp[k++]=a[i++];
// }
// for( ;j<=h;j++){
//     temp[k++]=a[j++];
// }

// for (int i = 0; i < h; i++)
//  {
//      a[i] = temp[i];
//  }

}
void mergeSort(int *a, int l, int h)
{
    if(l>=h){
        return;
    }
    int mid = (l+h)/2;
    mergeSort(a,l,mid);
    mergeSort(a,mid+1,h);
    merge(a,l,mid,h);
}
int main()
{
 int it,j,n;
 int a[]={100,11,223,39,46,51};
 int arr_size = sizeof(a)/sizeof(int);


 for (int i = 0; i < arr_size; i++)
 {
     cout<<a[i]<<",";
 }
 cout<<endl;
 mergeSort(a,0,arr_size-1); 
 for (int i = 0; i < arr_size; i++)
 {
     cout<<a[i]<<",";
 }
 return 0;
}
#include<iostream>
using namespace std;
void bubbleSort(int *, int);
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr ,n);
    for(int i=0;i<n;i++)
    cout<<i<<" ";
}
void bubbleSort(int* arr, int n){
    for(int pass=1;pass<=n-1;pass++){
        for(int i=0;i<=n-pass-1;i++){
            if(arr[i]>arr[i+1]){
                int temp;
                    temp= arr[i];
                        arr[i]=arr[i+1];
                            arr[i+1]=temp;
            }
        }
    }
}
#include<iostream>
using namespace std;
void printArray(int arr[] , int size){
    for(int i=0; i<size ;i++){
        cout << arr[i] << " ";

    }
    cout << endl;
}
void sortOne(int arr[], int size){
    int i=0 , j = size-1;
    int step=0;
    while(i<j){
        cout<< "step" << step << endl;
        printArray(arr , size);
        cout<< endl;

        step++;
        while(arr[i]==0){
            i++;
        }
        while(arr[j]==1){
            j--;
        }

swap(arr[i],arr[j]);
i++;
j--;

    }
}

int main(){
int arr[8]={1,1,0,0,0,0,1,0};
sortOne(arr,8);
printArray(arr,8);
}
//agr yaha pohunch gye ho to , iska mtbl h ki
//arr[i]==1 and arr[j]==0

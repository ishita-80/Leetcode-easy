#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;

        }
        else{
            end=mid-1;

        }
        mid=(start+end)/2;
    }
    return -1;

}
int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,5,8,11,14};
    
    int index=binarySearch(even,6,120);
    cout<< "Index of 12 is"<< index << endl;
    int oddindex=binarySearch(odd,5,11);
    cout<< "Index of 11 is"<< oddindex << endl;
    return 0;
}

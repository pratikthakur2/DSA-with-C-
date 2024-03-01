#include<iostream>
using namespace std;



int binarySearch(int arr[], int size, int key){

    int i = 0;
    int j = size-1;

    int mid = (i+j)/2;

    while(i<=j){
        if(arr[mid]== key){
            return mid;
        }

        if(key>arr[mid]){
            i = mid+1; 
        }

        else{
            j = mid-1;
        }

        mid = (i+j)/2;    
        }
    return -1;

}


int main(){
    int even[6] = {1,3,2,5,23,12};
    int odd[5] = {2,11,93,23,12};

    int ans = binarySearch(even,6,23);

    cout<<ans<<endl;

    return 0;

}
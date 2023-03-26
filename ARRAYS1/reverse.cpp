#include<iostream>
using namespace std;

void reverse(int array[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        int temp=array[start];
        array[start]=array[end];
        array[end]=temp;
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i];
    }
    

}

int main(){
    int n;
   
    cout<<"Enter the array size = ";
    cin>>n;
    int array[n]={1,2,3,4,5};
    reverse(array,n);

    return 0;
}
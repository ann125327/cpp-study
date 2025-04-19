#include<iostream>
using namespace std;
int main(){
    int arr[]={69,44,56,23,5,7,90,32,34,56};
    int num=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<num-1;i++)
    {
        for(int k=0;k<num-1-i;k++){
            if(arr[k]>arr[k+1])
            {
                int temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }

        }
    
    }
    for(int j=0;j<num;j++){cout<<arr[j]<<" ";}
 
    
    system("pause");
    return 0;
}
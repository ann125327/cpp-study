#include<iostream>
using namespace std;
int main(){
    int arr[5]={7,2,5,0,8};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i<j){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    for(int a=0;a<5;a++){cout<<arr[a];}
    cout<<endl;



int start=0;
int end=int(sizeof(arr))/int(sizeof(arr[0]))-1;
while(start<end){
    int temp2 =arr[start];
    arr[start]=arr[end];
    arr[end]=temp2;
   start++;
   end--;
}
for(int b=0;b<5;b++){
    cout<<arr[b];

}
cout<<endl;

    system("pause");
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int arr[10000];
    int k=0;
    for (int i=0;i<10000;i++){
        for (int j=0;j<i;j++){
            if(i%j!=0){
               cin>>arr[k];
               k++;
            }
        }
    }
    int n;
    cout<<"input the number of the prime numbers: ";
    cin>>n;
    cout<<arr[n];
      system("pause");
      return 0;
}
#include<iostream>
#include<cmath>
using namespace std;
int main()
{   int num=100;
     do{
    int b=0;int c=0;int d=0;
    b=num/100;
    c=num/10%10;
    d=num%10;
    int e=b*b*b+c*c*c+d*d*d;
    
    if(num==e){
        cout<<"the number"<<num<<"is a palindromic number"<<endl;
    }
    num++;
    }while(num<1000);
    system("pause");
    return 0;
}


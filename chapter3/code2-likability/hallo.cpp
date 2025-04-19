#include<iostream>
#include<string>
using namespace std;
int main()
{
   int a= 0;

   cout<<"please input the character's likability:"<<endl;
   cin>>a;
   if(a>100)
   {
       cout<<"I'm your and you are mine"<<endl;
      
       while(true){
        cout<<"do u love me?"<<endl;
       string b;
       cin>>b;
       if(b=="yes")
       {
        cout<<"that's right^^"<<endl;
        break;
       }
       else if(b=="no")
     {
        cout<<"......"<<endl;
        continue;
        }       
       else{
         cout<<"...please answer me directly,yes or no?"<<endl;
         continue;
       }
    }


   }
   else if(a>90)
   {
       cout<<"I wanna to always be with u"<<endl;
   }
   else if(a>80){
       cout<<"I love u!"<<endl;
   }
   else if(a>60){
       cout<<"I'm glad to meet u!"<<endl;
   }
   else if(a>20){
       cout<<"what u want me to do for u?"<<endl;
   }
   else{
       cout<<"......"<<endl;
       
   }
   
    system("pause");
    return 0;
}
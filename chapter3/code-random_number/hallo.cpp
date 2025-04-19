#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int b = rand()%100;
    int a= 0;
   
   string answer;
do{cout<<"start the game?(yes or no)"<<endl;
    cin>>answer;
  if(answer=="yes")
{
    cout<<"please enter a number betwteen 0 and 100:";

  while(1){
    cin>>a;
    if(a<b){
        cout<<"too small"<<endl;
    }
    else if(a>b){
        cout<<"too big"<<endl;
    }
    else if(a==b) {
        cout<<"that's right!"<<endl;
        break;
    }
  }
}
else{break;}
}while(true);
    system("pause");
    return 0;
}


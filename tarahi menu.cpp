#include <iostream>
using namespace std;
int main(){
    int choice;
    float a,b,sum,subtraction,multiply,divide;
    start:
    cout<<"Please enter 2 number:";
    cin>>a>>b;
    cout<<"1.sum"<<"\n" ;
    cout<<"2.subtraction"<<"\n";
    cout<<"3.multiply"<<"\n";
    cout<<"4.divide"<<"\n";
    cout<<"5.exit from menu"<<"\n";
    cout<<"Please choice a number from 1 to 5:";
    cin>>choice;
    while(choice<5){
            if(choice==1){
                    sum=a+b;
                    cout<<sum<<"\n";
                    }
            else if(choice==2){
                    subtraction=a-b;
            cout<<subtraction<<"\n";
             }
           else if(choice==3){
                    multiply=a*b;
                    cout<<multiply<<"\n";
                     }
                   else if(choice==4){
                      if(b==0){
                      cout<<"Error";}
                       else{
                        divide=a/b;
                       cout<<divide<<"\n";
                        }
                   }
            else if(choice==5){
                        cout<<"Exit"<<"\n";
                        }
                        else{
                                cout<<"Please enter number correctly";
                              }
                              return 0;
    }
}

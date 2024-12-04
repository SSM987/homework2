#include<iostream>
using namespace std;
int main(){
     int number,i,a=0;
    cout<<"Enter a number:";
    cin>>number;
    if(number<=1)
        cout<<"Error";
        else{
        for(i=1;i<=number;i++){
            if(number%i==0){
                    a++;
            }
        }
        if(a==2){
                cout<<"YES";
        }
        else
            cout<<"NO";
}
}

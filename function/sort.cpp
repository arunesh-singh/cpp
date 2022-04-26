#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int Min1,Min2,Max1,Max2,UMax,UMin,M1,M2,M3,M4;
    if(a>b){
        Max1=a;
        Min1=b;
    }else{
        Max1=b;
        Min1=a;
    }
    if(c>d){
        Max2=c;
        Min2=d;
    }else{
        Max2=d;
        Min2=c;
    }
    if(Max1>Max2){
        UMax=Max1;
        M1=Max2;
    }else{
        UMax=Max2;
        M1=Max1;
    }
    if(Min1>Min2){
        UMin=Min1;
        M2=Min2;
    }else{
        UMin=Min2;
        M2=Min1;
    }
    if(M1>M2){
        M3=M1;
        M4=M2;
    }else{
        M3=M2;
        M4=M1;
    }
    cout<<UMax<<M3<<M4<<UMin;
    return 0;
}
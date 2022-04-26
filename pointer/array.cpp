#include<iostream>
using namespace std;

int getMin(int num[], int size){
    int min = num[0];
    for(int i=1;i<size;i++){
        if(num[i]<min)
            min=num[i];
    }
    return min;
}
int getMax(int num[], int size){
    int max = num[0];
    for(int i=1;i<size;i++){
        if(num[i]>max)
            max=num[i];
    }
    return max;
}
int getMinMax(int num[], int size,int* min,int* max){
    for(int i=1;i<size;i++){
        if(num[i]<*min)
            *min=num[i];
    }
    for(int i=1;i<size;i++){
        if(num[i]>*max)
            *max=num[i];
    }
}



int main(){
    int arr[]={10,20,30,40,50};
/*    
    cout<<*arr<<endl;
    int *prt=arr;
    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<endl; 
    }
*/  
    int min=arr[0];
    int max=arr[0];
//    cout<<getMin(arr,5)<<endl;
//    cout<<getMax(arr,5)<<endl;
    getMinMax(arr,5,&min,&max);
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max<<endl;
    return 0;
}
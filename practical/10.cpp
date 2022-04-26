#include<bits/stdc++.h>
using namespace std;

void even(int n,int a[]){
    for(int i=0;i<n;i++){
        if(a[i]%2==0)
            cout<<a[i]<<" ";
    }cout<<endl;
    return ;
}

void odd(int n, int a[]){

    for(int i=0;i<n;i++){
        if(a[i]%2!=0)
        cout<<a[i]<<" ";
    }
    return ;
}

float sum_avg(int n, int a[]){
    int sum=0;
    float avg;
    for(int i=0; i<n; i++){
        sum=sum+a[i];
    }
    cout<<"sum is : "<<sum<<endl;
    avg=(float)sum/n;
    cout<<"average is : "<<avg<<endl;
    return 0;
}

void max_min(int n, int a[]){
    int max1=a[0];
    int min1=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>max1)
            max1=a[i];
        if(a[i]<min1)
            min1=a[i];
    }
    cout<<"max no. is : "<<max1<<endl;
    cout<<"min no. is : "<<min1<<endl;
    return ;
}

void reversed(int n, int a[]){
    int b[n];
    for(int i=0, j=n-1; i<n; i++,j--){
        b[i]=a[j];
    }
    for(int i=0; i<n; i++){
        cout<<b[i]<<" ";
    }cout<<endl;
    return;
}

int remove_duplicate(int n, int a[]){
   int temp[n];
   int j=0;
   int max1=INT_MIN;
   sort (a,a+n);
   for(int i=0;i<n;i++)
   {
      if(max1!=a[i])
      {
          temp[j]=a[i];
          max1=temp[j];
          j++;
      }
   }
   for (int i=0; i<j; i++)
   {
       cout<<temp[i]<<" ";
   }
}

void menu(int n,int a[]){
    
    cout<<"\n\t\t MENU ";
    cout<<"\n 1. To print even valued elements \n 2. To print odd valued elements \n 3. To calculate sum and average \n";
    cout<<" 4. To print max and min \n 5. To print reversed array \n 6. To remove duplicacy\n 7. To exit  \n";
    cout<<"\n\n Enter your choice :";
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1:
            even(n,a);
            break;
        case 2:
            odd(n,a);
            break;
        case 3:
            sum_avg(n,a);
            break;
        case 4:
            max_min(n,a);
            break;
        case 5:
            reversed(n,a);
            break;
        case 6:
            remove_duplicate(n,a);
            break;
        case 7:
            return;
        default:
            cout<<"Invalid choice";
    }
    return menu(n,a);
}

int main()
{
    int n;
    cout<<"\nThis program is used to perform actions on array through menu driven program \n\n";
    cout<<"Enter the size of array :";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n ; i++)
    {
        cin>>a[i];
    }
    menu(n,a);
    
    return 0;
}
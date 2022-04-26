#include <iostream>
#include <iomanip>
using namespace std;

class NewFloat{
    
    float floatData;
public:
    NewFloat(){
        cout<<"Default Constructor"<<endl;
    }
    NewFloat(float fData){
        cout<<"Parametarised Constructor"<<endl;
        floatData=fData;
    }
    inline void printData(){
        cout<<"\nFloat Data - "<<floatData<<endl;
    }
    float deciData(){
        int floor=floatData;
        return floatData-floor;
    }
    void operator ++ (int){
        floatData++;
    }
    friend bool operator < (NewFloat &obj1,NewFloat &obj2){
        return obj1.floatData<obj2.floatData;
    }
    operator int const(){
        return (int)floatData;
    }
};



int main(){
    NewFloat a(4.234);
    NewFloat b(5.4032);
    b.printData();
    cout<<"Decimal part - "<<b.deciData();
    b++;
    b.printData();
    
    cout<<(a<b)<<endl;
    cout<<(int)b<<endl;
    return 0;
}

#include <iostream>
using namespace std;

class YTChannel{
    public:
    string Name;
    int SubsCount;
    
    YTChannel(string name,int subscount){
        Name=name;
        SubsCount=subscount;
    }

};

ostream& operator<<(ostream& COUT ,YTChannel&ytchannel){
    COUT<<"Name: "<<ytchannel.Name<<endl;
    COUT<<"Subscriber: "<<ytchannel.SubsCount<<endl;
    return COUT;
}

int main(){
    YTChannel Yt1=YTChannel("Gubbins",100);
    YTChannel Yt2=YTChannel("TecDebug",110);
    cout<<Yt1<<Yt2;
}
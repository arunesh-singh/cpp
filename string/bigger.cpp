// to form the biggest number from a given string
//  (35624) -- (65432)

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string a="35624";
    sort(a.begin(),a.end(), greater<int>());
    cout<<a<<endl;
    return 0;
}

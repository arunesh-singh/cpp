#include "bits/stdc++.h"
using namespace std;



int main(){

  vector <int> v;

  // vector initialised with 1
  vector<int> a(5,1);

  //copy of vector a
  vector<int> last(a);
  cout<<"Print last :"<<endl;
  for(int i : last){
    cout<<i<<" ";
  }cout<<endl;

  cout<<"Size : "<<v.capacity()<<endl;

  v.push_back(1);
  cout<<"Size : "<<v.capacity()<<endl;

  v.push_back(2);
  cout<<"Size : "<<v.capacity()<<endl;

  v.push_back(3);
  cout<<"Size : "<<v.capacity()<<endl;
  cout<<"Size : "<<v.size()<<endl;

  cout<<"Elelemnt at 2nd Index : "<<v.at(2)<<endl;

  cout<<"Front : "<<v.front()<<endl;
  cout<<"Back : "<<v.back()<<endl;

  cout<<"Element before pop :"<<endl;
  for(int i : v){
    cout<<i<<" ";
  }cout<<endl;

  v.pop_back();

  cout<<"Element after pop :"<<endl;
  for(int i : v){
    cout<<i<<" ";
  }cout<<endl;

  cout<<"Before clear size : "<<v.size()<<endl;
  v.clear();
  cout<<"After clear size : "<<v.size()<<endl;
  cout<<"After clear capapcity : "<<v.capacity()<<endl;

  return 0;
}

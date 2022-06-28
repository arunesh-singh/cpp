#include "bits/stdc++.h"
#include <deque>
using namespace std;



int main(){

  deque<int> d;
  d.push_back(1);
  d.push_front(2);

  for(int i:d){
    cout<<i<<" ";
  }cout<<endl;
/*
  d.pop_front();
  for(int i:d){
    cout<<i<<" ";
  }cout<<endl;
*/
  cout<<"Print ellement at 1st Index : "<<d.at(1)<<endl;

  cout<<"Before erase: "<<endl;
  for(int i:d){
    cout<<i<<" ";
  }cout<<endl;

  d.erase(d.begin(),d.begin()+1);

  cout<<"After erase: "<<endl;
  for(int i:d){
    cout<<i<<" ";
  }cout<<endl;

  return 0;
}

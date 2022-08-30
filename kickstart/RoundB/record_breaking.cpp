#include <bits/stdc++.h>
using namespace std;

int NumberOfRecordBreakingDays(int numberOfDays, vector<int> visitors) {
  
  int count = 0 ; 

  if( visitors[0] > visitors[1] )
    count++;
  
  if( visitors[numberOfDays-1] > visitors[numberOfDays-2])
    count++;
  
  for(int i=1 ; i<numberOfDays ; i++){
    bool flag = false;
    for(int j=0 ; j<i ; j++){

      flag = ( visitors[i] > visitors[j])? true : false ;
      
    }
    if( flag == true && visitors[i]> visitors[i+1])
      count++;
    
  }

  return count;
}

int main() {
  int T;
  cin >> T;
  for (int tc = 1; tc <= T; ++tc) {
    int N;
    cin >> N;
    vector<int> V(N);
    for (int i = 0; i < N; ++i) {
      cin >> V[i];
    }
    cout << "Case #" << tc << ": " << NumberOfRecordBreakingDays(N, V) << endl;
  }
  return 0;
}

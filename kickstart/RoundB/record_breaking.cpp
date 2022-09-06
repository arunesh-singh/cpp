#include <bits/stdc++.h>
using namespace std;

int NumberOfRecordBreakingDays(int numberOfDays, vector<int> visitors) {
  
  int recordBreaks = 0;
  int previousRecord = 0;

  for(int i=0 ; i<visitors.size() ; i++ ){
    bool greaterThanPrevDays = i == 0 || visitors[i] > previousRecord;
    bool greaterThanFollowDays = i == numberOfDays-1 || visitors[i]> visitors[i+1];

    if( greaterThanFollowDays && greaterThanPrevDays)
      recordBreaks++;
    
    previousRecord = max(previousRecord , visitors[i]);
  }

  return recordBreaks;
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

// C++ program for activity selection problem
// when input activities may not be sorted.
#include <bits/stdc++.h>
using namespace std;

// A job has a start time, finish time and profit.
struct Activitiy
{
    int start, finish;
};

// A utility function that is used for sorting
// activities according to finish time
bool activityCompare(Activitiy s1, Activitiy s2)
{
    return (s1.finish - s1.start > s2.finish - s2.start);
}

// Returns count of the maximum set of activities that can
// be done by a single person, one at a time.
void printMaxActivities(Activitiy arr[], int n)
{
    // Sort jobs according to finish time
    sort(arr, arr + n, activityCompare);

    cout << "Following resources will be used :\n";

    for (int i = 0; i < n; i++)
    {
        cout << "(" << arr[i].start << ", " << arr[i].finish << ")";
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j].start >= arr[i].finish)
            {
                cout << ", (" << arr[j].start << ", " << arr[j].finish << ")";
            }
        }
        cout << endl;
    }
}

int main()
{
    Activitiy arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}};
    int n = sizeof(arr) / sizeof(arr[0]);

    printMaxActivities(arr, n);
    return 0;
}

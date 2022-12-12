#include <iostream>
using namespace std;
int main()
{
 // Message
 int mSize;
 int message[255];
 cout << "Enter Message Size: ";
 cin >> mSize;
 cout << "Enter Message: ";
 for (int i = 0; i < mSize; i++)
 cin >> message[i];
 // Generator
 int gSize;
 int generator[64];
 cout << "Enter Generator Size: ";
 cin >> gSize;
 cout << "Enter Generator: ";
 for (int i = 0; i < gSize; i++)
 cin >> generator[i];
 if (!(generator[0] == 1 &&
 generator[gSize - 1] == 1))
 {
 cerr << "\nERROR: MSB and LSB of the Generator must be 1\n";
 return -1;
 }
 cout << "\nSENDER\n======\n";
 cout << "Message: ";
 for (int i = 0; i < mSize; i++)
 cout << message[i];

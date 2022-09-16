#include <iostream>
#include <list>
#include <cstring>
using namespace std;

class HashTable{
    private:
        static const int HashGroups = 10;
        list<pair<int,string>> table[HashGroups];
    public:
        bool isEmplty() const;
        int hashFunction(int key);
        void insertItem(int key, string value);
        void DeleteItem(int key);
        string searchTable(int key);
        void printTable();
};

bool HashTable::isEmplty() const {
    int sum{};
    for( int i{}; i<HashGroups ; i++){
        sum += table[i].size();
    }

    if(!sum)
        return true;
    return false;
}

int HashTable::hashFunction(int key){
    return key % HashGroups;
}

void HashTable::insertItem(int key , string value){
    int hashValue = hashFunction(key);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;
    for( ; bItr != end(cell) ; bItr++){
        if( bItr->first == key){
            keyExists = true;
            bItr->second = value;
            cout<<"[Warning] Key Exists. Value replced."<<endl;
            break;
        }
    }

    if(!keyExists){
        cell.emplace_back(key,value);
    }

    return;
}

void HashTable::DeleteItem(int key){
    int hashValue = hashFunction(key);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;
    for( ; bItr != end(cell) ; bItr++){
        if( bItr->first == key){
            keyExists = true;
            bItr = cell.erase(bItr);
            cout<<"[Info] Item Removed."<<endl;
            break;
        }
    }

    if(!keyExists)
        cout<<"[Waring]! Key not found. Pair not removed.";

    return;
}

void HashTable::printTable(){
    for(int i{} ; i<HashGroups ; i++){
        if( table[i].size() == 0) continue;

        auto bItr = table[i].begin();
        for(; bItr != table[i].end() ; bItr++)
            cout<<"[INFO] Key : "<<bItr->first <<" Value : "<<bItr->second <<endl;
    }
    return;
}



int main(){
    HashTable ht;
    if(ht.isEmplty())
        cout<<"Yes It is Empty.\n";
    else
        cout<< "Oh no. We need to check out code."<<endl;
    
    ht.insertItem(905, "Arya");
    ht.insertItem(201, "Arya");
    ht.insertItem(343, "Arya");
    ht.insertItem(634, "Arya");
    ht.insertItem(107, "Arya");
    ht.insertItem(928, "Arya");

    ht.printTable();
}
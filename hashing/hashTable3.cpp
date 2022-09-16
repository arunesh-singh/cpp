#include "bits/stdc++.h"
using namespace std;

class element{
    int key;
    int value;
};

class list{
    element data;
    list* next;
};

class chain{
    list* list;
};

class table{
    int capacity;
    int size;
    chain* buckets;
};


/* Hash Table Interface */

table* newHashTable( int capacity ){
    chain* A = new chain();
    table* H = new table();
    H->capacity = capacity;
    H->size = 0;
    H->buckets = A;
    return H;
}

element* put(table* H, element* e){

}



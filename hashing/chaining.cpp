#include<bits/stdc++.h>
using namespace std;

struct myHash{
int bucket;
list<int>*table;
myHash(int size)
{
    bucket = size;
    table = new list<int>[size];
}
};
void printHashTable(myHash& hashTable) {
        for (int i = 0; i < hashTable.bucket; i++) {
            cout << "Bucket " << i << ": ";
            for (const auto& element : hashTable.table[i]) {
                cout << element << " ";
            }
            cout << endl;
        }
    }

void insert(myHash& hashTable,int key )
{
    int i = key  % hashTable.bucket ;
    hashTable.table[i].push_back(key);
}
void remove(myHash& hashTable,int key)
{
    int i = key % hashTable.bucket;
    hashTable.table[i].remove(key);
}
bool search(myHash& hashTable,int key)
{
    int i = key % hashTable.bucket;
    for(auto i : hashTable.table[i]){
        if(i == key)
            return true;
    }
    return false;
}
int main(){
    int size;
    cout << "Enter the size of the hash table: ";
    cin >> size;
    myHash hashTable(size);
   printHashTable(hashTable); // empty hash table initially
// Perform operations on the hash table
    insert(hashTable,70);
    insert(hashTable,71);
    insert(hashTable,56);
    insert(hashTable,9);
    insert(hashTable ,72);
   printHashTable(hashTable);
   cout<<endl;
    remove(hashTable ,70);
    remove(hashTable ,9);
   printHashTable(hashTable);
    cout<<search(hashTable ,70)<<" ";
    cout<< search(hashTable ,71) << " ";
return 0;
}
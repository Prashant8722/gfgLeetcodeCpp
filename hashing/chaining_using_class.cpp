#include <bits/stdc++.h>
using namespace std;

class myHash
{
    int bucket;
    list<int> *table;

public:
    myHash(int size)
    {
        bucket = size;
        table = new list<int>[size];
    }
    void printHashTable()
    {
        for (int i = 0; i < bucket; i++)
        {
            cout << "Bucket " << i << ": ";
            for (const auto &element : table[i])
            {
                cout << element << " ";
            }
            cout << endl;
        }
    }

    void insert(int key)
    {
        int i = key % bucket;
        table[i].push_back(key);
    }
    void remove(int key)
    {
        int i = key % bucket;
        table[i].remove(key);
    }
    bool search(int key)
    {
        int i = key % bucket;
        for (auto i : table[i])
        {
            if (i == key)
                return true;
        }
        return false;
    }
};
int main()
{
    int size;
    cout << "Enter the size of the hash table: ";
    cin >> size;
    myHash hashTable(size);
    hashTable.printHashTable(); // empty hash table initially
    cout << endl;
    // Perform operations on the hash table
    int arr[] = {71, 56, 9, 72, 70};
    int sizes = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < sizes; i++)
    {
        hashTable.insert(arr[i]);
    }
    hashTable.printHashTable();
    cout << endl;
    hashTable.remove(70);
    hashTable.remove(9);
    hashTable.printHashTable();
    cout << hashTable.search(70) << " ";
    cout << hashTable.search(71) << " ";
    return 0;
}
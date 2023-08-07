#include<bits/stdc++.h>
using namespace std;
const int bucket= 7;
class myHash{
    int count;
    int table[bucket];
public:
    myHash()
    {
        for(int i = 0 ; i < bucket ; i++)
        {
            table[i] = -1; //default value of table Let;s say; Initialize all slots as empty
        }
        count = 0;
    }
     int hash(int key) {
        return key % bucket; // Basic hash function using modulo operator
    }

    void insert(int key){
        int i = hash(key);
        int origindex= i ;
        while(table[i] != -1){
            i = (i + 1 ) % bucket;
            if (i == origindex) {
                cout << "Table is full.Unable to insert " << key << endl;
                return;
            }
        }
            table[i] = key;
            count++;
            cout << "Inserted " << key << " at index:" << i << endl;
    }

    // void delete(int key){

    // }
    // bool search(int key){

    // }

   void print() {
    for (int i = 0; i < bucket; i++) {
        cout << "index " << i << ": " << table[i] << endl;
    }
}

};
int main(){
    myHash mh;
    mh.insert(50);
    mh.insert(51);
    mh.insert(49);
    mh.insert(16);
    mh.insert(56);
    mh.insert(15);
    mh.insert(19);
     mh.insert(16);
    mh.print();
return 0;
}
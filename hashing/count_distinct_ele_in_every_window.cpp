#include<bits/stdc++.h>
using namespace std;
 vector <int> countDistinct (int arr[], int n, int k)
    {
       vector<int>res;
       unordered_map<int , int>m;
       for(int i= 0 ; i < k ; i++)
       {
           m[arr[i]]++;
       }
       res.push_back(m.size());
       for(int i = k ;  i < n ; i++)
       {
           m[arr[i-k]]--;   //decrese freq of arr[i-k]
           
           if((m[arr[i-k]]) == 0)       //arr[i-k] fre become 0 the remove it from map
                m.erase(arr[i-k]);
                
           if(m.find(arr[i]) ==m.end())         //if current window last ele not exists then put in map and inc freq)
           {
               m.insert({arr[i] , 1});
           }
           if(m.find(arr[i]) != m.end())        // curr ele already exists the inc its freq 
           {
               m[arr[i]]++;
           }
        res.push_back(m.size());
       }
    
        return res;
    }
int main(){

return 0;
}
#include<bits/stdc++.h>
using namespace std;

 int findPlatform(int arr[], int dep[], int n) {
    sort(arr, arr + n);
    sort(dep, dep + n);

    int platforms = 1; // Keeps track of maximum platforms needed at any instance
    int i = 1; // Pointer for arrival array
    int j = 0; // Pointer for departure array

    while (i < n) {
        if (arr[i] <= dep[j]) {
            platforms++; // Need an extra platform
        } else{
            j++; // A platform becomes available
        }
        i++;
    }
        return platforms;
    }

// Wrong Approach
bool comparator(pair<int , int >p1 , pair<int ,int>p2){
    return p1.second < p2.second;
}
int platform(vector< pair<int , int> >v){
    sort(v.begin() , v.end() , comparator);
    int count = 1;
    int prev =0;
    for(int it = 1; it < v.size(); it++){
        if(v[it].first >= v[prev].second){
            count++;
            prev = it; 
        }
    }
    return v.size() - count + 1;
}
int main(){

vector< pair<int , int>>v;
v.push_back(make_pair(1 ,5));

v.push_back(make_pair(2 ,9));
v.push_back(make_pair(8 ,10));

v.push_back(make_pair(6 ,7));
// v.push_back(make_pair(1 ,5));
// v.push_back(make_pair(1 ,5));
cout<<platform(v);
return 0;
}
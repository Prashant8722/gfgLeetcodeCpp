#include<bits/stdc++.h>
using namespace std;
//comparing two pair with their euclidian distance
bool cmp( pair<int , int >p1 , pair<int , int> p2)
{
    float d1 = sqrt(p1.first*p1.first +p1.second*p1.second);
    float d2 =  sqrt(p2.first*p2.first + p2.second*p2.second);
    if(d1 == d2)
        return p1.first < p2.first;
    return d1 < d2;
}
int main(){
    //taking input fron user
int input;
cin>>input;
vector<pair<int,int>>v;
for(int i = 0 ; i < input ; i++)
    {
        int x , y;
        cin >> x >> y;
        v.push_back(make_pair(x, y)); // insert element pairwise in vector make_pair making pair
    }
    //sort vector according to distance using cmp comparator
    sort(v.begin() , v.end() , cmp);
    //printing result of the distaces in ascending order 
    for(auto x : v)
        cout<<"(" << x.first << "," << x.second << ")"<<endl;
return 0;
}
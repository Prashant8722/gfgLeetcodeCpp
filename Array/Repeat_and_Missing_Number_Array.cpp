#include<bits/stdc++.h>
using namespace std;
//METHOD 1;
void repeatAndMissing(int arr[] ,int size ){
    int sum = 0;
    unordered_set<int>s;
    int repeatedNumber;

    for(int i = 0 ; i < size ; i++){
        if(s.find(arr[i]) == s.end()){
            s.insert(arr[i]);
        }
        else{
            repeatedNumber = arr[i];
        }
        sum += arr[i];
    }
    int nthsum = size*(size+1)/2;
    cout<<sum<<endl;
    int missingNumber = nthsum - (sum - repeatedNumber) ;
    
    cout<<"Missing_Number = " << missingNumber << endl << "repeatedNumber = "<<repeatedNumber<<endl;
}

// //METHOD 2
//     vector<int> findTwoElement(vector<int> arr, int n) {
//         vector<int>v;
//      for (int i = 0; i < n; ) {
//         if (arr[i] != arr[arr[i] - 1]) {
//             swap(arr[i], arr[arr[i] - 1]);
//         } else {
//             i++;
//         }
//     }
//      for (int i = 0; i < n; i++) {
//         if (arr[i] != i + 1) {
//             v.push_back(arr[i]);
//             v.push_back(i + 1);
//             break;
//         }
//     }
//     return v;
//     }

int main(){
int arr[] = {3 ,1 ,2 ,5 ,1 , 6 , 7 ,8,9 , 10};
int size = sizeof(arr) / sizeof(arr[0]);
repeatAndMissing(arr , size);
return 0;
}
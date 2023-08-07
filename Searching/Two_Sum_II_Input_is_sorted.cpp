 #include <bits/stdc++.h>
using namespace std;

void twoSum(vector<int>& num, int target) {
        int i = 0,j=num.size()-1 ;
        vector<int>vec;
        int sum = INT_MAX;
        while(target != sum)
            {
                sum = num[i] + num[j];
                if(sum > target)
                    j--;
                if(sum < target)
                    i++;
            }
            vec.push_back(i+1);
            vec.push_back(j+1);
            for(int pos : vec)
                cout<< pos << " ";
            return;
    }
    vector<int> twoSum2(vector<int>& numbers, int target) {
        int n=numbers.size();
        int s=0, e=n-1;
        while(s<=e){
            int sum=numbers[s]+numbers[e];
            if(sum == target){
                return {s+1,e+1};
            }
            else if(sum > target){
                e--;
            }
            else{
                s++;
            }
        }
        return {-1,-1};
    }
int main()
{
    vector<int> nums{1, 11 ,12, 32, 42, 52, 63};
    int target = 84;
    twoSum(nums, target);
    vector<int> res = twoSum2(nums, target);
    cout<<res[0] << " " << res[1];
    return 0;
}
     #include<bits/stdc++.h>
    using namespace std;
 bool isAnagram(string s, string t) {
        const int CHAR =26;
        int arr[CHAR] = {0};
        int slength = s.length();
        int tlength = t.length();
        if(slength != tlength) return false;
        for(int i = 0; i < slength ; i++)
        {
            arr[s[i] - 'a']+=1;
            arr[t[i] - 'a']-=1;
        }
        for(int i = 0 ;i < CHAR ; i++)
        {
           if(arr[i] != 0) return false; 
        }

        return true;
    }
    int main(){
    string s= "nl";
    string t = "cx";
    cout<<isAnagram(s,t);
    return 0;
    }
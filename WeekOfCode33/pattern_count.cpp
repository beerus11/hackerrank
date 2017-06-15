#include <bits/stdc++.h>

using namespace std;

int patternCount(string s){
    // Complete this function
    int count=0;
    for(int i=0;i<s.size();){
        if(s[i]=='1'){
            i=i+1;
            int z = 0;
            while(s[i]=='0'){
                 i=i+1;
                 z=z+1;
            }
            if(z==0)
                continue;
            if(s[i]=='1')
                count++;     
        }else{
           i=i+1;  
        }
    }
    return count;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = patternCount(s);
        cout << result << endl;
    }
    return 0;
}

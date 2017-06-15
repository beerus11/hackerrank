#include <bits/stdc++.h>

using namespace std;

int twinArrays(vector <int> ar1, vector <int> ar2){
    // Complete this function
     int min1=99999999,min2=99999999,min3=99999999,min4=99999999;
     int ind1=-1,ind2=-1,ind3=-1,ind4=-1;
     for (vector<int>::iterator it = ar1.begin() ; it != ar1.end(); ++it){
          if(*it<min1){
              min2=min1;
              ind2=ind1;
              min1=*it;
              ind1=it - ar1.begin();
          }else if(*it<min2){
              min2=*it;
              ind2=it - ar1.begin();
          }
     } 
    for (vector<int>::iterator it = ar2.begin() ; it != ar2.end(); ++it){
          if(*it<min3){
              min4=min3;
              ind4=ind3;
              min3=*it;
              ind3=it - ar2.begin();
          }
        else if(*it<min4){
              min4=*it;
              ind4=it - ar2.begin();
          }
     }  
    if(ind1!=ind3){
        return min1+min3;
    }
    else{
        return min(min1+min4,min2+min3);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> ar1(n);
    for(int ar1_i = 0; ar1_i < n; ar1_i++){
       cin >> ar1[ar1_i];
    }
    vector<int> ar2(n);
    for(int ar2_i = 0; ar2_i < n; ar2_i++){
       cin >> ar2[ar2_i];
    }
    int result = twinArrays(ar1, ar2);
    cout << result << endl;
    return 0;
}

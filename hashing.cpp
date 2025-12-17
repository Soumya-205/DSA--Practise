// Q1

/*#include<iostream>
#include<vector>
#include<set>

using namespace std;

bool isSubset(vector<int>&a, vector<int>&b){

    //Create a hashset and insert all elements of a
    multiset<int> hashSet(a.begin(),a.end());

    //Check each element of b in the hashset
    for(int num:b){
        if(hashSet.find(num)==hashSet.end()){
            return false;
        }
        hashSet.erase(hashSet.find(num));
    }
    return true;
}

int main(){
    vector<int> a={11,1,13,21,3,7};
    vector<int> b={11,3,7,1};

    if(isSubset(a,b)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
}*/

//Q2

/*#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

bool areDisjoint(vector<int>&a, vector<int>&b){
    unordered_set<int> st;

    //insert the elements of array a into hash set
    for(int ele:a){
        st.insert(ele);
    }

    for(int ele:b){
        if(st.find(ele)!=st.end()){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> a={12,34,11,9,3};
    vector<int> b={7,2,1,5};

    if(areDisjoint(a,b)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
}*/

//Q3

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

bool checkEqual(vector<int> &a, vector<int> &b){
    int n=a.size(), m=b.size();
    if(n!=m){
        return false;
    }

    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }

    for(int i=0;i<n;i++){
        if(mp.find(b[i])==mp.end()){
            return false;
        }
        if(mp[b[i]]==0){
            return false;
        }

        mp[b[i]]--;
    }
    return true;
}

int main(){
    vector<int> a={3,5,2,5,2};
    vector<int> b={2,3,5,5,2};

    if(checkEqual(a,b)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
}
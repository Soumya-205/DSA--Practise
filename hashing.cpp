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

/*#include<iostream>
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
}*/

//Q4

/*#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<string> fizzBuzz(int n){
    vector<string> res;

    //hashmap to store all fizzbuzz mappings
    unordered_map<int,string> mp={{3,"Fizz"},{5,"Buzz"}};

    //List of Divisors which we will iterate over
    vector<int> divisors={3,5};

    for(int i=1;i<=n;i++){
        string s="";

        for(int d:divisors){
            if(i%d==0){
                s.append(mp[d]);
            }
        }
        if(s.empty()){
            s.append(to_string(i));
        }
        res.push_back(s);
    }
    return res;
}

int main(){
    int n=20;
    vector<string> res=fizzBuzz(n);

    for(const string &s:res){
        cout<<s<<" ";
    }
    return 0;
}*/

//Q5

/*#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int maxDistance(vector<int>& arr){
    unordered_map<int,int> mp;
    int res=0;

    for(int i=0;i<arr.size();i++){
        if(mp.find(arr[i])==mp.end()){
            mp[arr[i]]=i;
        }else{
            res=max(res,i-mp[arr[i]]);
        }
    }
    return res;
}

int main(){
    vector<int> arr={1,1,2,2,2,1};
    cout<<maxDistance(arr);
    return 0;
}*/

//Q6

/*#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

bool checkDuplicatesWithink(vector<int> & arr,int k){
    unordered_set<int> s;

    for(int i=0;i<arr.size();i++){
        if(s.find(arr[i])==s.end()){
            return true;
        }
        s.insert(arr[i]);

        if(i>=k){
            s.erase(arr[i-k]);
        }
    }
    return false;
}

int main(){
    vector<int> arr={10,5,3,4,3,5,6};
    if(checkDuplicatesWithink(arr,3)){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    return 0;
}*/

//Q7

/*#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

vector<int> intersect(vector<int> & a,vector<int>& b){
    unordered_set<int> as(a.begin(),a.end());

    unordered_set<int> rs;
    vector<int> res;

    for(int i=0;i<b.size();i++){
        if(as.find(b[i])!=as.end() && rs.find(b[i])==rs.end()){
            rs.insert(b[i]);
            res.push_back(b[i]);
        }
    }
    return res;
}

int main(){
    vector<int> a={1,2,3,2,1};
    vector<int> b={3,2,2,3,3,2};

    vector<int> res=intersect(a,b);

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}*/

//Q8

/*#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

vector<int> findUnion(vector<int>& a,vector<int>& b){
    unordered_set<int> st;
    
    //Put all elements of a[] in st// automatically ignores duplicates
    for(int i=0;i<a.size();i++){
        st.insert(a[i]);
    }

    //Put all elements of b[] in st // automatically ignores duplicates
    for(int i=0;i<b.size();i++){
        st.insert(b[i]);
    }

    vector<int> res;

    //iterate through the set to  fill the result array
    for(auto it:st){
        res.push_back(it);
    }
    return res;
}

int main(){
    vector<int> a={1,2,3,2,1};
    vector<int> b={3,2,2,3,3,2};

    vector<int> res=findUnion(a,b);

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}*/

//Q9

/*#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int mostFreqEle(vector<int>& arr){
    int n=arr.size();

    //insert all elements in hash map
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++){
       freq[arr[i]]++;
    }
    //find the max frequency
    int maxCnt=0,res=-1;
    for(auto i:freq){
        int val=i.first, cnt=i.second;

        //update if value is higher ot same but value is larger
        if(maxCnt<cnt || (cnt==maxCnt && val>res)){
            res=val;
            maxCnt=cnt;
        }
    }
    return res;
}

int main(){
    vector<int> arr={40,50,30,40,50,30,30};
    cout<<mostFreqEle(arr);
    return 0;
}*/

//Q10

/*#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

bool twoSum(vector<int>& arr, int target){
    unordered_set<int> s;

    for(int i=0;i<arr.size();i++){
        int complement=target-arr[i];

        if(s.find(complement)!=s.end()){
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}

int main(){
    vector<int> arr={0,-1,2,-3,1};
    int target=-2;
    if(twoSum(arr,target)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}*/

//Q11

/*#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

bool canPairs(vector<int>& arr,int k){
    int n=arr.size();

    if(n%2!=0){
        return false;
    }

    unordered_map<int,int> freq;
    
    //count occurences of all remainders
    for(int x: arr){
        freq[((x%k)+k)%k]++;
    }

    //Treaverse the array and check pairs
    for(int x:arr){
        int rem=((x%k)+k)%k;

        //If rem*2=k
        if(2*rem==k){
            if(freq[rem]%2!=0){
                return false;
            }
        }

        //if rem=0 there must be even occurences
        else if(rem==0){
            if(freq[rem]%2!=0){
                return false;
            }
        }
        //else occurences of remainder and l-remainder must ,match

        else if(freq[rem]!=freq[k-rem]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> arr={92,75,65,48,45,35};
    int k=10;

    canPairs(arr,k)?cout<<"True":cout<<"False";
    return 0;
}*/

//More efficient approach

/*#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

bool canPairs(vector<int>& arr,int k){

    if(arr.size()%2!=0){
        return false;
    }

    vector<int> freq(k);

    for(int x:arr){
        int rem=x%k;

        //if complement of the current
        //remainder exists in freq, decrement its count
        if(freq[(k-rem)%k]!=0){
            freq[(k-rem)%k]--;
        }

        //otherwise increment the count
        else{
            freq[rem]++;
        }
    }
    //check if all elements in the frequency
    //array are 0
    for(int count:freq){
        if(count!=0){
            return false;
        }

    }
    return true;
}
int main(){
    vector<int> arr={92,75,65,48,45,35};
    int k=10;

    canPairs(arr,k)?cout<<"True":cout<<"False";
    return 0;
}*/

//Q12

/*#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int longestSubarrayDivk(vector<int>& arr,int k){
    int n=arr.size(),res=0;
    unordered_map<int,int> prefIdx;
    int sum=0;

    //iterate over all end points
    for(int i=0;i<n;i++){
        sum=((sum+arr[i])%k+k)+k;

        if(sum==0){
            res=i+1;
        }
        else if(prefIdx.find(sum)!=prefIdx.end()){
            res=max(res,i-prefIdx[sum]);
        }
        else{
            prefIdx[sum]=i;
        }
    }
    return res;
}

int main(){
    vector<int> arr={2,7,6,1,4,5};
    int k=3;
    cout<<longestSubarrayDivk(arr,k);
    return 0;
}*/

//Q13

/*#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int getPairsCount(vector<int>& arr,int idx,int target){
    unordered_map<int,int> freq;
    int count=0;

    for(int i=idx;i<arr.size();i++){
        if(freq.find(target-arr[i])!=freq.end()){
            count+=freq[target-arr[i]];
        }

        freq[arr[i]]++;
    }
    return count;
}

int countTriplets(vector<int>& arr,int target){
    int cnt=0;
    int n=arr.size();

    for(int i=0;i<n-2;i++){
        int rem=target-arr[i];
        cnt+=getPairsCount(arr,i+1,rem);
    }
    return cnt;
}

int main(){
    vector<int> arr={0,-1,2,-3,1};
    int target=-2;
    cout<<countTriplets(arr,target);
    return 0;
}*/

//Q4
/*#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<vector<int>>findTriplets(vector<int>& arr){
    unordered_map<int,vector<int>> map;

    //Resultant array
    vector<vector<int>> ans;

    //check for all pairs of i,j
    for(int j=0;j<arr.size();j++){
        for(int k=j+1;k<arr.size();k++){
            //value of third index should be
            int val=-1 * (arr[j] +arr[k]);

            //if such indices exist
            if(map.find(val)!=map.end()){
                //Append the i,j,k
                for(auto i:map[val]){
                    ans.push_back({i,j,k});
                }
            }

        }
        //After the jth index is traversed
        //we can use it as i
        map[arr[j]].push_back(j);
    }
    return ans;
}

int main(){
    vector<int> arr={0,-1,2,-3,1};
    vector<vector<int>> res=findTriplets(arr);

    for(int i=0;i<res.size();i++){
        cout<<res[i][0]<<" "<<res[i][1]<<" "<<res[i][2]<<endl;
    }
    return 0;
}*/

/*git status
git add hashing.cpp
git commit -m "Fix bug in hashing dry run"
git push origin main
*/

//Q15

/*#include<iostream>
#include<vector>
#include<map>

using namespace std;

vector<vector<string>> findItinerary(vector<vector<string>>& arr){
    map<string,string> dataSet;
    for(auto i: arr){
        dataSet[i[0]]=i[1];
    }
    map<string,string> reverseMap;
    for(auto i: arr){
        reverseMap[i[1]]=i[0];
    }

    //Find the starting point itinerary
    string start;

    for(int i=0;i<arr.size();i++){
        if(reverseMap.count(arr[i][0])==0){
            start=arr[i][0];
            break;
        }
    }
    vector<vector<string>> ans;

    auto it=dataSet.find(start);
    while(it!=dataSet.end()){
        ans.push_back({it->first,it->second});
        it=dataSet.find(it->second);
    }
    return ans;
}

int main(){
    vector<vector<string>>arr={{"Chennai","Bangalore"},{"Bombay","Delhi"},{"Goa","Chennai"},{"Delhi","Goa"}};

    vector<vector<string>> res=findItinerary(arr);
    for(auto i:res){
        cout<<i[0]<<"->"<<i[1]<<endl;
    }
    return 0;
}*/

//Q5

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

string calculateFraction(int a,int b){
    //if the numerator is zero, ans is zero
    if(a==0){
        return "0";
    }
    //if exactly one of the numerator or denominator is negative then result will be neagtive
    string res=(a<0)^(b<0)?"-":"";

    a=abs(a);
    b=abs(b);

    //Calculate and append the part before decimal
    res+=to_string(a/b);
    int rem=a%b;

    //if completely divisible return res
    if(rem==0){
        return res;
    }

    res.append(".");
    unordered_map<int,int> mp;

    while(rem>0){
        //If this remainder is already seen then there exists a repeating fraction
        if(mp.find(rem)!=mp.end()){
            res.insert(mp[rem],"(");
            res.append(")");
            break;

        }
        //if the remainder is seen for first time
        //store in mp
        mp[rem]=res.size();
        rem=rem*10;

        //Calculate quotient, append it to result and calculate the remainder
        res+=to_string(rem/b);
        rem=rem%b;
    }
    return res;
}
int main(){
    int a=50,b=22;
    cout<<calculateFraction(a,b)<<endl;
    return 0;
}
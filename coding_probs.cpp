//Reverse the array
/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    reverse(arr.begin(),arr.end());

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
    }
    return 0;
}*/

//2d array
/*#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main(){
    vector<vector<int>>arr(6, vector<int>(6));

    //input 6X6 matrix
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>arr[i][j];
        }
    }
    int maxi=INT_MIN;

    //find all hourglass sums
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){

            int sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]
                    +arr[i+1][j+1]
                    +arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            maxi=max(maxi,sum);
        }
    }
    cout<<maxi;
    return 0;
}*/

//Dynamic array
/*#include<iostream>
#include<vector>

using namespace std;
vector<int>dynamicArray(int n,vector<vector<int>>queries){

    vector<vector<int>>arr(n);
    int lastAnswer=0;
    vector<int>answer;

    for(int i=0;i<queries.size();i++){
        int type=queries[i][0];
        int x=queries[i][1];
        int y=queries[i][2];

        int idx=(x ^ lastAnswer)%n;

        //type1 query
        if(type==1){
            arr[idx].push_back(y);
        }
        //type2 query
        else{
            lastAnswer=arr[idx][y%arr[idx].size()];
            answer.push_back(lastAnswer);
        }
    }
    return answer;
}
int main(){
    int n,q;
    cin>>n>>q;

    vector<vector<int>>queries(q,vector<int>(3));
    
    //input queries
    for(int i=0;i<q;i++){
        for(int j=0;j<3;j++){
            cin>>queries[i][j];
        }
    }
    vector<int>result=dynamicArray(n,queries);
    //print Answers
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
    return 0;
}
*/

//Left rotation
/*#include<iostream>
#include<vector>

using namespace std;

vector<int>rotationLeft(int d,vector<int>arr){
    vector<int>result;
    int n=arr.size();

    for(int i=0;i<n;i++){
        result.push_back(arr[(i+d)%n]);
    }
    return result;
}
int main(){
    int n,d;
    cin>>n>>d;

    vector<int>arr(n);
    //input array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>result=rotationLeft(d,arr);
    //Print rotated array
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<"";
    }
    return 0;
}*/

//Sparse arrays
/*#include<iostream>
#include<vector>

using namespace std;

vector<int>matchingString(vector<string>stringList,vector<string>queries){
    vector<int>result;

    for(int i=0;i<queries.size();i++){
        int count=0;
        for(int j=0;j<stringList.size();j++){
            if(queries[i]==stringList[j]){
                count++;
            }
        }
        result.push_back(count);
    }
    return result;
}
int main(){
    int s;
    cin>>s;

    vector<string>stringList(s);
    //input strings
    for(int i=0;i<s;i++){
        cin>>stringList[i];
    }
    int q;
    cin>>q;

    vector<string>queries(q);
    for(int i=0;i<q;i++){
        cin>>queries[i];
    }
    vector<int>result=matchingString(stringList,queries);

    //Print numbers
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
    return 0;
}*/

//Array Manipulation

/*#include<iostream>
#include<vector>

using namespace std;
long arrayManipulation(int n,vector<vector<int>>queries){
    vector<long>arr(n+2,0);

    //apply operations
    for(int i=0;i<queries.size();i++){
        int a=queries[i][0];
        int b=queries[i][1];
        int k=queries[i][2];

        arr[a]+=k;
        arr[b+1]-=k;
    }
    long maximum=0;
    long sum=0;

    //Prefix Sum
    for(int i=1;i<=n;i++){
        sum+=arr[i];
        maximum=max(maximum,sum);
    }
    return maximum;
}
int main(){
    int n,q;
    cin>>n>>q;

    vector<vector<int>>queries(q,vector<int>(3));
    //input queries
    for(int i=0;i<q;i++){
        cin>>queries[i][0]
           >>queries[i][1]
           >>queries[i][2];
    }
    long result=arrayManipulation(n,queries);
    cout<<result;
    return 0;
}*/

//Subarray Division
/*#include<iostream>
#include<vector>

using namespace std;
int birthday(vector<int>s,int d,int m){
    int count=0;
    int sum=0;

    //first window
    for(int i=0;i<m;i++){
        sum+=s[i];
    }
    if(sum==d){
        count++;
    }
    //sliding window
    for(int i=m;i<s.size();i++){
        sum+=s[i];
        sum-=s[i-m];

        if(sum==d){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    vector<int>s(n);

    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int d,m;
    cin>>d>>m;

    int result=birthday(s,d,m);
    cout<<result;
    return 0;
}*/

//Breaking the records
/*#include<iostream>
#include<vector>
using namespace std;
vector<int>breakingRecords(vector<int>scores){
    

    int minScore=scores[0];
    int maxScore=scores[0];
    int minCount=0;
    int maxCount=0;

    for(int i=1;i<scores.size();i++){
        if(scores[i]>maxScore){
            maxScore=scores[i];
            maxCount++;
        }
        if(scores[i]<minScore){
            minScore=scores[i];
            minCount++;
        }
    }
    return {maxCount,minCount};
}
int main(){
    int n;
    cin>>n;

    vector<int>scores(n);
    for(int i=0;i<n;i++){
        cin>>scores[i];
    }
    vector<int>result=breakingRecords(scores);
    cout<<result[0]<<" "<<result[1];
    return 0;
}*/

//New Year Chaos
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;    
void minimumBribes(vector<int>q){
    int bribes=0;
    for(int i=0;i<q.size();i++){
        if(q[i]- (i+1)>2){
            cout<<"Too chaotic"<<endl;
            return;
        }
        for(int j=max(0,q[i]-2);j<i;j++){
            if(q[j]>q[i]){
                bribes++;
            }
        }
    }
    cout<<bribes<<endl;
}
int  main(){
    int n;
    cin>>n;
    vector<int>q(n);
    for(int i=0;i<n;i++){
        cin>>q[i];
    }
    minimumBribes(q);
    return 0;   
}*/

//Big Sorting
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(string a,string b){
    if(a.size()==b.size()){
        return a.size()<b.size();
    }
    return a<b;
}
vector<string> bigSorting(vector<string> unsorted){
    sort(unsorted.begin(),unsorted.end(),compare);
    return unsorted;
}
int main(){
    int n;
    cin>>n;

    vector<string>unsorted(n);
    for(int i=0;i<n;i++){
        cin>>unsorted[i];
    }
    vector<string>result=bigSorting(unsorted);
    for(string x:result){
        cout<<x<<endl;
    }
    return 0;
}*/

//Closest Numbers
/*#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
vector<int> closestNumbers(vector<int>arr){
    sort(arr.begin(),arr.end());
    vector<int>result;
    int minimum=INT_MAX;

    for(int i=1;i<arr.size()-1;i++){
        int diff=arr[i]-arr[i-1];
        minimum=min(minimum,diff);
    }
    for(int i=1;i<arr.size()-1;i++){
        int diff=arr[i]-arr[i-1];
        if(diff==minimum){
            result.push_back(arr[i-1]);
            result.push_back(arr[i]);
        }
    }
    return result;
}
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>result=closestNumbers(arr);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}*/

//Minimum Swaps 2
#include<iostream>  
#include<vector>
#include<algorithm>
using namespace std;
int minimumSwaps(vector<int>arr){
    int swaps=0;
    for(int i=0;i<arr.size();i++){
        while(arr[i]!=i+1){
            int correctIdx=arr[i]-1;
            swap(arr[i],arr[correctIdx]);
            swaps++;
        }
    }
    return swaps;
}
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=minimumSwaps(arr);
    cout<<result;
    return 0;
}
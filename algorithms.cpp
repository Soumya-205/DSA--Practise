//Linear Search algorithms
/*#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={4,2,7,8,1,2,5};
    int size=7;
    int target=8;

    cout<<linearSearch(arr,size,target)<<endl;
    return 0;
}*/

//Reverse an array
/*#include<iostream>
using namespace std;
int ReverseArray(int arr[],int size){
    int start=0,end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }


}
int main(){
    int arr[]={4,2,7,8,1,2,5};
    int size=7;
    ReverseArray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}*/

//wap to calculate sum & product of all numbers in an array

/*#include<iostream>
using namespace std;
 int SumandProduct(int arr[],int size){
    int sum=0;
    int product=1;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"Product: "<<product<<endl; //print product inside function
    return sum; //return sum as int

 }

 int main(){
    int arr[]={2,3,4,5};
    int size=4;

    int sum=SumandProduct(arr,size);
    cout<<"Sum: "<<sum<<endl;
    return 0;
 }*/

 //waf to swap the max and min number
 /*#include<iostream>
 using namespace std;

 int swapMaxMin(int arr[],int n){
    int minIndex=0,maxIndex=0;

    //find indices of min and max
    for(int i=0;i<n;i++){
        if(arr[i]>arr[maxIndex]){
            maxIndex=i;
        }
        if(arr[i]<arr[minIndex]){
            minIndex=i;
        }
    }
    //swap min and max elements
    int temp=arr[minIndex];
    arr[minIndex]=arr[maxIndex];
    arr[maxIndex]=temp;

    return 1; //indicate success
 }

 int main(){
    int arr[]={4,2,3,5,1,6,8};
    int size=7;
    int status=swapMaxMin(arr,size);
    cout<<"Array after swapping max and min: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
 }*/

//waf to print all the unique values in an array
/*#include<iostream>
using namespace std;
int printuniqueOccurrences(int arr[],int size){
    cout<<"Elements appearing exactly once: ";
    int uniqueCount=0;
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i]<<" ";
            uniqueCount++;

        }
    }
    cout<<endl;
    return uniqueCount;
}
int main(){
    int arr[]={1,1,2,3,3,4,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int count = printuniqueOccurrences(arr, size);
    cout << "Total unique elements: " << count << endl;
    return 0;
}*/

//print distinct elements and removes duplicates

/*#include <iostream>
using namespace std;

// Prints distinct elements and returns their count
int printDistinctElements(int arr[], int n) {
    int count = 0;
    cout << "Distinct elements: ";
    for (int i = 0; i < n; i++) {
        bool isFirstOccurrence = true;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isFirstOccurrence = false;
                break;
            }
        }
        if (isFirstOccurrence) {
            cout << arr[i] << " ";
            count++;
        }
    }
    cout << endl;
    return count;
}

int main() {
    int arr[] = {1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int distinctCount = printDistinctElements(arr, size);
    cout << "Total distinct elements: " << distinctCount << endl;
    return 0;
}*/

//Waf to print the intersection of 2 arrays
/*#include <iostream>
using namespace std;

int printIntersection(int arr1[], int m, int arr2[], int n) {
    int count = 0;
    cout << "Intersection: ";
    for (int i = 0; i < m; i++) {
        // Check if arr1[i] is present in arr2
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }
        // Check if arr1[i] was already printed (to ensure uniqueness)
        bool alreadyPrinted = false;
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                alreadyPrinted = true;
                break;
            }
        }
        if (found && !alreadyPrinted) {
            cout << arr1[i] << " ";
            count++;
        }
    }
    cout << endl;
    return count;
}

int main() {
    int arr1[] = {1, 2, 3, 3, 4};
    int arr2[] = {3, 4, 5, 6, 7};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int intersectionCount = printIntersection(arr1, m, arr2, n);
    cout << "Total intersection elements: " << intersectionCount << endl;
    return 0;
}*/

//***********VECTOR****************

/*#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={1,2,3};
    cout<<vec[0]<<endl; //0
    return 0;
}*/

/*#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> vec={'a','b','c','d','e'};
    cout<<"size: "<<vec.size()<<endl;
    for(char val:vec){   //for each loop
        cout<<val<<endl;
    }
    
    return 0;
}*/

/*#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    cout<<"size: "<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);


    cout<<"After push back size is: "<<vec.size()<<endl;
    vec.pop_back();//45
    for(int val:vec){   //for each loop
        cout<<val<<endl;
    }
    
    return 0;
}*/


/*#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    cout<<"size: "<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);


    cout<<"After push back size is: "<<vec.size()<<endl;
    vec.pop_back();//45
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.at(0)<<endl;
    return 0;
}*/

/*#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl; //0
    return 0;
}*/

//single number   //leetcode Q136 arrays
/*class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int val:nums){
            ans=ans^val;
        }
        return ans;
    }
};*/


//Maximum subarray aum
/*#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=5;
    int arr[]={1,2,3,4,5};

    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";

        }
        cout<<endl;
    }
    return 0;
}*/

//Maximum subarray approach
//BRUTE FORCE APPROACH
/*#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};

    int maxSum=INT_MIN;

    for(int st=0;st<n;st++){
        int currentSum=0;
        for(int end=st;end<n;end++){
            currentSum+=arr[end];
            maxSum=max(currentSum,maxSum);
             
        }
        
    }
    cout<<"max subarray sum="<<maxSum<<endl;
    return 0;
}*/

//Maximum subarray approach
//Kadane algorithm
/*#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n=7;
    int arr[7]={3,-4,5,4,-1,7,-8};

    int maxSum=INT_MIN, currSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(currSum,maxSum);

        if(currSum<0){
            currSum=0;
        }
    }
    cout<<"max subarray sum="<<maxSum<<endl;
    return maxSum;
}*/

//Q53 leetcode maximum subarray sum
/*class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum=0, maxSum=INT_MIN;
        for(int val:nums){
            currSum+=val;
            maxSum=max(currSum,maxSum);
            
            if(currSum<0){
                currSum=0;
            }
        }
        return maxSum;
    }
};*/


//leetcode single number 136
/*#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    int ans=0;
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(1);
    vec.push_back(2);
    
    
    for(int val:vec){
        ans=ans^val;
    }
    cout<<"Single Number: "<<ans<<endl;
    return ans;
}*/

//Pair sum
//1. Brute force approach, time complexity O(n^2)
/*#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums,int target){
    vector<int> ans;
    int n=nums.size();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
}
int main(){
    vector<int> nums={2,7,11,15};
    int target=9;
   vector<int> ans=pairSum(nums,target);
   cout<<ans[0]<<","<<ans[1]<<endl;
   return 0;
}*/

//most optimized approach( 2-pointers approach)
/*#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums,int target){
    vector<int> ans;
    int n=nums.size();

    int i=0,j=n-1;
    while(i<j){
        int paiSum=nums[i]+nums[j];
        if(paiSum>target){
            j--;
        }
        else if(paiSum<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }

    }
   
}

int main(){
    vector<int> nums={2,7,11,15};
    int target=13;
   vector<int> ans=pairSum(nums,target);
   cout<<ans[0]<<","<<ans[1]<<endl;
   return 0;
}*/


//Majority element
//1. using brute force approach
/*#include<iostream>
#include<vector>
using namespace std;

vector<int> majorityElement(vector<int> nums,int n){
    for(int val:nums){
        int freq=0;
        for(int ele:nums){
            if(ele==val){
                freq++;
            }
        }
        if(freq>n/2){
            return {val};  //return as vector
        }
        
    }
    return {};
    

}

int main(){
    vector<int> nums={1,2,2,1,1};
    int n=nums.size();
    vector<int> ans=majorityElement(nums,n);
    if(!ans.empty()){
        cout<<"Majority Element= "<<ans[0]<<endl;
    }else{
        cout<<" No Majority Element"<<endl;
    }
    
    return 0;
}*/

//more optimised
// better approach using sorting
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> majorityElement(vector<int> nums,int n){
    

    //sort
    sort(nums.begin(),nums.end());

    //freq count
    int freq=1,ans=nums[0];
    for(int i=0;i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            freq=1;
            ans=nums[i];
        }

        if(freq>n/2){
            return {ans};
        }
    }
    return {ans};
}
int main(){
    vector<int> nums={1,2,2,1,1};
    int n=nums.size();
    vector<int> ans=majorityElement(nums,n);
    cout<<"Majority element is: "<<ans[0]<<endl;
    return 0;

}*/

//most optimised (Moore voting algorithm)
/*#include <iostream>
#include <vector>
using namespace std;

int majorityElement(const vector<int>& nums) {
    int count = 0, candidate = 0;
    // First pass: find a candidate
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
            count = 1;
        } else if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }
    // Second pass: verify the candidate
    count = 0;
    for (int num : nums) {
        if (num == candidate) count++;
    }
    if (count > nums.size() / 2)
        return candidate;
    return -1; // No majority element
}

int main() {
    vector<int> nums = {1, 2, 2, 1, 1};
    int ans = majorityElement(nums);
    if (ans != -1)
        cout << "Majority element is: " << ans << endl;
    else
        cout << "No majority element exists." << endl;
    return 0;
}*/

//pow(x,n) using binary exponentiation
/*#include<iostream>
using namespace std;

double binpow(double x,int n){
    if(n==0) return 1.0;
    if(x==0) return 0.0;
    if(x==1) return 1.0;
    if(x==-1&& n%2==0) return 1.0;
    if(x==-1&& n%2!=0) return -1.0;    //corner cases
    long binform=n;
    if(n<0){
        x=1/x;
        binform=-binform;
    }
    double ans=1;

    while(binform>0){      //most imp logic
        if(binform%2==1){
            ans*=x;

        }
        x*=x;
        binform/=2;
    }
    return ans;
}
int main(){
    
    long long x = 2, n = 10;
    cout << x << " raised to the power " << n << " is " << binpow(x, n) << endl;
    return 0;

}*/

//stock buy and sell leetcode Q151
/*#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices){
    int maxProfit=0,bestBuy=prices[0];

    for(int i=1;i<prices.size();i++){
        if(prices[i]>bestBuy){
            maxProfit=max(maxProfit,prices[i]-bestBuy);
        }
        bestBuy=min(bestBuy,prices[i]);
    }
    return maxProfit;

}
int main(){
    vector<int> prices={7,1,5,3,6,4};
    cout<<"Maximum Profit is: "<<maxProfit(prices)<<endl;
    return 0;
}*/

//container with most water
//brute force approach
/*#include<iostream>
#include<vector>
using namespace std;
int containerwithmaxWater(vector<int> heights){
    int maxWater=0;  //ans
    for(int i=0;i<heights.size();i++){
        for(int j=i+1;j<heights.size();j++){
            int width=j-i;
            int ht=min(heights[i],heights[j]);
            int currwater=width*ht;  //area
            maxWater=max(maxWater,currwater);
        }
        

    }
    return maxWater;


}
int main(){
    vector<int> heights={1,8,6,2,5,4,8,3,7};
    cout<<"container with maximum water is: "<<containerwithmaxWater(heights)<<endl;
    return 0;
}*/

//most optimised 2 pointers approach
/*#include<iostream>
#include<vector>
using namespace std;
int containerwithmaxWater(vector<int> heights){
    int maxWater=0;  //ans
    int lp=0,rp=heights.size();
    while(lp<rp){
        int width=rp-lp;
        int ht=min(heights[lp],heights[rp]);
        int currWater=width*ht;
        maxWater=max(maxWater,currWater);

        heights[lp]<heights[rp]?lp++:rp--;
    }
    return maxWater;
}
int main(){
    vector<int> heights={1,8,6,2,5,4,8,3,7};
    cout<<"container with maximum water is: "<<containerwithmaxWater(heights)<<endl;
    return 0;
}*/

//Product of array except self
//brute force approach
/*#include<iostream>
#include<vector>
using namespace std;

vector<int> productofArray(vector<int> nums){
    int n=nums.size();
    vector<int> ans(n,1);

    for(int i=0;i<n;i++){
    
        for(int j=0;j<n;j++){
            if(i!=j){
                ans[i]*=nums[j];
            }
            
        }
        
    }
    return ans;
}
int main(){
    vector<int> nums={1,2,3,4};
    vector<int>products=productofArray(nums);
    cout<<"Product of array is: ";
    for(int val:products){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}*/

//more optimised O(n)
/*#include<iostream>
#include<vector>
using namespace std;
vector<int> productexceptSelf(vector<int> nums){
    int n=nums.size();
    vector<int> ans(n,1);
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);

    //prefix
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]*nums[i-1];
    }

    //suffix
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]*nums[i+1];
    }

    for(int i=0;i<n;i++){
        ans[i]=prefix[i]*suffix[i];
    }
    return ans;



}
int main(){
    vector<int> nums={1,2,3,4};
    vector<int>products=productexceptSelf(nums);
    cout<<"Product of array is: ";
    for(int val:products){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;

}*/


/*#include<iostream>
#include<vector>
using namespace std;
vector<int> productexceptSelf(vector<int> nums){
    int n=nums.size();
    vector<int> ans(n,1);

    //prefix_>ans

    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*nums[i-1];
    }
    int suffix=1;
    for(int i=n-2;i>=0;i--){
        suffix*=nums[i+1];  //ith suffix
        ans[i]*=suffix;
    }
    return ans;
}
int main(){
    vector<int> nums={1,2,3,4};
    vector<int>products=productexceptSelf(nums);
    cout<<"Product of array is: ";
    for(int val:products){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;

}*/


//Binary search algorithm   //odd size
/*#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr,int tar){
    int st=0,end=arr.size()-1;

    while(st<=end){
        int mid=(st+end)/2;

        if(tar>arr[mid]){
            st=mid+1;
        }
        else if(tar<arr[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr={-1,0,3,4,5,9,12};
    int tar=12;
    cout<<binarySearch(arr,tar)<<endl;
    return 0;
}*/

//even size
/*#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr,int tar){
    int st=0,end=arr.size()-1;

    while(st<=end){
        int mid=(st+end)/2;

        if(tar>arr[mid]){
            st=mid+1;  //second half
        }
        else if(tar<arr[mid]){
            end=mid-1;  //first half
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr={-1,0,3,5,9,12};
    int tar=0;
    cout<<binarySearch(arr,tar)<<endl;
    return 0;
}*/


//more optimised
/*#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr,int tar){
    int st=0,end=arr.size()-1;

    while(st<=end){
        int mid=st+(end-st)/2;

        if(tar>arr[mid]){
            st=mid+1;  //second half
        }
        else if(tar<arr[mid]){
            end=mid-1;  //first half
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr={-1,0,3,5,9,12};
    int tar=0;
    cout<<binarySearch(arr,tar)<<endl;
    return 0;
}*/

//Recursive approach
/*#include<iostream>
#include<vector>
using namespace std;

int recursivebinarySearch(vector<int> arr,int tar,int st,int end){
    
    if(st<=end){
        int mid=st+(end-st)/2;

        if (tar>arr[mid]){
            return recursivebinarySearch(arr,tar,mid+1,end);
        }
        else if(tar<arr[mid]){
            return recursivebinarySearch(arr,tar,st,mid-1);
        }
        else{
            return mid;
        }

        
        
    }
    return -1;
}
int main(){
    vector<int> arr={-1,0,3,5,9,12};
    int tar=0;
    int st=0,end=arr.size()-1;
    cout<<recursivebinarySearch(arr,tar,st,end)<<endl;
    return 0;
}*/


//Rotated sorted array(using binary search)
/*#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> A,int tar){
    int st=0,end=A.size()-1;

    while(st<=end){
        int mid=st+(end-st)/2;
        if(A[mid]==tar){
            return mid;
        }
        if (A[st]<=A[mid]){  //left sorted
            if(A[st]<=tar && tar<=A[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{   //right sorted
           if(A[mid]<=tar && tar<=A[end]) {
                st=mid+1;
            }
           else{
                end=mid-1;
            }
        }
        


    }
    return -1;
}
int main(){
    vector<int> A={6,7,0,1,3,4,5};
    int tar=0;
    cout<<search(A,tar)<<endl;
    return 0;
}*/

//Peak index in mountain array
/*#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& A) {
        int st=1,end=A.size()-2;
        while(st<=end){
            int mid=st+(end-st)/2;

            if(A[mid-1]<A[mid] && A[mid]>A[mid+1]){
                return mid;
            }else if(A[mid-1]<A[mid]){   //right ssearch
                st=mid+1;
            }else{   //left search
                end=mid-1;
            }
        }
        return -1;
    }
    int main(){
    vector<int> A={0,3,8,9,5,2};
    int peakIdx = peakIndexInMountainArray(A);

    if (peakIdx != -1) {
        cout << "Peak index: " << peakIdx << endl;
        cout << "Peak value: " << A[peakIdx] << endl;
    } 
   
    
    return 0;
    }
    */

//Single element in sorted array using binary search
    /*#include<iostream>
    #include<vector>
    using namespace std;
    int singleNonDuplicate(vector<int>& A) {
        int n=A.size();

        if(n==1) return A[0];

        int st=0, end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;

            if(mid==0 && A[0]!=A[1]) return A[mid];
            if(mid==n-1 && A[n-1]!=A[n-2]) return A[mid];

            if(A[mid-1]!=A[mid] && A[mid]!=A[mid+1]) return A[mid];

            if(mid%2==0){      //even
                if(A[mid-1]==A[mid]){  //left
                    end=mid-1;
                }else{     //right
                    st=mid+1;
                }
            }
            else{   //odd
                if(A[mid-1]==A[mid]){    //right
                    st=mid+1;
                }else{           //left
                    end=mid-1;;
                }
            }

        }
        return -1;

    }
    int main(){
    vector<int> A={1,1,2,3,3,4,4,8,8};
    int Single = singleNonDuplicate(A);

    if (Single != -1) {
        cout << "Single index: " << Single << endl;
        cout << "Single value: " << A[Single] << endl;
    } 
    return 0;
    }
*/

//Book allocation or allocate books problem
/*#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr,int n,int m,int maxallowedPages){   //O(n)
    int stu=1,pages=0;

    for(int i=0;i<n;i++){
        if(arr[i]>maxallowedPages){
            return false;
        }

        if(pages+ arr[i]<=maxallowedPages){
            pages+=arr[i];
        }else{
            stu++;
            pages=arr[i];

        }
    }
    return stu>m?false:true;   //ternary operator

}

int allocateBooks(vector<int> &arr,int n,int m){   //O(logRange * n)
    if(m>n){
        return -1 ;  //edge case
    }
    int sum=0;
    for(int i=0;i<n;i++){   //O(n)
        sum+=arr[i];
    }
    int ans=-1;

    int st=0, end=sum; //range of possible ans

    while(st<=end){     
        int mid=st+(end-st)/2;

        if(isValid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;   //left

        }else{    //right
            st=mid+1;
        }


    }

}
int main(){
    vector<int> arr={2,1,3,4};
    int n=4,m=2;

    cout<<allocateBooks(arr,n,m)<<endl;
    return 0;
}*/

//Painter's Partition problem(variation of book allocation)
/*#include<iostream>
#include<vector>
#include<climits>
using namespace std;

bool isPossible(vector<int> &arr,int n,int m,int maxallowedTime){   //O(n)
    int painters=1,time=0;

    for(int i=0;i<n;i++){
        

        if(time + arr[i]<=maxallowedTime){
            time+=arr[i];
        }else{
            painters++;
            time=arr[i];

        }
    }
    return painters<=m;   

}

int MinTimeToPaint(vector<int> &arr,int n,int m){   //O(logRange * n)
    int sum=0,maxVal=INT_MIN;

    for(int i=0;i<n;i++){   //O(n)
        sum+=arr[i];
        maxVal=max(maxVal,arr[i]);
    }

    int st=maxVal,end=sum,ans=-1;

    while(st<=end){   //O(log(sum)*n)
        int mid=st+(end-st)/2;

        if(isPossible(arr,n,m,mid)){   //left
            ans=mid;
            end=mid-1;
        }else{  //right
            st=mid+1;
        }
    }
    return ans;

}
int main(){
    vector<int> arr={40,30,10,20};
    int n=4,m=2;

    cout<<MinTimeToPaint(arr,n,m)<<endl;
    return 0;
}*/

//Aggressive Cows problem(variation of book allocation)
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &arr,int N,int C,int minallowedDist){   //O(n)
    int cows=1,laststallpos=arr[0];

    for(int i=0;i<N;i++){
        if(arr[i]-laststallpos>=minallowedDist){
            cows++;
            laststallpos=arr[i];

        }
        if(cows==C){
            return true;
        }
    }
    return false;
}


int getDistance(vector<int> &arr,int N,int C){
    sort(arr.begin(),arr.end());  //NlogN
   


    int st=1, end=arr[N-1]-arr[0],ans=-1;

    while(st<=end){   //O(log(Range))*N
        int mid=st+(end-st)/2;

        if(isPossible(arr,N,C,mid)){   //right
            ans=mid;
            st=mid+1;
        }
        else{ //left
            end=mid-1;
        }
    
    }
    return ans;


}
int main(){
    int N=5,C=3;
    vector<int> arr={1,2,8,4,9};

    cout<<getDistance(arr,N,C)<<endl;
    return 0;
}*/


//Sorting algorithms
//BUBBLE SORT

/*#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){    //O(n^2)
    for(int i=0;i<n;i++){
        bool isSwap=false;

        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){   //for descending order do arr[j]<arr[j+1]
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){
            return;   //array is already sorted

        }
        
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

}

int main(){
    int n=5;
    int arr[]={4,1,5,2,3};

    bubblesort(arr,n);
    printarray(arr,n);

    return 0;
}*/

//SELECTION SORT
/*#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

}

void selectionsort(int arr[],int n){  //O(n^2)
    for(int i=0;i<n-1;i++){
        int smallestIdx=i;  //unsorted part ka starting index
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIdx]){   //for descending order do arr[j]>arr[smallestIdx]
                smallestIdx=j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
    
}

int main(){
    int n=5;
    int arr[]={4,1,5,2,3};

    selectionsort(arr,n);
    printarray(arr,n);

    return 0;
}*/

//INSERTION SORT

/*#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

}

void insertionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int curr=arr[i];
        int prev=i-1;

        while(prev>=0 && arr[prev]>curr){  //for descending order do arr[prev]<curr
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr; //placing the curr element in its correct position
    }
}
int main(){
    int n=5;
    int arr[]={4,1,5,2,3};

    insertionsort(arr,n);
    printarray(arr,n);

    return 0;
}*/

//Sort an array of 0s,1s,2s
//brute force approach

/*#include<iostream>
#include<vector>
using namespace std;

void sortcolours(vector<int> &nums){
    int n=nums.size();
    int count0=0,count1=0,count2=0;
     

    //O(n)
    for(int i=0;i<n;i++){
        if(nums[i]==0) count0++;
        else if(nums[i]==1) count1++;
        else count2++;
    }
    //O(n)
    int idx=0;
    for(int i=0;i<count0;i++){
        nums[idx++]=0;
    }
    for(int i=0;i<count1;i++){
        nums[idx++]=1;
    }
    for(int i=0;i<count2;i++){
        nums[idx++]=2;
    }
}
int main(){
    vector<int> nums={2,0,2,1,1,0,1,2,0,0};
    sortcolours(nums);
    for(int num:nums){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}*/


//Dutch National Flag algorithm(more optimized)
/*#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0,mid=0,high=n-1;

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                mid++,low++;
            }else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[high],nums[mid]);
                high--;
            }
            
        }
    }
    int main(){
    vector<int> nums={2,0,2,1,1,0,1,2,0,0};
    sortColors(nums);
    for(int num:nums){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}*/

//Merge sort arrays
//MERGE 2 SORTED ARRAYS

/*#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &A,int m,vector<int> &B,int n){
    int idx=m+n-1,i=m-1,j=n-1;

    while(i>=0 && j>=0){
        if(A[i]>=B[j]){
            A[idx]=A[i];
            idx--,i--;

        }else{
            A[idx]=B[j];
            idx--,j--;
        }

        
    }
    while(j>=0){
        A[idx]=B[j];
        idx--,j--;

    }
}
int main(){
    vector<int> A={1,2,3,0,0,0};
    vector<int> B={4,5,6};
    int m=3,n=3;
    merge(A,m,B,n);
    for(int num:A){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;

}*/

//Next Permutation
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nextPermutation(vector<int> &A){
    //find the pivot
    int pivot=-1,n=A.size();

    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            pivot=i;
            break;
        }

    }
    if(pivot==-1){
        reverse(A.begin(),A.end());  //in place changes
        return;
    }

    //2nd step: next larger element
    for(int i=n-1;i>pivot;i--){
        if(A[i]>A[pivot]){
            swap(A[i],A[pivot]);
            break;
        }
    }
    //3rd step: reverse(pivot to n-1)
    //reverse(A.begin()+pivot+1,A.end());
    int i=pivot+1,j=n-1;
    while(i<=j){
        swap(A[i++],A[j--]);
    }
}
int main(){
    vector<int> A={1,2,3,6,5,4};
    nextPermutation(A);
    for(int num:A){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;

}*/

//Search in a 2D array
/*#include<iostream>
#include<vector>
using namespace std;
bool searchInRow(vector<vector<int>>&mat,int target,int row){  //O(log(n))
        int n=mat[0].size();
        int st=0,end=n-1;

        while(st<=end){
            int mid=st+(end-st)/2;
            if(target==mat[row][mid]){
                return true;
            }else if(target>mat[row][mid]){
                st=mid+1;
            }else{
                end=mid-1;
            }
            
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int target) {  //O(log(m))
        //BS on total no. of rows
        int m=mat.size(),n=mat[0].size();

        int startRow=0,endRow=m-1;
        while(startRow<=endRow){
            int midRow=startRow +(endRow-startRow)/2;

            if(target>=mat[midRow][0] && target<=mat[midRow][n-1]){
                return searchInRow(mat,target,midRow);
                //found the row=> BS on this row
            }else if(target>mat[midRow][n-1]){
                //down=> right
                startRow=midRow+1;
            }else{
                //up=>left
                endRow=midRow-1;

            }
        }
        return false;
    }
    int main(){
        vector<vector<int>> mat = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 34;

    
    bool found = searchMatrix(mat, target);

    if (found)
        cout << "Target " << target << " found in matrix." << endl;
    else
        cout << "Target " << target << " not found in matrix." << endl;

    return 0;
}*/

//Search in a 2D matrix II
/*#include<iostream>
#include<vector>
using namespace std;
 bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size(),n=mat[0].size();

        int r=0,c=n-1;
        while(r<m && c>=0){
            if(target==mat[r][c]){
                return true;
            }else if(target<mat[r][c]){
                c--;
            }else{
                r++;
            }
        }
        return false;
    }
    int main(){
        vector<vector<int>> mat={
            {1,4,7,11,15},
            {2,5,8,12,19},
            {3,6,9,16,22},
            {10,13,14,17,24},
            {18,21,23,26,30}
        };
        int target=5;
        bool found = searchMatrix(mat, target);

    if (found)
        cout << "Target " << target << " found in matrix." << endl;
    else
        cout << "Target " << target << " not found in matrix." << endl;

    return 0;
}*/

//spiral matrix
/*#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        int srow=0,scol=0,erow=m-1,ecol=n-1;
        vector<int> ans;

        while(srow<=erow && scol<=ecol){
            //top
            for(int j=scol;j<=ecol;j++){
                ans.push_back(mat[srow][j]);
            }
            //right
            for(int i=srow+1;i<=erow;i++){
                ans.push_back(mat[i][ecol]);
            }
            //bottom
            for(int j=ecol-1;j>=scol;j--){
                if(srow==erow){
                    break;
                }
                ans.push_back(mat[erow][j]);
            }
            //left
            for(int i=erow-1;i>=srow+1;i--){
                if(scol==ecol){
                    break;
                }
                ans.push_back(mat[i][scol]);
            } 
            srow++;erow--;scol++;ecol--;
        }
        return ans;       
    }
    int main(){
        vector<vector<int>> mat={
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12},
            {13,14,15,16}
        };
        vector<int> result = spiralOrder(mat);

    cout << "Spiral order traversal: ";
    for (int num : result) cout << num << " ";
    cout << endl;

    return 0;
    }*/

//2 SUM problem(using HASHING)
/*#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& arr, int tar) {
        unordered_map<int,int>m;
        vector<int> ans;

        for(int i=0;i<arr.size();i++){
            int first=arr[i];
            int sec=tar-first;

            if(m.find(sec)!=m.end()){
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;
            }
            m[first]=i;
        }
        return ans;
    }
    int main(){
        vector<int> arr={5,2,11,7,15};
        int tar=9;
        vector<int> ans = twoSum(arr, tar); 

    // Print indices
    if (!ans.empty()) {
        cout << "Indices: " << ans[0] << ", " << ans[1] << endl;
    } else {
        cout << "No solution found!" << endl;
    }
        return 0;
    }*/


//find missing and repeating values
/*#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
 vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int> s;
        int n=grid.size();
        int a,b;

        int expSum=0,actualSum=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                actualSum+=grid[i][j];
                if(s.find(grid[i][j]) !=s.end()){
                    a=grid[i][j];
                    ans.push_back(a);
                    
                }
                s.insert(grid[i][j]);
            }
        }
        expSum=(n*n)*(n*n + 1)/2;
        b=expSum +a - actualSum;
        ans.push_back(b);

        return ans;
    }
    int main(){
        vector<vector<int>> grid={{9,1,7},{8,9,2},{3,4,6}};
        vector<int> ans = findMissingAndRepeatedValues(grid); 

    // Print indices
    if (!ans.empty()) {
        cout << "Repeated: " << ans[0] << "\nMissing: " << ans[1] << endl;
    } else {
        cout << "No solution found!" << endl;
    }
        return 0;
    }*/

//duplicate number(using unordered set approach not so optimised)
/*#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int findDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for(int val:nums){
            if(s.find(val)!= s.end()){
                return val;
            }
            s.insert(val);
        }
        return -1;
    }
    int main(){
        vector<int> nums={3,1,3,4,2};
        int ans=findDuplicate(nums);
        cout << "Duplicate: " << ans << endl; // Print the result
    
        return 0;

    }*/

//optimised appeoach(Slow fast pointer approach)
//find duplicate
/*#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int>& nums) {
        int slow=nums[0],fast=nums[0];

        do{
            slow=nums[slow];//+1
            fast=nums[nums[fast]];  //+2
        }while(slow !=fast);

        slow=nums[0];

        while(slow!=fast){
            slow=nums[slow];  //+1
            fast=nums[fast];  //+1
        }
        return slow;
    }
    int main(){
        vector<int> nums={3,1,3,4,2};
        int ans=findDuplicate(nums);
        cout << "Duplicate: " << ans << endl; // Print the result
    
        return 0;

    
    }*/

//3SUM
//Brute  Force Approach
/*#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
vector<vector<int>>threeSum(vector<int>& nums){
    int n=nums.size();
    vector<vector<int>> ans;

    set<vector<int>> s;  //set<uniqueTriplets>

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int> trip={nums[i],nums[j],nums[k]};
                    sort(trip.begin(),trip.end());

                    if(s.find(trip)==s.end()){
                        s.insert(trip);
                        ans.push_back(trip);
                    }

                }
            }
        }
    }
    return ans;

}
int main(){
    vector<int> nums={-1,0,1,2,-1,-4};
    vector<vector<int>> ans=threeSum(nums);
    cout << "Triplets:\n";
    for (auto& trip : ans) {
        cout << "[";
        for (int i = 0; i < trip.size(); i++) {
            cout << trip[i];
            if (i < trip.size()-1) cout << ", ";
        }
        cout << "]\n";
    }
    return 0;

}*/

//more optimised solution using(Hashing)
/*#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums){
    int n=nums.size();
    

    set<vector<int>> uniqueTriplets; 

    for(int i=0;i<n;i++){
        int tar=-nums[i];
        set<int> s;

        for(int j=i+1;j<n;j++){
            int third=tar-nums[j];

            if(s.find(third)!=s.end()){
                vector<int> trip={nums[i],nums[j],third};
                sort(trip.begin(),trip.end());
                uniqueTriplets.insert(trip);
            }
            s.insert(nums[j]);
        }
    }
    vector<vector<int>>ans(uniqueTriplets.begin(),uniqueTriplets.end());
    return ans;
}
int main(){
    vector<int> nums={-1,0,1,2,-1,-4};
    vector<vector<int>> ans=threeSum(nums);
    cout << "Triplets:\n";
    for (auto& trip : ans) {
        cout << "[";
        for (int i = 0; i < trip.size(); i++) {
            cout << trip[i];
            if (i < trip.size()-1) cout << ", ";
        }
        cout << "]\n";
    }
    return 0;

}*/
//3Sum most optimised approach(2 pointer approach)
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1,k=n-1;

            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0){
                    j++;
                }else if(sum>0){
                    k--;

                }else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;k--;

                    while(j<k && nums[j]==nums[j-1]) j++;
                }
            }
        }
        return ans;
    }
    int main(){
    vector<int> nums={-1,0,1,2,-1,-4};
    vector<vector<int>> ans=threeSum(nums);
    cout << "Triplets:\n";
    for (auto& trip : ans) {
        cout << "[";
        for (int i = 0; i < trip.size(); i++) {
            cout << trip[i];
            if (i < trip.size()-1) cout << ", ";
        }
        cout << "]\n";
    }
    return 0;

}*/

//4Sum approach(most optimised 2 ponter approach)
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int tar) {
        vector<vector<int>> ans;
        int n=nums.size();

        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;  //1st optimisation
            for(int j=i+1;j<n;){
                int p=j+1,q=n-1;

                while(p<q){
                    long long sum=(long long)nums[i]+(long long)nums[j]+(long long)nums[p]+(long long)nums[q];
                    if(sum<tar){
                        p++;
                    }else if(sum>tar){
                        q--;
                    }else{  //sum==tar
                        ans.push_back({nums[i],nums[j],nums[p],nums[q]});
                        p++;q--;

                        while(p<q && nums[p] == nums[p-1]) p++; // 3rd optimisation
                    }
                }
                j++;
                while(j<n && nums[j]==nums[j-1]) j++;  //2nd optimisation
            }
        }
        return ans;
    }
    int main(){
    vector<int> nums={-1,0,1,2,-1,-4};
    int target=0;
    vector<vector<int>> ans=fourSum(nums,target);
    cout << "Quadraplets:\n";
    for (auto& quad : ans) {
        cout << "[";
        for (int i = 0; i < quad.size(); i++) {
            cout << quad[i];
            if (i < quad.size()-1) cout << ", ";
        }
        cout << "]\n";
    }
    return 0;

}*/


//Subarray sum equals K(PrefixSum approach and hashing)
/*#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        vector<int> prefixSum(n,0);

        prefixSum[0]=nums[0];
        for(int i=1;i<n;i++){
            prefixSum[i]=prefixSum[i-1]+ nums[i];
        }

        unordered_map<int,int> m;  //PS,freq
        for(int j=0;j<n;j++){
            if(prefixSum[j]==k) count++;

            int val=prefixSum[j] - k;
            if(m.find(val)!=m.end()){
                count+=m[val];
            }

            if(m.find(prefixSum[j])== m.end()){
                m[prefixSum[j]]=0;
            }
            m[prefixSum[j]]++;
        }
        return count;
    }
   int main() {
    vector<int> nums = {9,4,20,3,10,5};
    int k = 33;
    int result = subarraySum(nums, k);
    cout << "Number of subarrays with sum " << k << " is: " << result << endl;
    
    return 0;
}*/


//Subsets (Leetcode 78)  backtracking
/*#include<iostream>
#include<vector>
using namespace std;
//O(n *2^n)
void getallSubsets(vector<int>& nums,vector<int>& ans,int i,vector<vector<int>>& allSubsets){
    if(i==nums.size()){
        allSubsets.push_back(ans);
        return; 
    }
    //include
    ans.push_back(nums[i]);
    getallSubsets(nums,ans,i+1,allSubsets);

    ans.pop_back();

    //exclude
    getallSubsets(nums,ans,i+1,allSubsets);
}

vector<vector<int>> subsets(vector<int>& nums){
    vector<vector<int>> allSubsets;
    vector<int> ans;

    getallSubsets(nums,ans,0,allSubsets);

    return allSubsets;

}
int main(){
    vector<int> nums={1,2,3};
    vector<vector<int>> result=subsets(nums); //store subsets

    //print subsets
    for(auto& subset: result){
        for(int num: subset) cout<<num<<" ";
        cout<<endl;
    }

    subsets(nums);
    return 0;
}*/

//Subsets II(backtracking)
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void getallSubsets(vector<int>& nums,vector<int>& ans,int i,vector<vector<int>>& allSubsets){
    if(i==nums.size()){
        allSubsets.push_back(ans);
        return;
    }

    //include
    ans.push_back(nums[i]);
    getallSubsets(nums,ans,i+1,allSubsets);

    ans.pop_back();

    int idx=i+1;
    while(idx<nums.size() && nums[idx]==nums[idx-1]) idx++;

    //exclude
    getallSubsets(nums,ans,idx,allSubsets);
}

vector<vector<int>> subsetsWithDup(vector<int>& nums){
    sort(nums.begin(),nums.end());
    vector<vector<int>> allSubsets;
    vector<int> ans;

    getallSubsets(nums,ans,0,allSubsets);

    return allSubsets;
}
int main(){
    vector<int> nums={1,2,3,2};
    vector<vector<int>> result=subsetsWithDup(nums); //store subsets

    //print subsets
    for(auto& subset: result){
        for(int num: subset) cout<<num<<" ";
        cout<<endl;
    }

    subsetsWithDup(nums);
    return 0;
}*/

//Permutations in an array (usig Backtracking) leetcode Q46
/*#include<iostream>
#include<vector>
using namespace std;

void getPerms(vector<int>& nums,int idx,vector<vector<int>>& ans){
    if(idx==nums.size()){
        ans.push_back({nums});
        return;
    }
    for(int i=idx;i<nums.size();i++){
        swap(nums[idx],nums[i]); //idx place=> ith element choice
        getPerms(nums,idx+1,ans);

        swap(nums[idx],nums[i]);  //backtracking
    }
}

vector<vector<int>> permute(vector<int>& nums){
    vector<vector<int>> ans;
    getPerms(nums,0,ans);
    return ans;
}
int main() {
    vector<int> nums = {1, 2, 3}; // Example input
    vector<vector<int>> result = permute(nums);

    cout << "All permutations:" << endl;
    for(const auto& perm : result) {
        for(int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}*/

//Permutations of a string(using backtracking)
/*#include <iostream>
#include <string>
using namespace std;

// Swap function for characters
void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

// Recursive function to print all permutations
void permute(string &str, int l, int r) {
    if (l == r) {
        cout << str << endl;
        return;
    }
    for (int i = l; i <= r; i++) {
        swap(str[l], str[i]);           // Make a choice
        permute(str, l + 1, r);         // Explore
        swap(str[l], str[i]);           // Backtrack
    }
}

int main() {
    string str = "abc";
    permute(str, 0, str.length() - 1);
    return 0;
}*/

//N-Queens problem( backtracking)
/*#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool isSafe(vector<string>& board,int row,int col,int n){  //O(n)
        //horizontal
        for(int j=0;j<n;j++){
            if(board[row][j]=='Q'){
                return false;
            }
        }
        //Vertical
        for(int i=0;i<n;i++){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        //left diagonal
        for(int i=row,j=col;i>=0 && j>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        //right diagonal
        for(int i=row,j=col;i>=0 && j<n;i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }

    void nQueens(vector<string>& board,int row,int n,vector<vector<string>>& ans){
       if(row==n){
        ans.push_back({board});
        return;
       }



        for(int j=0;j<n;j++){
            if(isSafe(board,row,j,n)){
                board[row][j]='Q';
                nQueens(board,row+1,n,ans);
                board[row][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans;

        nQueens(board,0,n,ans);
        return ans;
    }
    int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<vector<string>> solutions = solveNQueens(n);

    cout << "Number of solutions: " << solutions.size() << endl;
    for (int i = 0; i < solutions.size(); ++i) {
        cout << "Solution " << i + 1 << ":\n";
        for (const string& row : solutions[i]) {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0;
}*/

//Sudoku solver
/*#include<iostream>
#include<vector>
using namespace std;

bool isSafe(vector<vector<char>>& board,int row,int col,char dig){
    //horizontal
    for(int j=0;j<9;j++){
        if(board[row][j]==dig){
            return false;
        }
    }
    //vertical
    for(int i=0;i<9;i++){
        if(board[i][col]==dig){
            return false;
        }
    }
    //grid
    int srow=(row/3)*3;
    int scol=(col/3)*3;
    for(int i=srow;i<=srow+2;i++){
        for(int j=scol;j<=scol+2;j++){
            if(board[i][j]==dig){
                return false;
            }
        }
    }
    return true;
}

bool helper(vector<vector<char>>& board,int row,int col){
    if(row==9){
        return true;
    }

    int nextRow=row,nextcol=col+1;
    if(nextcol==9){
        nextRow=row+1;
        nextcol=0;
    }

    if(board[row][col] !='.'){
        return helper(board,nextRow,nextcol);
    }
    //place the digit
    for(char dig='1';dig<='9';dig++){
        if(isSafe(board,row,col,dig)){
            board[row][col]=dig;
            if(helper(board,nextRow,nextcol)){
                return true;
            }
            board[row][col]='.';
        }
    }
    return false;
}

void solvedsudoku(vector<vector<char>>& board){
    helper(board,0,0);

}
int main() {
    // Example Sudoku board (9x9)
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    solvedsudoku(board);

    // Print solved Sudoku
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}*/

//RAT in the Maze (using recursion and backtracking)
/*#include<iostream>
#include<vector>
using namespace std;

void helper(vector<vector<int>>& mat,int r,int c,string path,vector<string>& ans,vector<vector<bool>>& vis){
    int n=mat.size();
    if(r<0|| c<0 || r>=n || c>=n || mat[r][c]==0 || vis[r][c]==true){
        return;
    }

    if(r==n-1 && c==n-1){
        ans.push_back(path);
        return;
    }

    vis[r][c]=true;




    helper(mat,r+1,c,path+"D",ans,vis);//down
    helper(mat,r-1,c,path+"U",ans,vis);//up
    helper(mat,r,c-1,path+"L",ans,vis);//left
    helper(mat,r,c+1,path+"R",ans,vis);//right

    vis[r][c]=false;  //backtracking step

}

vector<string> findpath(vector<vector<int>>& mat){
    int n=mat.size();
    
    vector<string> ans;
    string path="";
    vector<vector<bool>> vis(n,vector<bool>(n,false));

    helper(mat,0,0,path,ans,vis);

    return ans;

}
int main(){
    vector<vector<int>> mat={{1,0,0,0},{1,1,0,0},{1,1,0,0},{0,1,1,1}};

    vector<string> ans=findpath(mat);
    for(string path: ans){
        cout<<path<<endl;
    }
    return 0;
}*/


//more optimised 
/*#include<iostream>
#include<vector>
using namespace std;

void helper(vector<vector<int>>& mat,int r,int c,string path,vector<string>& ans){
    int n=mat.size();
    if(r<0|| c<0 || r>=n || c>=n || mat[r][c]==0 || mat[r][c]==-1){
        return;
    }

    if(r==n-1 && c==n-1){
        ans.push_back(path);
        return;
    }

    mat[r][c]=-1; //visited




    helper(mat,r+1,c,path+"D",ans);//down
    helper(mat,r-1,c,path+"U",ans);//up
    helper(mat,r,c-1,path+"L",ans);//left
    helper(mat,r,c+1,path+"R",ans);//right

    mat[r][c]=1;  //unvisited

}

vector<string> findpath(vector<vector<int>>& mat){
    int n=mat.size();
    
    vector<string> ans;
    string path="";
   

    helper(mat,0,0,path,ans);

    return ans;

}
int main(){
    vector<vector<int>> mat={{1,0,0,0},{1,1,0,0},{1,1,0,0},{0,1,1,1}};

    vector<string> ans=findpath(mat);
    for(string path: ans){
        cout<<path<<endl;
    }
    return 0;
}*/

//Combination sum (leetcode Q39)
/*#include<iostream>
#include<vector>
#include<set>
using namespace std;

set<vector<int>> s;

void getAllcombinations(vector<int>& arr,int idx,int tar,vector<vector<int>>& ans,vector<int>& combine){

    if(idx==arr.size() || tar<0){
        return;
    }

    if(tar==0){
        if(s.find(combine)==s.end()){
            ans.push_back(combine);
            s.insert(combine);

        }
        
        return;
    }



    combine.push_back(arr[idx]);
    //single
    getAllcombinations(arr,idx+1,tar-arr[idx],ans,combine); 
    //multiple
    getAllcombinations(arr,idx,tar-arr[idx],ans,combine);

    combine.pop_back();

    //exclusion
    getAllcombinations(arr,idx+1,tar,ans,combine);
}

vector<vector<int>> combinationSum(vector<int>& arr,int tar){
    vector<vector<int>> ans;
    vector<int> combine;

    getAllcombinations(arr,0,tar,ans,combine);

    return ans;
}
int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i=0; i<n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    vector<vector<int>> results = combinationSum(arr, target);

    cout << "Combinations that sum to " << target << ":\n";
    for(const auto& comb : results) {
        cout << "[ ";
        for(int num : comb) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}*/

//Pallindrome Partitioning(backtracking)
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPalin(string s){
    string s2=s;
    reverse(s2.begin(),s2.end());

    return s==s2;
}

void getAllParts(string s,vector<string>& partitions,vector<vector<string>>& ans){
    
    if(s.size()==0){
        ans.push_back(partitions);
        return;
    }

    for(int i=0;i<s.size();i++){
        string part=s.substr(0,i+1);

        if(isPalin(part)){
            partitions.push_back(part);
            getAllParts(s.substr(i+1),partitions,ans);
            partitions.pop_back();
        }
    }

}

vector<vector<string>> partition(string s){
    vector<vector<string>> ans;
    vector<string> partitions;

    getAllParts(s,partitions,ans);
    return ans;
}
int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    vector<vector<string>> result = partition(input);

    cout << "All possible palindrome partitions:\n";
    for (const auto& vec : result) {
        for (const auto& str : vec) {
            cout << str << " ";
        }
        cout << "\n";
    }

    return 0;
}*/

//Merge Sort Algorithm
/*#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr,int st,int mid,int end){
    vector<int> temp;
    int i=st,j=mid+1;

    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){  //> for descending order
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx=0;idx<temp.size();idx++){
        arr[idx+st]=temp[idx];
    }
}

void mergeSort(vector<int>& arr,int st,int end){
    if(st<end){
        int mid=st+(end-st)/2;

        mergeSort(arr,st,mid);  //left half
        mergeSort(arr,mid+1,end); //right half

        merge(arr,st,mid,end);
    }
}

int main(){
    vector<int> arr={12,31,35,8,32,17};

    mergeSort(arr,0,arr.size()-1);
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}*/

//Quick Sort Algorithm
/*#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr,int st,int end){
    int idx=st-1,pivot=arr[end];

    for(int j=st;j<end;j++){
        if(arr[j]<=pivot){  //> for descending order
            idx++;
            swap(arr[j],arr[idx]);
        }
    }

    idx++;
    swap(arr[end],arr[idx]);
    return idx;

}

void quickSort(vector<int>& arr,int st,int end){
    if(st<end){
        int pivIdx=partition(arr,st,end);
        
        quickSort(arr,st,pivIdx-1); //left half
        quickSort(arr,pivIdx+1,end);  //right half

    }
}

int main(){
    vector<int> arr={12,31,35,8,32,17};
    quickSort(arr,0,arr.size()-1);

    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}*/

//Count Inversion(uses merge sort)
/*#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int>& arr,int st,int mid,int end){
    vector<int> temp;
    int i=st,j=mid+1;
    int InvCount=0;

    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
            InvCount+=(mid-i+1);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx=0;idx<=temp.size();idx++){
        arr[idx+st]=temp[idx];
    }
    return InvCount;
}

int mergeSort(vector<int>& arr,int st,int end){
    if(st<end){
        int mid=st+(end-st)/2;

        int leftInvCount=mergeSort(arr,st,mid);
        int rightInvCount=mergeSort(arr,mid+1,end);

        int InvCount=merge(arr,st,mid,end);

        return leftInvCount+rightInvCount+InvCount;
    }
    return 0;
}

int main(){
    vector<int> arr={6,3,5,2,7};

    int ans=mergeSort(arr,0,arr.size()-1);
    cout<<"Inversion count "<<ans<<endl;

    return 0;
}*/


//KNIGHTS Tour (backtracking same as N Queens)
/*#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<vector<int>>& grid,int r,int c,int n,int expVal){
    if(r<0 || c<0 || r>=n || c>=n || grid[r][c]!=expVal){
        return false;
    }

    if(expVal== n*n-1){
        return true;

    }

    //8possible position
    int ans1=isValid(grid,r-2,c+1,n,expVal+1);
    int ans2=isValid(grid,r-1,c+2,n,expVal+1);
    int ans3=isValid(grid,r+1,c+2,n,expVal+1);
    int ans4=isValid(grid,r+2,c+1,n,expVal+1);
    int ans5=isValid(grid,r+2,c-1,n,expVal+1);
    int ans6=isValid(grid,r+1,c-2,n,expVal+1);
    int ans7=isValid(grid,r-1,c-2,n,expVal+1);
    int ans8=isValid(grid,r-2,c-1,n,expVal+1);

    return ans1|| ans2|| ans3|| ans4|| ans5|| ans6|| ans7|| ans8;


}
bool checkValidGrid(vector<vector<int>>& grid){
    return isValid(grid,0,0,grid.size(),0);
}
int main(){
    vector<vector<int>> grid={
        {0,3,6},{5,8,1},{2,7,4}
    };
    int ans=checkValidGrid(grid);
    cout<<"The answer is:"<<ans<<endl;
    return 0;
}*/

//Oops(Inheritence)
/*#include<iostream>
#include<vector>
using namespace std;

class Student{
public:
    string name;
    int rollno;
};
class Teacher{
public:
    string subject;
    double salary;
};
class TA:public Student,public Teacher{

};
int main(){
    TA t1;
    t1.name="Scarlet";
    t1.subject="engineering";

    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    return 0;
}*/

//Polymorphism(function overloading)
/*#include<iostream>
#include<string>
using namespace std;

class Print{
public:
    void show(int x){
        cout<<"integer: "<<x<<endl;
    }

    void show(char ch){
        cout<<"char: "<<ch<<endl;
    }
};
int main(){
    Print p1;
    p1.show(101);
    return 0;
}*/

//Run time polymorphism  (function overloading)
/*#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    int getInfo(){
     cout<<"Parent xlass\n";
    }
};
class Child:public Parent{
public:
    int getInfo(){
        cout<<"child class\n";
    }
};

int main(){
    Child c1;
    c1.getInfo();
    return 0;

}*/

//Virtual function
/*#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    int getInfo(){
     cout<<"Parent xlass\n";
    }

    virtual void hello(){
        cout<<"hello from parent\n";
    }
};
class Child:public Parent{
public:
    int getInfo(){
        cout<<"child class\n";
    }
    void hello(){
        cout<<"hello from child\n";
    }
};

int main(){
    Child c1;
    c1.hello();
    return 0;

}*/

//Absraction
/*#include<iostream>
#include<string>
using namespace std;

class Shape{  //abstract class
    virtual void draw()=0;  //pure virtual function

};
class circle: public Shape{
    public:
       void draw(){
        cout<<"drawing a circle\n";
       }
};
int main(){
    circle c1;
    c1.draw();
    return 0;
}*/

//Static Keyword  (in function)
/*#include<iostream>
#include<string>
using namespace std;

void fun(){
    static int x=0;  //init statement-1 run
    cout<<"x :"<<x<<endl;
    x++;
}
int main(){
    fun();
    fun();
    fun();
    return 0;
}*/

//in class
/*#include<iostream>
#include<string>
using namespace std;

class A{
public:
     int x;

     void incX(){
        x=x+1;
     }
};
int main(){
    A obj1;
    A obj2;
    obj1.x=100;
    obj2.x=200;
    cout<<obj2.x<<endl;
    
    cout<<obj1.x<<endl;
    return 0;
}*/

//***********************LINKED LIST******************************* */


/*#include<iostream>
using namespace std;

class Node{
public:
   int data;
   Node* next;

   Node(int val){
    data=val;
    next=NULL;
   }
};

class List{
    Node* head;
    Node* tail;

public:
   List(){
    head=tail=NULL;
   }

   void push_front(int val){
    Node* newNode=new Node(val);  // helps create a dynamic object
    //or Node newNode(val); //static not required
    if(head==NULL){
        head=tail=newNode;
        return;
    }else{
        newNode->next=head;
        head=newNode;
    }
   }

   void push_back(int val){
    Node* newNode=new Node(val);

    if(head==NULL){
        head=tail=newNode;
    }else{
       tail->next=newNode;
       tail=newNode; 
    }
   }

   void pop_front(){
    if(head==NULL){
        cout<<"LL is empty\n";
        return;
    }
    Node* temp=head;
    head=head->next;
    temp->next=NULL;

    delete temp;
   }

   void pop_back(){
    if(head==NULL){
        cout<<"LL is empty\n";
        return;
    }
    Node* temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }

    temp->next=NULL;
    delete tail;
    tail=temp;
   }
   void insert(int val,int pos){
    if(pos<0){
        return;
    }
    if(pos==0){
        push_front(val);
        return;
    }

    Node* temp=head;
    for(int i=0;i<pos-1;i++){
        if(temp==NULL){
            cout<<"invalid pos\n";
            return;
        }
        temp=temp->next;
    }

    Node* newNode=new Node(val);
    newNode->next=temp->next;
    temp->next=newNode;
   }
   int search(int key){
    Node* temp=head;
    int idx=0;

    while(temp!=NULL){
        if(temp->data==key){
            return idx;
        }
        temp=temp->next;
        idx++;

    }
    return -1;
   }

   void printAll(){  //TC=O(n)
       Node* temp=head;

       while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
       }
       cout<<"NULL"<<endl;
   }
};

int main(){
    List l1;

    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_front(4);
    l1.push_front(5);

    l1.push_back(4);

    l1.pop_front();
    l1.pop_back();
    l1.insert(6,1);

    l1.printAll();
    cout<<l1.search(2)<<endl;

    return 0;
}*/


//Reversing a Linked List
/*#include<iostream>
using namespace std;

//Definition of our Linked list
struct ListNode{
    int val;
    ListNode* next;
    ListNode(): val(0),next(nullptr){}
    ListNode(int x):val(x),next(nullptr){}
    ListNode(int x, ListNode* next):val(x),next(next){}

};

//Function to reverse the Linked List
class Solution{
public:
    ListNode* head;
    ListNode* tail;

    Solution(): head(nullptr),tail(nullptr){} //initialize pointers in contructors
    ListNode* reverseList(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;

        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;

            prev=curr;
            curr=next;
        }
        return prev;
    }

    
    
    void push_back(int val){
        ListNode* newNode=new ListNode(val);

        if(head==NULL){
            head=tail=newNode;

        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    //helper function to print the Linked list
    void PrintAll(ListNode* head){
        while (head!=nullptr){
            cout<<head->val<<"->";
            head=head->next;
        }
        cout<<endl;
    }
};
int main(){
    Solution s;
    s.push_back(1);
    s.push_back(2);
    s.push_back(3);

    cout << "Original List: ";
    s.PrintAll(s.head);

    s.head = s.reverseList(s.head);

    cout << "Reversed List: ";
    s.PrintAll(s.head);

    return 0;
}*/


//To find the middle of the linked list
/*#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    
    ListNode* head;
    ListNode* tail;

    Solution() : head(nullptr),tail(nullptr){}
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    void push_back(int val){
        ListNode* newNode=new ListNode(val);

        if(head==NULL){
            head=tail=newNode;

        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
    }

};
int main(){
    Solution s;
    s.push_back(1);
    s.push_back(2);
    s.push_back(3);
    s.push_back(4);
    s.push_back(5);

    ListNode* middle =s.middleNode(s.head);

    if (middle)
        cout << "Middle node value: " << middle->val << endl;
    else
        cout << "List is empty." << endl;

    return 0;
}*/


//TO detect a cycle in a linked list
/*#include<iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    
    
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next !=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};
int main() {
    // Create nodes
    ListNode* head = new ListNode(3);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(0);
    ListNode* fourth = new ListNode(-4);

    // Connect nodes: 3 -> 2 -> 0 -> -4
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = second; // Create a cycle (tail connects to node 2)

    Solution sol;
    if (sol.hasCycle(head)) {
        cout << "Cycle detected." << endl;
    } else {
        cout << "No cycle detected." << endl;
    }
    return 0;
}*/

//Detect a cycle then remove it
/*#include<iostream>
using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        bool isCycle=false;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                isCycle=true;
                break;
            }
        }
        if(!isCycle){
            return NULL;
        }

        slow=head;
        ListNode* prev=NULL;
        while(slow!=fast){
           slow=slow->next;
           prev=fast;
           fast=fast->next; 
        }
       // Step 3: Remove the cycle
        if (prev == NULL) {
            // Cycle starts at head, find the last node in the cycle
            prev = fast;
            while (prev->next != slow) {
                prev = prev->next;
            }
            prev->next = NULL;
        } else {
            prev->next = NULL;
        }

        return slow;
    }
};
// Utility function to print the list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Utility function to free the list
void freeList(ListNode* head) {
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // Create nodes
    ListNode* head = new ListNode(3);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(0);
    ListNode* fourth = new ListNode(-4);

    // Connect nodes: 3 -> 2 -> 0 -> -4
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = second; // Create a cycle (tail connects to node 2)

    Solution sol;
    ListNode* cycleStart = sol.detectCycle(head);

    if (cycleStart) {
        cout << "Cycle detected at node with value: " << cycleStart->val << endl;
        
        cout << "Cycle removed. The list is now: ";
        printList(head);
    } else {
        cout << "No cycle detected." << endl;
        cout << "The list is: ";
        printList(head);
    }

    // Free memory
    freeList(head);

    return 0;
}*/


//Merge 2 sorted lists(leetcode Q21)
/*#include<iostream>
using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if(head1==NULL || head2==NULL){
            return head1==NULL?head2:head1;
        }
        //case1
        if(head1->val <= head2->val){
            head1->next=mergeTwoLists(head1->next,head2);
            return head1;
        }else{  //case 2
            head2->next=mergeTwoLists(head1,head2->next);
            return head2;
        } 
           

        
    }
};
// Helper function to print a linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to create a linked list from an array
ListNode* createList(const int arr[], int n) {
    if (n == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (int i = 1; i < n; ++i) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

int main() {
    // Example lists: 1->2->4 and 1->3->4
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 3, 6};
    ListNode* head1 = createList(arr1, 3);
    ListNode* head2 = createList(arr2, 3);

    Solution sol;
    ListNode* mergedHead = sol.mergeTwoLists(head1, head2);

    cout << "Merged List: ";
    printList(mergedHead);

    // Free memory (not strictly necessary here, but good practice)
    while (mergedHead != nullptr) {
        ListNode* temp = mergedHead;
        mergedHead = mergedHead->next;
        delete temp;
    }

    return 0;
}*/

//copy list with random pointers( leetcode Q138)
/*#include <iostream>
#include <unordered_map>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) {
            return NULL;
        }
        unordered_map<Node*, Node*> m;

        Node* newHead = new Node(head->val);
        Node* oldTemp = head->next;
        Node* newTemp = newHead;
        m[head] = newHead;

        while (oldTemp != NULL) {
            Node* copyNode = new Node(oldTemp->val);
            m[oldTemp] = copyNode;
            newTemp->next = copyNode;

            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        oldTemp = head;
        newTemp = newHead;
        while (oldTemp != NULL) {
            newTemp->random = m[oldTemp->random];
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }
        return newHead;
    }
};

// Helper function to print the list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << "Node val: " << temp->val;
        if (temp->random)
            cout << ", Random points to: " << temp->random->val;
        else
            cout << ", Random points to: NULL";
        cout << endl;
        temp = temp->next;
    }
    cout << "--------------------------" << endl;
}

// Helper function to create a list with random pointers
Node* createSampleList() {
    // Creating nodes
    Node* node1 = new Node(7);
    Node* node2 = new Node(13);
    Node* node3 = new Node(11);
    Node* node4 = new Node(10);
    Node* node5 = new Node(1);

    // Setting next pointers
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    // Setting random pointers
    node1->random = NULL;
    node2->random = node1;
    node3->random = node5;
    node4->random = node3;
    node5->random = node1;

    return node1;
}

int main() {
    Node* head = createSampleList();

    cout << "Original list:" << endl;
    printList(head);

    Solution sol;
    Node* copiedHead = sol.copyRandomList(head);

    cout << "Copied list:" << endl;
    printList(copiedHead);

    // Cleanup: free the original and copied lists
    Node* temp;
    while (head) {
        temp = head;
        head = head->next;
        delete temp;
    }
    while (copiedHead) {
        temp = copiedHead;
        copiedHead = copiedHead->next;
        delete temp;
    }

    return 0;
}*/

//-------------Doubly Linked List--------//
/*#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data=val;
        next=prev=NULL;
    }
};

class DoublyList{
    Node* head;
    Node* tail;

public:
    DoublyList(){
        head=tail=NULL;
    }

    void push_front(int val){
        Node* newNode=new Node(val);

        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }

    void printList(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<endl;
    }

    void push_back(int val){
         Node* newNode=new Node(val);

        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->prev=tail;
            tail->next=newNode;
            tail=newNode;
        }
    }

    void pop_front(){
        if(head==NULL){
            cout<<"DLL is empty\n";
            return;
        }

        Node* temp=head;
        head=head->next;

        if(head!=NULL){
            head->prev=NULL;
        }
        temp->next=NULL;
        delete temp;
    }

    void pop_back(){
        if(head==NULL){
            cout<<"DLL is empty\n";
            return;
        }
        Node* temp=tail;
        tail=tail->prev;

        if(tail !=NULL){
            tail->next=NULL;
        }
        temp->prev=NULL;
        delete temp;
    }
};

int main(){
    DoublyList dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);

    dll.push_back(4);
    dll.pop_back();

    dll.pop_front();

    dll.printList();
    return 0;
}*/


//Circular Linked List
/*#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

class CircularList{
    Node* head;
    Node* tail;

public:
    CircularList(){
        head=tail=NULL;
    }

    void insertAtHead(int val){
        Node* newNode=new Node(val);

        if(tail==NULL){
            head=tail=newNode;
            tail->next=head;
        }else{
            newNode->next=head;
            head=newNode;
            tail->next=head;
        }
    }

    void print(){
        if(head==NULL) return;

        cout<<head->data<<"->";
        Node* temp=head->next;

        while(temp!=head){ //temp!=NULL
            cout<<temp->data<<"->";
            temp=temp->next;
        }

        cout<<temp->data<<endl;
    }

    void insertAtTail(int val){
        Node* newNode=new Node(val);

        if(tail==NULL){
            head=tail=newNode;
            tail->next=head;
        }else{
            newNode->next=head;
            tail->next=newNode;
            tail=newNode;
        }
    }

    void deleteAtHead(){
        if(head==NULL) return;
        else if(head==tail){   //single Node
            delete head;
            head=tail=NULL;

        }else{  //2 or more
            Node* temp=head;
            head=head->next;
            tail->next=head;

            temp->next=NULL;
            delete temp;

        }
    }

    void deleteAtTail(){
        if(head==NULL) return;
        else if(head==tail){
            delete head;
        }else{
            Node* temp=tail;

            Node* prev=head;
            while(prev->next!=tail){
                prev=prev->next;
            }
            tail=prev;
            tail->next=head;

            temp->next=NULL;
            delete temp;
        }
    }
};

int main(){
    CircularList cll;

    cll.insertAtHead(1);
    cll.insertAtHead(2);
    cll.insertAtHead(3);

    cll.insertAtTail(4);
    cll.deleteAtHead();
    cll.deleteAtTail();

    cll.print();
    return 0;
}*/

//Flatten the doubly linked list
/*#include <iostream>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;

    Node(int _val) : val(_val), prev(nullptr), next(nullptr), child(nullptr) {}
};

// Solution class with flatten method
class Solution {
public:
    Node* flatten(Node* head) {
        if (head == NULL) {
            return head;
        }

        Node* curr = head;
        while (curr != NULL) {
            if (curr->child != NULL) {
                // Flatten the child list
                Node* next = curr->next;
                curr->next = flatten(curr->child);

                curr->next->prev = curr;
                curr->child = NULL;

                // Find tail of the flattened child list
                Node* tail = curr->next;
                while (tail->next != NULL) {
                    tail = tail->next;
                }

                // Attach tail with next pointer
                if (next != NULL) {
                    tail->next = next;
                    next->prev = tail;
                }
            }
            curr = curr->next;
        }
        return head;
    }
};

// Helper function to print the doubly linked list
void printList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

// Helper function to free memory
void freeList(Node* head) {
    while (head) {
        Node* next = head->next;
        delete head;
        head = next;
    }
}

int main() {
    // Example: Create a multilevel doubly linked list
    // 1 - 2 - 3 - 4 - 5 - 6
    //         |
    //         7 - 8 - 9 - 10
    //             |
    //             11 - 12

    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    Node* n5 = new Node(5);
    Node* n6 = new Node(6);
    Node* n7 = new Node(7);
    Node* n8 = new Node(8);
    Node* n9 = new Node(9);
    Node* n10 = new Node(10);
    Node* n11 = new Node(11);
    Node* n12 = new Node(12);

    // Set up next and prev pointers
    n1->next = n2;
    n2->prev = n1;
    n2->next = n3;
    n3->prev = n2;
    n3->next = n4;
    n4->prev = n3;
    n4->next = n5;
    n5->prev = n4;
    n5->next = n6;
    n6->prev = n5;

    n3->child = n7;
    n7->next = n8;
    n8->prev = n7;
    n8->next = n9;
    n9->prev = n8;
    n9->next = n10;
    n10->prev = n9;

    n8->child = n11;
    n11->next = n12;
    n12->prev = n11;

    // Flatten the list
    Solution sol;
    Node* flatHead = sol.flatten(n1);

    // Print the flattened list
    cout << "Flattened list: ";
    printList(flatHead);

    // Free memory
    freeList(flatHead);

    return 0;
}*/

//Reverse Node in K group
/*#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        int cnt = 0;
        // Check if k nodes exist
        while (cnt < k) {
            if (temp == NULL) {
                return head;
            }
            temp = temp->next;
            cnt++;
        }
        // Recursively call for the rest of the list
        ListNode* prevNode = reverseKGroup(temp, k);

        // Reverse current group
        temp = head;
        cnt = 0;
        while (cnt < k) {
            ListNode* next = temp->next;
            temp->next = prevNode;
            prevNode = temp;
            temp = next;
            cnt++;
        }
        return prevNode;
    }
};

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to free the linked list memory
void freeList(ListNode* head) {
    while (head) {
        ListNode* next = head->next;
        delete head;
        head = next;
    }
}

int main() {
    // Create linked list: 1->2->3->4->5
    ListNode* n5 = new ListNode(5);
    ListNode* n4 = new ListNode(4, n5);
    ListNode* n3 = new ListNode(3, n4);
    ListNode* n2 = new ListNode(2, n3);
    ListNode* n1 = new ListNode(1, n2);

    int k = 2; // Group size

    Solution sol;
    ListNode* newHead = sol.reverseKGroup(n1, k);

    cout << "Reversed in groups of " << k << ": ";
    printList(newHead);

    // Free memory
    freeList(newHead);

    return 0;
}*/


//Swap pairs in nodes Leetcode Q24
/*#include <iostream>
#include<vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* first = head;
        ListNode* sec = head->next;
        ListNode* prev = NULL;

        while (first != NULL && sec != NULL) {
            ListNode* third = sec->next;

            sec->next = first;
            first->next = third;

            if (prev != NULL) {
                prev->next = sec;
            } else {
                head = sec;
            }
            // Update pointers for next pair
            prev = first;
            first = third;
            if (third != NULL) {
                sec = third->next;
            } else {
                sec = NULL;
            }
        }
        return head;
    }
};

// Helper function to create a linked list from a vector of values
ListNode* createList(const vector<int>& vals) {
    if (vals.empty()) return nullptr;
    ListNode* head = new ListNode(vals[0]);
    ListNode* curr = head;
    for (size_t i = 1; i < vals.size(); ++i) {
        curr->next = new ListNode(vals[i]);
        curr = curr->next;
    }
    return head;
}

// Helper function to print a linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to free the memory used by the linked list
void freeList(ListNode* head) {
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // Example: Create a list 1 -> 2 -> 3 -> 4
    vector<int> vals = {1, 2, 3, 4};
    ListNode* head = createList(vals);

    cout << "Original list: ";
    printList(head);

    Solution sol;
    ListNode* swapped = sol.swapPairs(head);

    cout << "List after swapping pairs: ";
    printList(swapped);

    freeList(swapped);
    return 0;
}*/

//-------------------STACK-----------------------------------

//Stack using array/vector
/*#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int> v;


public:
    void push(int val){  //O(1)
        v.push_back(val);
    }
    void pop(){   //O(1)
        v.pop_back();

    }

    int top(){  //O(1)
        return v[v.size()-1];

    }

    bool empty(){
        return v.size()==0;
    }
};

int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}*/


//Stack using Linked List
/*#include<iostream>
#include<list>
using namespace std;

class Stack{
    list<int> ll;


public:
    void push(int val){  //O(1)
        ll.push_front(val);
    }
    void pop(){   //O(1)
        ll.pop_front();

    }

    int top(){  //O(1)
        return ll.front();

    }

    bool empty(){
        return ll.size()==0;
    }
};

int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}*/



//what we will use in coding platforms actually
/*#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;  //using c++ STL

    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}*/

//leetcode Q20 ( Valid Parentheses)
/*#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string str) {
        stack<char> st;

        for(int i = 0; i < str.size(); i++) {
            if(str[i] == '(' || str[i] == '{' || str[i] == '[') { // opening
                st.push(str[i]);
            } else { // closing
                if(st.size() == 0) {
                    return false;
                }

                if((st.top() == '(' && str[i] == ')') ||
                   (st.top() == '{' && str[i] == '}') ||
                   (st.top() == '[' && str[i] == ']')) {
                    st.pop();
                } else { // no match
                    return false;
                }
            }
        }
        return st.size() == 0;
    }
};

int main() {
    Solution sol;
    string test1 = "()[]{}";
    string test2 = "([)]";
    string test3 = "{[]}";
    string test4 = "((())";
    string test5 = "";

    cout << "Test 1: " << test1 << " -> " << (sol.isValid(test1) ? "Valid" : "Invalid") << endl;
    cout << "Test 2: " << test2 << " -> " << (sol.isValid(test2) ? "Valid" : "Invalid") << endl;
    cout << "Test 3: " << test3 << " -> " << (sol.isValid(test3) ? "Valid" : "Invalid") << endl;
    cout << "Test 4: " << test4 << " -> " << (sol.isValid(test4) ? "Valid" : "Invalid") << endl;
    cout << "Test 5: " << test5 << " -> " << (sol.isValid(test5) ? "Valid" : "Invalid") << endl;

    return 0;
}*/


//Stock span problem

/*#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    //stock prices
    vector<int> price={100,80,60,70,60,75,85};

    //solution
    vector<int> ans(price.size(),0);
    stack<int> s;

    for(int i=0;i<price.size();i++){
        while(s.size()>0 && price[s.top()] <=price[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i]= i+1;
        }else{
            ans[i] =i-s.top();  //i-prevhigh
        }
        s.push(i);
    }
    //print ans val
    for(int val:ans){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}*/

//Next greater element
/*#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    vector<int> arr={6,8,0,1,3};

    //next greater element
    stack<int> s;
    vector<int> ans(arr.size(),0);

    for(int i=arr.size()-1;i>=0;i--){
        while(s.size()>0 && s.top()<= arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i]=-1;
        }else{
            ans[i]=s.top();
        }
        s.push(arr[i]);
    }

    //print ans
    for(int val: ans){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}*/


//Next greater element (Leetcode Q496)
/*#include<iostream>
#include<vector>
#include<unordered_map>
#include<stack>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;  //nums2[i],NG
        stack<int> s;

        for(int i=nums2.size()-1;i>=0;i--){
            while(s.size()>0 && s.top() <= nums2[i]){
                s.pop();
            }

            if(s.empty()){
                m[nums2[i]]=-1;
            }else{
                m[nums2[i]]=s.top();
            }
            s.push(nums2[i]);
        }

        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(m[nums1[i]]);
        }

        return ans;
    }

    int main(){
        vector<int> nums1={4,1,2};
        vector<int> nums2={1,3,4,2};

        vector<int> ans = nextGreaterElement(nums1, nums2);

        for(int val:ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return 0;

    }*/


//Previous smaller element
/*#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> prevSmallerElement(vector<int> arr){
        vector<int> ans(arr.size(),0);
        stack<int> s;

        for(int i=0;i<arr.size();i++){
            while(s.size() >0 && s.top() >=arr[i]){
                s.pop();
            }
            if(s.empty()){
                ans[i]=-1;
            }else{
                ans[i]=s.top();
            }
            s.push(arr[i]);
        }
        return ans;
}
int main(){
    vector<int> arr={3,1,0,8,6};

    vector<int> ans=prevSmallerElement(arr);

    for(int val: ans){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}*/

//Design a Min Stack
/*#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

class MinStack{
public:
   stack<pair<int,int>> s;
   MinStack(){

   }

   void push(int val){
       if(s.empty()){
        s.push({val,val});
       }else{
        int minVal=min(val,s.top().second);
        s.push({val,minVal});
       }
   }

   void pop(){
       s.pop();
   }

   int top(){
      return s.top().first;
   }

   int getMin(){
      return s.top().second;
   }
};

int main() {
    MinStack minStack;

    // Push elements onto the stack
    minStack.push(3);
    minStack.push(5);
    cout << "Current Min: " << minStack.getMin() << endl; // 3

    minStack.push(2);
    minStack.push(1);
    cout << "Current Min: " << minStack.getMin() << endl; // 1

    minStack.pop();
    cout << "Top after pop: " << minStack.top() << endl;  // 2
    cout << "Current Min: " << minStack.getMin() << endl; // 2

    minStack.pop();
    cout << "Top after pop: " << minStack.top() << endl;  // 5
    cout << "Current Min: " << minStack.getMin() << endl; // 3

    return 0;
}*/


//more optimal approach(Leetcode Q155) design a min stack
/*#include<iostream>
#include<stack>
using namespace std;

class MinStack {
public:
    stack<long long int> s;
    long long int minVal;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push(val);
            minVal=val;
        }else{
            if(val<minVal){
                s.push((long long)2*val - minVal);
                minVal=val;
            }else{
                s.push(val);
            }
        }
    }
    
    void pop() {
        if(s.top()<minVal){
            minVal=2*minVal - s.top();
        }
        s.pop();
    }
    
    int top() {
        if(s.top()<minVal){
            return minVal;
        }
        else{
            return s.top();
        }
    }
    
    int getMin() {
        return minVal;
    }
};

int main() {
    MinStack minStack;

    minStack.push(3);
    cout << "Pushed 3, Min: " << minStack.getMin() << endl;

    minStack.push(5);
    cout << "Pushed 5, Min: " << minStack.getMin() << endl;

    minStack.push(2);
    cout << "Pushed 2, Min: " << minStack.getMin() << endl;

    minStack.push(1);
    cout << "Pushed 1, Min: " << minStack.getMin() << endl;

    cout << "Top: " << minStack.top() << endl;
    minStack.pop();
    cout << "Popped, New Min: " << minStack.getMin() << endl;

    cout << "Top: " << minStack.top() << endl;
    minStack.pop();
    cout << "Popped, New Min: " << minStack.getMin() << endl;

    minStack.push(0);
    cout << "Pushed 0, Min: " << minStack.getMin() << endl;

    return 0;
}*/

//Leetcode(84) largest rectangle in histogram
/*#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    vector<int> left(n, 0);   // index of nearest smaller to left
    vector<int> right(n, 0);  // index of nearest smaller to right
    stack<int> s;

    // Find nearest smaller to right
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && heights[s.top()] >= heights[i]) {
            s.pop();
        }
        right[i] = s.empty() ? n : s.top();
        s.push(i);
    }

    // Clear stack for next iteration
    while (!s.empty()) s.pop();

    // Find nearest smaller to left
    for (int i = 0; i < n; i++) {
        while (!s.empty() && heights[s.top()] >= heights[i]) {
            s.pop();
        }
        left[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int width = right[i] - left[i] - 1;
        int currArea = heights[i] * width;
        ans = max(ans, currArea);
    }
    return ans;
}

int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};

    int maxArea = largestRectangleArea(heights);

    cout << "The largest rectangle area in the histogram is: " << maxArea << endl;

    return 0;
}*/


//Leetcode(503) NEXT GREATER ELEMENT II
/*#include<iostream>
#include<vector>
#include<stack>
using namespace std;


vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,-1);
        stack<int> s;

        for(int i=2*n-1;i>=0;i--){
            while(s.size() >0 && nums[s.top()]<=nums[i%n]){
                s.pop();
            }

            ans[i%n]=s.empty()?-1:nums[s.top()];
            s.push(i%n);
        }
        return ans;
    }
int main() {
    vector<int> nums = {1,2,3,4,3};
    vector<int> result = nextGreaterElements(nums);

    cout << "Next Greater Elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}*/


//Trapping rainwater approach(optimal)
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int trap(vector<int>& height){
    int n=height.size();
    vector<int> lmax(n,0);
    vector<int> rmax(n,0);

    lmax[0]=height[0];
    rmax[n-1]=height[n-1];

    for(int i=1;i<n;i++){
        lmax[i]=max(lmax[i-1],height[i]);
    }
    for(int i=n-2;i>=0;i--){
        rmax[i]=max(rmax[i+1],height[i]);
    }

    int ans=0;
    for(int i=0;i<n;i++){
        ans+=min(lmax[i],rmax[i]) - height[i];
    }

    return ans;
}

int main() {
    vector<int> height = {4,2,0,3,2,5};
    int water = trap(height);
    cout << "Trapped water: " << water << endl;
    return 0;
}*/

//most optimized approach(Leetcode Q42)
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    int ans = 0;
    int l = 0;
    int r = n - 1;
    int lmax = 0, rmax = 0;

    while (l < r) {
        lmax = max(lmax, height[l]);
        rmax = max(rmax, height[r]);

        if (lmax < rmax) {
            ans += lmax - height[l];
            l++;
        } else {
            ans += rmax - height[r];
            r--;
        }
    }
    return ans;
}

int main() {
    vector<int> height = {4,2,0,3,2,5};
    int result = trap(height);
    cout << "Trapped water: " << result << endl;
    return 0;
}*/

//Celebrity problem
/*#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int getCelebrity(vector<vector<int>> arr){
    int n=arr.size();
    stack<int> s;

    for(int i=0;i<n;i++){
        s.push(i);
    }
    while(s.size()>1){
        int i=s.top();
        s.pop();

        int j=s.top();
        s.pop();

        if(arr[i][j]==0){
            s.push(i);
        }else{
            s.push(j);
        }
    }

    int celeb=s.top();

    for(int i=0;i<n;i++){
        if((i!=celeb) && (arr[i][celeb]==0 || arr[celeb][i]==1)){
            return -1;
        }

    }
    return celeb;

}
int main(){
    vector<vector<int>> arr={{0,1,0},{0,0,0},{0,1,0}};
    int ans=getCelebrity(arr);

    cout<<"celebrity is: "<<ans<<endl;

    return 0;
}*/

//Design LRU  Cache(Leetcode Q146)
/*#include <iostream>
#include <unordered_map>
using namespace std;

class LRUCache {
public:
    class Node {
    public:
        int key, val;
        Node* prev;
        Node* next;

        Node(int k, int v) {
            key = k;
            val = v;
            prev = next = NULL;
        }
    };

    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);
    unordered_map<int, Node*> m;
    int limit;

    void addNode(Node* newNode) { // O(1)
        Node* oldNext = head->next;
        head->next = newNode;
        oldNext->prev = newNode;
        newNode->next = oldNext;
        newNode->prev = head;
    }

    void delNode(Node* oldNode) { // O(1)
        Node* oldPrev = oldNode->prev;
        Node* oldNext = oldNode->next;
        oldPrev->next = oldNext;
        oldNext->prev = oldPrev;
    }

    LRUCache(int capacity) {
        limit = capacity;
        head->next = tail;
        tail->prev = head;
    }

    int get(int key) { // O(1)
        if (m.find(key) == m.end()) {
            return -1;
        }
        Node* ansNode = m[key];
        int ans = ansNode->val;

        m.erase(key);
        delNode(ansNode);

        addNode(ansNode);
        m[key] = ansNode;

        return ans;
    }

    void put(int key, int val) {
        if (m.find(key) != m.end()) {
            Node* oldNode = m[key];
            delNode(oldNode);
            m.erase(key);
        }

        if (m.size() == limit) {
            // delete LRU data
            m.erase(tail->prev->key);
            delNode(tail->prev);
        }
        Node* newNode = new Node(key, val);
        addNode(newNode);
        m[key] = newNode;
    }
};

int main() {
    LRUCache cache(2); // capacity 2

    cache.put(1, 1);
    cache.put(2, 2);
    cout << "get(1): " << cache.get(1) << endl; // returns 1

    cache.put(3, 3); // evicts key 2
    cout << "get(2): " << cache.get(2) << endl; // returns -1 (not found)

    cache.put(4, 4); // evicts key 1
    cout << "get(1): " << cache.get(1) << endl; // returns -1 (not found)
    cout << "get(3): " << cache.get(3) << endl; // returns 3
    cout << "get(4): " << cache.get(4) << endl; // returns 4

    return 0;
}*/

//-------------QUEUE-------------------//
//creating Queue from scratch using LL

/*#include<iostream>
#include<vector>
using namespace std;

class Node{
public: 
     int data;
     Node* next;

     Node(int val){
        data=val;
        next=NULL;
     }
};

class Queue{
     Node* head;
     Node* tail;

public:
    Queue(){
        head=tail=NULL;
    }

    void push(int data){  //insert data at tail
        Node* newNode=new Node(data);
        
        if(empty()){
             head=tail=newNode;
        }else{
             tail->next=newNode;
             tail=newNode;
        }
    }

    void pop(){  //O(1)
          if(empty()){
            cout<<"LL is EMPTY\n";
            return;
          }

          Node* temp=head;
          head=head->next;
          delete temp;
    }

    int front(){  //O(1)
          if(empty()){
            cout<<"LL is EMPTY\n";
            return -1;
          }

          return head->data;
    }

    bool empty(){  //O(1)
         return head==NULL;
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}*/

//Queue using STL
/*#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}*/

//Deque using STL
/*#include<iostream>
#include<vector>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    dq.push_front(4);

    dq.pop_back();
    cout<<dq.front()<<" "<<dq.back()<<endl;
    return 0;
}*/

//Circular Queue
/*#include<iostream>
using namespace std;

class CircularQueue{
    int* arr;
    int currSize,cap;
    int f,r;

public:
   CircularQueue(int size){  //constructor
    cap=size;
    arr=new int[cap];
    currSize=0;
    f=0;
    r=-1;
   }

   void push(int data){   //O(1)
        if(currSize==cap){
            cout<<"CQ is full\n";
            return;
        }

        r=(r+1)%cap;
        arr[r]=data;
        currSize++;
   }
   
   void pop(){   //O(1)
       if(empty()){
        cout<<"CQ is empty\n";
        return;
       }

       f=(f+1)%cap;
       currSize--;
   }

   int front(){   //O(1)
        if(empty()){
        cout<<"CQ is empty\n";
        return -1;
       }
       return arr[f]; 
   }

   bool empty(){   //O(1)
      return currSize==0;
   }

   void printArr(){
       for(int i=0;i<cap;i++){
           cout<<arr[i]<<" ";
       }
       cout<<endl;
   }
};
int main(){
    CircularQueue cq(3);

    cq.push(1);
    cq.push(2);
    cq.push(3);
    
    cq.pop();
    cq.push(4);
    
    cq.printArr();

    while(!cq.empty()){     //circular queue
        cout<<cq.front()<<" ";
        cq.pop();
    }
    cout<<endl;
    return 0;
}*/

//Leetcode(Q225) Implement Stack using Queue
#include <iostream>
#include <queue>
using namespace std;

// Your MyStack class here
/*class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    MyStack() {
    }
    
    void push(int x) {  // O(n)
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
        int ans = q1.front();
        q1.pop();
        return ans;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};

int main() {
    MyStack st;
    
    // Push elements
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << endl; // Should print 30

    cout << "Pop element: " << st.pop() << endl; // Should print 30

    cout << "Top element after pop: " << st.top() << endl; // Should print 20

    st.push(40);
    cout << "Top element after pushing 40: " << st.top() << endl; // Should print 40

    // Pop all elements
    while(!st.empty()) {
        cout << "Popped: " << st.pop() << endl;
    }

    cout << "Is stack empty? " << (st.empty() ? "Yes" : "No") << endl; // Should print Yes

    return 0;
}*/

//implement queue using stack(Leetcode Q232)
/*#include <iostream>
#include <stack>
using namespace std;

// Your MyQueue class
class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
    }
    
    void push(int x) {  // O(n)
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int ans = s1.top();
        s1.pop();
        return ans;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};

int main() {
    MyQueue q;

    // Push elements
    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Front element: " << q.peek() << endl; // Should print 1

    cout << "Pop element: " << q.pop() << endl;    // Should print 1

    cout << "Front element after pop: " << q.peek() << endl; // Should print 2

    q.push(4);
    cout << "Front element after pushing 4: " << q.peek() << endl; // Should print 2

    // Pop all elements
    while(!q.empty()) {
        cout << "Popped: " << q.pop() << endl;
    }

    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl; // Should print Yes

    return 0;
}*/

//First unique character in string (Leetcode Q387)
/*#include <iostream>
#include <unordered_map>
#include <queue>
#include <string>
using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> m;
    queue<int> q;

    for (int i = 0; i < s.size(); i++) {
        if (m.find(s[i]) == m.end()) {
            q.push(i);
        }
        m[s[i]]++;

        while (!q.empty() && m[s[q.front()]] > 1) {
            q.pop();
        }
    }
    return q.empty() ? -1 : q.front();
}

// Example usage
int main() {
    string s = "leetcode";
    cout << firstUniqChar(s) << endl; // Output: 0
    return 0;
}*/

//Sliding window maximum(Leetcode Q239)
/*#include <iostream>
#include <vector>
#include <deque>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    deque<int> dq;
    vector<int> res;

    // Process the first window
    for (int i = 0; i < k; i++) {
        while (!dq.empty() && nums[dq.back()] <= nums[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    // Process the rest of the windows
    for (int i = k; i < nums.size(); i++) {
        // The front of the deque is the largest element of the previous window
        res.push_back(nums[dq.front()]);

        // Remove indices that are out of the current window
        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        // Remove indices whose corresponding values are less than nums[i]
        while (!dq.empty() && nums[dq.back()] <= nums[i]) {
            dq.pop_back();
        }

        dq.push_back(i);
    }

    // Add the maximum for the last window
    res.push_back(nums[dq.front()]);

    return res;
}

// Example usage
int main() {
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    vector<int> result = maxSlidingWindow(nums, k);
    for (int x : result) cout << x << " ";
    // Output: 3 3 5 5 6 7
    return 0;
}*/

//Gas Station problem (Leetcode Q134)
/*#include <iostream>
#include <vector>
using namespace std;

// Function to determine the starting gas station index
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int totalGas = 0, totalCost = 0;
    int start = 0, currGas = 0;

    for (int i = 0; i < gas.size(); i++) {
        totalGas += gas[i];
        totalCost += cost[i];
        currGas += gas[i] - cost[i];

        if (currGas < 0) {
            start = i + 1;
            currGas = 0;
        }
    }

    if (totalGas < totalCost) {
        return -1;
    }

    return start;
}

int main() {
    // Sample input
    vector<int> gas = {1, 2, 4,5,9};
    vector<int> cost = {3, 4,1,10,1};

    // Call the function
    int result = canCompleteCircuit(gas, cost);

    // Output the result
    if (result != -1) {
        cout << "You can start at gas station index: " << result << endl;
    } else {
        cout << "It is not possible to complete the circuit." << endl;
    }

    return 0;
}*/

//----------------------BINARY TREE-------------------------

/*#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
public: 
     int data;
     Node* left;
     Node* right;

     Node(int val){
        data=val;
        left=right=NULL;
     }
};

static int idx=-1;
Node* buildTree(vector<int> preorder){
        idx++;

        if(preorder[idx]==-1){
            return NULL;
        }

        Node* root=new Node(preorder[idx]);
        root->left = buildTree(preorder);//LEFT
        root->right = buildTree(preorder);//RIGHT

        return root;
}
//preorder traversal
void preOrder(Node* root){  //O(n)
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

//Inorder traversal

void inorder(Node* root){ //O(n)
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//postorder traversal
void postOrder(Node* root){ //O(n)
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

//Level Order traversal
void levelOrder(Node* root){
      queue<Node*> q;

      q.push(root);

      while(q.size()>0){
        Node* curr=q.front();
        q.pop();

        cout<<curr->data<<" ";

        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
      }
      cout<<endl;
}

//print them level wise
void levelprint(Node* root){
      queue<Node*> q;

      q.push(root);
      q.push(NULL);

      while(q.size()>0){
        Node* curr=q.front();
        q.pop();

        if(curr==NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }else{
                break;
            }
        }

        cout<<curr->data<<" ";

        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
      }
      cout<<endl;
}
int main(){
    
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildTree(preorder);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;

    preOrder(root);
    cout<<endl;

    inorder(root);
    cout<<endl;

    postOrder(root);
    cout<<endl;

    levelOrder(root);

    levelprint(root);
    return 0;
}*/

//Leetcode Q-100  identical tree

/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Your TreeNode and isSameTree function
struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

bool isSameTree(TreeNode* p, TreeNode* q) {
    if (p == NULL || q == NULL) return p == q;
    bool isLeftSame = isSameTree(p->left, q->left);
    bool isRightSame = isSameTree(p->right, q->right);
    return isLeftSame && isRightSame && (p->val == q->val);
}

// Helper to build tree from vector (-1 = null)
TreeNode* buildTree(const vector<int>& nodes) {
    if (nodes.empty() || nodes[0] == -1) return nullptr;
    TreeNode* root = new TreeNode(nodes[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while (!q.empty() && i < nodes.size()) {
        TreeNode* curr = q.front(); q.pop();
        if (nodes[i] != -1) {
            curr->left = new TreeNode(nodes[i]);
            q.push(curr->left);
        }
        i++;
        if (i < nodes.size() && nodes[i] != -1) {
            curr->right = new TreeNode(nodes[i]);
            q.push(curr->right);
        }
        i++;
    }
    return root;
}

int main() {
    vector<int> values1 = {1, 2, 3};       
    vector<int> values2 = {1, 2, 3};
            
    vector<int> values3 = {1, 3, 2};              

    TreeNode* tree1 = buildTree(values1);
    TreeNode* tree2 = buildTree(values2);
    TreeNode* tree3 = buildTree(values3);

    cout << "Tree 1 and Tree 2 are " << (isSameTree(tree1, tree2) ? "same" : "different") << endl;
    cout << "Tree 1 and Tree 3 are " << (isSameTree(tree1, tree3) ? "same" : "different") << endl;

    // (Add code to free memory if desired)

    return 0;
}*/

//Leetcode Q572 Subtree of another tree
/*#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to check if two binary trees are identical
bool isIdentical(TreeNode* p, TreeNode* q){
    if(p == NULL || q == NULL){
        return p == q;  
    }
    return p->val == q->val
        && isIdentical(p->left, q->left) 
        && isIdentical(p->right, q->right);
}

// Function to check if one tree is a subtree of another
bool isSubtree(TreeNode* root, TreeNode* subRoot) {
    if(root == NULL || subRoot == NULL){
        return root == subRoot;
    }

    if(root->val == subRoot->val && isIdentical(root, subRoot)){
        return true;
    }

    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}

// Helper: Build tree from vector (level order), -1 = NULL
TreeNode* buildTree(const vector<int>& nodes) {
    if (nodes.empty() || nodes[0] == -1) return nullptr;

    TreeNode* root = new TreeNode(nodes[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while (!q.empty() && i < nodes.size()) {
        TreeNode* curr = q.front(); q.pop();

        // Left child
        if (i < nodes.size() && nodes[i] != -1) {
            curr->left = new TreeNode(nodes[i]);
            q.push(curr->left);
        }
        i++;

        // Right child
        if (i < nodes.size() && nodes[i] != -1) {
            curr->right = new TreeNode(nodes[i]);
            q.push(curr->right);
        }
        i++;
    }

    return root;
}

// Main function to test
int main() {
    // Tree: [3, 4, 5, 1, 2]
    vector<int> mainTree = {3, 4, 5, 1, 2};
    // Subtree: [4, 1, 2]
    vector<int> subTree = {4, 1, 2};

    TreeNode* root = buildTree(mainTree);
    TreeNode* subRoot = buildTree(subTree);

    if (isSubtree(root, subRoot)) {
        cout << "subRoot is a subtree of root" << endl;
    } else {
        cout << "subRoot is NOT a subtree of root" << endl;
    }

    // Memory cleanup can be added if needed

    return 0;
}*/

//Leetcode Q543  Diameter of a binary tree
/*#include <iostream>
#include <algorithm>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int ans = 0;

int height(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }

    int leftHt = height(root->left);
    int rightHt = height(root->right);

    ans = max(ans, leftHt + rightHt);  // Update the diameter
    return max(leftHt, rightHt) + 1;   // Return height of current subtree
}

int diameterOfBinaryTree(TreeNode* root) {
    ans = 0;               // Reset global variable before call
    height(root);
    return ans;
}

// Helper function to build a simple binary tree for demonstration
TreeNode* buildSampleTree() {
    
        Sample Tree:
              1
             / \
            2   3
           / \     
          4   5    

        Diameter = 3 (Path: 4 -> 2 -> 1 -> 3)
    
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    return root;
}

int main() {
    TreeNode* root = buildSampleTree();
    int diameter = diameterOfBinaryTree(root);
    cout << "Diameter of the binary tree: " << diameter << endl;

    // Free allocated memory (optional cleanup)
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}*/

//Height of a binary tree
/*#include<iostream>
#include<vector>
using namespace std;

class Node{
public: 
     int data;
     Node* left;
     Node* right;

     Node(int val){
        data=val;
        left=right=NULL;
     }
};

static int idx=-1;
Node* buildTree(vector<int> preorder){
        idx++;

        if(preorder[idx]==-1){
            return NULL;
        }

        Node* root=new Node(preorder[idx]);
        root->left = buildTree(preorder);//LEFT
        root->right = buildTree(preorder);//RIGHT

        return root;
}
//height of a binary tree
int height(Node* root){
     if(root==NULL){
        return 0;
     }

     int leftHt=height(root->left);
     int rightHt=height(root->right);

     return max(leftHt,rightHt)+1;
}
int main(){
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildTree(preorder);

    cout<<"Height: "<<height(root)<<endl;
    return 0;
}*/

//Count of Nodes
/*#include<iostream>
#include<vector>
using namespace std;

class Node{
public: 
     int data;
     Node* left;
     Node* right;

     Node(int val){
        data=val;
        left=right=NULL;
     }
};

static int idx=-1;
Node* buildTree(vector<int> preorder){
        idx++;

        if(preorder[idx]==-1){
            return NULL;
        }

        Node* root=new Node(preorder[idx]);
        root->left = buildTree(preorder);//LEFT
        root->right = buildTree(preorder);//RIGHT

        return root;
}
//count node
int count(Node* root){
      if(root==NULL){
        return 0;
      }
      int leftCount=count(root->left);
      int rightCount=count(root->right);

      return leftCount+rightCount+1;
}
int main(){
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildTree(preorder);

    cout<<"Number of Nodes: "<<count(root)<<endl;
    return 0;
}*/

//Sum of Nodes
/*#include<iostream>
#include<vector>
using namespace std;

class Node{
public: 
     int data;
     Node* left;
     Node* right;

     Node(int val){
        data=val;
        left=right=NULL;
     }
};

static int idx=-1;
Node* buildTree(vector<int> preorder){
        idx++;

        if(preorder[idx]==-1){
            return NULL;
        }

        Node* root=new Node(preorder[idx]);
        root->left = buildTree(preorder);//LEFT
        root->right = buildTree(preorder);//RIGHT

        return root;
}

int sumOfNodes(Node* root){
       if(root==NULL){
        return 0;
      }

      int leftSum=sumOfNodes(root->left);
      int rightSum=sumOfNodes(root->right);

      return leftSum+rightSum+root->data;
}
int main(){
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildTree(preorder);

    cout<<"Sum of Nodes: "<<sumOfNodes(root)<<endl;
    return 0;
}*/

//Top view of a binary tree
/*#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

class Node{
public: 
     int data;
     Node* left;
     Node* right;

     Node(int val){
        data=val;
        left=right=NULL;
     }
};

static int idx=-1;
Node* buildTree(vector<int> preorder){
        idx++;

        if(preorder[idx]==-1){
            return NULL;
        }

        Node* root=new Node(preorder[idx]);
        root->left = buildTree(preorder);//LEFT
        root->right = buildTree(preorder);//RIGHT

        return root;
}

void topView(Node* root){
    //level order traversal
     queue<pair<Node*,int>>q; //(node,HD)
     map<int,int> m; //<HD,node val>
     q.push({root,0});

     while(q.size()>0){
        Node* curr=q.front().first;
        int currHD=q.front().second;
        q.pop();

        if(m.find(currHD)==m.end()){
            m[currHD]=curr->data;
        }

        if(curr->left !=NULL){
            q.push({curr->left,currHD-1});
        }

        if(curr->right !=NULL){
            q.push({curr->right,currHD+1});
        }
     }
     for(auto it:m){
        cout<<it.second<<" ";
     }
     cout<<endl;
}
int main(){
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildTree(preorder);

    topView(root);
    return 0;
}*/


//BottomView of binary tree
/*#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node* buildTree(const vector<int>& preorder) {
    idx++;
    if (idx >= preorder.size() || preorder[idx] == -1) {
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
}




void bottomView(Node* root) {
    if (!root) return;
    queue<pair<Node*, int>> q;
    map<int, int> m;
    q.push({root, 0});

    while (!q.empty()) {
        Node* curr = q.front().first;
        int currHD = q.front().second;
        q.pop();

        // Always overwrite for bottom view
        m[currHD] = curr->data;

        if (curr->left)  q.push({curr->left, currHD - 1});
        if (curr->right) q.push({curr->right, currHD + 1});
    }

    for (auto it : m) {
        cout << it.second << " ";
    }
    cout << endl;
}

int main() {
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    // Reset the static index before building
    idx = -1;
    Node* root = buildTree(preorder);

    

    cout << "Bottom View: ";
    bottomView(root);

    return 0;
}*/

//Kth level of a binary tree
/*#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

class Node{
public: 
     int data;
     Node* left;
     Node* right;

     Node(int val){
        data=val;
        left=right=NULL;
     }
};

static int idx=-1;
Node* buildTree(vector<int> preorder){
        idx++;

        if(preorder[idx]==-1){
            return NULL;
        }

        Node* root=new Node(preorder[idx]);
        root->left = buildTree(preorder);//LEFT
        root->right = buildTree(preorder);//RIGHT

        return root;
}

void KthLevel(Node* root,int k){
      if(root==NULL){
        return;
      }
      if(k==1){
        cout<<root->data<<" ";
        return;
      }
      KthLevel(root->left,k-1);
      KthLevel(root->right,k-1);
}
int main(){
    vector<int> preorder={1,2,7,-1,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildTree(preorder);

    KthLevel(root,3);
    return 0;
}*/

//Lowest common Ancestor (Leetcode-Q236)
/*#include<iostream>
#include<vector>

using namespace std;

class Node{
public: 
     int data;
     Node* left;
     Node* right;

     Node(int val){
        data=val;
        left=right=NULL;
     }
};

static int idx=-1;
Node* buildTree(vector<int> preorder){
        idx++;

        if(preorder[idx]==-1){
            return NULL;
        }

        Node* root=new Node(preorder[idx]);
        root->left = buildTree(preorder);//LEFT
        root->right = buildTree(preorder);//RIGHT

        return root;
}
Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
        if(root==NULL){
            return NULL;
        }
        if(root->data==p->data || root->data==q->data){
            return root;
        }

        Node* leftLCA=lowestCommonAncestor(root->left,p,q);
        Node* rightLCA=lowestCommonAncestor(root->right,p,q);

        if(leftLCA && rightLCA){
            return root;
        }else if(leftLCA !=NULL){
            return leftLCA;
        }else{
            return rightLCA;
        }
    }
    int main() {
    vector<int> preorder = {3, 5, 6, -1, -1, 2, -1, -1, 1, 0, -1, -1, 8, -1, -1};
    Node* root = buildTree(preorder);

    // Let's find LCA of Node with value 6 and 2
    Node* p = root->left->left;  // Node 6
    Node* q = root->left->right; // Node 2

    Node* lca = lowestCommonAncestor(root, p, q);
    if(lca) {
        cout << "Lowest Common Ancestor: " << lca->data << endl;
    } else {
        cout << "No Common Ancestor Found" << endl;
    }

    return 0;
}*/

//Build Tree from Preorder and Inorder
/*#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    // Searches for a value in the inorder vector between indices left and right
    int search(vector<int>& inorder, int left, int right, int val) {
        for (int i = left; i <= right; i++) {
            if (inorder[i] == val) {
                return i;
            }
        }
        return -1; // Value not found (should not happen for valid input)
    }

    // Helper function to build the tree recursively
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int& preIdx, int left, int right) {
        if (left > right) {
            return NULL;
        }

        // Create root node with current value in preorder
        TreeNode* root = new TreeNode(preorder[preIdx]);

        // Find index of this root in inorder traversal
        int inIdx = search(inorder, left, right, preorder[preIdx]);
        preIdx++;  // Move to next preorder index

        // Build left and right subtrees recursively
        root->left = helper(preorder, inorder, preIdx, left, inIdx - 1);
        root->right = helper(preorder, inorder, preIdx, inIdx + 1, right);

        return root;
    }

    // Public function to start construction
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIdx = 0;
        return helper(preorder, inorder, preIdx, 0, inorder.size() - 1);
    }
};

// Utility: Print tree in inorder (for verification)
void printInorder(TreeNode* root) {
    if (root == NULL) return;
    printInorder(root->left);
    cout << root->val << " ";
    printInorder(root->right);
}

int main() {
    // Sample Input:
    // preorder = [3, 9, 20, 15, 7]
    // inorder  = [9, 3, 15, 20, 7]
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};

    Solution solution;
    TreeNode* root = solution.buildTree(preorder, inorder);

    // Output constructed tree's inorder to verify correctness
    cout << "Inorder traversal of the built tree: ";
    printInorder(root);  // Should print: 9 3 15 20 7
    cout << endl;

    return 0;
}*/

//Transform to Sum tree
/*#include<iostream>
#include<vector>

using namespace std;

class Node{
public: 
     int data;
     Node* left;
     Node* right;

     Node(int val){
        data=val;
        left=right=NULL;
     }
};

static int idx=-1;
Node* buildTree(vector<int> preorder){
        idx++;

        if(preorder[idx]==-1){
            return NULL;
        }

        Node* root=new Node(preorder[idx]);
        root->left = buildTree(preorder);//LEFT
        root->right = buildTree(preorder);//RIGHT

        return root;
}
void printPreorder(Node*root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int sumTree(Node* root){  //O(n)
       if(root==NULL){
        return 0;
       }

       int leftSum=sumTree(root->left);
       int rightSum=sumTree(root->right);
       root->data+=leftSum+rightSum;

       return root->data;
}
int main(){
    vector<int> preorder={1,2,7,-1,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildTree(preorder);

    cout << "Before conversion: ";
    printPreorder(root);
    cout << endl;

    sumTree(root);

    cout << "After conversion: ";
    printPreorder(root);
    cout << endl;
    return 0;
}*/

//Binary tree path (Leetcode Q 257)
/*#include <iostream>
#include <vector>
#include <string>
using namespace std;

//  TreeNode definition
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = right = NULL;
    }
};

// Helper function to collect all root-to-leaf paths
void allPaths(TreeNode* root, string path, vector<string>& ans) {
    if (root->left == NULL && root->right == NULL) {
        ans.push_back(path);
        return;
    }

    if (root->left) {
        allPaths(root->left, path + "->" + to_string(root->left->val), ans);
    }

    if (root->right) {
        allPaths(root->right, path + "->" + to_string(root->right->val), ans);
    }
}

//  Main function to be called
vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> ans;
    if (root == NULL) return ans;

    string path = to_string(root->val);
    allPaths(root, path, ans);
    return ans;
}

// Optional: Sample tree builder
TreeNode* buildSampleTree() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);
    return root;
}

//  Main
int main() {
    TreeNode* root = buildSampleTree();

    vector<string> paths = binaryTreePaths(root);

    cout << "Root-to-leaf paths:" << endl;
    for (string path : paths) {
        cout << path << endl;
    }

    return 0;
}*/

//Maximum width of a binary tree(Leetcode Q662)
/*#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

// TreeNode definition
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = right = NULL;
    }
};

//Function to compute the width of a binary tree


    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,unsigned long long>> q;
        q.push({root,0});
        int maxWidth=0;

        while(q.size()>0){
            int currLevelSize=q.size();
            unsigned long long  stIdx=q.front().second;
            unsigned long long endIdx=q.back().second;

            maxWidth=max(maxWidth,(int)(endIdx-stIdx+1));

            for(int i=0;i<currLevelSize;i++){
                auto curr=q.front();
                q.pop();

                if(curr.first->left){
                    q.push({curr.first->left,curr.second*2+1});
                }
                if(curr.first->right){
                    q.push({curr.first->right,curr.second*2+2});
                }
            }
        }
        return maxWidth;
    }



TreeNode* buildSampleTree() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(3);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(3);
    root->right->right = new TreeNode(9);
    return root;
}

//  Main function for testing
int main() {
    TreeNode* root = buildSampleTree();
    int width = widthOfBinaryTree(root);
    cout << "Maximum width of the binary tree: " << width << endl;
    return 0;
}*/

//Leetcode Q94 Morris inorder traversal

/*#include<iostream>
#include<vector>

using namespace std;

class Node{
public: 
     int data;
     Node* left;
     Node* right;

     Node(int val){
        data=val;
        left=right=NULL;
     }
};

static int idx=-1;
Node* buildTree(vector<int> preorder){
        idx++;

        if(preorder[idx]==-1){
            return NULL;
        }

        Node* root=new Node(preorder[idx]);
        root->left = buildTree(preorder);//LEFT
        root->right = buildTree(preorder);//RIGHT

        return root;
}
vector<int> inorderTraversal(Node* root) {
        vector<int>ans;
        Node* curr=root;

        while(curr!=NULL){
            if(curr->left==NULL){
                ans.push_back(curr->data);
                curr=curr->right;
            }else{
                //find IP
                Node* IP=curr->left;
                while(IP->right!=NULL && IP->right!=curr){
                    IP=IP->right;
                }

                if(IP->right==NULL){
                    IP->right=curr;  //create
                    curr=curr->left;
                }else{
                    IP->right=NULL; //destroy
                    ans.push_back(curr->data);
                    curr=curr->right;
                }
            }
        }

        return ans;
    }
    int main() {
    vector<int> preorder = {1,2,7,-1,-1,-1,3,4,-1,-1,5,-1,-1};
    idx = -1; // Reset the static/global idx, or make idx local as shown above
    Node* root = buildTree(preorder);

    vector<int> inorder = inorderTraversal(root);
    for(int val : inorder) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}*/

//Flatten Binary tree to linked list(Leetcode Q114)
/*#include<iostream>
#include<vector>

using namespace std;

class Node{
public: 
     int data;
     Node* left;
     Node* right;

     Node(int val){
        data=val;
        left=right=NULL;
     }
};

static int idx=-1;
Node* buildTree(vector<int> preorder){
        idx++;

        if(preorder[idx]==-1){
            return NULL;
        }

        Node* root=new Node(preorder[idx]);
        root->left = buildTree(preorder);//LEFT
        root->right = buildTree(preorder);//RIGHT

        return root;
}
Node* nextRight=NULL;
    
void flatten(Node* root) {
    if(root==NULL){
        return;
    }
    flatten(root->right);
    flatten(root->left);

    root->left=NULL;
    root->right=nextRight;
    nextRight=root;
}
void printRightLinkedList(Node* root) {
    while(root != NULL) {
        cout << root->data << " ";
        root = root->right;
    }
    cout << endl;
}
int main() {
    vector<int> preorder = {1,2,7,-1,-1,-1,3,4,-1,-1,5,-1,-1};
    idx = -1; 
    Node* root = buildTree(preorder);

   flatten(root);
   printRightLinkedList(root);
    return 0;

}*/

//--------------BST----------------
/*#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};
//build bst
Node* insert(Node* root,int val){
      if(root==NULL){
        return new Node(val);
      }
      if(val<root->data){
        root->left=insert(root->left,val);

      }else{
        root->right=insert(root->right,val);
      }

      return root;
}

Node* buildBST(vector<int> arr){
        Node* root=NULL;

        for(int val: arr){
            root=insert(root,val);
        }
        return root;
}
//Search in a bst
bool search(Node* root,int key){  //O(height)
    if(root==NULL){
        return true;
    }

    if(key< root->data){
        return search(root->left,key);
    }else{
        return search(root->right,key);
    }
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
//delete node
Node* getInorderSuccessor(Node* root){   //left most node in right subtree
       while(root !=NULL && root->left !=NULL){
        root=root->left;
       }
       return root;
}

Node* delNode(Node* root,int key){  //key=>val to delete
    if(root==NULL){
        return NULL;
    }
    if(key<root->data){
        root->left=delNode(root->left,key);
    }else if(key > root->data){
        root->right=delNode(root->right,key);
    }else{
        //key==root
        if(root->left==NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }else if(root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }else{  //2 children
            Node* IS=getInorderSuccessor(root->right);
            root->data=IS->data;
            root->right=delNode(root->right,IS->data);
        }

        
    }
    return root;
}

int main(){
    vector<int> arr={3,2,1,5,6,4};
    Node* root= buildBST(arr);
    cout<<"before: ";
    inorder(root);
    cout<<endl;

    cout<<search(root,5)<<endl;

    delNode(root,6);
    cout<<"after: ";
    inorder(root);
    cout<<endl;
    return 0;
}*/

//Sorted array to balanced BST(Leetcode Q108)
/*#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};

Node* helper(vector<int>& nums,int st,int end){
            if(st>end){
                return NULL;
            }
            int mid=st+(end-st)/2;
            Node* root=new Node(nums[mid]);

            root->left=helper(nums,st,mid-1);
            root->right=helper(nums,mid+1,end);

            return root;
    }
    Node* sortedArrayToBST(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
    }
    void inorderTraversal(Node* root) {
       if (!root) return;
       inorderTraversal(root->left);
       cout << root->data << " ";
       inorderTraversal(root->right);
}

int main() {
    // Sample sorted array
    vector<int> nums = {-10, -3, 0, 5, 9};

    
    Node* bstRoot = sortedArrayToBST(nums);

    // Print in-order traversal of BST
    cout << "In-order traversal of the BST: ";
    inorderTraversal(bstRoot);
    cout << endl;

    return 0;
}*/

//Validate Binary search tree(Leetcode Q98)
/*#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};
bool helper(Node* root,Node* min,Node* max){  //O(n)
        if(root==NULL){
            return true;
        }

        if(min !=NULL && root->data <= min->data){
            return false;
        }
        if(max !=NULL && root->data >= max->data){
            return false;
        }

        return helper(root->left,min,root)
                 &&helper(root->right,root,max);
    }
    bool isValidBST(Node* root) {
        return helper(root,NULL,NULL);
    }
    void inorder(Node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    vector<int> arr={3,2,1,5,6,4};
    Node* root = new Node(3);
    cout << "In-order traversal: ";
    inorder(root);
    cout << endl;

    if (isValidBST(root)) {
        cout << "The tree is a valid BST." << endl;
    } else {
        cout << "The tree is NOT a valid BST." << endl;
    }

    return 0;
}*/


//Minimum distance between BST nodes(Leetcode Q783)
/*#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};
Node* prev=NULL;

int minDiffInBST(Node* root,Node*& prev) {
    if(root==NULL){
        return INT_MAX;
    }

    int ans=INT_MAX;
    if(root->left != NULL){
        int leftMin=minDiffInBST(root->left,prev);
        ans=min(ans,leftMin);
    }

    if(prev != NULL){
        ans=min(ans, root->data - prev->data);
    }
    prev=root;

    if(root->right !=NULL){
        int rightMin=minDiffInBST(root->right,prev);
        ans=min(ans,rightMin);
    }

    return ans;
}
void inorder(Node* root){
    if(root==NULL){
       return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node* insertBST(Node* root, int val) {
    if (root == NULL) return new Node(val);
    if (val < root->data)
        root->left = insertBST(root->left, val);
    else
        root->right = insertBST(root->right, val);
    return root;
}
int main(){
    Node* root = NULL;
    vector<int> values = {83,62,42,52,82,88};
    for (int val : values) {
        root = insertBST(root, val);
    }

    cout << "Inorder traversal of BST: ";
    inorder(root);
    cout << endl;

    Node* prev = NULL; 
    int minDiff = minDiffInBST(root,prev);
    cout << "Minimum difference between any two nodes: " << minDiff << endl;

    return 0;
}*/


//Kth smallest element in a BST (Leetcode Q230)
/*#include<iostream>
#include<vector>

using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};
int prevOrder=0;
int kthSmallest(Node* root, int k) {
    if(root==NULL){
        return -1;
    }

    if(root->left){
        int leftAns=kthSmallest(root->left,k);
        if(leftAns !=-1){
             return leftAns;
        }
    }
    if(prevOrder +1==k){
        return root->data;
    }
    prevOrder+=1;

    if(root->right){
        int rightAns=kthSmallest(root->right,k);
        if(rightAns !=-1){
            return rightAns;
        }
    }
    return -1;
}
void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// BST insert helper function
Node* insertBST(Node* root, int val) {
    if (root == NULL) return new Node(val);
    if (val < root->data)
        root->left = insertBST(root->left, val);
    else
        root->right = insertBST(root->right, val);
    return root;
}

int main() {
    Node* root = NULL;
    vector<int> values = {5, 3, 6, 2, 4, 1};
    for (int val : values) {
        root = insertBST(root, val);
    }

    cout << "In-order traversal of BST: ";
    inorder(root);
    cout << endl;

    int k;
    cout << "Enter value of k: ";
    cin >> k;

    prevOrder = 0; // Reset global counter before each call
    int result = kthSmallest(root, k);

    if (result != -1)
        cout << k << "th smallest element is: " << result << endl;
    else
        cout << "Invalid value of k." << endl;

    return 0;
}*/

//Leetcode Q235 lowest common ancestor in BST
/*#include<iostream>
#include<vector>

using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};
// Insert a node in the BST
Node* insert(Node* root, int val) {
    if(root == NULL) {
        return new Node(val);
    }

    if(val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }

    return root;
}
Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
        if(root==NULL){
            return NULL;
        }
        if(root->data>p->data && root->data > q->data){
            return lowestCommonAncestor(root->left,p,q);
        } else if(root->data <p->data && root->data <q->data){
            return lowestCommonAncestor(root->right,p,q);
        }else{
            return root;
        }

}
// Helper function to find a node with given value
Node* findNode(Node* root, int val) {
    if(root == NULL || root->data == val) return root;
    if(val < root->data) return findNode(root->left, val);
    return findNode(root->right, val);
}

int main() {
    // Create root
    Node* root = NULL;

    // Insert nodes into the BST
    vector<int> values = {20, 10, 30, 5, 15, 25, 35};
    for(int val : values) {
        root = insert(root, val);
    }

    // Select two nodes to find their LCA
    int p_val = 5;
    int q_val = 15;

    Node* p = findNode(root, p_val);
    Node* q = findNode(root, q_val);

    if(p && q) {
        Node* lca = lowestCommonAncestor(root, p, q);
        cout << "Lowest Common Ancestor of " << p_val << " and " << q_val << " is: " << lca->data << endl;
    } else {
        cout << "One or both nodes not found in the tree." << endl;
    }

    return 0;
}*/

//Construcr BST from preorder (Leetcode Q1008)
/*#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
    
};


Node* helper(vector<int>& preorder,int &i,int bound){
        if(i>= preorder.size() || preorder[i]> bound){
            return NULL;
        }
        Node* root=new Node(preorder[i++]);
        root->left=helper(preorder,i,root->data);
        root->right=helper(preorder,i,bound);

        return root;
    }
Node* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return helper(preorder,i,INT_MAX);
}
// Inorder traversal to confirm BST structure
void inorderTraversal(Node* root) {
    if (root == NULL) return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    // Example preorder vector
    vector<int> preorder = {10, 5, 1, 7, 15, 12, 18};

    // Build BST from preorder traversal
    Node* root = bstFromPreorder(preorder);

    // Print inorder traversal to verify the structure
    cout << "Inorder Traversal of constructed BST: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}*/

//Merge 2 BST
/*#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
   int data;
   Node* left;
   Node* right;

   Node(int val){
    data=val;
    left=right=NULL;
   }
};

//insert a Node in a BST
Node* insert(Node* root,int val){
    if(root==NULL){
        return new Node(val);
    }

    if(val<root->data){
        root->left=insert(root->left,val);
    }else{
        root->right=insert(root->right,val);
    }

    return root;
}

Node* buildBST(vector<int> arr){
    Node* root=NULL;

    for(int val:arr){
        root=insert(root,val);
    }

    return root;
}

void inorder(Node* root,vector<int>& arr){
      if(root==NULL){
        return;
      }

      inorder(root->left,arr);
      arr.push_back(root->data);
      inorder(root->right,arr);
}

Node* buildBSTfromSorted(vector<int> arr,int st,int end){
    if(st>end){
        return NULL;
    }
    int mid=st+(end-st)/2;
    Node* root=new Node(arr[mid]);
    root->left=buildBSTfromSorted(arr,st,mid-1);
    root->right=buildBSTfromSorted(arr,mid+1,end);

    return root;
}

Node* merge2BST(Node* root1,Node* root2){
     vector<int> arr1,arr2;
     inorder(root1,arr1);
     inorder(root2,arr2);

     vector<int> temp;  //final BST :sorted sequence

     int i=0,j=0;
     while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            temp.push_back(arr1[i++]);
        }else{
            temp.push_back(arr2[j++]);
        }
     }

     while(i<arr1.size()){
        temp.push_back(arr1[i++]);
     }
     while(j<arr2.size()){
        temp.push_back(arr2[j++]);
     }

     return buildBSTfromSorted(temp,0,temp.size()-1);
}
int main(){
    vector<int> arr1={8,2,1,10};
    vector<int> arr2={5,3,0};

    Node* root1=buildBST(arr1);
    Node* root2=buildBST(arr2);

    Node* root=merge2BST(root1,root2);
    vector<int> seq;
    inorder(root,seq);
    for(int v:seq){
        cout<<v<<" ";
    }
    cout<<endl;
    return 0;
}
*/

//recover BST (Leetcode Q99)
//space complexity O(n)
/*#include<iostream>
using namespace std;


class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        left = right = NULL;
    }
};

Node* first = NULL;
Node* sec = NULL;
Node* prevNode = NULL;

void inorder(Node* root) {
    if(root == NULL) {
        return;
    }

    inorder(root->left);

    

    if(prevNode != NULL && prevNode->val > root->val) {
        if(first == NULL) {
            first = prevNode;
        }
        sec = root;
    }

    prevNode = root;

    inorder(root->right);
}

void recoverTree(Node* root) {
    
    
    inorder(root);

    
        int temp = first->val;
        first->val = sec->val;
        sec->val = temp;
    
}

void inorderPrint(Node* root) {
    if(root == NULL)
        return;
    inorderPrint(root->left);
    cout << root->val << " ";
    inorderPrint(root->right);
}

int main() {
    
    Node* root = new Node(6);
    root->left = new Node(3);
    root->right = new Node(4);
    root->right->right = new Node(9);
    root->left->left=new Node(1);
    root->left->right=new Node(8);

    

    cout << "Inorder traversal before recovery: ";
    inorderPrint(root);
    cout << endl;

    recoverTree(root);

    cout << "Inorder traversal after recovery: ";
    inorderPrint(root);
    cout << endl;

    return 0;
}*/

//Morris inorder transversal to recover BST
//space complexity O(1) iterator approach
/*#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        left = right = nullptr;
    }
};

void recoverTree(Node* root) {
    Node *x = nullptr, *y = nullptr, *pred = nullptr, *predecessor = nullptr;
    Node* current = root;
    
    while (current != nullptr) {
        if (current->left == nullptr) {
            // Visit current node and check violation
            if (pred && pred->val > current->val) {
                y = current;
                if (x == nullptr) x = pred;
            }
            pred = current;

            current = current->right;
        } else {
            // Find the inorder predecessor of current
            predecessor = current->left;
            while (predecessor->right != nullptr && predecessor->right != current) {
                predecessor = predecessor->right;
            }

            // If right child of predecessor is null, set it to current and go left
            if (predecessor->right == nullptr) {
                predecessor->right = current;
                current = current->left;
            } else {
                // Revert the changes made in the 'if' part to restore the original tree
                predecessor->right = nullptr;

                // Visit current node and check violation
                if (pred && pred->val > current->val) {
                    y = current;
                    if (x == nullptr) x = pred;
                }
                pred = current;

                current = current->right;
            }
        }
    }

    // Swap the values of the two nodes to fix the tree
    if (x && y) {
        int temp = x->val;
        x->val = y->val;
        y->val = temp;
    }
}

void inorderPrint(Node* root) {
    if (root == nullptr) return;
    inorderPrint(root->left);
    cout << root->val << " ";
    inorderPrint(root->right);
}

int main() {
    // Construct a BST with two nodes swapped
    Node* root = new Node(6);
    root->left = new Node(3);
    root->right = new Node(4);        // Swapped node
    root->right->right = new Node(9);
    root->left->left = new Node(1);
    root->left->right = new Node(8);  // Swapped node

    cout << "Inorder traversal before recovery: ";
    inorderPrint(root);
    cout << endl;

    recoverTree(root);

    cout << "Inorder traversal after recovery: ";
    inorderPrint(root);
    cout << endl;

    return 0;
}*/

//Largest Bst IN a binary tree
/*#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        left = right = NULL;
    }
};
class Info{
public:
    int min,max,sz;

    Info(int mi,int ma,int size){
        min=mi;
        max=ma;
        sz=size;
    }
};
Info helper(Node* root){
     if(root==NULL){
        return Info(INT_MAX,INT_MIN,0);
     }

     Info left=helper(root->left);
     Info right=helper(root->right);

     if(root->val > left.max  && root->val <right.min){
        int currMin=min(root->val,left.min);
        int currMax=max(root->val,right.max);
        int currsz=left.sz+right.sz+1;

        return Info(currMin,currMax,currsz);
     }
     return Info(INT_MIN,INT_MAX,max(left.sz,right.sz));
}

//Find size of largest BST

int largestBSTinBT(Node* root){
       Info info=helper(root);
       return info.sz; //max bst size
}
int main(){
    Node* root=new Node(10);
    root->left=new Node(5);
    root->right=new Node(15);
    root->left->left=new Node(1);
    root->left->right=new Node(8);
    root->right->right=new Node(7);

    cout<<largestBSTinBT(root)<<endl;

    return 0;
}*/

//Populate Next right pointers in each Node
/*#include <iostream>
#include<queue>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node(int val) {
        this->val = val;
        left = right =next= NULL;
    }
};
Node* connect(Node* root) {
        if(root==NULL || root->left==NULL){
            return root;
        }
        queue<Node*>q;
        q.push(root);
        q.push(NULL);//mark an end of a level

        Node* prev=NULL;

        while(q.size()>0){
            Node* curr=q.front();
            q.pop();

            if(curr==NULL){
               if(q.size()==0){
                break;
               }else{
                q.push(NULL);
               }
            }else{
                if(curr->left !=NULL){
                    q.push(curr->left);
                }

                if(curr->right !=NULL){
                    q.push(curr->right);
                }

                if(prev !=NULL){
                    prev->next=curr;
                }
            }
            prev=curr;
        }
        return root;
}
// Function to print tree using next pointers (level order)
void printLevelOrderUsingNext(Node* root) {
    while (root) {
        Node* curr = root;
        while (curr) {
            cout << curr->val << " ";
            curr = curr->next;
        }
        cout << endl;
        if (root->left)
            root = root->left;
        else if (root->right)
            root = root->right;
        else
            break;
    }
}

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    connect(root);
    printLevelOrderUsingNext(root);

    return 0;
}*/

//BST iterator (Leetcode Q173)
/*#include <iostream>
#include<stack>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    

    Node(int val) {
        this->val = val;
        left = right = NULL;
    }
};

class BSTIterator {
    stack<Node*> s;
    
    void storeLeftNodes(Node* root) {
        while(root != NULL){
            s.push(root);
            root = root->left;
        }
    }
    
public:
    BSTIterator(Node* root) {
        storeLeftNodes(root);
    }
    
    int next() {  // O(1) amortized
        Node* ans = s.top();
        s.pop();
        storeLeftNodes(ans->right);
        return ans->val;
    }
    
    bool hasNext() {
        return !s.empty();
    }
};

int main(){
    // Create BST (example)
    Node* root = new Node(7);
    root->left = new Node(3);
    root->right = new Node(15);
    root->right->left = new Node(9);
    root->right->right = new Node(20);

    BSTIterator it(root);
    while(it.hasNext()) {
        cout << it.next() << " ";
    }
    cout << endl;

    

    return 0;
}*/

//Inorder Predecessor and successor in BST
/*#include <iostream>
#include<vector>

using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    

    Node(int val) {
        this->val = val;
        left = right = NULL;
    }
};

Node* rightMostInLeftSubtree(Node* root){
    Node* ans;
    while(root !=NULL){
        ans=root;
        root=root->right;
    }
    return ans;
}

Node* leftMostInRightSubtree(Node* root){
    Node* ans;
    while(root !=NULL){
        ans=root;
        root=root->left;
    }
    return ans;
}

vector<int> getPredSucc(Node* root,int key){
      Node* curr=root;
      Node* pred=NULL;
      Node* succ=NULL;

      while(curr !=NULL){
        if(key < curr->val){
            succ=curr;
            curr=curr->left;
        }else if(key > curr->val){
            pred=curr;
            curr=curr->right;
        }else{
            if(curr->left !=NULL){
                //inorder predecessor
                pred=rightMostInLeftSubtree(curr->left);
            }

            if(curr->right !=NULL){
                //inorder sucessor
                succ=leftMostInRightSubtree(curr->right);
            }

            break;
        }
      }

      return{pred->val,succ->val};
}
int main(){
    Node* root=new Node(6);
    root->left=new Node(4);
    root->right=new Node(8);
    root->left->left=new Node(1);
    root->left->right=new Node(5);
    root->right->left=new Node(7);
    root->right->right=new Node(9);

    int key=3;
    vector<int> ans=getPredSucc(root,key);
    cout<<"predecessor: "<<ans[0]<<endl;
    cout<<"successor: "<<ans[1]<<endl;

    return 0;
}*/

//-------------------Lecture-109--------
//GRAPH
/*#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph{
    int V;
    list<int>*l; //int *arr

public:
   Graph(int V){
    this->V=V;
    l=new list<int> [V];
    //arr=new int[V]
   }

   void addEdge(int u,int v){
      l[u].push_back(v);
      l[v].push_back(u);
   }

   void printAdjList(){
    for(int i=0;i<V;i++){
        cout<<i<<":";
        for(int neigh : l[i]){
            cout<<neigh<<" ";
        }
        cout<<endl;
    }
   }
};



int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);

    g.printAdjList();
    return 0;
}*/

//Lecture - 110
/*#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<int>*l; //int *arr

public:
   Graph(int V){
    this->V=V;
    l=new list<int> [V];
    //arr=new int[V]
   }

   void addEdge(int u,int v){
      l[u].push_back(v);
      l[v].push_back(u);
   }

   //BFS Traversal
   void bfs(){   //T(O)=O(V+E)
      queue<int> Q;
      vector<bool>vis(V,false);

      Q.push(0);
      vis[0]=true;

      while(Q.size()>0){
        int u=Q.front();  //src node
        Q.pop();

        cout<<u<<" ";

        for(int v:l[u]){
            if(!vis[v]){
                vis[v]=true;
                Q.push(v);
            }
        }
      }
      cout<<endl;
   }
};



int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);

    g.bfs();
    return 0;
}*/

//Lecture-111
/*#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<int>*l; //int *arr

public:
   Graph(int V){
    this->V=V;
    l=new list<int> [V];
    //arr=new int[V]
   }

   void addEdge(int u,int v){
      l[u].push_back(v);
      l[v].push_back(u);
   }

   //DFS Traversal
   void dfshelper(int u,vector<bool>&vis){  //T(O)=O(V+E)
    cout<<u<<" ";
    vis[u]=true;

    for(int v:l[u]){
        if(!vis[v]){
            dfshelper(v,vis);
        }
    }
   }

   void dfs(){
    int src=0;
    vector<bool>vis(V,false);

    dfshelper(src,vis);
    cout<<endl;
   }
};



int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
   
    g.addEdge(2,4);

    g.dfs();
    return 0;
}*/


//dfs code for diconnected graph
/*#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<int>*l; //int *arr

public:
   Graph(int V){
    this->V=V;
    l=new list<int> [V];
    //arr=new int[V]
   }

   void addEdge(int u,int v){
      l[u].push_back(v);
      l[v].push_back(u);
   }

   //DFS Traversal
   void dfshelper(int u,vector<bool>&vis){  //T(O)=O(V+E)
    cout<<u<<" ";
    vis[u]=true;

    for(int v:l[u]){
        if(!vis[v]){
            dfshelper(v,vis);
        }
    }
   }

   void dfs(){
    int src=0;
    vector<bool>vis(V,false);

    for(int i=0;i<V;i++){
        if(!vis[i]){
             dfshelper(src,vis);
        }
    }

   
    cout<<endl;
   }
};



int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
   
    g.addEdge(2,4);

    g.dfs();
    return 0;
}*/





    

    
    
    
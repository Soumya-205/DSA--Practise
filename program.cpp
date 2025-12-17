/*#include<iostream>
int main()
{
    /*int x;
    x=5;
    std::cout<<x;
    return 0;*/

    /*int x=5;
    std::cout<<x;
    return 0;*/

    /*double x=58;
    double y=0.62;
    double sum=x+y;

    std::cout<<sum<<'\n';
    std::cout<<x<<'\n';
    std::cout<<y<<'\n';
    return 0;*/

    /*char currency='$';
    std::cout<<currency;
    return 0;*/

/*
}
*/
/*#include<iostream>
#include<string>
int main()
{
    std::string name="Abhinav";
    std::cout<<name;
    return 0;
}*/

/*#include<iostream>
int main()
{
    const double PI=3.14159;
    double radius=10;
    double circumference=2*PI*radius;

    std::cout<<circumference<<"cm";
    return 0;
}*/

/*#include<iostream>

namespace first
{
    int x=1;
}
namespace second
{
    int x=2;
}
int main()
{
    using namespace first;
    std::cout<<x;
    return 0;
}*/

/*#include<iostream>
int main()
{
    using namespace std;
    string name="Bro";
    cout<<"Hello "<<name;
    return 0;

}*/

/*#include<iostream>
int main()
{
    using  std::cout;
    using  std::string;

    string name="Bro";
    cout<<"Hello "<<name;
    return 0;
}*/

/*#include<iostream>
#include<vector>

typedef std::string text_t;
int main()
{
    text_t name="Soumya";
    std::cout<<name<<'\n';
    return 0;
}*/

/*#include<iostream>
#include<vector>
using text_t=std::string;
using num_t=int;
int main()
{
    text_t name="Bro";
    num_t age=21;

    std::cout<<name<<'\n';
    std::cout<<age<<'\n';
    return 0;
}*/

/*#include<iostream>
int main()
{
    int students=20;
    students=students+1;
    std::cout<<students;
    return 0;
}
*/

/*#include<iostream>
#include<string>
int main()
{
    std::string name;
    std::cout<<"Whats your name?:";
    std::cin>>name;
    std::cout<<"Hello "<<name;
    return 0;
}*/

/*#include<iostream>
#include<string>
int main()
{
    std::string name;
    int age;
    std::cout<<"What's your name?:";
    std::getline(std::cin,name);
    std::cout<<"What's your age?:";
    std::cin>>age;
    std::cout<<"Hello "<<'\n';
    std::cout<<"You are "<<age<<" years old";
    return 0;
}*/

/*#include<iostream>
#include<string>
int main()
{
    std::string name;
    int age;
    std::cout<<"What's your age?:";
    std::cin>>age;
    std::cout<<"What's your name?:";
    std::getline(std::cin>>std::ws,name);
    std::cout<<"Hello "<<'\n';
    std::cout<<"You are "<<age<<" years old";
    return 0;
}*/

/*#include<iostream>
int main()
{
    double x=8;
    double y=7;
    double z;
    z=std::max(x,y);
    std::cout<<z;
    return 0;
}*/

/*#include<iostream>
#include<cmath>
int main()
{
    double x=8;
    double y=7;
    double z;
    z=pow(2,8);
    std::cout<<z;
    return 0;
}*/

/*#include<iostream>
#include<cmath>
int main()
{
    double a;
    double b;
    double c;
    std::cout<<"Enter side a:";
    std::cin>>a;
    std::cout<<"Enter side b:";
    std::cin>>b;
    c=sqrt(pow(a,2)+pow(b,2));
    std::cout<<"Side C: "<<c;
    return 0;

}*/


//If statement
/*#include<iostream>
int main()
{
    int age;
    std::cout<<"enter the age:";
    std::cin>>age;

    if(age>=18){
        std::cout<<"Welcome to the site";
    }
    else if(age<0){
        std::cout<<"You haven't been born yet";
    }
    else{
        std::cout<<"You are not old enough to enter";
    }
    return 0;
}*/

//Switch statement
/*#include<iostream>
int main()
{
    int month;
    std::cout<<"Enter the month";
    std::cin>>month;

    switch(month)
    {
        case 1:
           std::cout<<"Month is January";
           break;
        case 2:
           std::cout<<"Month is February";
           break;
        case 3:
           std::cout<<"Month is March";
           break;
        case 4:
           std::cout<<"Month is April";
           break;
        case 5:
           std::cout<<"Month is May";
           break;
        case 6:
           std::cout<<"Month is June";
           break;
        case 7:
           std::cout<<"Month is July";
           break;
        case 8:
           std::cout<<"Month is August";
           break;
        case 9:
           std::cout<<"Month is September";
           break;
        case 10:
           std::cout<<"Month is October";
           break;
        case 11:
           std::cout<<"Month is November";
           break;
        case 12:
           std::cout<<"Month is December";
           break;
        default:
           std::cout<<"Please enter in only numbers(1-12)";
    }
    return 0;
}*/

//To make a Calculator using switch

/*#include<iostream>
int main()
{
    char op;
    double num1;
    double num2;
    double result;

    std::cout<<"*****CALCULATOR*****\n";
    std::cout<<"Enter either(+-* /)";
    std::cin>>op;
    std::cout<<"Enter num1:";
    std::cin>>num1;
    std::cout<<"Enter num2:";
    std::cin>>num2;

    switch(op){
        case '+':
           result=num1+num2;
           std::cout<<"Result:"<<result<<'\n';
           break;
        case '-':
           result=num1-num2;
           std::cout<<"Result:"<<result<<'\n';
           break;
        case '*':
           result=num1*num2;
           std::cout<<"Result:"<<result<<'\n';
           break;
        case '/':
           result=num1/num2;
           std::cout<<"Result:"<<result<<'\n';
           break;
        default:
           std::cout<<"Please enter valid operator";
    }
    std::cout<<"***********************\n";
    return 0;

}*/

//Ternary operator?:= condition?expression 1:expression 2;

/*#include<iostream>
int main()
{
    int number=9;
    number%2==1?std::cout<<"ODD": std::cout<<"EEVEN";
    return 0;
}*/

//Logical Operator
/*#include<iostream>
int main()
{
    int temp;
    std::cout<<"Enter your temperature:";
    std::cin>>temp;
    if(temp>0&&temp<30){
        std::cout<<"The temperature is good";
    }
    else{
        std::cout<<"The temperature is bad!";
    }
    return 0;
}*/

/*#include<iostream>
int main()
{
    int temp;
    std::cout<<"Enter your temperature:";
    std::cin>>temp;
    if(temp<=0 || temp>=30){
        std::cout<<"The temperature is good";
    }
    else{
        std::cout<<"The temperature is bad!";
    }
    return 0;
}*/

/*#include<iostream>
int main()
{
    int temp;
    bool sunny=true;
    std::cout<<"Enter the temperature:";
    std::cin>>temp;
    if(temp<=0||temp>=30){
        std::cout<<"The temperature is bad!";
    }
    else{
        std::cout<<"The temperature is good!";
    }
    if(sunny){
        std::cout<<"It is sunny outside!";
    }
    else{
        std::cout<<"It is cloudy";
    }
    return 0;
}*/

/*#include<iostream>
int main()
{
    int temp;
    bool sunny=false;
    std::cout<<"Enter the temperature:";
    std::cin>>temp;
    if(temp<=0||temp>=30){
        std::cout<<"The temperature is bad!";
    }
    else{
        std::cout<<"The temperature is good!";
    }
    if(!sunny){
        std::cout<<"It is clody outside!";
    }
    else{
        std::cout<<"It is sunny outside";
    }
    return 0;
}*/

//Temperature conversion

/*#include<iostream>
int main()
{
    double temp;
    
    std::cout<<"***TEMPERATURE CONVERSION***\n";
    std::cout<<"F=Fahrenheit\n";
    std::cout<<"C=Celsius\n";
    char unit;
    std::cout<<"What would you like to convert to?";
    std::cin>>unit;

    if(unit=='F'||unit=='f'){
        std::cout<<"Enter the temperature in celsius:";
        std::cin>>temp;
        temp=(1.8*temp)+32.0;
        std::cout<<"Temp is:"<<temp<<"F\n";
    }
    else if(unit=='C'||unit=='c'){
        std::cout<<"Enter the temperature in Fahrenheit:";
        std::cin>>temp;
        temp=(temp-32)/1.8;
        std::cout<<"Temp is:"<<temp<<"C\n";

    }
    else{
        std::cout<<"Please enter in C or F only";
    }
    std::cout<<"**************************\n";
    return 0;
}*/

//STRINGS

/*#include<iostream>
int main()
{
    std::string name;
    std::cout<<"Enter the name:";
    std::getline(std::cin,name);
    
    if(name.length()>12){
        std::cout<<"Your name can't be over 12 characters";
    }
    else{
        std::cout<<"Welcome\n";
    }
    return 0;
}*/

/*#include<iostream>
int main()
{
    std::string name;
    std::cout<<"Enter the name:";
    std::getline(std::cin,name);
    
    if(name.empty()){
        std::cout<<"Your didn't enter your name";
    }
    else{
        std::cout<<"hello\n";
    }
    return 0;
}*/

/*#include<iostream>
int main()
{
    std::string name;
    std::cout<<"Enter the name:";
    std::getline(std::cin,name);
    
   name.clear();
   std::cout<<"Hello"<<name;
   return 0;
}*/

/*#include<iostream>
int main()
{
    std::string name;
    std::cout<<"Enter the name:";
    std::getline(std::cin,name);
    
   name.append("@gmail.com");
   std::cout<<"Your username now is: "<<name;
   return 0;
}*/

/*#include<iostream>
int main()
{
    std::string name;
    std::cout<<"Enter the name:";
    std::getline(std::cin,name);
    std::cout<<name.at(5);
    return 0;
}*/

//To generate random number

/*#include<iostream>
#include<ctime>
int main()
{
    srand(time(0));
    int randnum=rand()%5+1;
    switch(randnum){
        case 1:std::cout<<"You win a bumper sticker!";
               break;
        case 2:std::cout<<"You win a gift card!";
               break;
        case 3:std::cout<<"You win free lunch!";
               break;
        case 4:std::cout<<"You win a concert ticket!";
               break;
        case 5:std::cout<<"You win a tshirt!";
               break;
    }
    return 0;



}*/

//NUMBER GUESSING GAME

/*#include<iostream>
#include<ctime>
int main()
{
    int num;
    int guess;
    int tries=0;
    srand(time(NULL));
    num=(rand()%100)+1;

    std::cout<<"***NUMBER GUESSING GAME***\n";
    do{
        std::cout<<"Enter the guess number(1-100):";
        std::cin>>guess;
        tries++;
        if(guess>num){
            std::cout<<"TOO HIGH!";
        }
        else if(guess<num){
            std::cout<<"TOO LOW!";
        }
        else{
            std::cout<<"CORRECT! NUMBER OF TRIES:"<<tries<<'\n';
        }
    }
    while(guess !=num);
    std::cout<<"***************************\n";
    return 0;
}*/

// write a recursive function to find fibonacci of n

/*#include<iostream>
using namespace std;
int Fibonacci(int n){
    if(n<=1){
        return n;
    }
    else{
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}
int main()
{
    int n;
    cout<<"Enter the number to find the fibonacci:";
    cin>>n;
    cout<<"The Factorial of("<<n<<")="<<Fibonacci(n)<<endl;
    return 0;
}*/

/*#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;

    if(n<2){
        cout<<"Array must have atleast 2 elements"<<endl;
        return 0;
    }

    int arr[n];
    cout<<"Enter"<<n<<"elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int first=INT_MIN,second=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!=first){
            second=arr[i];
        }
    }
    if(second==INT_MIN){
        cout<<"There is no second largest"<<endl;
    }
    else{
        cout<<"second largest element:"<<second<<endl;

    }
    return 0;
                
    
}*/

//sum of 2 numbers
/*#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    int sum=a+b;
    cout<<"The sum is: "<<sum<<endl;
    return 0;
}*/

//conditional statements
/*#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(num>=0){
        cout<<"It is positive!";
    }
    else{
        cout<<"It is negative!";
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age: ";
    cin>>age;
    if(age>=18){
        cout<<"You are eligible to vote";
    }
    else{
        cout<<"You are not eligible to vote";
    }
    return 0;
}*/


/*#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(num%2==0){
        cout<<"The number is even";
    }
    else{
        cout<<"It is odd";
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks: ";
    cin>>marks;
    if(marks>=90){
        cout<<"Grade is A!";
    }
    else if(marks>=80&&marks<=90){
        cout<<"Grade is B!";
    }
    else{
        cout<<"Grade is C!";
    }
    return 0;
}*/


//Character is lowercase to uppercase
/*#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    if(ch>='a' &&ch<='z'){
       cout<<"Character is in lowercase"; 

    }
    else{
        cout<<"Character is in uppercase";
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    if(ch>=65 &&ch<=90){
       cout<<"Character is in uppercase"; 

    }
    else{
        cout<<"Character is in lowercase";
    }
    return 0;
}*/


/*#include<iostream>
int main(){
    int num;
    std::cout<<"Enter the number: ";
    std::cin>>num;
    std::cout<<(num>=0?"Positive":"Negative")<<'\n';
    return 0;
}*/

//Print numbers from 1 to 5
/*#include<iostream>
using namespace std;
int main(){
    int count=1;
    while(count<=5){
        cout<<count<<" ";
        count++;
    }
    cout<<endl;
    return 0;
}*/
    
/*#include<iostream>
using namespace std;
int main(){
    for(int count=1;count<=10;count++){
        cout<<count<<" ";
    }
    return 0;
}
*/

//sum of numbers from 1 t on

/*#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        sum=sum+i;
        
    }
    cout<<sum<<'\n';
    return 0;
}*/

//important

/*#include<iostream>
using namespace std;
int main(){
    int n=5;
    int sum=0;
    int i=0;
    while(i<=n){
        sum+=i;
        i++;

    }
    cout<<sum<<'\n';
    return 0;
}*/

//sum of all odd numbers from 1 to N

/*#include<iostream>
using namespace std;
int main(){
    int oddSum=0;
    int n=5;
    for(int i=0;i<=n;i++){
        if(i%2!=0){
            oddSum=oddSum+i;
        }
        else{
            continue;
        }
    }
    cout<<oddSum<<'\n';
    return 0;
}*/

//check whether a number is prime or not
//check from 2 to n-1
/*
check bool isprime
for(i=2;i<=n-1;i++){           //logic
if(n%i==0){
isprime=false
break
}
}*/


/*#include<iostream>              //important
using namespace std;
int main(){
    int num=7;
    bool isPrime=true;
    for(int i=2;i<=num-1;i++){
        if(num%i==0){    //non prime
            isPrime=false;
            break;
        }
    }
    if(isPrime==true){
        cout<<"prime number\n";
    }else{
        cout<<"Is non prime\n";
    }


    
    return 0;
}*/



/*#include<iostream>              //important
using namespace std;
int main(){
    int num=7;
    bool isPrime=true;
    for(int i=2;i*i<=num;i++){
        if(num%i==0){    //non prime
            isPrime=false;
            break;
        }
    }
    if(isPrime==true){
        cout<<"prime number\n";
    }else{
        cout<<"Is non prime\n";
    }
    return 0;
}*/

//nested loop
/*#include<iostream>
using namespace std;
int main(){
    int num=5;
    for(int i=0;i<num;i++){    //row
        for(int j=0;j<=i;j++){    //column
            cout<<"* ";
        }
        cout<<'\n';
     
    }
    return 0;
}*/


//Sum of all numbers from 1 to n which are divisible by 3
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++){
        if(i%3==0){
            sum+=i;
        }
        else{
            continue;
        }
    }
    cout<<"Sum is: "<<sum;
    return 0;
}*/

//Print the factorial of number n
/*#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int factorial=1;
    for(int i=1;i<=num;i++){
        factorial=1;
        for(int j=1;j<=i;j++){
            factorial*=j;
        }


    }
    cout<<"Factorial of "<<num<<" is "<<factorial<<endl;
    return 0;
}*/

//fibonnaci series
/*#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int a=0,b=1,next;
    cout<<"Fibonacci series: ";
    for(int i=1;i<=num;i++){
        cout<<a<<" ";
        next=a+b;
        a=b;
        b=next;
    }
    return 0;
}*/


//pallindrome number
/*#include<iostream>
using namespace std;
int main(){
    int num,reversed = 0,original,digit;
    cout<<"Enter the number: ";
    cin>>num;
    original=num;
    //outer loop runs once just to wrap inner logic
    for(int i=0;i<1;i++){
        //inner loops to reverse the number
        while(num>0){
            digit=num%10;//extract last digit
            reversed=reversed*10+digit;//build reversed number
            num=num/10;//remove last digit
        }
    }
    if(original==reversed){
        cout<<original<<" is a Pallindrome"<<endl;
    }else{
        cout<<original<<" is not a Pallindrome"<<endl;
    }
    return 0;
}
*/

//Armstrong number
/*#include<iostream>
#include<cmath> //for power
using namespace std;
int main(){
    int num,original,digit,sum=0,count=0;
    cout<<"Enter a number: ";
    cin>>num;

    original=num;

    //first loop to count number of digits
    for(int i=num;i>0;i/=10){   //i/=10 remove the last digit
        count++;
    }
    //outer loop to simulate nesting(runs once)
    for(int i=0;i<1;i++){
        //Inner loop:calculate the sum of digits raised to power'count'
        for(int j=num;j>0;j/=10){
            digit=j%10;  //extract the last digit
            sum+=pow(digit,count);
        }


    }
    if(sum==original){
        cout<<original<<" is an Armstrong number"<<endl;
    }
    else{
        cout<<original<<" is not an Armstrong number"<<endl;
    }
    return 0;
}*/

//Patterns
/*#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){       //outer loop
        for(int j=1;j<=n;j++){  //inner loop
            cout<<j<<" ";
        }
        cout<<'\n';
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*"<<" ";
        }
        cout<<'\n';
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int n=4;
    
    for(int i=0;i<n;i++){
        char ch='A';   //because hame A se har line ko chalu karna haiisliye loop ke aander haich defined
        for(int j=0;j<n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<'\n';
    }
    return 0;
}*/


/*#include<iostream>     //important
using namespace std;
int main(){
    int n=3;
    int num=1;
    
    for(int i=0;i<n;i++){       //outer
        for(int j=0;j<n;j++){  //inner
            cout<<num<<" ";
            num++;
        }
        cout<<'\n';
    }
    return 0;
}*/

/* A B C D E
   F G H I J
   K L M N O
   P Q R S T 
   U V W X Y*/
/*#include<iostream>
using namespace std;
int main(){
    int n=5;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ch<<" ";
            ch++;

        }
        cout<<'\n';
    }
    return 0;
}*/


/* *
   **
   ***
   ****
   ******/
/*#include<iostream>

using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<'\n';
    }
    return 0;
}*/

/* 1
   22
   333
   4444
   55555*/
/*#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<i+1<<" ";
        }
        cout<<'\n';
    }
    return 0;
}*/


/*
1
12
123
1234
12345*/
/*#include<iostream>     //important
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        
        for(int j=1;j<=i+1;j++){
            cout<<j<<" ";
        }
        cout<<'\n';
    }
    return 0;
}*/

//Reverse triangle pattern
/*1
  21
  321
  4321
  54321*/
/*#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<'\n';
    }
    return 0;
}*/

//Floyed triangle
/*
1
23
456
78910*/
/*#include<iostream>   //important
using namespace std;
int main(){
    int n=5;
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<num<<" ";
            num++;

        }
        cout<<'\n';
    }
    return 0;
}*/

//character version
/*#include<iostream>   //important
using namespace std;
int main(){
    int n=5;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<'\n';
    }
    return 0;
}*/

/*#include<iostream>   //important
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<'\n';
    }
    return 0;
}*/

//inverted triangle pattern        important
/*#include<iostream>   //important
using namespace std;              //space    num
int main(){                         //0       4
    int n=5;                       //1        3
    for(int i=0;i<n;i++){          //2        2
        for(int j=0;j<i;j++){      //3        1
            cout<<" "; //spaces
            
        }
        //nums
        for(int j=0;j<n-i;j++){
            cout<<(i+1);
        }
        cout<<'\n';
    }
    return 0;

}*/


//character version
/*AAAAA
BBBB
CCC
DD
E*/
/*#include<iostream>   //important
using namespace std;              
int main(){
    int n=5;
    char ch='A';
    for(int i=0;i<n;i++){
        
        for(int j=0;j<i;j++){
            cout<<" ";//spaces
        }
        
        for(int j=0;j<n-i;j++){
            cout<<ch;
            
        }
        ch++;
        
        cout<<'\n';
        
    }
    return 0;
}*/



//Pyramid pattern
 /* 1
   121
  12321
 1234321 */ 
/*#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        //spaces:n-i-1
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //num1:i+1
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }
        //num2
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<'\n';
    }
    return 0;
}*/

/*hollow diamond pattern
         *
        * *
       *   *
        * *
         *
*/
/*#include<iostream>    //important
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
            //spaces
            for(int j=0;j<2*i-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<'\n';
    }
    //bottom
    for(int i=0;i<n-1;i++){
        //spaces
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=n-2){
            //spaces
            for(int j=0;j<2*(n-i)-5;j++){
                cout<<" ";
            }

            cout<<"*";
        }
        cout<<'\n';
    }
    return 0;
}*/

//butterfly pattern   //important
/*#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<2*(n-i);j++){
            cout<<" ";
        }
        //right stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<'\n';
    }
    //lower half
    for(int i=n;i>=1;i--){
        //left stars
        for(int j=1;j<=i;j++){
             cout<<"*";
        }
        //spaces
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        //right stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<'\n';
        
    }
    return 0;
}*/

//FUNCTIONS
//sum of numbers from 1 to N
/*#include<iostream>
using namespace std;
int sumN(int N){
    int sum=0;
    for(int i=0;i<= N;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    cout<<sumN(5)<<endl;
    cout<<sumN(10)<<endl;
    return 0;
    

}*/

//Calculate N factorial
/*#include<iostream>
using namespace std;
int fact(int N){
    int fact=1;
    for(int i=1;i<=N;i++){
        fact=fact*i;
    }
    return fact;

}
int main(){
    cout<<"Factorial is "<<fact(5)<<endl;
    return 0;
}*/

//calculate the sum of digits of a number
/*#include<iostream>
using namespace std;
int sumofDigits(int num){
    int sum=0;
    while(num>0){
        int lastdigit=num%10;
        num/=10;
        sum=sum+lastdigit;

    }
    return sum;

}
int main(){
    cout<<sumofDigits(143)<<endl;
    return 0;
}*/

//calculate ncr binomial coefficient for n &r
/*#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int nCr(int n,int r){
    int fact_n=fact(n);
    int fact_r=fact(r);
    int fact_nmr=fact(n-r);

    return fact_n/(fact_r*fact_nmr);
}

int main(){
    int n=8,r=2;
    
    cout<<nCr(n,r)<<endl;
    return 0;
}*/

//waf to check if a number is prime or not
/*#include<iostream>
using namespace std;
bool checkPrime(int n){
    for(int i=2;i<=n;i++){
        if(n%i!=0){
         return true;
        }
        return false;
    }

}
int main(){
    cout<<checkPrime(5);
    return 0;
}*/

//wap to print all prime numbers from 1 to n
/*#include<iostream>
using namespace std;
int printPrime(int num){
    for(int i=2;i<=num;i++){
        if(num%i!=0){
            cout<<i<<" ";
        }
    }
}
int main(){
    cout<<printPrime(10);
    
}*/

//wap to print the nth fibonacci number
/*#include<iostream>
using namespace std;
int fibonacci(int n){
    
    if(n<=0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    int a=0,b=1,fib;
    for(int i=2;i<=n;i++){
        fib=a+b;
        a=b;
        b=fib;
    }
    return b;
       
        
}
   

int main(){
    cout<<fibonacci(5);
    return 0;
}*/

//convert decimal to binary
/*#include<iostream>
using namespace std;

int decToBinary(int decNum){
    int ans=0,pow=1;
    while(decNum>0){
        int rem=decNum%2;
        decNum/=2;

        ans+=(rem*pow);
        pow*=10;

    }
    return ans;//binary form
}
int main(){
    int decNum=50;
    for(int i=1;i<=10;i++){
        cout<<decToBinary(i)<<endl;

    }
    

    return 0;
}
*/

//binary to decimal
/*#include<iostream>
using namespace std;
int binToDecimal(int binNum){
    int ans=0,pow=1;
    while(binNum>0){
        int rem=binNum%10;
        ans+=rem*pow;

        binNum/=10;
        pow*=2;
    }
    return ans; //decimal number
}
int main(){
    cout<<binToDecimal(101)<<endl;
    return 0;

}*/

//Array
/*#include<iostream>
using namespace std;
int main(){
    int marks[5]={99,100,54,36,88};
    int size=5;
    for(int i=0;i<size;i++){
        cout<<marks[i]<<'\n';
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int size=5;
    int marks[size];
    for(int i=0;i<size;i++){
        cin>>marks[i];
    }
    return 0;
}*/

//Find the smallest and largest in array
/*#include<iostream>
#include<climits>
using namespace std;
int main(){
    int marks[]={5,15,22,1,-15,24};
    int size=6;
    int smallest= INT_MAX;//added for smallest value
    int largest=INT_MIN;//added for largest value
    for(int i=0;i<size;i++){
        if(marks[i]<smallest){
            smallest=marks[i];
        }
        if(marks[i]>largest){
            largest=marks[i];
        }
    }
    cout<<"smallest "<<smallest<<'\n';
    cout<<"largest "<<largest<<'\n';
    return 0;
}*/

//LIST
/*#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);
    for(int val:l){
        cout<<val<<" ";

    }
    cout<<endl;
    return 0;
    cout<<l[2]<<endl;


}*/

//DEQUE
/*#include<iostream>
#include<vector>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(5);
    for(int val:d){
        cout<<val<<" ";

    }
    cout<<endl;
    cout<<d[2]<<endl;
    return 0;
    


}*/

//PAIR
/*#include<iostream>
#include<vector>
using namespace std;

int main(){
    //pair<int,int> p={1,5};

    pair<int,pair<char,int>>p={1,{'a',3}};
    cout<<p.first<<endl;
    cout<<p.second.first<<endl;
    cout<<p.second.second<<endl;
    return 0;
}*/

/*#include<iostream>
#include<vector>
using namespace std;

int main(){
    

    vector<pair<int,int>> vec={{1,2},{3,4}};
    vec.push_back({5,6});
    vec.emplace_back(5,6);  //in place objects create


    for(pair<int,int>p:vec){      // or use auto
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}*/


//STACK
/*#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    stack<int> s2;
    s2.swap(s);

    cout<<"s size "<<s.size()<<endl;
     cout<<"s size "<<s2.size()<<endl;


    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    cout<<"top ="<<s.top()<<endl;
    return 0;
}*/

//QUEUE
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

//Priority queue
/*#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> q;
    q.push(5);
    q.push(3);
    q.push(10);
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }

    cout<<endl;
    return 0;
}*/

//Reverse order priority
/*#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>> q;
    q.push(5);
    q.push(3);
    q.push(10);
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }

    cout<<endl;
    return 0;
}*/

//MAP
/*#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    map<string,int> m;
    m["tv"]=100;
    m["laptop"]=100;
    m["headphones"]=50;
    m["tablet"]=120;
    m["watch"]=50;

    m.insert({"camera",25});
    m.emplace("phones",50);
    m.erase("tv");


    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<"count= "<<m.count("laptop")<<endl;
    if(m.find("camera")!=m.end()){
        cout<<"found\n";
    }else{
        cout<<"not found\n";
    }
    return 0;


}*/

//Multi MAP
/*#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    multimap<string,int> m;
    
    
    m.emplace("tv",100);
    m.emplace("tv",50);
    m.emplace("tv",50);
    m.emplace("tv",50);
    m.erase(m.find("tv"));


    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}*/

//Unordered map
/*#include<iostream>
#include<vector>
#include<unordered_map>


using namespace std;

int main(){
    unordered_map<string,int> m;
    
    
    m.emplace("tv",100);
    m.emplace("laptop",50);
    m.emplace("fridge",50);
    m.emplace("watch",50);
    m.erase(m.find("tv"));


    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}*/

//SET
/*#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    cout<<"lower bound= "<<*(s.lower_bound(4))<<endl;
    cout<<"upper bound= "<<*(s.upper_bound(4))<<endl;


    for(auto val:s){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;



}*/

//Algorithms
//sorting
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[5]={3,5,1,8,2};

    sort(arr,arr+5);
    sort(arr,arr+5,greater<int>()); //for vector (vec.begin(),vec.end())
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}*/

//custom comparators
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool customcompare(pair<int,int> p1,pair<int,int> p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    
    if(p1.first<p2.first) return true;
    else return false;
}

int main(){
    vector<pair<int,int>> vec={{3,1},{2,1},{7,1},{5,2}};

    sort(vec.begin(),vec.end(),customcompare);

    for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;

}*/


//Reverse
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool customcompare(pair<int,int> p1,pair<int,int> p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    
    if(p1.first<p2.first) return true;
    else return false;
}

int main(){
    vector<int>vec={1,2,3,4,5};

    reverse(vec.begin(),vec.end());

    for(auto val:vec){
        cout<<val<<endl;
    }
    return 0;

}*/



//next permutation
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool customcompare(pair<int,int> p1,pair<int,int> p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    
    if(p1.first<p2.first) return true;
    else return false;
}

int main(){
    string s="abc";
    next_permutation(s.begin(),s.end());
    prev_permutation(s.begin(),s.end());
    cout<<s<<endl;
    return 0;

}*/

//Strings
/*#include<iostream>
#include <cstring>
using namespace std;
int main(){

    char str[]={'a','b','c','\0'};
    char str1[]="hello"; //string literals
    cout<<str<<endl;
    cout<<strlen(str)<<endl;
    cout<<str1<<endl;
    cout<<strlen(str1)<<endl;
    cout<<str1[4]<<endl;
    return 0;
}*/

/*#include<iostream>
#include <cstring>
using namespace std;
int main(){
    char str[100];
    cout<<"enter the char array:";

    cin.getline(str,100,'$');
    cout<<"output"<<str<<endl;
    return 0;
} */

/*#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[]="Soumya shradha";
    string str1="soumya";
    string str2=" shradha";
    string str3=str1+str2; 
    cout<<str3.length()<<endl; //dynamic
    
    int len=0;

    for(int i=0;i<str[i] !='\0';i++){
        len++;
       
    }
    cout<<"length of string: "<<len<<endl;
    cout<<str3<<endl;
    return 0;

}*/


//reverse a string    //O(n)
/*#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

void reverseString(vector<char> &s){
    int st=0,end=s.size()-1;

    while(st<end){
        swap(s[st++],s[end--]);
    }
}
int main(){
    vector<char> s={'h','e','l','l','o'};
    reverseString(s);
    for(char c:s){
        cout<<c;
    }
    cout<<endl;
    return 0;
}*/


//valid pallindrome
/*#include<iostream>
using namespace std;

bool isAlphaNumeric(char ch){
    if((ch>='0' && ch<='9')|| (tolower(ch)>='a' && tolower(ch)<='z')){
        return true;
    }
    return false;

}

bool isPallindrome(string s){
    int st=0,end=s.length()-1;

    while(st<end){
        if(!isAlphaNumeric(s[st])){
            st++;continue;
        }
        if(!isAlphaNumeric(s[end])){
            end--;continue;
        }
        if(tolower(s[st])!=tolower(s[end])){
            return false;
        }

        st++;end--;
    }
    return true;
}
int main(){
    string s="Ac3?e3c&a";
    cout<<isPallindrome(s)<<endl;
    return 0;
}*/

//remove all occurrences of a string
/*#include<iostream>
using namespace std;
string removeoccurrence(string s,string part){
    while(s.length()>0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main(){
    string s="daabcdaabcbc";
    string part="abc";
    cout<<removeoccurrence(s,part)<<endl;
    return 0;
}*/

//Permutation in strings
/*#include<iostream>
using namespace std;

bool isFreqSame(int freq1[],int freq2[]){  //O(1)
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
        
    }
    return true;

}

bool checkInclusion(string s1,string s2){
    int freq[26]={0};
    for(int i=0;i<s1.length();i++){
        int idx=s1[i]-'a'; //a->0,b->1
        freq[idx]++;
    }

    int windsize=s1.length();
    for(int i=0;i<s2.length();i++){
        int windIdx=0,idx=i;
        int windfreq[26]={0};

        while(windIdx<windsize &&idx<s2.length()){
            windfreq[s2[idx]-'a']++;
            windIdx++;idx++;

        }
        if(isFreqSame(freq,windfreq)){
            return true;

        }

    }
    return false;
}
int main(){
    string s2="eidbaooo";
    string s1="ab";
    cout<<checkInclusion(s1,s2)<<endl;
    return 0;
}*/

//Reverse words of a string
/*#include<iostream>
#include<algorithm>
using namespace std;

string reverseString(string s){
    int n=s.length();
    string ans=" ";

    reverse(s.begin(),s.end());

    for(int i=0;i<n;i++){
        string word="";
        while(i<n && s[i]!=' '){
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length()>0){
            ans+=" "+word;
        }
    }
    return ans.substr(1);
}
int main(){
    string s="The pen";
    cout<<reverseString(s)<<endl;
    return 0;
}*/


/*#include<iostream>
#include<vector>

using namespace std;

int compress(vector<char> &chars){
    int n=chars.size();
    int idx=0;

    for(int i=0;i<n;i++){
        char ch=chars[i];
        int count=0;

        while(i<n && chars[i]==ch){
            count++;i++;
        }
        if(count==1){
            chars[idx++]=ch;
        }else{
            chars[idx++]=ch;
            string str=to_string(count);
            for(char dig:str){
                chars[idx++]=dig;
            }
        }
        i--;
    }
    chars.resize(idx);
    return idx;

}
int main(){
    vector<char> chars={'a','a','b','b','c','c','c'};
        
    cout<<compress(chars)<<endl;
    return 0;
}*/

//**************maths for dsa*******************
/*#include<iostream>
using namespace std;

string isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return "Non Prime";
        }
    }
    return "Prime";
}
int main(){
    int n=42;
    cout<<isPrime(n)<<endl;
    return 0;
}*/


//Sieve of Eratosthenes
/*#include<iostream>
#include<vector>
using namespace std;
int countPrimes(int n) {
        vector<bool> isPrime(n+1,true);
        int count=0;

        for(int i=2;i<n;i++){
            if(isPrime[i]){
                count++;

                for(int j=i*2;j<n;j=j+i){
                    isPrime[j]=false;
                }
            }
        }
        return count;
    }
    int main(){
        int n=50;
        cout<<countPrimes(n)<<endl;
        return 0;
    }*/

//Digits in a numbe
/*#include<iostream>
using namespace std;
void printDigits(int n){
    int count=0;
    int sum=0;
    while(n!=0){
        int digit=n%10;
        cout<<digit<<endl;
        count++;
        sum+=digit;

        n=n/10;
    }
    cout<<"count is: "<<count<<endl;
    cout<<"sum is : "<<sum<<endl;

}
int main(){
    int n=3568;
    printDigits(n);
    
    return 0;
}*/

//Armstrong number
/*#include<iostream>
using namespace std;

bool isArmstrong(int n){
    int copy=n;
    int sumOfCubes=0;

    while(n!=0){
        int digit=n%10;
        sumOfCubes+=(digit*digit*digit);

        n=n/10;

    }
    return sumOfCubes==copy;

}
int main(){
    int n=153;

    if(isArmstrong(n)){
        cout<<"is an armstrong number\n";
    }else{
        cout<<"is not an armstrong number\n";
    }
    return 0;
}*/

//GCD/HCF
/*#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(a>0 &&b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if(a==0) return b;
    return a;
}
//gcd via recursion
int gcdRec(int a,int b){
    if(b==0) return a;  //assume a>b

    return gcdRec(b,a%b);
}
int main(){
    cout<<gcd(20,28)<<endl;
    cout<<gcdRec(20,28)<<endl;
    return 0;
}*/

//LCM
/*#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(a>0 &&b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if(a==0) return b;
    return a;
}
//gcd via recursion
int gcdRec(int a,int b){
    if(b==0) return a;  //assume a>b

    return gcdRec(b,a%b);
}

//lCM
int lcm(int a,int b){
    int gcd=gcdRec(a,b);
    return (a*b)/gcd;
}
int main(){
    cout<<gcd(20,28)<<endl;
    cout<<gcdRec(20,28)<<endl;
    cout<<lcm(20,28)<<endl;
    return 0;
}*/

//Reverse number
/*#include<iostream>
#include<climits>
using namespace std;
int reverse(int n){
    int revNum=0;

    while(n!=0){
        int dig=n%10;
        if(revNum>INT_MAX/10 || revNum<INT_MIN/10){
            return 0;
        }

        revNum=revNum*10 + dig;
        n=n/10;
    }
    return revNum;

}
int main(){
    int n=4537;
    cout<<reverse(n)<<endl;
    return 0;
}*/

//Pallindrome Number
/*#include<iostream>
#include<climits>
using namespace std;
int reverse(int n){
    int revNum=0;

    while(n!=0){
        int dig=n%10;
        if(revNum>INT_MAX/10 || revNum<INT_MIN/10){
            return 0;
        }

        revNum=revNum*10 + dig;
        n=n/10;
    }
    return revNum;
}

bool isPallindrome(int n){
    if(n<0) return false;

    int revNum=reverse(n);
    return n == revNum;
}
int main(){
    int n=353;
    cout<<isPallindrome(n)<<endl;
    return 0;
}*/

//2D Array
/*#include<iostream>
using namespace std;

int main(){
    
    int matrix[4][3];
    int rows=4;
    int cols=3;
    //input

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
       
    }
    //output

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}*/


//Linear search
/*#include<iostream>
using namespace std;

bool linearSearch(int matrix[][3],int rows,int cols,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(matrix[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

int main(){
    
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows=4;
    int cols=3;
    cout<<linearSearch(matrix,rows,cols,8)<<endl;
    return 0;
}*/


//Max row sum
/*#include<iostream>
#include<climits>

using namespace std;

int maxSum(int mat[][3],int rows,int cols){
    int maxrowSum=INT_MIN;

    for(int i=0;i<rows;i++){
        int rowsumI=0;
        for(int j=0;j<cols;j++){
            rowsumI+=mat[i][j];

        }
        maxrowSum=max(maxrowSum,rowsumI);

    }
    return maxrowSum;
    

}

int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows=3;
    int cols=3;
    cout<<maxSum(matrix,rows,cols)<<endl;
    return 0;
}*/

//Max column sum
/*#include<iostream>
#include<climits>

using namespace std;

int maxSum(int mat[][3],int rows,int cols){
    int maxcolSum=INT_MIN;

    for(int j=0;j<cols;j++){
        int colSumI=0;
        for(int i=0;i<rows;i++){
            
            colSumI+=mat[i][j];

        }
        maxcolSum=max(maxcolSum,colSumI);

    }
    return maxcolSum;
    

}

int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows=3;
    int cols=3;
    cout<<maxSum(matrix,rows,cols)<<endl;
    return 0;
}*/

//diagonal sum
/*#include<iostream>
using namespace std;

int diagonalSum(int mat[][4],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=mat[i][j];
            }else if(j==n-i-1){
                sum+=mat[i][j];
            }
        }
    }
    return sum;
}

int main(){
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n=4;
    cout<<diagonalSum(matrix,n)<<endl;
    return 0;
}*/

//or  optimized
/*#include<iostream>
using namespace std;

int diagonalSum(int mat[][4],int n){
    int sum=0;

    //pd=>j=i
    //sd=>j=n-i-1

    for(int i=0;i<n;i++){
        sum+=mat[i][i];

        if(i!=n-i-1){
            sum+=mat[i][n-i-1];
        }
    }
    return sum;

}
int main(){
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n=4;
    cout<<diagonalSum(matrix,n)<<endl;
    return 0;
}*/

//2D vectors
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> mat={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    //rows=>mat.size()
    //cols=mat[i].size()
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/


//Recursion
/*#include<iostream>
using namespace std;

void printNums(int n){  //recursive function
    if(n==1){
        cout<<"1\n";
        return ;
    }

    cout<<n<<" ";
    printNums(n-1);
}
int main(){
    printNums(4);
    return 0;
}*/

//N Factorial using recursion
/*#include<iostream>
using namespace std;

int nfactorial(int n){
    if(n==0){
        return 1;
    }

    return n * nfactorial(n-1);
}
int main(){
    cout<<nfactorial(4)<<endl;
    return 0;
}*/

//Sum of N nums
/*#include<iostream>
using namespace std;

int sumofN(int n){
    int sum=0;
    if(n==1){
        return 1;
    }

    return n+ sumofN(n-1);
}
int main(){
    cout<<sumofN(5)<<endl;
    return 0;
}*/

//fibonacci
/*#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==1 || n==0){
        return n;
    }
    
    return  fibonacci(n-1) + fibonacci(n-2);
    
}
int main(){
    cout<<fibonacci(5)<<endl;
    return 0;
}*/

//Check if array is sorted or not
/*#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> arr,int n){
    if(n==0|| n==1){
        return true;
    }
    return arr[n-1]>=arr[n-2] && isSorted(arr,n-1);


}
int main(){
    vector<int> arr={1,2,3,4,5};

    cout<<isSorted(arr,arr.size())<<endl;
    return 0;
}*/

//Recursive Binary Search
/*#include<iostream>
#include<vector>
using namespace std;

//helper function
    int binSearch(vector<int>& arr,int tar,int st,int end){
        if(st<=end){
            int mid=st+(end-st)/2;

            if(arr[mid]==tar) return mid;
            else if(arr[mid]<=tar){
                return binSearch(arr,tar,mid+1,end);
            }else{
                return binSearch(arr,tar,st,mid-1);
            }
        }
        return -1;
    }
    int search(vector<int>& arr, int tar) {
         return binSearch(arr,tar,0,arr.size()-1);
    }
    int main() {
    // Example sorted array
    vector<int> arr = {-1,0,3,5,9,12};
    int target=9;

    

    int result = search(arr, target);

    if(result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}*/

//Print all Subsets using(Backtracking)
/*#include<iostream>
#include<vector>
using namespace std;

void printSubsets(vector<int>& arr,vector<int>& ans,int i){
    if(i==arr.size()){
        for(int val: ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }
    //include
    ans.push_back(arr[i]);
    printSubsets(arr,ans,i+1);
    
    ans.pop_back();  //backtrack
    //exclude
    printSubsets(arr,ans,i+1);

}
int main(){
    vector<int> arr={1,2,3};
    vector<int> ans;  //store subsets

    printSubsets(arr,ans,0);
    return 0;
}*/






    












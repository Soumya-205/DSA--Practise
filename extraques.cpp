

// Bank management system
/*#include <iostream>
#include <iomanip>
#include <limits>

void showBalance(double balance);  // changed from double to void
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 123;
    int choice = 0;

    do {
        std::cout << "*************\n";
        std::cout << "Enter your choice:\n";
        std::cout << "1. Show Balance:\n";
        std::cout << "2. Deposit money:\n";
        std::cout << "3. Withdraw money:\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice)
        {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance = balance + deposit();
                break;
            case 3:
                balance = balance - withdraw(balance);
                break;
            case 4:
                std::cout << "Thanks for visiting\n";
                break;
            default:
                std::cout << "Invalid choice\n";
                break;
        }

    } while (choice != 4);

    return 0;
}

void showBalance(double balance)  // changed from double to void
{
    std::cout << "Your Balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}

double deposit()
{
    double amount = 0;
    std::cout << "Enter the amount to be deposited:\n";
    std::cin >> amount;
    if (amount > 0) {
        return amount;
    } else {
        std::cout << "This is not a valid amount:\n";
        return 0;
    }
}

double withdraw(double balance)
{
    double amount;
    std::cout << "Enter the amount to be withdrawn:\n";
    std::cin >> amount;
    if (amount > balance) {
        std::cout << "Insufficient balance\n";  // Fixed spelling
        return 0;
    } else if (amount < 0) {
        std::cout << "That's not a valid amount\n";
        return 0;
    } else {
        return amount;
    }
}
*/


//Quiz game

/*#include<iostream>
#include<string>
int main(){
    std::string questions[]={
        "1. What year was c++ created?:",
        "2.Who invented c++?:",
        "3. What is the predecessor of c++?:",
        "4.Is the earth flat?:"};

    std::string options[][4]={
        {"A.1969","B.1975","C.1985","D.1989"},
        {"A.Guido Van Rossum","B.Bjarne Stroutstup","C.John Carmack","D.Mark Zukerberg"},
        {"A.C","B.C+","C.C--","D.B++"},
        {"A.Yes","B.No","C.Sometimes","D.What's Earth"}};

    char answerkey[]={'C','B','A','B'};

    int size=sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score=0;

    for(int i=0;i<size;i++){
        std::cout<<"******************"<<'\n';
        std::cout<<questions[i]<<'\n';
        std::cout<<"******************"<<'\n';
        for(int j=0;j<sizeof(options[i])/sizeof(options[i][0]);j++){
            std::cout<<options[i][j]<<'\n';
            
        }
        std::cin>>guess;
        guess=toupper(guess);

        if(guess==answerkey[i]){
            std::cout<<"Correct!\n";
            score++;
        }
        else{
            std::cout<<"Wrong!\n";
            std::cout<<"Answer is:"<<answerkey[i]<<'\n';
        }
        std::cout<<'\n';

    }

    std::cout<<"***************************\n";
    std::cout<<"Results\n";
    std::cout<<"***************************\n";

    std::cout<<"Correct Guess:"<<score<<'\n';
    std::cout<<"# of Questions:"<<size<<'\n';
    std::cout<<"Score"<<(score/size)*100<<"%";
    
    return 0;

    
}*/


//Tic tac toe game

/*#include<iostream>
#include<ctime>

void DrawBoard(char *spaces);
void PlayerMove(char *spaces,char player);
void ComputerMove(char *spaces,char computer);
bool checkWinner(char *spaces,char player,char computer);
bool checkTie(char *spaces);


int main(){
    char spaces[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player='X';
    char computer='O';
    bool running=true;

    std::srand(std::time(0));

    DrawBoard(spaces);
    while (running){
        PlayerMove(spaces,player);
        DrawBoard(spaces);
        if(checkWinner(spaces,player,computer)){
            running=false;
            break;
        }
        else if(checkTie(spaces)){
            running=false;
            break;
        }
        ComputerMove(spaces,computer);
        DrawBoard(spaces);
        if(checkWinner(spaces,player,computer)){
            running=false;
            break;
        }
        else if(checkTie(spaces)){
            running=false;
            break;
        }

        
    }
    std::cout<<"Thanks for Playing"<<'\n';
    return 0;



}

void DrawBoard(char *spaces){
    std::cout<<'\n';
    std::cout<<"     |     |     "<<'\n';
    std::cout<<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<'\n';
    std::cout<<"_____|_____|_____"<<'\n';
    std::cout<<"     |     |     "<<'\n';
    std::cout<<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<'\n';
    std::cout<<"_____|_____|_____"<<'\n';
    std::cout<<"     |     |     "<<'\n';
    std::cout<<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<'\n';
    std::cout<<"_____|_____|_____"<<'\n';
    std::cout<<'\n';

}
void PlayerMove(char *spaces,char player){
    int number;
    do{
        std::cout<<"Enter a spot to place a marker(1-9)";
        std::cin>>number;
        number--;
        if(number<0||number>8){
            std::cout<<"Invalid input, please enter a number between 1 to 9\n";
            continue;
        }
        if(spaces[number]!=' '){
            std::cout<<"this spot is already taken, try again\n";
            continue;

        }
        break;

    }while(true);
    spaces[number]=player;

}
void ComputerMove(char *spaces,char computer){
    int number;
    

    while(true){
        number=rand()%9;
        if (spaces[number]==' '){
            spaces[number]=computer;
            break;
        }
    }

}
bool checkWinner(char *spaces, char player,char computer){
    if((spaces[0]!=' ')&&(spaces[0]==spaces[1]&&spaces[1]==spaces[2])){
        spaces[0]==player?std::cout<<"You Win\n":std::cout<<"You Lose\n";
    }
    else if((spaces[3]!=' ')&&(spaces[3]==spaces[4]&&spaces[4]==spaces[5])){
        spaces[3]==player?std::cout<<"You Win\n":std::cout<<"You Lose\n";
    }
    else if((spaces[6]!=' ')&&(spaces[6]==spaces[7]&&spaces[7]==spaces[8])){
        spaces[6]==player?std::cout<<"You Win\n":std::cout<<"You Lose\n";
    }
    // for columns
    else if((spaces[0]!=' ')&&(spaces[0]==spaces[3]&&spaces[3]==spaces[6])){
        spaces[0]==player?std::cout<<"You Win\n":std::cout<<"You Lose\n";

    }
    else if((spaces[1]!=' ')&&(spaces[1]==spaces[4]&&spaces[4]==spaces[7])){
        spaces[1]==player?std::cout<<"You Win\n":std::cout<<"You Lose\n";
    }
    else if((spaces[2]!=' ')&&(spaces[2]==spaces[5]&&spaces[5]==spaces[8])){
        spaces[2]==player?std::cout<<"You Win\n":std::cout<<"You Lose\n";
    }
    // now for diagonals
    else if((spaces[0]!=' ')&&(spaces[0]==spaces[4]&&spaces[4]==spaces[8])){
        spaces[0]==player?std::cout<<"You Win\n":std::cout<<"You Lose\n";
    }
    else if((spaces[2]!=' ')&&(spaces[2]==spaces[4]&&spaces[4]==spaces[6])){
        spaces[2]==player?std::cout<<"You Win\n":std::cout<<"You Lose\n";
    }
    else{
        return false;
    }
    return true;
}
bool checkTie(char *spaces){

    for(int i=0;i<9;i++){
        if(spaces[i]==' '){
            return false;
        }
    }
    std::cout<<"It's a Tie!\n";
    return true;

}*/

//Credit card validator program

#include<iostream>
int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main(){
    std::string cardNumber;
    int result=0;
    std::cout<<"Enter the credit card number #:";
    std::cin>>cardNumber;

    result=sumEvenDigits(cardNumber)+sumOddDigits(cardNumber);
    if(result%10==0){
        std::cout<<cardNumber<<" is valid";

    }
    else{
        std::cout<<cardNumber<<" is not valid";
    }
    return 0;

}

int getDigit(const int number){
    return number%10+((number/10)%10);

}
int sumOddDigits(const std::string cardNumber){
    int sum =0;
    for(int i=cardNumber.size()-1;i>=0;i-=2){
        sum+=cardNumber[i]-'0';
    }
    return sum;

}
int sumEvenDigits(const std::string cardNumber){
    int sum =0;
    for(int i=cardNumber.size()-2;i>=0;i-=2){
        sum+=getDigit((cardNumber[i]-'0')*2);
    }
    return sum;

}
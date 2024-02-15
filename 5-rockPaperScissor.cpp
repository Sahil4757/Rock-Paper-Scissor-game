#include<iostream>
#include<ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);


int main()
{
    char player;
    char computer;

    player = getUserChoice();
    cout << "Your choice : ";
    showChoice(player);

    computer = getComputerChoice();
    cout <<"\nComputer's choice : ";
    showChoice(computer);

    cout<<'\n';
    chooseWinner(player ,computer);

    return 0;
}


char getUserChoice()
{
    char player;

    do{
    cout <<"\n*************************\n";
    cout <<"\nRock Paper Scissor Game \n";
    cout <<"press 'r' for rock"<<endl;
    cout <<"press 'p' for paper"<<endl;
    cout <<"press 's' for scissor"<<endl;
    cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice()
{
    srand(time(0));

    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}

void showChoice(char choice)
{

    switch(choice)
    {
        case 'r':
            cout<<"Rock";
            break;
        case 'p':
            cout<<"Paper";
            break;
        case 's':
            cout<<"Scissor";
            break;
    }
}

void chooseWinner(char player, char computer)
{
    switch(player){
        case 'r':
            if (computer =='r')
                cout<<"Its a tie";
            else if (computer == 'p')
                cout<<"You lose.";
            else
                cout<<"You win";
                break;
            
        case 'p':
            if (computer =='r')
                cout<<"You win!";
            else if (computer == 'p')
                cout<<"Its a tie ";
            else
                cout<<"You lose";
                break;

        case 's':
            if (computer =='r')
                cout<<"You lose ";
            else if (computer == 'p')
                cout<<"You win!";
            else
                cout<<"Its a tie";
                break;
    }
}


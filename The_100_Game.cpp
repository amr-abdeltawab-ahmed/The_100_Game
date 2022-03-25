#include<iostream> 
using namespace std;

int main()
{
    cout << "Welcome to 100 game\n";
    cout << "You can select any number from 1 to 10\n";
    cout << "the player will win when addition reaches 100\n";
    
    string p1;
    cout << "Player 1 Name : ";
    cin >> p1;
    cout << "Hello "<< p1 <<"\n";
    
    string p2;
    cout << "Player 2 Name : ";
    cin >> p2;
    cout << "Hello "<<p2 <<"\n";
    
    int total_1 = 0;
    int total_2 = 0;
    
    while ( total_1 < 100 ) {
    do {
      int n1;
      cout <<p1 << ", give a number between 1 and 10 :\n";
      cin >>n1;
      if (n1 < 10) {
        total_1 += n1;
        if (total_1 >= 100) {
        cout <<"congratulations " <<p1 <<" you are the winner" <<"\n";
        cout <<"Thank You For Playing";
        return 0;  
        } else {
          cout <<p1 <<" your total right now: " <<total_1 <<"\n";
          break; 
        }  
      } else {
          cout << "You should give a number between 1 and 10 \n";
      }
    }
    while (total_2 < 100);
    do {
      int n2;
      cout <<p2 << ", give a number between 1 and 10 :\n";
      cin >>n2;
      if (n2 < 10) {
        total_2 += n2;
        if (total_2 >= 100) {
        cout <<"congratulations " <<p2 <<" you are the winner" <<"\n";
        cout <<"Thank You For Playing";
        return 0;  
        } else {
          cout <<p2 <<" your total right now: " <<total_2 <<"\n";
          break; 
        }  
      } else {
          cout << "You should give a number between 1 and 10 \n";
      }
    }
    while (total_2 < 100);
    };
}
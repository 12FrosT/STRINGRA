#include<bits/stdc++.h>
using namespace std;

int main()
{
    srand (time(NULL));

    int computer = rand() % 3 + 1;  // Generating the random choices among 1, 2 & 3

    int user = 0; // For storing the user's choice

    /*
        Declaring string variables for choices
    */
    string rock = "1> Rock\n";
    string paper = "2> Paper\n";
    string scissors = "3> Scissors\n\n";

    /*
        Just a little bit of decoration :-)
    */
    cout << "**************************\n";
    cout << "- Rock Paper Scissors -\n";
    cout << "**************************\n\n";

    cout << rock;
    cout << paper;
    cout << scissors;

    cout << "Your choice: ";
    cin >> user;


    cout << "\nYou choose: ";

      /*
         Printing the user's choice based on what he has chosen
      */
      switch(user){
        case 1 :
            cout << rock;
            break;
        case 2 :
            cout << paper;
            break;
        case 3 :
            cout << scissors;
            break;
        default :
            cout << "Invalid Choice\n";
      }

      /*
          Printing what computer has chosen based on the random number generated
      */

        cout << "Computer choose: ";
        switch(computer){
        case 1 :
            cout << rock << endl;
            break;
        case 2 :
            cout << paper << endl;
            break;
        case 3 :
            cout << scissors << endl;
            break;
        default :
            cout << "Invalid Choice\n";
      }


      /*
        Win and Loose logic

        And Finally, printing, who has won.
      */
      if(user == computer){
        cout << "Draw Game\n";
      }
      else if(user == 1 && computer == 3){
        cout << "You Win\n";
      }
      else if(user == 3 && computer == 2){
        cout << "You Win\n";
      }
      else if(user == 2 && computer == 1){
        cout << "You Win\n";
      }
      else{
        cout << "Computer Wins!\n";
      }
    return 0;
}

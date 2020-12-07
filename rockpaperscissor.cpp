#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

int pilmen;
int u;
int a,b,c,d,e,f;
int z = 0;
char jaw;

//This is a free source program, NO COPYRIGHT
//This program maker is zlovers88

//Donation : 
//Ethereum ---->> 0xF01c8E0a57c55b764469DA34716583715de86C0A
//Bitcoin ---->> bc1qefjt7wa4897f0f7g7qrzd6dk538t9huumrunnq
//Dogecoin --->> DSVvzfP4u4ppCYchJWAGCwvcbvR6W65CSb

void menu(){
    cout << "========Menu========" << endl;
    cout << "1. Rock, Paper, Scissors" << endl;
    cout << "2. Prime Number" << endl;
    cout << "3. Love Shape" << endl;
    cout << "0. Exit" << endl;
    cout << "Choose Menu : ";
}
void permainan_suit(){
    int round;
    int scorep = 0;
    int scorem = 0;
    string ha;
    string player;
    string musuh;

    cout << "Let's play rock, paper, scissors !" << endl;
    cout << "How many round(s) ? ";
    cin >> round;

    for(u=1; u<=round; u++){


        cout << "Round-" << u << endl;
        cout << "Input (rock/paper/scissors) : ";
        cin >> player;
        

        srand(time(0));
        int z = rand()%3+1;

        if (z == 1){
            
            musuh = "rock";
        }
        else if(z == 2){
            musuh = "paper";
        }
        else {musuh = "scissors";}
        cout << "The enemy issued " << musuh << endl;

        

        if(player == musuh){
            ha = "Tied!";
            cout << ha << endl;
        }
        else if(player == "rock"){
            if(musuh == "paper"){
                ha = "You Lose!";
                cout << ha << endl;
            }
            else if(musuh == "scissors"){
                ha = "You Win!";
                cout << ha << endl;
            }
        }
        else if(player == "paper"){
            if(musuh == "rock"){
                ha = "You Win!";
                cout << ha << endl;
            }
            else if(musuh == "scissors"){
                ha = "You Lose!";
                cout << ha << endl;
            }
        }
        else if(player == "scissors"){
            if(musuh == "rock"){
                ha = "You Win!";
                cout << ha << endl;
            }
            else if(musuh == "paper"){
                ha = "You Lose!";
                cout << ha << endl;
            }
        }
        else{;}
        
        
        if(ha == "You Win!"){
            scorep++;
        }
        else if(ha == "You Lose!"){
            scorem++;
        }
        else{;}

    }
    cout << "\nScore :" << endl;
    cout << "You : " << scorep << " Enemy : " << scorem << endl;
}
void bilangan_prima(){

    int i=0, cek, bil=2, nilai;

      cout << "Input how many prime number :";
      cin >> nilai;
      while(i<nilai){
            cek=0;
            for(int j=2;j<=bil;j++){
                  if(bil%j==0){
                   cek++; 
                  }
            }
            if(cek == 1){
              cout<<bil; 
                  if(i < nilai-1){ 
                       cout<<", ";
                  }else {
                    cout<<'.'; 
                  }
               i++;
            }
          bil++;
       }
}
void bentuk_lova(){

    for (int a=1;a<=4;a++)
    {
        for (int b=4;b>=a;b--)
        {
            cout<<" ";
        }
        for (int c=1;c<=a;c++)
        {
            if (a==1)
            cout<<" ";
            else if (a==2 && c==1)
            cout<<" ";
            else
            cout<<"* ";
        }
        for (int d=a;d<=4;d++)
        {
            if (a==1 && a==2)
            cout<<" ";
            else
            cout<<"  ";
        }
        for (int e=1;e<=a;e++)
        {
            if (a==1)
            cout<<" ";
            else if (a==2 && e==1)
            cout<<"  ";
            else
            cout<<"* ";
        }
           
    cout<<endl;
    }
    for (int a=1;a<=9;a++)
    {
        for (int e=1;e<=a;e++)
        {
            cout<<" ";
        }
        for (int f=9;f>=a;f--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    menu();
    cin >> pilmen;
    if(pilmen == 1){
        permainan_suit();

        cout << "Back to menu?[y/n]";
        cin >> jaw;
        if(jaw == 'y'){
        main();
        }
    }
    else if(pilmen == 2){
        bilangan_prima();
        cout << "Back to menu?[y/n]";
        cin >> jaw;
        if(jaw == 'y'){
        main();
        }
    }
    else if(pilmen == 3){
        bentuk_lova();
        cout << "Back to menu?[y/n]";
        cin >> jaw;
        if(jaw == 'y'){
        main();
        }
    }
    return 0;
    
}
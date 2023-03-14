#include<iostream>
using namespace std;

int main(){
    char name[20];
    
    cout<<"Enter your name - ";
    cin>>name;
    name[2] = '\0'; // gives string before no. Eg: Water12melon, output - Water

    cout<<"Your name is "<<name<<endl;
  
}

// int main(){
//      char name[20];

//     cout<<"Enter name - ";
//     cin>>name;

//     cout<< "Your name is "<<endl;
//     cout<< name <<endl;

// }
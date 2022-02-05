#include<bits/stdc++.h>
using namespace std;

int getLength(char name[]){
    int count =0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];

    cout<<"Enter the word - ";
    cin >> name;

    cout<<"The word is "<<name<<endl;

    cout<<"The length is - "<<getLength(name)<<endl;

}
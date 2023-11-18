#include<bits/stdc++.h>
using namespace std;

bool checkP(char a[], int n){
    int s=0;
    int e = n-1;

    while(s<=e){
        char char1 = toupper(a[s]);
        char char2 = toupper(a[e]);

        if (char1 != char2) {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;

    while (s<e)
    {
            swap(name[s++], name[e--]);
    }
}

int getLength(char name[]){
    int count=0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;   

    cout<<"Your name is "<<endl;
    cout<<name<<endl;

    int len = getLength(name);
    cout<<len<<endl;

    reverse(name,len);
    cout<<"Your reverse name is ";
    cout<<name<<endl;

    cout<<"Palindrome or not " << checkP(name, len)<<endl;
}
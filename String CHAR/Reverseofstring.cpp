#include<bits/stdc++.h>
using namespace std;

void reverse(char name[],int n){
    // s & e are two pointers
    int s=0;
    int e = n-1;
    
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getLength(char name[]){
    int count =0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Your name is : "<<name<<endl;

    int len = getLength(name);
    cout<<"Length of name is : "<<len<<endl;

    reverse(name,len);
    cout<<"Name in reverse "<<name<<endl;
}
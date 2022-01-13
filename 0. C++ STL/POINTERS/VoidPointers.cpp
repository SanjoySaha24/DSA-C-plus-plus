#include<bits/stdc++.h>
using namespace std;

void printNumber(int* numberPtr){
    cout <<*numberPtr << endl;
}

int main(){
    int num = 5;
    printNumber(&num);

    return 0;

}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<string> nameStack;

    ifstream fin("name.txt");

    string name;

    for(int i=0; i<3; i++){
        fin>>name;
        nameStack.push(name);
    }

    while(!nameStack.empty()){
        cout<<nameStack.top()<<endl;
        nameStack.pop();
    }




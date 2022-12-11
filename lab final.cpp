#include <bits/stdc++.h>
using namespace std;
# define m 100

vector<int> g[m];
int visited[m];
int dis[m];

void bfs (int v){
    queue <int> q;
    visited[v]=1;
    dis[v]=0;

while(!q.empty()){
    int p=q.front();
    q.pop();
    cout<<p<<" ";
    for(int i=0;i<g[p].size();i++){
        if(visited[next]==0){
            q.push(next);
            visited [next]=1;
            dis[next]=dis[p]+1;
        }
    }
}

}

int main(){


}






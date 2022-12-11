#include<bits/stdc++.h>
using namespace std
procedure BFS(G,u)
Queue <int> Q
Q.push(v)
visited[v]=TRUE
while(!Q.empty()){do
    p=Q.front()
    Q.pop()
    for(i=0,G[v].size()){
        do
    next=graph[v][i]
if(visited[next]==0){
        Q.push(next)
        visited[next]=1
}
    }
}
int main()
{

}



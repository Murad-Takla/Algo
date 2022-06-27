///  Bismillah Hir Rahmanir Rahim  /// 

#include<bits/stdc++.h>  
using namespace std; 
#include<set>
#include<map>
#define sp " "
#define ll long long
#define ull unsigned long long int 
#define nl endl
#define pb push_back
#define pf push_front 
#define vi vector<int>
#define vb vector<bool>
#define vll vector<long long >
#define vc vector<char>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define time cerr << "Time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl;

 
    

  void bfs (){
       int n , e ; 
       cin >> n >> e ;

       vector<vi> vis(n+1);

       for (int i = 0 ; i<e ; i++)
       {
        int u ,v ;
        cin >> u >> v ;
        vis[u].pb(v);
        vis[v].pb(u);

       }  
    int s ; 
    cin >> s ;
     vi level(n+1 ,-1);

     queue<int>q;
     level[s]=0 ; 
     q.push(s);

     while (!q.empty()){
      int u = q.front();
       q.pop();
       for (int v : vis[u]){
        if (level[v]==-1){
           level[v]=0;
            q.push(v);
        }
       }
       cout << u << sp ;      
     }
  }

int main ()
{
    FIO;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt", "w", stderr);
    #endif
    

     bfs();

  
  
  time;
  return 0;
}

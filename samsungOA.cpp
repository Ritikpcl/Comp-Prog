#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Tree{
    public:
    ll val;
    Tree* left;
    Tree* right;
    Tree* parent;
    Tree(ll val){
        this->val = val;
        left = NULL;
        right = NULL;
        parent = NULL;
    }
};

Tree* targetNode = NULL;

Tree* buildTree(vector<ll>& v, int k, ll n, Tree* parent){
    if(k >= v.size()) return NULL;
    if(v[k] == -1) return NULL;
    Tree* newNode = new Tree(v[k]);
    newNode->parent = parent;
    if(n == v[k]) targetNode = newNode;
    newNode->left = buildTree(v,2*k+1,n,newNode);
    newNode->right = buildTree(v,2*k+2,n,newNode);
    return newNode;
}

void dfs(Tree* root, int dis, ll& ans, map<Tree*,ll>& visit){

    if(!root) return;

    if(visit.find(root) != visit.end()) return;
    visit[root] = 1;

    if(dis == 0){
        ans += root->val;
        return;
    }

    dfs(root->parent,dis-1,ans,visit);
    dfs(root->left,dis-1,ans,visit);
    dfs(root->right,dis-1,ans,visit);
}

void solve(){
    ll k,n,h;
    cin>>k>>n>>h;
    ll numberOfNodes = pow(2,h+1) - 1;
    vector<ll> v(numberOfNodes);
    for(ll i=0; i<numberOfNodes; i++) cin>>v[i];
    Tree* root = buildTree(v,0,n,NULL);
    ll ans = 0;
    map<Tree*,ll> visit;
    dfs(targetNode,k,ans,visit);
    cout<<ans<<endl;
}


int main(){
    solve();
    return 0;
}
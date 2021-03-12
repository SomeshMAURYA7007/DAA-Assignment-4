#include<bits/stdc++.h>
using namespace std;
int mat[1001][1001];

bool check( int lx , int ly , int rx , int ry , int key ){
    if(lx==rx || ly==ry)return false;
    if(rx-lx==1 && ry-ly==1){
        if(mat[rx][ry]==key)return true;
        else return false;
    }
    if(mat[lx][ly]>key || mat[rx][ry]<key )return false;
    int mx=(lx+rx)/2,my=(ly+ry)/2;
    bool ans=false;
    ans|=check(lx,ly,mx,my,key);
    ans|=check(mx,ly,rx,my,key);
    ans|=check(lx,my,mx,ry,key);
    ans|=check(mx,my,rx,ry,key);
    return ans;
}

int main()
{
    cout<<"Enter size of matrix (between 1 to 1000) ";
    int n;
    cin>>n;
    if(n<1 || n>1000){cout<<"Invalid input"; exit(0);}
    set <int> s;
    while(s.size()<(n*n)){
        s.insert(rand()%(10*n*n));
    }
    // for(int i=0;i<=n;i++)for(int j=0;j<=n;j++)mat[i][j]=-1;
    int a=0,b=0;
    for(auto num:s){
        mat[a+1][b+1]=num;
        if(a==(n-1))b++;
        a=(a+1)%n;
    }
    cout<<"Matrix is"<<endl;
    for(int i=1;i<=n;i++){for(int j=1;j<=n;j++)cout<<mat[i][j]<<" "; cout<<endl;}
    cout<<endl;
    int t;
    cout<<"Enter number of keys to be checked ";
    cin>>t;
    while(t--){
        cout<<"Enter Key ";
        int key;
        cin>>key;
        bool ans=check(0,0,n,n,key);
        if(ans)cout<<"Key is present"<<endl<<endl;
        else cout<<"Key is not present"<<endl<<endl;
    }
        
}


#include<bits/stdc++.h>

using namespace std;

int main(){

    long long int t,i,j,k;

    cin>>t;

    for(i=1;i<=t;i++){

        long long int n;

        cin>>n;

        map<pair<long long int,long long int>,bool>col,row;

        set<long long int>r,c;

        long long int col1=0,row1=0,sum=0;

        long long int a[n][n],i1,j1,k1;

        for(i1=0;i1<n;i1++){
            for(j1=0;j1<n;j1++){
                cin>>a[i1][j1];

                if(col[make_pair(j1,a[i1][j1])]){
                    c.insert(j1);
                }
                else{
                    col[make_pair(j1,a[i1][j1])]=true;
                }

                if(row[make_pair(i1,a[i1][j1])]){
                    r.insert(i1);
                }
                else{
                    row[make_pair(i1,a[i1][j1])]=true;
                }

                if(i1==j1)
                    sum=sum+a[i1][j1];
            }
        }

        cout<<"case #"<<i<<": "<<sum<<" "<<r.size()<<" "<<c.size()<<"\n";
    }

    return 0;
}

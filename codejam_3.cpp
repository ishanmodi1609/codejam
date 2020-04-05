#include<bits/stdc++.h>

using namespace std;

int main(){

    long long int t,i,j,k,l;

    cin>>t;

    for(i=1;i<=t;i++){

        vector<pair<long long int,long long int> >v,v1;

        long long int start,end1,n,i1,j1,i2,j2,count1=0;

        cin>>n;

        long long int arr[n][2];

        for(i1=0;i1<n;i1++){
            cin>>arr[i1][0]>>arr[i1][1];
            //v.push_back(make_pair(start,end1));
            v1.push_back(make_pair(arr[i1][0],i1));
        }

        //sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());

        char ans[n+1];
        long long int end_task[n+1],last_j=0,last_c=0;

        for(i1=0;i1<v1.size();i1++){

           if(last_c<=v1[i1].first){
            //    cout<<"In 1"<<"\n";
               ans[v1[i1].second]='C';
               last_c=arr[v1[i1].second][1];
           }
           else if(last_j<=v1[i1].first){
            //   cout<<"In 2"<<"\n";
               ans[v1[i1].second]='J';
               last_j=arr[v1[i1].second][1];
           }
           else{
               count1++;
           }
         //   cout<<"a:"<<ans[i1]<<"\n";
        }

        if(count1>0){
            cout<<"Case #"<<i<<": ";
            cout<<"IMPOSSIBLE"<<"\n";
        }
        else{
            cout<<"Case #"<<i<<": ";
            for(i1=0;i1<n;i1++)
                cout<<ans[i1];
            cout<<"\n";
        }
    }

    return 0;
}

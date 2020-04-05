#include<bits/stdc++.h>

using namespace std;

int main(){

    long long int t,i,j,k,l,m;

    cin>>t;

    for(i=1;i<=t;i++){

        string s;

        cin>>s;

        stack<char>s1;

        for(j=0;j<s.length();j++){

            if(j==0){
                for(k=0;k<s[j]-'0';k++)
                    s1.push('(');
                s1.push(s[j]);
            }
            if(j!=0){

                if(s[j-1]>s[j]){
                    for(k=0;k<(s[j-1]-s[j]);k++){
                        s1.push(')');
                    }
                    s1.push(s[j]);
                }
                else{
                    for(k=0;k<(s[j]-s[j-1]);k++){
                        s1.push('(');
                    }
                    s1.push(s[j]);
                }
            }
            if(j==(s.length()-1)){
                for(k=0;k<s[j]-'0';k++)
                    s1.push(')');
            }
        }

        vector<char>v;

        while(!s1.empty()){
            v.push_back(s1.top());
            s1.pop();
        }

        reverse(v.begin(),v.end());

        cout<<"case #"<<i<<": ";
        for(k=0;k<v.size();k++)
            cout<<v[k];
        cout<<"\n";
    }

    return 0;
}

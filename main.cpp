#include<iostream>
#include<string>
using namespace std;

string put(int n){
if(n==1){
    return "AB";
}
else{
    string S=put(n-1);
    string S1="";
    S1+=S;
    for(int i=0;i<S.length();i++){
        if(S[i]=='B')
            S[i]='C';
        else if(S[i]=='C')
            S[i]='B';
        
    }
    for(int i=0;i<S1.length();i++){
        if(S1[i]=='A')
            S1[i]='C';
        else if(S1[i]=='C')
            S1[i]='A';

}


    S=S+"AB"+S1;
    return S;
}
}

int main(){
int n;
cin>>n;
string ans=put(n);
int sis=0;
int k=1;
while(sis<ans.length()){
cout<<k<<' '<<ans[sis]<<' '<<ans[sis+1]<<'\n';
sis+=2;
k++;
}
}
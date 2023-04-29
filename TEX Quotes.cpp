#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s;
    int x=0;
    while(getline(cin,s)){
        int n=s.length();
            for(int i=0;i<n;i++){
        if(s[i]=='"' && x==0){
                printf("``");
                x=1;
            }
            else if(s[i]=='"' && x==1){
                printf("''");
                x=0;
            }

        else
            printf("%c",s[i]);

    }
        cout<<endl;
        }
    return 0;
}

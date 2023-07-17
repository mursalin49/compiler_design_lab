#include<bits/stdc++.h>
using namespace std;
int main(){
int i , len , f= 0;
char str[1000];
cin>>str;
len = strlen(str);
for(i=0;i<len;i++){
    if(str[i]< 'a' || str[i]>'m'){
        f=1;
        break;
    }
}
if(f==1){
    cout<<"invalid" <<endl;

}
else {
    cout<<" valid" <<endl;
}
main();
return 0;
}

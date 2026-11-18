#include<iostream>
#include<stack>

using namespace std;

int main(){

    string str;
    cin>>str;

    stack<char> s;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            s.push(str[i]);
        }else{
            if(str.size()==0){
                cout<<"the string doesnt exist"<<endl;
                return 0;
            }

            if((s.top()=='(' && str[i]==')')||
                  (s.top()=='{'  && str[i]=='}')  ||
                       (s.top()=='['  && str[i]==']')){
                        s.pop();
                    }else{
                        cout<<"the string is not valid"<<endl;
                        return 0;
                    }
        }
    }

    if(s.size()==0){
        cout<<"the string is valid"<<endl;
    }
    
  return 0;
}
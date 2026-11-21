#include<iostream>
#include<vector>
#include<stack>
#include<cctype>

using namespace std;

int main(){
    string str;
    getline(cin, str);
    
    stack<int> st;

    for(char ch: str){
        
        if(ch==' '){
            continue; 
        } 

        if(isdigit(ch)){
            st.push(ch-'0');
        }
        else{
            int a=st.top();
            st.pop();

            int b=st.top();
            st.pop();

            if(ch=='+'){
                st.push(a+b);
            }else if(ch=='-'){
                st.push(b-a);
            }else if (ch=='*'){
                st.push(a*b);
            }else{
                st.push(b/a);
            }
        }
    }
    cout<<st.top()<<endl;
    return 0;
}
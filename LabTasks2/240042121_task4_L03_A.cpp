#include<iostream>
#include<vector>
#include<stack>

using namespace std;
vector<int> prevSmallerElement(vector<int> &heights){
int n=heights.size();
vector<int> left(n);

stack<int> st;
for(int i=0; i<n; i++){
    while(st.size()>0 && heights[st.top()]>=heights[i]){
        st.pop();
    }

    if(st.empty()){
        left[i]=-1;
    }else{
        left[i]=st.top();
    } 

    st.push(i);
}
return left;
};

vector<int> nextSmallerElement(vector<int> & heights){
    int n=heights.size();
    vector<int> right(n);

    stack<int>st;
    for(int i=heights.size()-1; i>=0; i--){
        while(st.size()>0 && heights[st.top()]>=st.top()){
            st.pop();
        }

        if(st.empty()){
          right[i]=-1; 
        }else{
            right[i]=st.top();
        }

        st.push(i);
    }

    return right;
}


int main(){
    int n;
    cin >> n;

    vector<int> heights(n);

    for(int i = 0; i < n; i++){
        cin >> heights[i];
    }

    vector<int> left = prevSmallerElement(heights);
    vector<int> right = nextSmallerElement(heights);

    long long maxArea = 0;

    for(int i = 0; i < n; i++){
        int width = right[i] - left[i] - 1;

        long long area = 1LL * heights[i] * width;

        maxArea = max(maxArea, area);
    }

    cout << maxArea << endl;

    return 0;
}

#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main(){

    unordered_set<int>st;
    st.insert(10);
    st.insert(15);
    st.insert(8);
    st.insert(4);
    


    // unordered_set<int>::iterator it=st.begin();
    // while(it!=st.end()){
    //     cout<<*it<<endl;
    //     it++;
    // }

    // if(st.empty()==true){
    //     cout<<"Set is Empty";
    // }
    // else{
    //     cout<<"Set is Not Empty";
    // }


    // cout<<st.size()<<endl;
    // st.erase(st.begin(),st.end());
    // cout<<st.size()<<endl;



    // if(st.find(105)!=st.end()){
    //     cout<<"Find";
    // }
    // else{
    //     cout<<"Not Find";
    // }


    if(st.count(15)==1){
        cout<<"Found";
    }
    if(st.count(15)==0){
        cout<<"Not Found";
    }
    
    return 0;
}
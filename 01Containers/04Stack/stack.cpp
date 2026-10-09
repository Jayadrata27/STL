#include<iostream>
#include<stack>
using namespace std;
int main(){

  // Creation
   stack<int>st;
 // Insertion
   st.push(10); 
   st.push(20);
   st.push(30);

   cout<<st.size()<<endl;
   st.pop();
   cout<<st.size()<<endl;
   cout<<st.top()<<endl;

   if(st.empty()==true){
     cout<<"Stack is Empty";
   }
   else{
    cout<<"Stack is Not Empty";
   }

    return 0;
}
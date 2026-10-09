#include<iostream>
#include<queue>
using namespace std;
int main(){

    // Creation
    // queue<int>q;
    // // Insertion
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);

    // cout<<q.size()<<" ";
    // q.pop();
    // cout<<q.size()<<endl;;

    // cout<<q.front()<<endl;
    // cout<<q.back()<<endl;

    // if(q.empty()==true){
    //     cout<<"Queue is Empty";
    // }
    // else{
    //     cout<<"Queue is Not Empty";
    // }



    queue<int>first;
    queue<int>second;

    first.push(10);
    first.push(20);

    second.push(100);
    second.push(200);

    first.swap(second);

    cout<<first.front()<<" "<<first.back()<<endl;


    return 0;
}
#include<iostream>
#include<deque>
using namespace std;
int main(){
  
    // Create
    deque<int>dq;

    // Insertion
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(40);
    dq.push_front(100);
    dq.push_front(200);
    dq.push_front(300);


    //deletion
    // dq.pop_front();
    // dq.pop_front();

    // cout<<dq.size()<<" ";
    // cout<<dq.front()<<endl;
    // cout<<dq.back()<<endl;

    // if(dq.empty()==true){
    //     cout<<"Deque is Empty"<<endl;
    // }
    // else{
    //     cout<<"Deque is not Empty"<<endl;
    // }


    // deque<int>::iterator it=dq.begin();
    // while(it!=dq.end()){
    //     cout<<*it<<endl;
    //     it++;
    // }

    // cout<<dq[2]<<endl;

    // cout<<dq.size()<<endl;
    // dq.clear();
    // cout<<dq.size()<<endl;


    // dq.insert(dq.begin(),101);
    // cout<<dq[0]<<" ";

    cout<<dq.size()<<endl;
    dq.erase(dq.begin(),dq.end());
    cout<<dq.size();

  return 0;
}   
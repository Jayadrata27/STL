#include<iostream>
#include<queue>
using namespace std;
int main(){

    // Creation
    // priority_queue<int>pq;
    // // max-heap -> max value -> Highest Priority
 
    // pq.push(10);
    // // 10
    // pq.push(25);
    // // 25 10
    // pq.push(55);
    // // 55 25 10
    // pq.push(21);
    // // 55 25 21 10

    // cout<<pq.top()<<endl;
    // // 55

    // pq.pop();
    // cout<<pq.top()<<endl;
    // // 25



    // Min heap ->Minimum Value -> Highest Priority
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(100);
    // 100
    pq.push(50);
    // 50 100
    pq.push(75);
    // 50 75 100

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;




    return 0;
}
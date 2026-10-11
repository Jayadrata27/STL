// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//    vector<int>arr;
//    arr.push_back(10);
//    arr.push_back(20);
//    arr.push_back(30);

//    vector<int>::iterator it=arr.begin();
//    while(it!=arr.end()){
//     cout<<*it<<" ";
//     it++;
//    }

//     return 0;
// }






 // Forword Iterator

// #include<iostream>
// #include<vector>
// #include<forward_list>
// using namespace std;

// int main(){

//     // Forword Iterator
//     forward_list<int>list;

//     list.push_front(10);
//     list.push_front(20);
//     list.push_front(30);

//     // Traverse using iterator
//     forward_list<int>::iterator it=list.begin();
//     // Write
//      while(it!=list.end()){
//         (*it)=(*it)+5;
//         it++;
//      }

//     // Read
//     it=list.begin();
//     while(it!=list.end()){
//         cout<<*it<<" ";
//         it++;
//     }


//     return 0;
// }





// Bidirectional Iterator

// #include<iostream>
// #include<vector>
// #include<list>
// using namespace std;

// int main(){

//     // Bidirectional Iterator
//     list<int>myList;
//     myList.push_back(10);
//     myList.push_back(20);
//     myList.push_back(30);

//     // Traverse using iterator
//     // list<int>::iterator it=myList.begin();
//     // while(it!=myList.end()){
//     //     // writing
//     //     (*it)=(*it)+2;
//     //     // read
//     //     cout<<(*it)<<" ";
//     //     // forword move
//     //     it++;
//     // }


//     list<int>::iterator it=myList.end();
//     while(it!=myList.begin()){
//         // backword move
//         it--;

//         //write
//         (*it)=(*it)+5;
//         cout<<*it<<" ";
//     }

//     return 0;
// }






// Random Access Iterator
#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(){
    // Random Access Iterator
    vector<int>arr={10,20,30,40,50};

    // traverse using iterator
    vector<int>::iterator it=arr.begin();
    while(it!=arr.end()){
        // write
        *it=*it+7;
        // raed
        cout<<*it<<" ";
        // forword move
        it++;
    }
    return 0;
}
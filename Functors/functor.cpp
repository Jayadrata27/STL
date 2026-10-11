#include<iostream>
using namespace std;
// functor
class functorOne{
    public:
      bool operator()(int a,int b){
         return a>b;
      }

};
int main(){

    functorOne cmp;

    if(cmp(10,5)==true){
        cout<<"10 is greater than 5"<<endl;
    }
    else{
        cout<<"10 is less than 5"<<endl;
    }
    return 0;
}






#include<iostream>
using namespace std;
class Student{
   public:
    int marks;
    string name;

    Student(int m,string n){
        this->marks=m;
        this->name=n;
    }
};
// Functor
class StudentComparator{
   public:
    bool operator()(Student a,Student b){
        return a.marks<b.marks;
    }
    
};
int main(){

    Student s1(93,"Joy");
    Student s2(85,"Ajay");

    StudentComparator cmp;

    if(cmp(s1,s2)){
        cout<<"Joy ke marks Ajay se kam hai";
    }
    else{
        cout<<"Ajay ke marks joy se kam hai";
    }

    return 0;
}




// CustomSorting 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class comparator{
  public:
   bool operator()(int a,int b){
     return a>b;
   }
};

int main(){
    vector<int>arr;
    arr.push_back(20);
    arr.push_back(10);
    arr.push_back(15);

    sort(arr.begin(),arr.end(),comparator());

    for(int a:arr){
        cout<<a<<" ";
    }
    return 0;
}




// customStudentCmp 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Student{
   public:
    int marks;
    string name;
    Student(int m,string n){
        this->marks=m;
        this->name=n;
    }
};
class comparator{
   public:
     bool operator()(Student a,Student b){
        if(a.marks==b.marks){
            return a.name<b.name;
        }
           return a.marks>b.marks;
     }
};
int main(){

    vector<Student>arr;
    arr.push_back(Student(90,"Joy"));
    arr.push_back(Student(85,"Ajoy"));
    arr.push_back(Student(95,"kunal"));

    sort(arr.begin(),arr.end(),comparator());

    for(Student a:arr){
        cout<<a.marks<<" "<<a.name<<endl;
    }

    return 0;
}





// CustomPriority
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
class Student{
    public:
    int marks;
    string name;

    Student(int m,string n){
       this->marks=m;
       this->name=n;
    }
};
class comparator{
   public:
    bool operator()(Student a, Student b){
       //criteria -> max marks ->high priority
         return a.marks<b.marks;    
    }
};
int main(){

    // max heap
    // priority_queue<int>pq;
    // priority_queue<int,vector<int>,less<int>>pq2;
    // // min heap
    // priority_queue<int,vector<int>,greater<int>>pq3;




    priority_queue<Student,vector<Student>,comparator>pq;

    pq.push(Student(90,"Joy"));
    pq.push(Student(85,"Ajoy"));
    pq.push(Student(95,"kunah"));

    cout<<pq.top().marks<<" "<<pq.top().name<<endl;
    return 0;
}
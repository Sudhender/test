/*//STL ARRAY
#include<iostream>
#include<array>

using namespace std;

int main(){

    array<int,4> a ={1,2,3,4};

    int size = a.size();

    for(int i=0;i<size;i++)
{
    cout<<a[i]<<endl;
}
cout<<"element at 2nd index:"<<a.at(2)<<endl;
cout<<"empty or not"<<a.empty()<<endl;
cout<<"first element: "<<a.front()<<endl;
cout<<"last element: "<<a.back()<<endl;
return 0;
}*/


/*
//VECTOR
#include<iostream>
#include<vector>

using namespace std;
int main(){

    vector<int> v;

    vector<int> a(5,1);
    vector<int> last(a);

    cout<<"print last"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;


    cout<<"capacity : "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity : "<<v.capacity()<<endl;

     v.push_back(2);
    cout<<"capacity : "<<v.capacity()<<endl;

     v.push_back(3);
    cout<<"capacity : "<<v.capacity()<<endl;
    cout<<"size : "<<v.size()<<endl;

    cout<<"element at 2nd index : "<<v.at(2)<<endl;
    cout<<"first element: "<<v.front()<<endl;
    cout<<"last element: "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

   
   cout<<"before clear size : "<<v.size()<<endl;
   v.clear();
   cout<<"after clear size : "<<v.size()<<endl;
    

    return 0;
}
*/


/*
//DEQUE
#include<iostream>
#include<deque>

using namespace std;

int main(){

    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    cout<<endl;

   // for(int i:d){
     //   cout<<i<<" ";
    //}
    //d.pop_front();
    //cout<<endl;
    //for(int i:d){
    //    cout<<i<<" ";
    //}

    cout<<"Print first index element : "<<d.at(1)<<endl;
    cout<<"first element: "<<d.front()<<endl;
    cout<<"last element: "<<d.back()<<endl;
    cout<<"empty or not : "<<d.empty()<<endl;

    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase"<<d.size()<<endl;
    for(int i:d){
        cout<<i<<endl;
    }
    return 0;
}*/


/*
//LIST
#include<iostream>
#include<list>

using namespace std;

int main(){

    list<int> l;

    list<int> n(5,100);
    cout<<"Print n"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;
    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"first element: "<<l.front()<<endl;
    cout<<"last element: "<<l.back()<<endl;
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }

    cout<<"size of list"<<l.size()<<endl;

    return 0;
}*/


/*
//STACK LIFO
#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<string> s;

    s.push("love");
    s.push("babbar");
    s.push("kumar");

    cout<<"Top element : "<<s.top()<<endl;
    s.pop();
    cout<<"top element : "<<s.top()<<endl;
    cout<<"size of stack"<<s.size()<<endl;
    cout<<"Empty or not"<<s.empty()<<endl;

    return 0;
}*/

/*
//QUEUE FIFO
#include<iostream>
#include<queue>

using namespace std;

int main(){

    queue<string> q;

    q.push("love");
    q.push("babbar");
    q.push("kumar");

    cout<<"size before pop: "<<q.size()<<endl;
    cout<<"first element: "<<q.front()<<endl;
    q.pop();
    cout<<"first element: "<<q.front()<<endl;

    cout<<"size after pop: "<<q.size()<<endl;
}*/


/*
//PRIORITY QUEUE
#include<iostream>
#include<queue>

using namespace std;
int main(){

    //max-heap
    priority_queue<int> maxi;

    //min-heap
    priority_queue<int,vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"size: "<<maxi.size()<<endl;
    int n = maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }   cout<<endl;



    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);
    cout<<"size: "<<mini.size()<<endl;
    int m = mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }   cout<<endl;

    cout<<"empty or not: "<<mini.empty()<<endl;
    return 0;
}*/



/*
//SET
#include<iostream>
#include<set>

using namespace std;

int main(){

    set<int> s;

    s.insert(5);
    s.insert(1);        //insert,find,erase ar count in charo ki time 
    s.insert(6);        //complexity of logn hai
    s.insert(4);        //baki size,begin end ar empty ka of 1 hai TC.
    s.insert(6);
    s.insert(6);
    s.insert(5);
    s.insert(1);
    s.insert(9);
    s.insert(9);

    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    for(auto i:s){
        cout<<i<<endl;
    }
cout<<endl;

cout<<"-5 iss present or not: "<<s.count(-5)<<endl; 

set<int>:: iterator itr = s.find(5);

for(auto it=itr;it!=s.end();it++){
    cout<<*it<<" ";
}cout<<endl;
}*/

/*
//MAP  ye esa data structure hai jisme data key ,value ke form mei store hota hai
#include<iostream>     //one value points to one key; do value ek key ko point kr skti hai but ek key do value ko nhi
#include<map>

using namespace std;
int main(){

    map<int,string> m;

    m[1]="babbar";
    m[2]= "love";
    m[13]="kkumar";

    m.insert({5,"sudhi"}); // another way to insert value to map

    cout<<"befor erase :"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl; //insert,erase,find ar count krna inki time complexity of log(n) hoti hai.
    }
    cout<<"finding 13 : "<<m.count(13)<<endl;


    m.erase(13);

    cout<<"after erase :"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(5);

    for(auto i =it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

}*/





//ALGORITHMS
#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"FINDING 6: "<<binary_search(v.begin(),v.end(),6)<<endl;  //binary search
    cout<<"lower bound: "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl; // lower bound
    cout<<"upper bound: "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl; //upper bound

    int a=3;
    int b=5;

    cout<<"max: "<<max(a,b)<<endl;  //max min value
    cout<<"min: "<<min(a,b);

    swap(a,b);
    cout<<endl<<"a: "<<a<<endl;  // swaping 

    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end()); //reversing the order
    cout<<"string: "<<abcd<<endl;

    rotate(v.begin(),v.begin()+1,v.end());   //rotating 
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end()); //working hai ki ye intro sort pe based hai joki hai teen algo ka combination jo hai quick sort, heap sort and insertion sort jo behind the fn work kr rhe hai
    cout<<"after sorting"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
}







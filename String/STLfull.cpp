/* Pairs basic
#include<iostream>
using namespace std;
int main(){

pair<int,string> p;  //pair<1,2> yaha 1,2 ke jagah hm integer, string long long int ,double  bhi daal skte hai
p = make_pair(2,"abc");
//p={2,"abcd"}; another way to initialize pair
pair<int,string> &p1=p;
p1.first = 3;
cout<<p.first<<" "<<p.second<<endl;
int a[] = {1,2,3};
int b[] = {2,3,4};
pair<int,int> p_array[3];
p_array[0] = {1,2};
p_array[1] = {2,3};
p_array[2] = {3,4};
swap(p_array[0],p_array[2]);
cin>>p.first;

// for(int i=0;i<3;i++){
//     cout<<p_array[i].first<<" "<<p_array[2]<<endl;
// }
return 0;
}*/


//VECTORS
/*#include<iostream>
#include<vector>
using namespace std;

void printVec(vector<int>v){
    cout<<"size:"<<v.size()<<endl;
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){

    vector<int>v;
    v.push_back(7);
    v.push_back(6);

    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        printVec(v);
        v.push_back(x);
    }
    printVec(v);
    
return 0;
}*/


/*//Basics of Vectros isme string ar int ka hai
#include<iostream>
#include<vector>
using namespace std;

void printVec(vector<string> &v){ // vector ki copy bnana ek expensive kam hai to isko avoid krne ke liye hm vector ko by reference pass krte hai jisse copy nhi bnti ar actual vector pass hoga
    cout<<"size:"<<v.size()<<endl;
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    //v.push_back(2);
    cout<<endl;
}
int main(){

    // vector<int>v;
    // v.push_back(7);
    // v.push_back(6);
    
    // vector<int> &v2 = v; //time complexity = O(n)
    // v2.push_back(5); //yaha v2 add krne se v2 ek copy bni hai V mein no 
    //                  //changes blki ye alag bni hai
    // printVec(v);
    // printVec(v);
    // printVec(v2);

    vector<string> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    printVec(v);

return 0;
}*/

/*#include<iostream>
#include<vector>
using namespace std;

void printVec(vector<pair<int,int> > &v){
    cout<<"size:" <<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
        
    }
    cout<<endl; 
}
int main(){

    vector<pair<int,int> > v = {{1,2},{2,3},{4,5}};
    printVec(v);

return 0;
}*/


/*#include<iostream>
#include<vector>
using namespace std;

int printVec(vector<pair<int,int>> &v){
    cout<<"size:"<<v.size()<<endl;
    for(int i=0;i<v.size();++i){
        //v.size()-> 0(1)
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}

int main(){
    vector<pair<int,int>> v;
    printVec(v);
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    printVec(v);

return 0;
}*/

/*// vector of vector (nested vector)

#include<iostream>
#include<vector>
using namespace std;

void printVec(vector<int> &v){
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int N;
    cin>>N;
    vector<vector<int> >v;
    for(int i=0;i<N;++i){
        int n;
        cin>>n;
        vector<int>temp;
        for(int j=0;j<n;++j){
            int x;
            cin>>x;
            temp.push_back(x);
        }  
        v.push_back(temp);
    }
    v[2].push_back(10);
    for(int i=0;i<v.size();++i){
        printVec(v[i]);
    }
    cout<<v[0][1];
    

return 0;
}*/


//ITERATORS

#include<iostream>
using namespace std;
int main(){

    

return 0;
}
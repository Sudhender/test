/*#include<iostream>
#include<string>

using namespace std;

    int main(){

        string str1;
        getline(cin,str1);
        cout<<str1<<endl;
        return 0;
    }*/

/*//array as parameter

#include<iostream>
using namespace std; // Arrays are always passed by address not by values.

void fun(int A[ ])
{  
    for(int i=0;i<6;i++){
    cout<<A[i]<<endl;
    }
}
int main(){

    int A[ ]={2,4,6,8,10,12,14};
    int n=6;
    fun(A);
    
    for(int x:A) // this means for each x belonging to A or in A cout n further jo command hoga
    cout<<x<<" ";
return 0;
}*/


/*#include<iostream>
using namespace std;

void fun(int *A,int n){

    A[0]=15;
}
int main(){

    int A[ ]={2,4,6,8,10};
    int n=5;
    fun(A,n);

    for(int x:A){
        cout<<x<<" ";

        
    }

return 0;
}*/

#include<iostream>
using namespace std;

int *fun(int size){
    int *p;
    p=new int[size];
    for(int i=0;i<size;i++)
        p[i]=i+1;
        
        return p;
    
}
int main(){

    int *ptr,sz=5;
    ptr=fun(sz);
    for(int i=0;i<sz;i++)

    cout<<ptr[i]<<endl;

return 0;
}


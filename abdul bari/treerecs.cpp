/*#include<iostream>
using namespace std;

void fun(int n){
    if(n>0){
        cout<<n<<endl;
        fun(n-1);
        fun(n-1);
    }
}
int main(){

    fun(3);

return 0;
}*/


/*//sum of n natural no.

#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
    
}
int main(){

int r;
r=sum(5);
cout<<r<<endl;

return 0;
}*/

/*//factorial of n no.
#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}
int main(){

    int r;
    r=fact(5);
    cout<<r<<endl;

return 0;
}*/

#include<iostream>
using namespace std;

int Ifact(int n){
    int f=1;
    int i;
    for(int i=1;i<=n;i++){
        f=f*i;
       
    }
     return f;
}
int main(){

    int r;
    r=Ifact(5);
    cout<<r<<endl;
return 0;
}


/*#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
	    int n,x;
	    cin>>n>>x;
	    int d=0;
	    
	    for(int i=0;i<n;i++){
	        int s,r;
            cin>>s>>r;
	        if(s<=x && r>d){
	            d=r;
	            cout<<d<<endl;
	        }
	        
	    }
	}
	return 0;
}*/


/*#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
	    int n,k;
	    cin>>n>>k;
	    int diff = n-k;
	    if(diff>=k){
	        
	        cout<<(diff-k)<<endl;
	    }else if(diff<k && diff>=0){
	        cout<<diff<<endl;
	    }
	    else{
	        cout<<n<<endl;
	    
	    }
	}
	return 0;
}*/

/*//pointer to structure
#include<iostream>
using namespace std;

struct Rectangle{
	int length;
	int breadth;
};
int main(){
	struct Rectangle*p;
	p=(struct Rectangle*)malloc(sizeof(struct Rectangle));
	p-> length=10;
	p->breadth=5;
return 0;
}*/



/*#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle{
	int length;
	int breadth;

};

int main(){

	struct Rectangle r={10,5};
cout<<r.length<<endl;
cout<<r.breadth<<endl;

Rectangle*p=&r;  //when we have a pointer to a structure then we cant use dot operator instead we need to use arrow(->) to denote it, as done in next line.
cout<<p->length<<endl;
cout<<p->breadth<<endl;

	return 0;
}*/

//how to create object of retangle(rectangle structure) in heap

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle{
	int length;
	int breadth;
};


int main(){

	Rectangle*p;
	//p=(struct Rectangle*)malloc(sizeof(struct Rectangle));	//creating object in heap (long way ar C mei chalega )
	p=new Rectangle;														// C++ ke liye bs new Rectangle likna hai jo itne lambe se accha hai
	p->length=33;
	p->breadth=12;
	cout<<p->length<<endl;
	cout<<p->breadth<<endl;

return 0;
}
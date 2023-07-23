//Monolithic Program

/*#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

    int length=0,breadth=0;

    printf("Enter Length and Breadth");
    cin>>length>>breadth;

    int area = length*breadth;
    int peri=2*(length+breadth);

    printf("Area=%d\nPerimeter=%d\n",area,peri);
    cout<<area<<endl<<peri<<endl;
return 0;
}*/

    //Modular ya Procedural Programming
/*#include<iostream>
#include<stdio.h>
using namespace std;

    int area(int length, int breadth){

        return length*breadth;
    }
    int perimeter(int length,int breadth){

        int p;

        p= 2*(length+breadth);
        return p;
    }
int main(){

    int length=0,breadth=0;

    printf("Enter Length and Breadth");
    cin>>length>>breadth;

    int a= area(length,breadth);
    int peri = perimeter(length,breadth);

    printf("Area=%d\nPerimeter=%d\n",a,peri);
    
return 0;
}*/


  // writen using structures and functions
/*#include<iostream>
#include<stdio.h>
using namespace std;

    struct Rectangle {
        int length;
        int breadth;
    };

    void initialise(struct Rectangle *r,int l,int b){
        r->length=l;
        r->breadth=b;
    }
    int area(struct Rectangle r){

        return r.length*r.breadth;
    }
    int perimeter(struct Rectangle r){

        int p;

        p= 2*(r.length+r.breadth);
        return p;
    }
int main(){

    Rectangle r={0,0};

    int l,b; // using void to initialise
    printf("Enter Length and Breadth");
    cin>>l>>b;

    initialise(&r,l,b);
   // cin>>r.length>>r.breadth;

    int a= area(r);
    int peri = perimeter(r);

    printf("Area=%d\nPerimeter=%d\n",a,peri);
    
return 0;
}*/


#include<iostream>
#include<stdio.h>
using namespace std;

    class Rectangle {
        int length;
        int breadth;
    

    void initialise(int l,int b){
        length=l;
        breadth=b;
    }
    int area(){

        return length*breadth;
    }
    int perimeter( ){

        int p;

        p= 2*(length+breadth);
        return p;
    }
    };
int main(){

    Rectangle r={0,0};

    int l,b; // using void to initialise
    printf("Enter Length and Breadth");
    cin>>l>>b;

    r.initialise(l,b);
   // cin>>r.length>>r.breadth;

    int a= r.area();
    int peri = r.perimeter();

    printf("Area=%d\nPerimeter=%d\n",a,peri);
    
    return 0;
}
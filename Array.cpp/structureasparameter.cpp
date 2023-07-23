//Call by value

/*#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

    struct Rectangle
    {
        int length;
        int breadth;
    };
    void fun(struct Rectangle r){  // r in here and r in int main are diffent 
        cout<<"Length"<<r.length<<endl<<"Breadth"<<r.breadth<<endl;
    }
int main(){
    struct Rectangle r={10,5};
    fun(r);
    printf("Lendth %d \n Breadth %d \n",r.length,r.breadth);

return 0;
}*/


//call by address
/*#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

    struct Rectangle
    {
        int length;
        int breadth;
    };
    void fun(struct Rectangle *r){  // r in here and r in int main are diffent 
     r->length=25;
        cout<<"Length"<<r->length<<endl<<"Breadth"<<r->breadth<<endl;
    }
int main(){
    struct Rectangle r={10,5};
    fun(&r);
    printf("Lendth %d \n Breadth %d \n",r.length,r.breadth);

return 0;
}*/


#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

    struct Rectangle{
        int length;
        int breadth;
    };

    struct Rectangle *fun(){

        struct Rectangle *p;
        p=new Rectangle;  // heap mei create ho rha isse pointer
      //  p=(struct Rectangle *)malloc(sizeof(struct Rectangle)); ye c program mei likhte hai
      p->length=15;
      p->breadth=7;

      return p;
    }
int main(){

    struct Rectangle *ptr=fun();
    cout<<"Length"<<ptr->length<<endl<<"Breadth"<<ptr->breadth<<endl;
return 0;
}
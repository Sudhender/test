/*#include<iostream>
using namespace std;

    class Arthematic
    {
        private:
        int a;
        int b;

        public:
        Arthematic(int a,int b){
            this->a=a;
            this->b=b;
        }
        int add(){
            int c;
            c=a+b;
            return c;
        }
        int sub(){
            int c;
            c=a-b;
            return c;
        }
    };
int main(){
    
    Arthematic ar(10,5);

    cout<<"add ="<<ar.add()<<endl;
    cout<<"sub ="<<ar.sub()<<endl;
return 0;
}*/


#include<iostream>
using namespace std;


    template<class T>
    class Arthematic
    {
        private:
        T a;
        T b;

        public:

        Arthematic(T a,T b);
        T  add();
        T  sub();
    };    
        template<class T>
       Arthematic<T>::Arthematic(T a,T b){
            this->a=a;
            this->b=b;
        }
        template<class T>
        T Arthematic<T>::add(){
            T c;
            c=a+b;
            return c;
        }
        template<class T>
        T Arthematic<T>::sub(){
            T c;
            c=a-b;
            return c;
        }
    
int main(){
    
    Arthematic<float> ar(10.5786,7.561);

    cout<<"add ="<<ar.add()<<endl;
    cout<<"sub ="<<ar.sub()<<endl;
return 0;
}
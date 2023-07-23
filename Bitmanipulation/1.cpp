//to get bit on the given position( example at 2nd pos or 3rd )

#include<iostream>
using namespace std;

 int getBit(int n,int pos){
    return (n & (1<<pos))!=0;
 }
int main(){

    cout<<getBit(5,2)<<endl;



return 0;
}



/*//Set Bit - setting bit a particupar position
yha or hoga with original  and wo jisme pos pe 1 dalelge
#include<iostream>
using namespace std;

int setBit(int n,int pos){
    return(n | (1<<pos));
}

int main(){
    cout<<setBit(5,1)<<endl;

return 0;
}*/

/*//clear bit-jo position de rkha hai wha se bit clear krna hai
//yaha pe and lrege of original binary ar wo jisme us position ko 0 kr dege jaha se clear krna hai ar baki 1
//eg 0100 clear 2nd pos  0100 and 1011
#include<iostream>
using namespace std;

int clearBit(int n,int pos){
    int mask = ~(1<<pos);
    return (n & mask);
}
int main(){

    cout<<clearBit(5,2)<<endl;
return 0;
}*/

//Update bit - diye hue position ke bit ko update krna hai, btaya hoga kisse update krna h;ai 0 ya 1.

/*#include<iostream>
using namespace std;

    int updateBit(int n, int pos,int value){
        int mask=~(1<<pos);
        n= n&mask;
        return(n | value<<pos);
    }
int main(){


    cout<<updateBit(5,1,1)<<endl;
return 0;
}*/


// all no. except the unique no. are present twice find uniqie no.
/*#include<iostream>
using namespace std;

    int unique(int arr[],int n){

        int xorsum=0;
        for(int i=0;i<n;i++){
            xorsum = xorsum^arr[i];
        }
        return xorsum; 
    }
int main(){

    int arr[]={1,2,3,4,1,2,3};
    cout<<unique(arr,7)<<endl;

return 0;
}*/


//all no. except the two uniqye no. are present thrice.

/*#include<iostream>
using namespace std;

    int setBit(int n,int pos){
        return((n & (1<<pos))!=0);
    }
    void unique(int arr[],int n){
        int xorsum=0;
        for(int i=0;i<n;i++){
            xorsum=xorsum^arr[i];

        }
        int tempxor=xorsum;
        int setBit=0;
        int pos=0;
        while(setBit!=1){
            setBit = xorsum & 1;
            pos++;
            xorsum = xorsum>>1;
        }
        int newxor=0;
        for(int i=0;i<n;i++){
            if(setBit(arr[i],pos-1)){
                newxor=newxor^arr[i];
            }
        }
        cout<<newxor<<endl;
        cout<<(tempxor^newxor)<<endl;
    }
int main(){

    int arr[] = {1,2,3,1,2,3,5,7};
    unique(arr,8);

    
return 0;
}*/

//find unique no. where  all no. except the 1 no. are present thrice

#include<iostream>
using namespace std;

    bool getBit(int n,int pos){
        return((n & (1<<pos)) != 0);
    }
    int setBit(int n, int pos){
        return(n | (1<<pos));
    }
    int unique(int arr[], int n){
            int result=0;
        for(int i=0;i<64;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                if(getBit(arr[j],i)){
                    sum++;
                }

            }
            if(sum%3!=0){
                result = setBit(result,i);
            }
        }
        return result;
    }
int main(){

    int arr[]= {3,2,1,7,1,2,3,3,2,1};
    cout<<unique(arr,10)<<endl;
return 0;
}
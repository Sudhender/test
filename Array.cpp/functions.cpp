// #include<iostream>
// using namespace std;

// int add(int a,int b){ // agar hm chahthe hai ki fn kuch return ka kre to int ke jagah void krdrge start mein
//     int c;
//     c=a+b;

//     return c;


// }
// int main(){  
//     int num1=10, num2=15, sum;
//    sum =  add(num1,num2); 
//     cout<<sum<<endl;
// return 0;
// }

int sol(vector<int> a,int n){
    sort(a.begin(),a.end());
    
    int l=0;int h=a[n-1];int ans=0;
    while(l<=h){
        int m=(l+h)/2;
        int f=a[0];int c=0;
        for(int i=0;i<n;i++){
            if((a[i]-f)<=m){
                continue;
            }
            else{c++;f=a[i];}

        }
        if(c<=2){
            ans=m;
            h=m-1;
        }
        else{
            l=m+1;
        }
    }
    return ans;


}

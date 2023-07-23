/*#include<iostream>
#include<string>

using namespace std;

    int main(){

        string str;
        getline(cin,str); //getline se full sentence output milta hai rather ki ek single word.
        cout<<str<<endl;
        return 0;
    }
*/

/*#include<iostream>
#include<string>

using namespace std;

    int main(){

        string str;

        string s1 ="fam";
        string s2 ="ily";
        s1.append(s2); // append add two strings like s2 is here added to s1 becuase it was s2 in bracket
        //cout<<s1+s2<<endl; it happens above
        cout<<s1[1]<<endl;//prints the 1 index character in s1

        return 0;
    }*/

/*#include<iostream>
#include<string>

using namespace std;

    int main(){

        string abc = "sfdredfg gfg dfrfrfffgf";
        abc.clear(); // removes the value inside string abc and gives output nothing.
        cout<<abc<<endl;
        return 0;
    }*/

/*#include<iostream>
#include<string>

using namespace std;

    int main(){

        string s1 = "abc";
        string s2 = "xyz";

        if(!s1.compare(s2))  //compare fn. used to compare strings
        //or we can write if(s1.compare(s2) = 0)
        cout<<"string are equal"<<endl;

        return 0;
    }*/

/*#include<iostream>
#include<string>

using namespace std;

    int main(){

        string s1 = "abc";
        cout<<s1<<endl;

        s1.clear();

        if(s1.empty()) //to check if string is empty
        //if(!s1.empty()) then we are saying whether string is not empty
        cout<<"string is empty"<<endl;

        return 0;
    }*/

/*#include<iostream>
#include<string>

using namespace std;

    int main(){

        string s1 = "nincompoop";

        s1.erase(3,2);  //erase fn. firstly index jisse delte krna shuru krna hai then kitne cahracter delete krne hai wo

       cout<<s1<<endl;
        return 0;
    }*/

/*#include<iostream>
#include<string>

using namespace std;

    int main(){

        string s1 = "nincompoop";

        cout<<s1.find("om")<<endl; //find fn se hm pta krte hai wo value string mei konse index se shuru ho rhi hai ar hai bhi ya nhi agar if else lga de to

       s1.insert(2,"lol"); //insert krdega lol from 2nd index
        //cout<<s1.length()<<endl; // means size of string
       cout<<s1<<endl;

        return 0;
    }*/

/*#include<iostream>
#include<string>

using namespace std;

    int main(){

        string s1 = "nincompoop";

        for(int i=0;i<s1.length();i++){  //through this print kr skte hai sare character eh eh krhe

            cout<<s1[i]<<endl;
        }
        return 0;
    }*/

/*#include<iostream>
#include<string>

using namespace std;

    int main(){

        string s1 = "nincompoop";

        string s = s1.substr(6,4); // hme 6 index se age ke 4 character print hoke milgae
        cout<<s<<endl;

        return 0;
    }*/

/* string to integer and addn

#include<iostream>
#include<string>

using namespace std;

    int main(){

        int x = 786;
       // string s1 = "786";
       // int x = stoi(s1);  // isse koi bhi numeric string ko interger mei change kr skte hai stoi fn se
        //cout<<x+2<<endl;

        cout<<to_string(x) + "2"<<endl;//output = 7862 isse integer mei value add hoti hai but uske back ya frint me

        return 0;
    }*/

/*//Sorting of string
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

    int main(){

        string s1="qderftyhgnjkiopr";

        sort(s1.begin(), s1.end());  //isse puti string turant sort ho jaegi

        cout<<s1<<endl;
        return 0;
    }*/

/* convert to lowercse n upper case

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string str="adfdtthtriobn";

    //cout<<'a'-'A'<<endl;

    //convert into upper case

    sort(str.begin(),str.end());
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z')
        str[i] -=32;
    }
    cout<<str<<endl;

    //convert to lower case
    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z')
        str[i]+=32;
    }
    cout<<str<<endl;
    return 0;
}

*/

/* convert to lower case n upper case using transform

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{

    string s = "dlfjfrkhirhhglhlkso";
    sort(s.begin(),s.end());

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    return 0;
}*/

/*form the biggest no. from the numeric string
  or printing the biggest no.

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){


    string s1="482161100";


    sort(s1.begin(), s1.end(), greater<int>());

    cout<<s1<<endl;

return 0;
}*/

//String char with maximum freq.

#include <iostream>
#include <string>

using namespace std;
int main()
{

    string s = "rtiuhrfheiiifihgggfv";

    int freq[26];
    for (int i = 0;i < 26; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }
    char ans = 'a';
    int maxF = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }

    cout << maxF << " " << ans << endl;

    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int str(string a){

    //traversing
    cout<<"using index"<<endl;
    for(int i=0;i<a.size();i++){

        cout<<a[i];
    }
    cout<<endl;
    cout<<"using range based loops"<<endl;
    for(char ch:a){

        cout<<ch;
    }cout<<endl;
    cout<<"using iteration"<<endl;
    for(auto it = a.begin();it !=a.end();it++){
        cout<<*it;
    }
    
    cout<<a.size()<<endl<<a.length(); //time complexity O(1)
    string b = ""; b.append(a);//concatenate : or do b = b+a instead
    a.push_back('!');//insertion of string
    cout<<a<<endl;
    a.pop_back();//removing last digit
    cout<<a<<endl;
    a.insert(6," gay");//insert
    cout<<a<<endl;
    a.erase(6,4);
    cout<<a<<endl;
    string d = a.substr(0,2);//substring extraction
    cout<<d<<endl;
    int pos = a.find("b");//searching
    return 0;
    //other than this in string library we can do replace ,compare,rfind
}
void capacity_function(string a){
    getline(cin,a);
    cout<<"your initial string\n"<<a<<endl;
    a.resize(6);
    cout<<a<<endl<<a.capacity()<<endl;
    a.shrink_to_fit();
    cout<<a.capacity()<<endl;

    transform(a.begin(),a.end(),a.begin(),::toupper);//transorm entire string to uppercase
    

}
int tree(int n){//recursion
    if (n>10)
        return n-1;
    
    return tree(tree(n+2));
    
}
int iterator_func(string a){
    string :: iterator it;
    string :: reverse_iterator itr;
}

int main()
{
    

    
    
    
    
    

    
    return 0;
}
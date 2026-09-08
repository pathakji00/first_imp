#include <iostream>
#include <random>
using namespace std;
int meow(bool a){
    if(a==true){
        cout<<"tum mere bete ho"<<endl;
    }else{
        cout<<"tum mere bete ho"<<endl;
    }
            
                cout<<"tum mere bete hi rahoge"<<endl;

}

int main(){
        bool a;
         cout<<"enter a boolean value (0,1)"<<endl;
        cin>>a;
        meow(a);
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> distr(1,100);
        int rand = distr(gen);
        cout << "random number is :"<<rand<<endl;
        return 0;
     
}
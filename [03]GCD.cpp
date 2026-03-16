#include <iostream>
using namespace std;
class findGcd{
public:
    int gcd(int a, int b) {
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
};
int main() {
    findGcd obj;
    int a,b;
    cout<<"enter a:"<<endl;
    cin>>a;
    cout<<"enter b:"<<endl;
    cin>>b;
    cout<<"GCD of a and b:"<<obj.gcd(a, b);
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Hello World." << endl;
    std::cout << "Hello World!" << std::endl;

    /*
    printf("start input\n");
    
    int a;
    cin >> a;
    cout << "a=" << a << endl; 
    */

    string s,t,u;
    t = "入力された文字は、";
    u = "文字列を入力：";
    cout << u;
    cin >> s;
    cout << t+s << "です。" << endl;
    return 0;
}
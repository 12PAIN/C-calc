#include <iostream>

using namespace std;

int main(){
    int s = 0;
    double a,b,value;
    string hello = "Hello,User,please,select the operation:";



    cout << hello << endl;
    cout << "Enter the number of op (1:(+) 2:(-) 3:(*) 4:(/)) : " ;
    cin >> s;
    if(s > 4){
        cout << "Cannot find op!";
        return 0;
    }
    if(s < 1){
        cout << "Cannot find op!";
        return 0;
    }
    cout << "Enter the values a,b :";
    cin >> a >> b;



    if(b == 0 && s == 4){
        cout << "DIVIDE BY 0!" << endl;
        return 0;
    }

    switch(s){
        case 1: value= a+b;break;
        case 2: value= a-b;break;
        case 3: value= a*b;break;
        case 4: value= a/b;break;
    }

    cout << "Result is : " << value;

    return 0;
}

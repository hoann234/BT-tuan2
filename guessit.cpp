#include <bits/stdc++.h>

using namespace std;

void input(int &number){

    cout << "Nhap so:";
    cin >> number;
    return;
}
int init(){
    srand(time(0));
    int n=rand()%100+1;
    return n;
}
 bool process(int number, int randomnumber){
    if( number > randomnumber ){
            cout << "TOO BIG" << endl;
            return 0;
    }
    else if( number < randomnumber ) {
            cout << "TOO SMALL" << endl;
            return 0 ;
    }
    else{
    cout << "congratulation" << endl;
    return 1 ;
    }
}

int main()
{
    int number;
    int randomnumber = init();
    int x=0;
    while(x!=1){
         input(number);
         x=process(number, randomnumber);
    }

}

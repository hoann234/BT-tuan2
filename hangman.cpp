#include <bits/stdc++.h>
using namespace std;
const string FIGURE[8] ={
		 "   -------------    \n"
         "   |                \n"
         "   |                \n"
         "   |                \n"
         "   |                \n"
         "   |     \n"
         " -----   \n",

		 "   -------------    \n"
         "   |           |    \n"
         "   |                \n"
         "   |                \n"
         "   |                \n"
         "   |     \n"
         " -----   \n",

		 "   -------------    \n"
         "   |           |    \n"
         "   |           O    \n"
         "   |                \n"
         "   |                \n"
         "   |     \n"
         " -----   \n",

		 "   -------------    \n"
         "   |           |    \n"
         "   |           O    \n"
         "   |           |    \n"
         "   |                \n"
         "   |     \n"
         " -----   \n",

		 "   -------------    \n"
         "   |           |    \n"
         "   |           O    \n"
         "   |          /|    \n"
         "   |                \n"
         "   |     \n"
         " -----   \n",

		 "   -------------    \n"
         "   |           |    \n"
         "   |           O    \n"
         "   |          /|\\  \n"
         "   |                \n"
         "   |     \n"
         " -----   \n",

		 "   -------------    \n"
         "   |           |    \n"
         "   |           O    \n"
         "   |          /|\\  \n"
         "   |          /     \n"
         "   |     \n"
         " -----   \n",

		 "   -------------    \n"
         "   |           |    \n"
         "   |           O    \n"
         "   |          /|\\  \n"
         "   |          / \\  \n"
         "   |     \n"
         " -----   \n"
};

const string WORD_LIST[4]={"dog", "cat" ,"duck" , "human"};

int x=7;
int cnt_char=0;
bool checkword[1001];

void chooseword(string &s){
    srand(time(0));
    int n=rand()%4;
    s=WORD_LIST[n];
	return;
}

char guessit(){
	char u;
cout << "guess the word: ";
cin >> u;
return u;
}

void badguess(){
    --x;
}

void check(char w, string &s){
	int cnt=0;
	for(int i=0;i<=s.size();++i){
		if(w==s[i]){
        checkword[i]= true;
        ++cnt;
        ++cnt_char;
	}
    }
    cout << endl;
    if(cnt==0) badguess();
    return;
}
void rendergame(string &s){
    system("CLS");
    cout << FIGURE[7-x] << endl;
     for(int i=0;i<s.size();++i){
        if(checkword[i]!=0) cout << s[i];
        else cout << "_ ";
    }
    cout << endl;
	char w = guessit();
	check(w,s);
    return;
}

int main(){
    string s;
    chooseword(s);
    cout << endl;
    while(cnt_char<s.size()&&x>0){
        rendergame(s);
    }
    if(cnt_char==s.size()) cout << "win";
    if(x==0) cout << "lose";
    cout << endl;

}

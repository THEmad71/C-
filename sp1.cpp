//string er first and last word musa
#include<bits\stdc++.h>
using namespace std;

string erase(string &s)
{
    s.erase(s.begin());//firs er word muse dei
    s.pop_back();//last er word muse dei
    return s;
}
int main()
{
    string s;
    
    cout<<"Enter a name:"<<endl;
    cin>>s;
    cout<<" IN main fun:"<<endl;
    cout<<s<<endl;// eikhane change keno ashtase na??sp2 no dekho.khela bujhba thkn
    string fun=erase(s);
    
    cout<<"After function call: "<<fun<<endl;
   
    
}
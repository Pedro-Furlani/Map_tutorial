
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    //nota-se que dessa vez o valor chave e do tipo inteiro e o valor mapeado e do tipo string
    map<int ,string> mapa1;
     map<int ,string> mapa2;
    cout<<endl;
    int i=0;
    string a="a";char b='a';
    //inserção de dados no mapa1
    while(a<"f"){
       i=rand()% 100;  
       a=b;
       mapa1[i]=a;
       b+=1;   
    }
    a="a"; b='a';
     //inserção de dados no mapa2
    while(a<"m"){
       i=rand()% 100;  
       a=b;
       mapa2[i]=a;
       b+=1;   
    }
    cout<<endl<<"leitura dos dados do mapa1"<<endl;
    for (auto const& c : mapa1)
    {
        cout<<c.first<<" ";
        cout<<c.second<<endl;
    }
     cout<<endl<<"leitura dos dados do mapa2"<<endl;
    for (auto const& c : mapa2)
    {
        cout<<c.first<<" ";
        cout<<c.second<<endl;
    }
    // esse comando ira troca os conteiners do mapa1 com  o do mapa2
    mapa1.swap(mapa2);
    cout<<endl<<"leitura dos dados do mapa1"<<endl;
    for (auto const& c : mapa1)
    {
        cout<<c.first<<" ";
        cout<<c.second<<endl;
    }
     cout<<endl<<"leitura dos dados do mapa2"<<endl;
    for (auto const& c : mapa2)
    {
        cout<<c.first<<" ";
        cout<<c.second<<endl;
    }
}


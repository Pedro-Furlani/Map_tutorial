
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    map<string ,int> mapa;
    string a="";
    char b='a';
      //inserção de dados no mapa
    while(a<"j"){
       a=b;
       mapa[a]=rand()% 100;
       b+=1;     
    }
    //leitura do mapa
    for (auto const& c : mapa)
    {
        cout<<c.first<<" ";
        cout<<c.second<<endl;
    }
    cout<<endl;
    //limpeza de dados  do mapa 
    mapa.clear();
    //nova inserçao de dados
    mapa["a"]=1;
    mapa["b"]=2;
    mapa["c"]=3;
    mapa["d"]=4;
    //nota-se que nenhum dado inserido antes da funçao clear apareceu
    // essa função limpa todos dados no map
      for (auto const& c : mapa)
    {
        cout<<c.first<<" ";
        cout<<c.second<<endl;
    } 
    cout<<endl;
    //enquanto a função empety e apenas um teste para saber se o mapa estar vazio ou não
    while(!mapa.empty()){
      cout << mapa.begin()->first << "  " << mapa.begin()->second << endl;
      //a  função erase apaga apenas um elemento especifico
      mapa.erase(mapa.begin());
    }
     cout<<"-----------"<<endl;
    //repare que agora o nao imprimiu nenhum dado
    for (auto const& c : mapa)
    {
        cout<<c.first<<" ";
        cout<<c.second<<endl;
    }
     return 0;
}



#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    //nota-se que dessa vez o valor chave e do tipo inteiro e o valor mapeado e do tipo string
    map<int ,string> mapa;
    cout<<endl;
    int i=0;
    string a="a";char b='a';
     cout<<"ordem de inserção do map"<<endl;
    while(a<"z"){
       i=rand()% 100;  
       a=b;
       //a impressao dos dados inseridos
       cout<< i << " "<<a<<endl;
      //nota-se que map ta recependo um valor aleatorio  como valor chave
      //isso pode levar a perda de dados ja que uma chave referencia apenas a um valor mapedo
      //mais como o proposito e apenas um demostração, não iremos atenta ai isso.
      //veja que o valor chave estar recebendo um inteiro aletorio i enquanto o valor mapeado ta recebendo uma string a
       mapa[i]=a;
       b+=1;   
    }
    cout<<endl<<"leitura dos dados do map"<<endl;
    for (auto const& c : mapa)
    {
        cout<<c.first<<" ";
        cout<<c.second<<endl;
    }
  
    cout<<"nota-se que a ordem estar diferente depois da insercão";
    //o map ordena os dados atraves do valores chaves 
    // se o valor chave a e maior que valor chave b eles trocam de posiçao  assim o map sempre ta ordenado
    cout<<endl;
    cout<<endl<<"leitura dos map "<<endl;
    // tambe pode ser realizado dessa maneira o for
    for (auto c = mapa.begin(); c != mapa.end(); ++c)
    {
        cout<<c->first<<" ";
        cout<<c->second<<endl;
    }
    cout<<endl<<"leitura dos map de forma inversa"<<endl;
    // a função crbengin aponta o ultimo elemento do conteiner(ou seja ,seu inicio reverso) enquanto crend o primeiro
    // em resumo ela retorna uma const_reverse_iterator
    for (auto c = mapa.crbegin(); c != mapa.crend(); ++c)
    {
        cout<<c->first<<" ";
        cout<<c->second<<endl;
    }
    cout<<endl<<"leitura dos map de forma inversa"<<endl;
    // tambe pode ser realizado dessa maneira
    for (auto c = mapa.rbegin(); c != mapa.rend(); ++c)
    {
        cout<<c->first<<" ";
        cout<<c->second<<endl;
    }
  
    return 0;
}


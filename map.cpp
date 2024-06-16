
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    //mapa tipo map que o valor chave e uma string  e o valor mapeado e do tipo inteiro
    map<string ,int> mapa;
    string a="";
    char b='a';
   //prenchendo um map
    while(a<"z"){
       a=b;
       //estou utilazando a string a para se o valor chave do map e associando ela com um numero aleatorio
       mapa[a]=rand()% 100;
       b+=1;     
    }
    //auto  for para pecorre um map
    for (auto const& c : mapa)
    {
        //c.fist estar pegado o valor chave do map
        cout<<c.first<<" ";
        //enquanto c.second estar pegado o valor mapeado
        cout<<c.second<<endl;
    }
     cout<<endl;
     //nota-se que possivel ter acesso ao valor mapedo ao utilizar o valor chave que estar assocaido ao mesmo dentro do colchetes
     cout<<mapa["a"]<<endl;
      //nota-se que possivel ter acesso ao valor do começo do map  atraves da funçao begin
    cout << mapa.begin()->first << "  " << mapa.begin()->second << '\n';
    cout<<"o tamanho do mapa e: "<<mapa.size();
    //----------------------------------------------------------------------
     return 0;



    
}
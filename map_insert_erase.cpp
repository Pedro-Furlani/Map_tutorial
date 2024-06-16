
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    map<string ,int> mapa;
    string a="";
    char b='a';
   //prenchendo um map
    while(a<"g"){
       a=b;
       //e possivel realizar a inserçao de dados dessa maneira tambem
       mapa.insert(pair<string,int> (a,rand()% 100));
       b+=1;     
    }
    while(!mapa.empty()){
      cout << mapa.begin()->first << "  " << mapa.begin()->second << endl;
      //a  função erase apaga apenas um elemento especifico
      // nesse caso seria o começo do mapa
      mapa.erase(mapa.begin());
    }
    
}
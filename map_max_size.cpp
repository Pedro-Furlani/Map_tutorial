
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    map<int,int> mymap;
    //aqui, o max_size  é usado para verificar de antemão se o mapa permitirá que 1000 elementos sejam inseridos.
   if (mymap.max_size()>1000)
  {
    for (int i=0; i<1000; i++) mymap[i]=0;
        cout << "O mapa  poderia conter 1000 elementos.\n";
  }else cout << "O mapa não poderia conter 1000 elementos.\n";


    
}
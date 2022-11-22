
#include <iostream>
using namespace std;

class Myclass{   


public:
    string nom;
    Myclass(string nom);
    ~Myclass();

};
Myclass::Myclass(string nom){         
cout<<"bonjour monsieur "<<nom<<endl;
}
 Myclass::~Myclass(){                  

cout<<"au revoir monsieur \n";
}

int main()
{
  string nom;
  cout<<"entrer le nom du client "<<endl; 
  cin>>nom;
   Myclass c1(nom);                       

    return 0;
}

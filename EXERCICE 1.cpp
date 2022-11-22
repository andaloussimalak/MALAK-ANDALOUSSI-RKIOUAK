#include<iostream>
using namespace std;

class Mere{        
  public :


    void display (){     
     cout<<"je suis la class Mere"<<endl;

    }
};

class fils:public Mere{
 public:
 void display(){                


  cout<<"je suis la class fille"<<endl;}};

int main()
{
  fils c1;
                 
  c1.display();  

    return 0;
}

#include "User.hpp"

class Premium : public User
{
protected:
  bool premium = false;
  int color;
public:
  Premium(string n, int p) : User(n, p){
    if(p==22102053)
    premium = true;
  };
  ~Premium(){};

void ChangePremium(){
  premium=true;
}

  bool GetPremium(){ return premium; };

};

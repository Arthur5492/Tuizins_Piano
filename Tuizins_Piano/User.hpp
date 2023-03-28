#include "includes.hpp"

class User
{
protected:
  string m_name;
  int m_ID;

  public:
    User(): m_name(""),m_ID(0){};
    User(string nome, int id): m_name(nome),m_ID(id){};
    ~User(){};

    string getName(){ return m_name; }
      int getID(){ return m_ID; }
};

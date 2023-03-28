#ifndef NEWMUSIC_HPP
#define NEWMUSIC_HPP

#include "includes.hpp"

class NewMusic
{
  private:
    string m_file; //Arquivo txt
    string m_name; //Nome da muisca
    int m_bpm; //Batidas por minuto, pra saber o tempo da música
  public:

      NewMusic(string arquivo, string nome, int bpm):
      m_file(arquivo), m_name(nome), m_bpm(bpm){};
      ~NewMusic(){};

      void SelectLinha(ofstream &file, int num);//Poder selecionar linha especifica
      void CreateTxt();

  };

#endif

#ifndef CONFIGURATION_HPP
#define CONFIGURATION_HPP

#include "includes.hpp"
#include "Musics.hpp"

class Sheet
{
  protected:
    LoadMusic *Music; //Pega a musica convertida do txt, fiz só pra dificultar e treino

  public:
    Sheet(LoadMusic *Music);//Construtorzin
    ~Sheet() {};//Destrutorzin

//Getters

    string GetName(LoadMusic *Music){ return Music->GetName(); };
    int GetBpm(LoadMusic *Music){ return Music->GetBpm(); };
    vector <int> GetMelody(LoadMusic *Music){return Music->GetMelody(); };
    vector <int> GetDuration(LoadMusic *Music){ return Music->GetDuration(); }
    int GetLastN(LoadMusic *Music);//Pega a ultima nota do vetor
    int GetLastT(LoadMusic *Music);//Pega o ultimo tempo do vetor


//Setters
    void Play(LoadMusic *Music);//Toca
    void PopTM(LoadMusic *Music) { Music->PopTM(); } //Pop_back tempo&Nota
    void SetBpm(LoadMusic *Music, int b) { Music->SetBpm(b); } //Muda bpm
    void AddNote(LoadMusic *Music, int n) {Music->AddNote(n); } //Add Tempo
    void AddTempo(LoadMusic *Music, int t) {Music->AddTempo(t); } //Add nota

    void operator +=(int nt);//Operador
    void operator -=(int nt);//Operador
    void operator  =(int nt);//Operador

};



#endif

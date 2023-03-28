#ifndef MUSICS_HPP
#define MUSICS_HPP
#include "includes.hpp"


  class LoadMusic{


  private:
    string m_file; //Arquivo txt
    string m_name; //Nome da muisca
    int m_bpm; //Batidas por minuto, pra saber o tempo da música
    vector<int> m_melody; //Notas inseridas
    vector<int> m_musicDuration; //Tempo de cada nota

    public:
    LoadMusic(string MusicFile, string *Name, int *Bpm, vector <int> *Music, vector <int> *Tempo, bool *firmeza);
    ~LoadMusic(){};

    //Getters
    vector <int> GetDuration(){ return m_musicDuration; }
    vector <int> GetMelody(){ return m_melody; }
    int GetBpm(){ return m_bpm; }
    string GetName(){ return m_name; }


    //Setters
    void SelectLine(fstream &file, int num);//Poder selecionar linha especifica
    void Outputlinha(ofstream &file, int num);//Pula linhas em ofstream
    vector<int> Scale(vector<string> lala);//Converte string nota pra int nota
    vector <string> ScaleStr(vector <int> lala);//Converte int nota pra str nota
    void Save();//Salva arquivo editado

    void PopTM(){  m_musicDuration.pop_back(); m_melody.pop_back();} //Pop_back tempo&Nota
      void SetBpm(int b){ m_bpm = b; } //Muda bpm
    void AddTempo(int tempo) {m_musicDuration.push_back(tempo); } ; //Add nota
    void AddNote(int note) {m_melody.push_back(note); } ; //Add Tempo

    void operator *=(int nt);//Pra aumentar frequencia
    void operator /=(int nt);//Pra diminuir frequencia

};
#endif

#include "Musics.hpp"


LoadMusic::LoadMusic(string MusicFile, string *Name, int *Bpm, vector <int> *Music, vector <int> *Tempo, bool *firmeza)
{
  vector<string> StringNotes;//Coleta as notas em Strings
  vector<string> StringTempo;//Coleta os Tempos em strings
  *firmeza = false;
  m_file = MusicFile;
  fstream filereader(m_file);
    if(filereader.good())
    {
      //PEga o nome da musica
      SelectLine(filereader,3);
      filereader.ignore(numeric_limits<streamsize>::max(),':');
        getline(filereader,*Name);
          //Pega o BPM
          SelectLine(filereader,5);
          filereader.ignore(numeric_limits<streamsize>::max(),':');
          filereader>>*Bpm;

            //Pega Nota
            SelectLine(filereader,8);
            string tmp;
            while(getline(filereader,tmp,' '))
            {
                if(tmp==";")break;
                StringNotes.push_back(tmp);
            }
            tmp.clear();

              *Music = Scale(StringNotes);
              //for(auto &i:*Music)cout<<i<<' ';


          //PEGA TEMPO
          SelectLine(filereader,11);
          while(getline(filereader,tmp,' '))
          {
            if(tmp==";")break;
              else StringTempo.push_back(tmp);
          }
          transform(StringTempo.begin(),StringTempo.end(),back_inserter(*Tempo),
       [&](string s) {
           return stoi(s);//Transforma Tempo em int
       });

      *firmeza = true;
    }  else *firmeza = false;
    filereader.close();
    m_name = *Name;
    m_bpm = *Bpm;
    m_melody = *Music;
    m_musicDuration = *Tempo;
}
///////////////////////////////////////////////////////
///////////////////////////////////////////////////////
  void LoadMusic::Save()
  {
    vector<string> deus = ScaleStr(m_melody);
    ofstream Save(m_file);
    Save<<"/////////////////////////////////////TuizinsPiano/////////////////////////////////////";
    Outputlinha(Save,2);
    Save<<"1.Music Name:"<<m_name;
      Outputlinha(Save,2);
        Save<<"2.Music Bpm:"<<m_bpm;
      Outputlinha(Save,2);
        Save<<"3. Music Notes:";
      Outputlinha(Save,1);
        for(size_t i=0;i<deus.size();i++)
          Save<<deus.at(i)<<" ";
            Save<<"; ;";
      Outputlinha(Save,2);
        Save<<"4.Tempo";
          Outputlinha(Save,1);
            for(size_t i=0;i<m_musicDuration.size();i++)
              Save<<m_musicDuration.at(i)<<" ";
                Save<<"; ;";
  }
////////////////////////////////////////////////////////////
void LoadMusic::SelectLine(fstream &file, int num)//para input
{
  file.seekg(std::ios::beg);
for(int i=0; i < num - 1; ++i)
  {
    file.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
  }

}
//////////////////////////////////////////////////
void LoadMusic::Outputlinha(ofstream &file, int num)
{
    for(size_t i=0;i<num;i++)
    {
      file<<endl;
    }
}
/////////////////////////////////////////////////Operador *=
/////////////////////////////////////////////////
void LoadMusic::operator *=(int nt)
{
  for(size_t i=0;i<m_melody.size();i++)
  {
    m_melody.at(i) *= nt;
  }
}
///////////////////////////////////////////////// Operador /=

void LoadMusic::operator /=(int nt)
{
  for(size_t i=0;i<m_melody.size();i++)
  {
    m_melody.at(i) /= nt;
  }
}
///////////////////////////////////////////////////////Conversor
///////////////////////////////////////////////////////
  vector<int> LoadMusic::Scale(vector<string> lala){
  vector<int> pipi;//Transforma em Vetor
  for(int i=0;i<lala.size();i++)
  {
       if(lala.at(i)=="B0" )pipi.push_back(B0);
  else if(lala.at(i)=="0") pipi.push_back(0);
  else if(lala.at(i)=="C1")pipi.push_back(C1);
  else if(lala.at(i)=="CS1")pipi.push_back(CS1);
  else if(lala.at(i)=="D1")pipi.push_back(D1);
  else if(lala.at(i)=="DS1")pipi.push_back(DS1);
  else if(lala.at(i)=="E1")pipi.push_back(E1);
  else if(lala.at(i)=="F1")pipi.push_back(F1);
  else if(lala.at(i)=="FS1")pipi.push_back(FS1);
  else if(lala.at(i)=="G1")pipi.push_back(G1);
  else if(lala.at(i)=="GS1")pipi.push_back(GS1);
  else if(lala.at(i)=="A1")pipi.push_back(A1);
  else if(lala.at(i)=="AS1")pipi.push_back(AS1);
  else if(lala.at(i)=="B1")pipi.push_back(B1); //1 OITAVA SI
  else if(lala.at(i)=="C2")pipi.push_back(C2);
  else if(lala.at(i)=="CS2")pipi.push_back(CS2);
  else if(lala.at(i)=="D2")pipi.push_back(D2);
  else if(lala.at(i)=="DS2")pipi.push_back(DS2);
  else if(lala.at(i)=="E2")pipi.push_back(E2);
  else if(lala.at(i)=="F2")pipi.push_back(F2);
  else if(lala.at(i)=="FS2")pipi.push_back(FS2);
  else if(lala.at(i)=="G2")pipi.push_back(G2);
  else if(lala.at(i)=="GS2")pipi.push_back(GS2);
  else if(lala.at(i)=="A2")pipi.push_back(A2);
  else if(lala.at(i)=="AS2")pipi.push_back(AS2);
  else if(lala.at(i)=="B2")pipi.push_back(B2); //2 OITAVA SI
  else if(lala.at(i)=="C3")pipi.push_back(C3);
  else if(lala.at(i)=="CS3")pipi.push_back(CS3);
  else if(lala.at(i)=="D3")pipi.push_back(D3);
  else if(lala.at(i)=="DS3")pipi.push_back(DS3);
  else if(lala.at(i)=="E3")pipi.push_back(E3);
  else if(lala.at(i)=="F3")pipi.push_back(F3);
  else if(lala.at(i)=="FS3")pipi.push_back(FS3);
  else if(lala.at(i)=="G3")pipi.push_back(G3);
  else if(lala.at(i)=="GS3")pipi.push_back(GS3);
  else if(lala.at(i)=="A3")pipi.push_back(A3);
  else if(lala.at(i)=="AS3")pipi.push_back(AS3);
  else if(lala.at(i)=="B3")pipi.push_back(B3); //3 OITAVA SI
  else if(lala.at(i)=="C4")pipi.push_back(C4);
  else if(lala.at(i)=="CS4")pipi.push_back(CS4);
  else if(lala.at(i)=="D4")pipi.push_back(D4);
  else if(lala.at(i)=="DS4")pipi.push_back(DS4);
  else if(lala.at(i)=="E4")pipi.push_back(E4);
  else if(lala.at(i)=="F4")pipi.push_back(F4);
  else if(lala.at(i)=="FS4")pipi.push_back(FS4);
  else if(lala.at(i)=="G4")pipi.push_back(G4);
  else if(lala.at(i)=="GS4")pipi.push_back(GS4);
  else if(lala.at(i)=="A4")pipi.push_back(A4);
  else if(lala.at(i)=="AS4")pipi.push_back(AS4);
  else if(lala.at(i)=="B4")pipi.push_back(B4); //4 OITAVA SI
  else if(lala.at(i)=="C5")pipi.push_back(C5);
  else if(lala.at(i)=="CS5")pipi.push_back(CS5);
  else if(lala.at(i)=="D5")pipi.push_back(D5);
  else if(lala.at(i)=="DS5")pipi.push_back(DS5);
  else if(lala.at(i)=="E5")pipi.push_back(E5);
  else if(lala.at(i)=="F5")pipi.push_back(F5);
  else if(lala.at(i)=="FS5")pipi.push_back(FS5);
  else if(lala.at(i)=="G5")pipi.push_back(G5);
  else if(lala.at(i)=="GS5")pipi.push_back(GS5);
  else if(lala.at(i)=="A5")pipi.push_back(A5);
  else if(lala.at(i)=="AS5")pipi.push_back(AS5);
  else if(lala.at(i)=="B5")pipi.push_back(B5); //5 OITAVA SI
  }
  return pipi;
}

vector <string> LoadMusic::ScaleStr(vector <int> lala){
vector <string> pipi;//Transforma em Vetor
for(int i=0;i<lala.size();i++)
{
     if(lala.at(i)==0)pipi.push_back("0");
else if(lala.at(i)==31)pipi.push_back("B0");
else if(lala.at(i)==33)pipi.push_back("C1");
else if(lala.at(i)==35)pipi.push_back("CS1");
else if(lala.at(i)==37)pipi.push_back("D1");
else if(lala.at(i)==39)pipi.push_back("DS1");
else if(lala.at(i)==41)pipi.push_back("E1");
else if(lala.at(i)==44)pipi.push_back("F1");
else if(lala.at(i)==46)pipi.push_back("FS1");
else if(lala.at(i)==49)pipi.push_back("G1");
else if(lala.at(i)==52)pipi.push_back("GS1");
else if(lala.at(i)==55)pipi.push_back("A1");
else if(lala.at(i)==58)pipi.push_back("AS1");
else if(lala.at(i)==62)pipi.push_back("B1"); //1 OITAVA SI
else if(lala.at(i)==65)pipi.push_back("C2");
else if(lala.at(i)==69)pipi.push_back("CS2");
else if(lala.at(i)==73)pipi.push_back("D2");
else if(lala.at(i)==78)pipi.push_back("DS2");
else if(lala.at(i)==82)pipi.push_back("E2");
else if(lala.at(i)==87)pipi.push_back("F2");
else if(lala.at(i)==93)pipi.push_back("FS2");
else if(lala.at(i)==98)pipi.push_back("G2");
else if(lala.at(i)==104)pipi.push_back("GS2");
else if(lala.at(i)==110)pipi.push_back("A2");
else if(lala.at(i)==117)pipi.push_back("AS2");
else if(lala.at(i)==123)pipi.push_back("B2"); //2 OITAVA SI
else if(lala.at(i)==131)pipi.push_back("C3");
else if(lala.at(i)==139)pipi.push_back("CS3");
else if(lala.at(i)==147)pipi.push_back("D3");
else if(lala.at(i)==156)pipi.push_back("DS3");
else if(lala.at(i)==165)pipi.push_back("E3");
else if(lala.at(i)==175)pipi.push_back("F3");
else if(lala.at(i)==185)pipi.push_back("FS3");
else if(lala.at(i)==196)pipi.push_back("G3");
else if(lala.at(i)==208)pipi.push_back("GS3");
else if(lala.at(i)==220)pipi.push_back("A3");
else if(lala.at(i)==233)pipi.push_back("AS3");
else if(lala.at(i)==247)pipi.push_back("B3"); //3 OITAVA SI
else if(lala.at(i)==262)pipi.push_back("C4");
else if(lala.at(i)==277)pipi.push_back("CS4");
else if(lala.at(i)==294)pipi.push_back("D4");
else if(lala.at(i)==311)pipi.push_back("DS4");
else if(lala.at(i)==330)pipi.push_back("E4");
else if(lala.at(i)==349)pipi.push_back("F4");
else if(lala.at(i)==370)pipi.push_back("FS4");
else if(lala.at(i)==392)pipi.push_back("G4");
else if(lala.at(i)==415)pipi.push_back("GS4");
else if(lala.at(i)==440)pipi.push_back("A4");
else if(lala.at(i)==466)pipi.push_back("AS4");
else if(lala.at(i)==494)pipi.push_back("B4"); //4 OITAVA SI
else if(lala.at(i)==523)pipi.push_back("C5");
else if(lala.at(i)==554)pipi.push_back("CS5");
else if(lala.at(i)==587)pipi.push_back("D5");
else if(lala.at(i)==622)pipi.push_back("DS5");
else if(lala.at(i)==659)pipi.push_back("E5");
else if(lala.at(i)==698)pipi.push_back("F5");
else if(lala.at(i)==740)pipi.push_back("FS5");
else if(lala.at(i)==784)pipi.push_back("G5");
else if(lala.at(i)==831)pipi.push_back("GS5");
else if(lala.at(i)==880)pipi.push_back("A5");
else if(lala.at(i)==932)pipi.push_back("AS5");
else if(lala.at(i)==988)pipi.push_back("B5"); //5 OITAVA SI
}

return pipi;
}

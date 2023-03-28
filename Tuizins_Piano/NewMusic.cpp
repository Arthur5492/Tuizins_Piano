#include "NewMusic.hpp"

void NewMusic::CreateTxt()
{
  m_file = "Musics/"+m_file;
  ofstream Text(m_file);
  Text<<"/////////////////////////////////////TuizinsPiano/////////////////////////////////////";
  SelectLinha(Text,2);
  Text<<"1.Music Name:"<<m_name;
    SelectLinha(Text,2);
      Text<<"2.Music Bpm:"<<m_bpm;
    Text.close();
}

void NewMusic::SelectLinha(ofstream &file, int num)
{
    for(size_t i=0;i<num;i++)
    {
      file<<endl;
    }
}

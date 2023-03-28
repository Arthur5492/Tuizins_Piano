#include "configuration.hpp"

  Sheet::Sheet(LoadMusic *Music)
  {

  }


  void Sheet::Play(LoadMusic *Music){
    for(size_t i=0;i<Music->GetMelody().size();i++)
    {
    //Isso é para eu poder usar o tempo certo da partitura, em vez de ter que colocar tudo em milissegundos
      float duraNote = Music->GetBpm()*10/Music->GetDuration().at(i); // E basicamente, define o tempo de cada nota
      Beep(Music->GetMelody().at(i), duraNote);//Pra sair o som
      int pauseBetweenNotes = duraNote*0.45;//Tempo entre cada beep
       this_thread::sleep_for(chrono::milliseconds(pauseBetweenNotes));//Tempo da nota em si
       if(_kbhit())break;//Se clicar alguma tecla para
    }
  }

//Setters
int Sheet::GetLastN(LoadMusic *Music)
{
  int lastN = Music->GetMelody().back();//Pega a ultima nota do vetor
  return lastN;
};

int Sheet::GetLastT(LoadMusic *Music)
{
  int lastT = Music->GetDuration().back();//Pega o ultimo tempo do vetor
  return lastT;
};

//Getters
  void Sheet::operator  =(int nt)
  {
    SetBpm(Music,nt); //Operador
  }

  void Sheet::operator +=(int nt)
  {
    AddNote(Music,nt);  //Operador
  }

  void Sheet::operator -=(int nth)
  {
    PopTM(Music); //Operador
  }

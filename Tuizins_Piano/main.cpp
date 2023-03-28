#include "configuration.hpp"
#include "Musics.hpp"
#include "menu.hpp"
#include "NewMusic.hpp"
#include "conversor.hpp"
#include "Premium.hpp"
  using namespace std;

int main()
{
  system("cls");
int contribuition; //Dinheiro doado rs
vector <NewMusic*>userM;// Vetor para criar arquivo txt musica nova
vector <Sheet*> musica;//Vetor de musica da class sheet
vector <LoadMusic*> loaded;//Vetor de musica class loaded q carrega o txt
vector <string> names;//Nomes de todas as musicas carregadas
int foi=0;//Para o userM
int foinew=0;//Para o userM
string name;
int id;
 Start(); //Inicio com nomezinho Arthur Piano
 system("cls");
  cout<<"Name:";
    while(getline(cin,name)){
      if(name!="")break;
    }
      cout <<endl<<"School ID:";
        cin>>id;
        User *a1 = new User(name,id);
        Premium *a2 = new Premium(name,id);
 Caixa(10,300);//Caixa do inicio, que vai ser gerada em 5ms de velocidade

bool FileOpened = false;
menu:
while(true)
{
  Caixa(0,0);
    gotoxy(30,28);
    if (a2->GetPremium()==true)
    {

        cout<<"Premium account!";
    }
      else cout<<"Free account";
  char ch;
  gotoxy(10,20);
    cin>>ch;
  gotoxy(10,20);
      Beep(C5,300);
  if (ch=='1') //
  {
    ch1:
    Ch1();
    while(true)
    {
      string MusicFile;
      string Name;
      int Bpm;
      vector<int>Music;
      vector<int>Tempo;
      bool firmeza;

    gotoxy(20,24);
    cin>>MusicFile;
      if(MusicFile=="0")goto menu;//Voltar menu
    MusicFile = "Musics/"+MusicFile;
      if(firmeza== true)
      {
          if(find(names.begin(),names.end(),Name)!=names.end())
          {
            gotoxy(4,27);
              cout<<"Music already inserted";
              sleep(1);
              Clear(4,27,23);//Clear Music already inserted
              Clear(20,24,20);// Clear Variable
          } else{
      loaded.push_back(new LoadMusic(MusicFile, &Name, &Bpm, &Music, &Tempo, &firmeza));
        names.push_back(Name);
        musica.push_back(new Sheet(loaded.at(foi) ));
        foi++;
        gotoxy(4,27);
        cout<<Name<<" Suceffuly Loaded!!"<<endl;
        sleep(1);
        FileOpened = true;
        Clear(20,24,29);//Clear Variable
        Clear(4,27,38);//Clear Suceffuly Loaded!!
        gotoxy(20,24);
      }} else
        {
          gotoxy(4,27);
          cout<<"There's no music like that '-'";
          sleep(2);
          Clear(4,27,32);//Clear There's no music like that '-'
          Clear(20,24,30);
        }
      }
  }
////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
if (ch=='2')
{
  if(a2->GetPremium()==true){
    while(true)
    {
      Ch2a();//Roda as escritas
      char ch2;
      cin>>ch2;
        if(ch2 == '1')//Create a New Music
        {
          string arquivo,nome;
          int bpm;
          Caixa(0,1);
          gotoxy(11,5);
          cout<<"Music Name:";
          while(getline(cin,nome))
          if(nome!=""){break;}
          Clear(11,5,30);
            gotoxy(20,5);
              cout<<nome; Beep(C5,300);
                gotoxy(4,8);
                  cout<<"Music.txt File Name:";
                  cin>>arquivo;
                    gotoxy(4,10);
                      cout<<nome<<" Bpm:";
                      cin>>bpm;
                      userM.push_back(new NewMusic(arquivo,nome,bpm));
                      userM.at(foinew)->CreateTxt();
                      foinew++;
                          gotoxy(4,12);
                            cout<<arquivo<<" Foi criado.";
                              gotoxy(4,13);
                                cout<<"Wanna load file now?";
                              gotoxy(4,14);cout<<"y.Yes n.No";
                            char wantload;
                              gotoxy(4,15);
                                cin>>wantload;
                              if (wantload =='y')
                              {
                                gotoxy(4,16);
                                cout<<" Bye ;p";
                                goto ch1;
                              } else continue;

        }
          if(ch2 =='2')//Edita uma musica pré carregada
          {
            if(FileOpened!=true)
            {
              gotoxy(4,18);
                cout<<"Please Insert a Music First";
              sleep(1);
              Clear(4,18,28);
              Clear(10,16,20);
              gotoxy(10,16);
            } else
              {
                int line = 10, n=0;
                vector<int> Nmusics;
                Caixa(0,1);
                  gotoxy(18,5);
                    cout<<"Edit Menu!!";
                      gotoxy(4,8);
                        cout<<"Select a Music to edit";
                            for(size_t i=0;i<musica.size();i++) //Mostrar musics loaded
                            {
                              gotoxy(4,line);
                              cout<<i<<'.'<<musica.at(i)->GetName(loaded.at(i));
                              line++;
                              Nmusics.push_back(n);
                              n++;
                            } editmenu:
                              gotoxy(4,25);
                                cout<<"exit.Back to menu";
                                  gotoxy(4,24);
                                    cout<<"Input:";
                                    string ch2b;
                                    gotoxy(10,24);
                                    while(getline(cin,ch2b))
                                      if(ch2b!="")
                                      {
                                        break;
                                      }
                                         if(ch2b=="exit")
                                         {

                                          goto menu;
                                        }
                                          stringstream ssch2b(ch2b);
                                          int Nch2b;
                                          ssch2b >> Nch2b;
                                            if(find(Nmusics.begin(),Nmusics.end(),Nch2b)!=Nmusics.end())
                                            {


                                while(true)
                                {
                                  string nomezada = musica.at(Nch2b)->GetName(loaded.at(Nch2b));;
                                  int bpmzada = musica.at(Nch2b)->GetBpm(loaded.at(Nch2b));
                                  vector <int> allnotes = musica.at(Nch2b)->GetMelody(loaded.at(Nch2b));
                                  vector <int> alltempos = musica.at(Nch2b)->GetDuration(loaded.at(Nch2b));
                                  string notastr;//Guarda a nota da pessoa em string
                                  int nota;
                                  Caixa(0,1);
                                    gotoxy(22,5);
                                      cout<<nomezada;
                                        Ch2b();
                                          gotoxy(4,24);
                                            cout<<"Input:";
                                              char input;
                                                cin>>input;
                                                  if(input=='0')
                                                  {

                                                    goto menu;
                                                  }
                                                  if(input=='1')
                                                  {
                                                    int tempozin;
                                                    Caixa(0,1);
                                                      gotoxy(22,5);
                                                        cout<<nomezada;
                                                          gotoxy(4,8);
                                                            cout<<"Nota a ser adicionada:";
                                                          while(getline(cin,notastr))
                                                          if(notastr!="")
                                                          {
                                                            break;
                                                          }
                                                          nota = Scale1(notastr);
                                                            musica.at(Nch2b)->AddNote(loaded.at(Nch2b),nota);
                                                          gotoxy(4,10);
                                                            cout<<"Tempo a ser adicionado:";
                                                              cin>>tempozin;
                                                            musica.at(Nch2b)->AddTempo(loaded.at(Nch2b),tempozin);
                                                          gotoxy(4,12);
                                                    continue;
                                                  }

                                                  if(input=='2' && allnotes.size()>0)
                                                  {
                                                    nota = musica.at(Nch2b)->GetLastN(loaded.at(Nch2b));
                                                    notastr = Scale2(nota);
                                                    Caixa(0,1);
                                                      gotoxy(22,5);
                                                        cout<<nomezada;
                                                          char y;
                                                            gotoxy(4,8);
                                                              cout<<"Are you sure you want to remove:";
                                                                gotoxy(4,10);
                                                                  cout<<notastr;
                                                                gotoxy(16,10);
                                                                  cout<<musica.at(Nch2b)->GetLastT(loaded.at(Nch2b));
                                                                gotoxy(4,12);
                                                                  cout<<"y.Yes n.No";
                                                                    gotoxy(4,13);
                                                                      cin>>y;
                                                                      if(y=='y')
                                                                      {
                                                                        musica.at(Nch2b)->PopTM(loaded.at(Nch2b));
                                                                        gotoxy(4,14);
                                                                          cout<<"Deleted.";
                                                                          continue;
                                                                            sleep(1);
                                                                      } else continue;
                                                  }
                                                  if(input=='3' &&allnotes.size()>0)
                                                  {
                                                    this_thread::sleep_for(chrono::milliseconds(100));
                                                    gotoxy(4,27);
                                                      cout<<"Playing "<<nomezada<<"...";
                                                    musica.at(Nch2b)->Play(loaded.at(Nch2b));
                                                      Clear(4,27,30);
                                                    continue;
                                                  }

                                                  if(input =='4')
                                                  {
                                                    int bpmzin;
                                                    Caixa(0,1);
                                                      gotoxy(22,5);
                                                        cout<<nomezada;
                                                          gotoxy(4,8);
                                                            cout<<"Bpm atual Value:"<<bpmzada;
                                                              gotoxy(4,12);
                                                              cout<<"Quanto maior o bpm, mais lenta a musica";
                                                              gotoxy(4,10);
                                                                cout<<"New Bpm Value:";
                                                                  cin>>bpmzin;
                                                                      musica.at(Nch2b)->SetBpm(loaded.at(Nch2b),bpmzin);
                                                                        gotoxy(4,14);
                                                                          cout<<"Bpm sucefully altered:"<< musica.at(Nch2b)->GetBpm(loaded.at(Nch2b))<<" Bpm";
                                                                          sleep(1);
                                                                            continue;
                                                  }

                                                  if(input =='5')
                                                  {
                                                    system("cls");
                                                    vector <string> notasemstr;
                                                    notasemstr=Scale3(allnotes);
                                                    char z;
                                                    cout<<"Nome:"<<nomezada<<endl;
                                                        cout<<"Bpm:"<<bpmzada<<endl;
                                                          cout<<"Notes"<<"       "<<"Tempo"<<endl<<endl;
                                                    for(size_t i=0;i<allnotes.size();i++)
                                                    {
                                                      string str = notasemstr.at(i);
                                                      if (str.length()==1)
                                                      cout<<str<<"        "<<alltempos.at(i)<<endl;
                                                        else if(str.length()==2)
                                                          cout<<str<<"       "<<alltempos.at(i)<<endl;
                                                            else cout<<str<<"      "<<alltempos.at(i)<<endl;
                                                    }
                                                      cout<<endl<<"Exit?"<<endl;
                                                      cout<<"y.Yes n.No"<<endl;
                                                        while(z!='y')
                                                        {
                                                          cin>>z;
                                                        }
                                                        z=' ';
                                                      continue;
                                                  }
                                                  if(input=='6')
                                                  {
                                                    char t;
                                                    Caixa(0,1);
                                                      gotoxy(22,5);
                                                        cout<<nomezada;
                                                          gotoxy(4,8);
                                                            cout<<"Transpose options:";
                                                              gotoxy(4,10);
                                                                cout<<"1.Transpose 1 octave up";
                                                                  gotoxy(4,12);
                                                                    cout<<"2.Transpose 1 octave down";
                                                                      gotoxy(4,14);
                                                                        cout<<"0.Exit";
                                                                          gotoxy(4,16);
                                                                            cout<<"Input:";
                                                                              cin>>t;
                                                                                if(t=='1')
                                                                                {
                                                                                  int l;
                                                                                    gotoxy(4,18);
                                                                                      cout<<"How much?";
                                                                                        cin>>l;
                                                                                  loaded.at(Nch2b)->operator*=(l);
                                                                                    gotoxy(4,20);
                                                                                      cout<<"Ok...";
                                                                                        sleep(1);
                                                                                  continue;
                                                                                }
                                                                                  if(t=='2')
                                                                                  {
                                                                                    int l;
                                                                                    gotoxy(4,18);
                                                                                      cout<<"How much?";
                                                                                        cin>>l;
                                                                                      loaded.at(Nch2b)->operator/=(l);
                                                                                      gotoxy(4,20);
                                                                                        cout<<"Ok...";
                                                                                          sleep(1);
                                                                                      continue;
                                                                                  }
                                                                                  if(t=='0')continue;




                                                  }
                                                  if(input =='7')
                                                  {
                                                    //vector<string> notasemstrr = Scale3(allnotes);
                                                    char y;
                                                    gotoxy(4,26);
                                                      cout<<"Are you sure you want to save?";
                                                        gotoxy(4,28);
                                                          cout<<"y.Yes n.No";
                                                            gotoxy(4,29);
                                                              cin>>y;
                                                                if(y=='y')
                                                                {
                                                                  loaded.at(Nch2b)->Save();
                                                                  Clear(4,26,32);
                                                                  Clear(4,28,12);
                                                                  Clear(4,29,5);
                                                                    gotoxy(4,26);
                                                                      cout<<nomezada<<" Saved Suceffuly";
                                                                        sleep(2);
                                                                    continue;
                                                                }else continue;

                                                  }
                                }

                                            }else
                                            {
                                              gotoxy(4,27);
                                              cout<<"Wrong number buddy :/";
                                              sleep(1);
                                              Clear(4,27,22);//Clear Wrong number buddy :/
                                              Clear (10,24,15);//Clear Variable
                                              goto editmenu;
                                            }
              }
          }

            if(ch2 =='0')
            {

              goto menu;
            }
    }} else { gotoxy(4,22); cout<<"YOU NEED PREMIUM FOR THAT HAHAHA ;)"; sleep(3);}
}
////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
  if (ch=='3')
  {
    system("cls");
    if(FileOpened==true)
    {
    int line = 10, n=0;
    vector<int> Nmusics;
    Caixa(0,1);
      gotoxy(18,5);
        cout<<"Music Player?";
          gotoxy(4,8);
            cout<<"Select a Pre-Loaded Music to play!";
              gotoxy(4,10);
              for(int i=0;i<musica.size();i++) //Mostrar musics loaded
              {
                gotoxy(4,line);
                cout<<i<<'.'<<musica.at(i)->GetName(loaded.at(i));
                line++;
                Nmusics.push_back(n);
                n++;
              }
                gotoxy(4,25);
                  cout<<"exit.Back to menu";
                    gotoxy(4,24);
                      cout<<"Input:";
                while(true)
                {
                  string ch3;
                  gotoxy(10,24);
                  while(getline(cin,ch3))
                  if(ch3!="")
                  {
                    break;
                  }
                     if(ch3=="exit")
                     {

                      goto menu;
                    }
                       stringstream ssch3(ch3);
                       int Nch3;
                       ssch3 >> Nch3;
                      if(find(Nmusics.begin(),Nmusics.end(),Nch3)!=Nmusics.end())
                        {
                          this_thread::sleep_for(chrono::milliseconds(100));
                          gotoxy(4,27);
                            cout<<"Playing "<<musica.at(Nch3)->GetName(loaded.at(Nch3))<<"...";
                          musica.at(Nch3)->Play(loaded.at(Nch3));
                            Clear(10,24,28);//Clear Variable
                            Clear(4,27,30);

                        }
                          else
                          {
                            gotoxy(4,27);
                            cout<<"Wrong number buddy :/";
                            sleep(1);
                            Clear(4,27,22);//Clear Wrong number buddy :/
                            Clear (10,24,15);//Clear Variable
                          }
                }
    } else
      {
        cout<<"Please create or load a music first";
        sleep(2);
        continue;
      }
  }
  ////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////
  if(ch=='4')
  {
    int donate;
    Caixa(0,1);
      gotoxy(22,5);
        cout<<a1->getName();
      gotoxy(4,8);
        cout<<a1->getName()<<" ID:"<<a1->getID();
          gotoxy(4,10);
            if(a2->GetPremium()!=true)
            {
            cout<<"Want to become a premium member?";
              gotoxy(4,12);
                cout<<"Just donate us +500euros";
                gotoxy(4,16);
                  cout<<"0.Exit";
                  gotoxy(25,28);
                    cout<<"Your contribuition:"<<contribuition;
                      gotoxy(4,14);
                        cout<<"Donate :) for us:";

                        cin>>donate;
                          contribuition+=donate;
                          if(donate==0)continue;
                            if(contribuition>=500)
                            {
                              a2->ChangePremium();
                                gotoxy(4,18);
                                  cout<<"Thank you very much";
                                    gotoxy(4,20);
                                      cout<<"You unlocked colors and edit menu!!";
                                        sleep(3);
                                          continue;

                        }


            }
              else  
              {
                int hexabrasil;
                cout<<"Premium: Change cmd color:";
                  gotoxy(4,12);
                    cout<<"1.Blue";
                    gotoxy(4,13);
                      cout<<"2.Green";
                      gotoxy(4,14);
                        cout<<"3.Aqua";
                        gotoxy(4,15);
                          cout<<"4.Red";
                          gotoxy(4,16);
                            cout<<"5.Purple";
                            gotoxy(4,17);
                              cout<<"6.Yellow";
                              gotoxy(4,18);
                                cout<<"7.White";
                                gotoxy(4,19);
                                  cout<<"8.Gray";
                                    gotoxy(4,21);
                                      cout<<"Input:";

                  cin>>hexabrasil;
                    switch (hexabrasil)
                    {
                      case 1: system("Color 1");break;
                      case 2: system("Color 2");break;
                      case 3: system("Color 3");break;
                      case 4: system("Color 4");break;
                      case 5: system("Color 5");break;
                      case 6: system("Color 6");break;
                      case 7: system("Color 7");break;
                      case 8: system("Color 8");break;
                    }
                    continue;
              }

  }
  if(ch=='0')
  {
    gotoxy(4,22);
      cout<<"Please dont let me here alone again :< ";
        sleep(1);
          break;
  }


}
  delete &userM;
  delete &loaded;
  delete &musica;
  return 0;
}

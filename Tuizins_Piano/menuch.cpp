#include "menu.hpp"
void Ch1()
{
  Caixa(0,1);
    gotoxy(15,5);
    cout<<"Music Loader!!:D"<<endl<<endl;
    sleep(1);
      gotoxy(4,8);
        cout<<"Musics that you can read:"<<endl<<endl;
          system("dir Musics /b");
          cout<<endl;
            gotoxy(4,25);
              cout<<"0.Exit";
                gotoxy(4,24);
                cout<<"Nome do arquivo:";
}

void Ch2a()
{
  Caixa(0,1);// iniciar com 1 é para rodar sem tocar musica
  gotoxy(10,5);
    cout<<"Welcome to Music Creation Menu!!";
      gotoxy(4,8);
        cout<<"What do you wanna do? ;D";
          gotoxy(4,10);
            cout<<"1.Create a Music File";
              gotoxy(4,12);
                cout<<"2.Edit a pre-loaded Music";
                  gotoxy(4,14);
                    cout<<"0.Back to menu";
                      gotoxy(4,16);
                        cout<<"Input:";
}

void Ch2b()
{
  gotoxy(4,8);
  cout<<"1.Add Note&Tempo";
  gotoxy(4,10);
  cout<<"2.Remove last Note&Tempo";
  gotoxy(4,12);
  cout<<"3.Play!";
  gotoxy(4,14);
  cout<<"4.Change Bpm";
  gotoxy(4,16);
  cout<<"5.See Music Statistics";
  gotoxy(4,18);
  cout<<"6.Transpose tone";
  gotoxy(4,20);
  cout<<"7.Save";
  gotoxy(4,22);
  cout<<"0.Exit";
}

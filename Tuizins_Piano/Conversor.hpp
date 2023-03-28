#include "includes.hpp"


//Aqui é onde fica todos os conversores, sim eu poderia usar pair, me lembrei no meio do caminho
int Scale1(string lala){
int pipi;//Transforma nota string em int

     if(lala=="B0"||lala=="b0" )pipi=B0;
else if(lala=="0"||lala=="0") pipi=0;
else if(lala=="C1"||lala=="c1")pipi=C1;
else if(lala=="CS1"||lala=="cs1")pipi=CS1;
else if(lala=="D1"||lala=="d1")pipi=D1;
else if(lala=="DS1"||lala=="ds1")pipi=DS1;
else if(lala=="E1"||lala=="e1")pipi=E1;
else if(lala=="F1"||lala=="f1")pipi=F1;
else if(lala=="FS1"||lala=="fs1")pipi=FS1;
else if(lala=="G1"||lala=="g1")pipi=G1;
else if(lala=="GS1"||lala=="gs1")pipi=GS1;
else if(lala=="A1"||lala=="a1")pipi=A1;
else if(lala=="AS1"||lala=="as1")pipi=AS1;
else if(lala=="B1"||lala=="b1")pipi=B1; //1 OITAVA SI
else if(lala=="C2"||lala=="c2")pipi=C2;
else if(lala=="CS2"||lala=="cs2")pipi=CS2;
else if(lala=="D2"||lala=="d2")pipi=D2;
else if(lala=="DS2"||lala=="ds2")pipi=DS2;
else if(lala=="E2"||lala=="e2")pipi=E2;
else if(lala=="F2"||lala=="f2")pipi=F2;
else if(lala=="FS2"||lala=="fs2")pipi=FS2;
else if(lala=="G2"||lala=="g2")pipi=G2;
else if(lala=="GS2"||lala=="gs2")pipi=GS2;
else if(lala=="A2"||lala=="a2")pipi=A2;
else if(lala=="AS2"||lala=="as2")pipi=AS2;
else if(lala=="B2"||lala=="b2")pipi=B2; //2 OITAVA SI
else if(lala=="C3"||lala=="c3")pipi=C3;
else if(lala=="CS3"||lala=="cs3")pipi=CS3;
else if(lala=="D3"||lala=="d3")pipi=D3;
else if(lala=="DS3"||lala=="ds3")pipi=DS3;
else if(lala=="E3"||lala=="e3")pipi=E3;
else if(lala=="F3"||lala=="f3")pipi=F3;
else if(lala=="FS3"||lala=="fs3")pipi=FS3;
else if(lala=="G3"||lala=="g3")pipi=G3;
else if(lala=="GS3"||lala=="gs3")pipi=GS3;
else if(lala=="A3"||lala=="a3")pipi=A3;
else if(lala=="AS3"||lala=="as3")pipi=AS3;
else if(lala=="B3"||lala=="b3")pipi=B3; //3 OITAVA SI
else if(lala=="C4"||lala=="c4")pipi=C4;
else if(lala=="CS4"||lala=="cs4")pipi=CS4;
else if(lala=="D4"||lala=="d4")pipi=D4;
else if(lala=="DS4"||lala=="ds4")pipi=DS4;
else if(lala=="E4"||lala=="e4")pipi=E4;
else if(lala=="F4"||lala=="f4")pipi=F4;
else if(lala=="FS4"||lala=="fs4")pipi=FS4;
else if(lala=="G4"||lala=="g4")pipi=G4;
else if(lala=="GS4"||lala=="gs4")pipi=GS4;
else if(lala=="A4"||lala=="a4")pipi=A4;
else if(lala=="AS4"||lala=="as4")pipi=AS4;
else if(lala=="B4"||lala=="b4")pipi=B4; //4 OITAVA SI
else if(lala=="C5"||lala=="c5")pipi=C5;
else if(lala=="CS5"||lala=="cs5")pipi=CS5;
else if(lala=="D5"||lala=="d5")pipi=D5;
else if(lala=="DS5"||lala=="ds5")pipi=DS5;
else if(lala=="E5"||lala=="e5")pipi=E5;
else if(lala=="F5"||lala=="f5")pipi=F5;
else if(lala=="FS5"||lala=="fs5")pipi=FS5;
else if(lala=="G5"||lala=="g5")pipi=G5;
else if(lala=="GS5"||lala=="gs5")pipi=GS5;
else if(lala=="A5"||lala=="a5")pipi=A5;
else if(lala=="AS5"||lala=="as5")pipi=AS5;
else if(lala=="B5"||lala=="b5")pipi=B5; //5 OITAVA SI

return pipi;
}

string Scale2(int lala){
string pipi;//Transforma nota int em string

     if(lala==0)pipi="0";
else if(lala==31)pipi="B0";
else if(lala==33)pipi="C1";
else if(lala==35)pipi="CS1";
else if(lala==37)pipi="D1";
else if(lala==39)pipi="DS1";
else if(lala==41)pipi="E1";
else if(lala==44)pipi="F1";
else if(lala==46)pipi="FS1";
else if(lala==49)pipi="G1";
else if(lala==52)pipi="GS1";
else if(lala==55)pipi="A1";
else if(lala==58)pipi="AS1";
else if(lala==62)pipi="B1"; //1 OITAVA SI
else if(lala==65)pipi="C2";
else if(lala==69)pipi="CS2";
else if(lala==73)pipi="D2";
else if(lala==78)pipi="DS2";
else if(lala==82)pipi="E2";
else if(lala==87)pipi="F2";
else if(lala==93)pipi="FS2";
else if(lala==98)pipi="G2";
else if(lala==104)pipi="GS2";
else if(lala==110)pipi="A2";
else if(lala==117)pipi="AS2";
else if(lala==123)pipi="B2"; //2 OITAVA SI
else if(lala==131)pipi="C3";
else if(lala==139)pipi="CS3";
else if(lala==147)pipi="D3";
else if(lala==156)pipi="DS3";
else if(lala==165)pipi="E3";
else if(lala==175)pipi="F3";
else if(lala==185)pipi="FS3";
else if(lala==196)pipi="G3";
else if(lala==208)pipi="GS3";
else if(lala==220)pipi="A3";
else if(lala==233)pipi="AS3";
else if(lala==247)pipi="B3"; //3 OITAVA SI
else if(lala==262)pipi="C4";
else if(lala==277)pipi="CS4";
else if(lala==294)pipi="D4";
else if(lala==311)pipi="DS4";
else if(lala==330)pipi="E4";
else if(lala==349)pipi="F4";
else if(lala==370)pipi="FS4";
else if(lala==392)pipi="G4";
else if(lala==415)pipi="GS4";
else if(lala==440)pipi="A4";
else if(lala==466)pipi="AS4";
else if(lala==494)pipi="B4"; //4 OITAVA SI
else if(lala==523)pipi="C5";
else if(lala==554)pipi="CS5";
else if(lala==587)pipi="D5";
else if(lala==622)pipi="DS5";
else if(lala==659)pipi="E5";
else if(lala==698)pipi="F5";
else if(lala==740)pipi="FS5";
else if(lala==784)pipi="G5";
else if(lala==831)pipi="GS5";
else if(lala==880)pipi="A5";
else if(lala==932)pipi="AS5";
else if(lala==988)pipi="B5"; //5 OITAVA SI

return pipi;
}

vector <string> Scale3(vector <int> lala){
vector <string> pipi;//Transforma vetor int em vetor string
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

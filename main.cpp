#include <iostream>
#include<windows.h>
#include<mmsystem.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	 char ch;
	cout<<"Enter upper case letter=";
	cin>>ch;
	switch(ch){
		case 'A':{
			PlaySound(TEXT("A.wav"),NULL,SND_SYNC);
			cout<<"    A   \n";
			cout<<"A      A\n";
			cout<<"A       A\n";
			cout<<"AAAAAAAAA\n";
			cout<<"A       A\n";
		    cout<<"A       A\n";
			
			break;
		}
		case 'B':{ 
			PlaySound(TEXT("B.wav"),NULL,SND_SYNC);
		cout << "BBBBB" <<endl;;
        cout << "B    B" <<endl;
        cout << "BBBBB" <<endl;
        cout << "B   B" << endl;
        cout << "BBBB" <<endl;
			
			break;
		}
		case 'C':{
				PlaySound(TEXT("C.wav"),NULL,SND_SYNC);
   printf("    ######\n");
   printf("  ##      ##\n");
   printf(" #\n");
   printf(" #\n");
   printf(" #\n");
   printf(" #\n");
   printf(" #\n");
   printf("  ##      ##\n");
   printf("    ######\n");
			break;
		}
		case 'D':{
				PlaySound(TEXT("D.wav"),NULL,SND_SYNC);
			cout<<"DDDDDDDDDDD"<<endl;
			cout<<"D          D"<<endl;
			cout<<"D           D"<<endl;
			cout<<"D           D"<<endl;
			cout<<"D           D"<<endl;
			cout<<"DDDDDDDDDDD"<<endl;
			break;
		}
		case 'E':{
				PlaySound(TEXT("E.wav"),NULL,SND_SYNC);
  cout << "EEEEEE"<<endl;
  cout << "E" <<endl;
  cout << "EEEE"<<endl;
  cout << "E" << endl;
  cout << "EEEEEE" << endl;
			break;
		}
		case 'F':{
				PlaySound(TEXT("F.wav"),NULL,SND_SYNC);
	printf("######\n");
	printf("#\n");
	printf("#\n");
	printf("#####\n");
	printf("#\n");
	printf("#\n");
	printf("#\n");
			break;
		}
		case 'G':{
				PlaySound(TEXT("G.wav"),NULL,SND_SYNC);
cout << "  GGGG" <<endl;
cout << " G" <<endl;
cout << " G  GG" <<endl;
cout << " G   G" <<endl;
cout << "  GGG" <<endl;
			break;
		}
		case 'H':{
				PlaySound(TEXT("H.wav"),NULL,SND_SYNC);
			cout<<"#        #\n";
			cout<<"#        #\n";
			cout<<"##########\n";
			cout<<"#        #\n";
			cout<<"#        #\n";
			break;
		}
		case 'I':{
				PlaySound(TEXT("I.wav"),NULL,SND_SYNC);
			cout<<"############\n";
			cout<<"      #     \n";
			cout<<"      #     \n";
			cout<<"      #     \n";
			cout<<"      #     \n";	
			cout<<"############\n";
			break;
		}
		case 'J':{
				PlaySound(TEXT("J.wav"),NULL,SND_SYNC);
			cout<<"##########\n";
			cout<<"     #    \n";
			cout<<"     #    \n";
			cout<<"#    #    \n";
			cout<<"#    #    \n";
			cout<<"#    #    \n";
			cout<<" # # #    \n";
			
			break;
		}
		case 'K':{
				PlaySound(TEXT("K.wav"),NULL,SND_SYNC);
cout << "K     K" <<endl;
cout << "K    K " <<endl;
cout << "K   K  " <<endl;
cout << "K K    " <<endl;
cout << "K     K" <<endl;
			break;
		}
		case 'L':{
				PlaySound(TEXT("L.wav"),NULL,SND_SYNC);
			cout<<"#        \n";
			cout<<"#        \n";
			cout<<"#        \n";
			cout<<"#        \n";
			cout<<"#        \n";
			cout<<"#########\n";
			
			break;
		}
		case 'M':{
				PlaySound(TEXT("M.wav"),NULL,SND_SYNC);
  cout << "M      M" <<endl;
  cout << "MM     MM" <<endl;
  cout << "M M   M M" <<endl;
  cout << "M  M M  M"<<endl;
  cout << "M    M   M" <<endl;
			break;
		}
		case 'N':{
				PlaySound(TEXT("N.wav"),NULL,SND_SYNC);
	cout << "N       N" << endl;
    cout << "NN      N" << endl;
    cout << "N N     N" << endl;
    cout << "N  N    N" << endl;
    cout << "N   N   N" << endl;
    cout << "N    N  N" << endl;
    cout << "N     N N" << endl;
    cout << "N      NN" << endl;
			break;
		}
		case 'O':{
				PlaySound(TEXT("O.wav"),NULL,SND_SYNC);
	cout << "   OOO   " << endl;
    cout << "  O   O  " << endl;
    cout << " O     O " << endl;
    cout << " O     O " << endl;
    cout << " O     O " << endl;
    cout << "  O   O  " << endl;
    cout << "   OOO   " << endl;
			break;
		}
		case 'P':{
				PlaySound(TEXT("P.wav"),NULL,SND_SYNC);
	cout << "PPPPPP  " << endl;
    cout << "P     P " << endl;
    cout << "P     P " << endl;
    cout << "PPPPPP  " << endl;
    cout << "P       " << endl;
    cout << "P       " << endl;
    cout << "P       " << endl;
			break;
		}
		case 'Q':{
				PlaySound(TEXT("Q.wav"),NULL,SND_SYNC);
	cout << "   QQQ   " << endl;
    cout << "  Q   Q  " << endl;
    cout << " Q     Q " << endl;
    cout << " Q     Q " << endl;
    cout << " Q  Q  Q " << endl;
    cout << "  Q   QQ " << endl;
    cout << "   QQQ Q " << endl;
    cout << "        Q " << endl;
			break;
		}
		case 'R':{
				PlaySound(TEXT("R.wav"),NULL,SND_SYNC);
	cout << "RRRRRR  " << endl;
    cout << "R     R " << endl;
    cout << "R     R " << endl;
    cout << "RRRRRR  " << endl;
    cout << "R R     " << endl;
    cout << "R  R    " << endl;
    cout << "R   R   " << endl;
			break;
		}
		case 'U':{
				PlaySound(TEXT("U.wav"),NULL,SND_SYNC);
	cout << "U     U " << endl;
    cout << "U     U " << endl;
    cout << "U     U " << endl;
    cout << "U     U " << endl;
    cout << "U     U " << endl;
    cout << " UUUUU  " << endl;
			break;
		}
		case 'V':{
				PlaySound(TEXT("V.wav"),NULL,SND_SYNC);
	cout << "V       V" << endl;
    cout << "V       V" << endl;
    cout << " V     V " << endl;
    cout << "  V   V  " << endl;
    cout << "   V V   " << endl;
    cout << "    V    " << endl;
			break;
		}
		case 'W':{
				PlaySound(TEXT("W.wav"),NULL,SND_SYNC);
	cout << "W       W" << endl;
    cout << "W       W" << endl;
    cout << "W   W   W" << endl;
    cout << "W  W W  W" << endl;
    cout << "W W   W W" << endl;
    cout << "W       W" << endl;
			break;
		}
		case 'X':{
				PlaySound(TEXT("X.wav"),NULL,SND_SYNC);
	cout << "X       X" << endl;
    cout << " X     X " << endl;
    cout << "  X   X  " << endl;
    cout << "   X X   " << endl;
    cout << "    X    " << endl;
    cout << "   X X   " << endl;
    cout << "  X   X  " << endl;
    cout << " X     X " << endl;
    cout << "X       X" << endl;
			break;
		}
		case'Y':{
				PlaySound(TEXT("Y.wav"),NULL,SND_SYNC);
	cout << "Y       Y" << endl;
    cout << " Y     Y " << endl;
    cout << "  Y   Y  " << endl;
    cout << "   Y Y   " << endl;
    cout << "    Y    " << endl;
    cout << "    Y    " << endl;
			break;
		}
		case 'Z':{
				PlaySound(TEXT("Z.wav"),NULL,SND_SYNC);
	cout << "ZZZZZZZZ" << endl;
    cout << "      Z " << endl;
    cout << "     Z  " << endl;
    cout << "    Z   " << endl;
    cout << "   Z    " << endl;
    cout << "  Z     " << endl;
    cout << " Z      " << endl;
    cout << "ZZZZZZZZ" << endl;
			break;
		}
	}
	cout<<"BYE!";
	return 0;
}

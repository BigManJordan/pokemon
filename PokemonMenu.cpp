#include "PokemonMenu.h"
// #include <unistd.h>
//#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
// #include "Pokemonlist.h"
// #include "Function.h"
// #include "Moves.h"
// #include "Pokemon.h"
using namespace std;
void PokemonMenu() {
  int playerChoice;
  char status;
  string nickname;
  Charizard Charizard;
  Blastoise Blastoise;
  Bulbasaur Bulbasaur;

  //Heal,Element,Speed,Name,Armor
  Pokemon Geninja(8,1,3,"Geninja",0),Metapod(8,1,3,"Metapod",0);
  Pokemon Pokemon_array[2]={Geninja,Metapod};
  int i = rand()%2;
  cout << i << endl;
  welcomeScreen();
  cin >> playerChoice;
  // Pokemon choice Menu which will call different battle function
  lineBreak();
  if (playerChoice == 1) {
      cout << "You choose Charizard!"<<endl;
      cout << "Do you want to name your Pokemon[Y/N]: "<<endl;
      cin >> status;
      status = toupper(status);
      while (status != 'Y'){
        if (status == 'N'){
          break;
        } else {
          cout << "Please enter Y or N" << endl;
          cout << "Do you want to name your Pokemon[Y/N]: "<<endl;
          cin >> status;
          status = toupper(status);
        }
      }
      if(status=='Y'){
        cout << "Your Charizard's nickname: ";
        cin >> nickname;
        Charizard.setName(nickname);
      }
      else  {Charizard.setName("Charizard");}
      cout << "You choose Charizard!"<<endl;
      battleF(Charizard, Pokemon_array[i]);
    
  } else if (playerChoice == 2) {
      cout << "You choose Blastoise!"<<endl;
      cout << "Do you want to name your Pokemon[Y/N]: "<<endl;
      cin >> status;
      status = toupper(status);
      while (status != 'Y'){
        if (status == 'N'){
          break;
        } else {
          cout << "Please enter Y or N" << endl;
          cout << "Do you want to name your Pokemon[Y/N]: "<<endl;
          cin >> status;
          status = toupper(status);
        }
      }
      if(status=='Y'){
        cout << "Your Blastoise's nickname: ";
        cin >> nickname;
        Blastoise.setName(nickname);
      }
      else {Blastoise.setName("Blastoise");}
      battleW(Blastoise, Pokemon_array[i]);
    }
    else if (playerChoice == 3) {
      cout << "You choose Bulbasaur!"<<endl;
      cout << "Do you want to name your Pokemon[Y/N]: "<<endl;
      cin >> status;
      status = toupper(status);
      while (status != 'Y'){
        if (status == 'N'){
          break;
        } else {
          cout << "Please enter Y or N" << endl;
          cout << "Do you want to name your Pokemon[Y/N]: "<<endl;
          cin >> status;
          status = toupper(status);
        }
      }
      if(status=='Y'){
        cout << "Your Bulbasaur's nickname: ";
        cin >> nickname;
        Bulbasaur.setName(nickname);
      }
      else {Bulbasaur.setName("Bulbasaur");};
      battleG(Bulbasaur, Pokemon_array[i]);
    }
  } 



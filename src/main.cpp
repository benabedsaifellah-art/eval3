#include <iostream>
using namespace std;

void afficherBornes(const float puiss[], const float dist[], int taille);
int indiceBorneLaPlusProche(const float dist[], int taille);
void modifierBorne(float dist[], int indiceBorne, float nouvelleDist);
int main() {
  float puissances[5] = {50.0, 22.0, 11.0, 150.0, 7.4}; // en kW
  float distance[5] = {12.5, 35.0, 8.0, 60.0, 2.3};     // en km

  afficherBornes(puissances, distance, 5);
     int indice = indiceBorneLaPlusProche(distance, 5);
      cout << "Indice de la borne la plus proche : " << indice << endl;

  return 0;
}

void afficherBornes(const float puiss[], const float dist[], int taille) {
  for (int i = 0; i < taille; i++) {
    cout << "Borne " << i + 1 << " : " << puiss[i] << " kW, a " << dist[i]
         << " km" << endl;
  }
}
  int indiceBorneLaPlusProche(const float dist[], int taille){
    return 2;  
  }
void modifierBorne(float dist[], int indiceBorne, float nouvelleDist) {
    dist[indiceBorne] = nouvelleDist;
}
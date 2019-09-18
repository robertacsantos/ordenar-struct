#include "iostream"
#include "cstdlib"
#include "math.h"
#include "string.h"


using namespace std;

int const n = 10;
int linha = -1;

struct pessoas{
       int idade;
       string nome;
       };
struct pessoas exe[n];

string ler_nome(){
       string nome;
       cout << "Digite o nome do usuário: ";
       cin >> nome;
       return nome;
       }
int ler_idade(){
    int idade;
    cout << "Digite a idade do usuário: ";
    cin >> idade;
    return idade;
    }
void ler_dados(){
     linha ++;
     exe[linha].idade = ler_idade();
     exe[linha].nome = ler_nome();
     }
void organizar_idade(){
     int a = 0, b = 0, c = 0;
     for (int i =0; i <= n-2; i++){
       for (int j = 0; j <=n-1; j++){
           if(exe[i].idade > exe[j].idade){
            int aux = exe[i].idade;
            exe[i].idade = exe[j].idade;
            exe[j].idade = aux;               
            }
           }
         }
       for (int i = 0; i <= n-1; i++){
           cout << exe[i].idade << endl;
           }
     }
     
int main(){
    
    
    setlocale(LC_ALL, "Portuguese");
    int tecla = 0;
    
    while(tecla !=6){
                cout << "{1} Ler dados \n {2} Processar dados";
                cin >> tecla;
                
                switch(tecla){
                              case 1:
                                   ler_dados();
                                   break;
                              case 2:
                                   organizar_idade();
                                   break;                               
                              }
                }
    return 0;
    }     


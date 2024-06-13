// Hiorhanna
// Herik

#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

vector<string> passageiros;
vector<string> Origens;
vector<string> destinos;
vector<string> datas;

void LimpaBufferDoCin()
{
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void cadastrarPassagem()
{
  LimpaBufferDoCin();

  string nome, origens, destino, DataViagem;


  cout << "Digite o nome do passageiro: ";
  getline(cin, nome);
  cout << "\n";
  passageiros.push_back(nome);

  cout << "qual e a origem: ";
  getline(cin, origens);
  cout << "\n";
  Origens.push_back(origens);

  cout << "qual e o destino: ";
  getline(cin, destino);
  cout << "\n";
  destinos.push_back(destino);

  cout << "qual e a data da viagem : ";
  getline(cin, DataViagem);
  cout << "\n";
  datas.push_back(DataViagem);
}

void ListagemDePassagem()
{
  cout << "----------------------------------\n";
  cout << "|                                 |\n";
  cout << "|       Bem vindo ao programa     |\n";
  cout << "|               De                |\n";
  cout << "|       Lista de Passageiros      |\n";
  cout << "|                                 |\n";
  cout << "|                                 |\n";
  cout << "----------------------------------\n";
  cout << endl;
  cout << endl;

cout << "quantidade de passagens: " << passageiros.size() << endl << endl;

for (int i = 0; i < passageiros.size(); i++)
  {
    
    cout << "passageiro: " << passageiros[i] << endl;
    cout << "origem: " << Origens[i] << endl;
    cout << "destino: " << destinos[i] << endl;
    cout << "data: " << datas[i] << endl << endl;

  }
}

void desenhoBoasVindas(){

  cout << " --------------------------------------" << endl;
  cout << "| \t\t\t\t\t|" << endl;
  cout << "| \t Bem vindo ao programa\t\t|" << endl;
  cout << "| \t\t de\t\t\t|" << endl;
  cout << "| \t  Passagens Areas\t\t|" << endl;
  cout << "| \t\t\t\t\t|" << endl;
  cout << " --------------------------------------" << endl;
}

void desenhoMenu()
  {

    cout << "-------------Menu-----------------\n";
    cout << "|                                 |\n";
    cout << "| Escolha uma opcao:              |\n";
    cout << "|    1)Cadastrar  passagem        |\n";
    cout << "|    2)Listar  passagens          |\n";
    cout << "|    0)Sair                       |\n";
    cout << "|                                 |\n";
    cout << "-------------Menu------------------\n";
    cout << "Opcao: ";
  }

int main()
  {
    system("cls");

    int opcao = -1;
    string continuar;
    desenhoBoasVindas();

    do
    {
      desenhoMenu();
      cin >> opcao;
      cout << endl;

      switch (opcao)
      {
      case 0:
        cout << "Voce escolheu a opcao Sair do Programa!" << endl << endl;
        break;

      case 1:
        cadastrarPassagem();
        cout << "Voce escolheu a opcao Cadastrar Passagem!" << endl << endl;
        break;

      case 2:
        ListagemDePassagem();
        cout << "Voce escolheu a opcao Listar Passagens!" << endl << endl;
        break;

      default:
        cout << "Opcao Invalida :(";
        break;
      }

    } while (opcao != 0);

    cout << "OBRIGADO POR UTILIZAR O PROGAMA :)\n\n";

    return 0;
  }
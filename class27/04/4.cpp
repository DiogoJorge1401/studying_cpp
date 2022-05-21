#include <iostream>
using namespace std;

typedef void (*IShowError)(int, string);

inline void showError(int number, string description, IShowError func) { func(number, description); }

void programmer(int errorCode, string errorDescription) { cout << "Error " << errorCode << ": " << errorDescription << endl; }

void user(int errorCode, string errorDescription)
{
  cout << "A operação não pode ser concluída!\n\n"
          "Algum problema foi detectdo no sistema que impossibilitou a conclusão da tarefa. Contacte o desenvolvedor do sistema em dev@sys.com e envia o relatório de erros abaixo.\n\n"
          "------------------------------\n"
          "Relatório de Erros do Sistema\n"
          "------------------------------\n"
          "Código: "
       << errorCode << endl
       << "Descrição: " << errorDescription << endl;
}

int main(int argc, const char *argv[])
{
  showError(1235, "falha na leitura do arquivo", user);
  showError(4521, "erro inesperado na inicialização", programmer);
  return 0;
}
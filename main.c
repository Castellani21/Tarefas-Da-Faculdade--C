#include <stdio.h>

// Define a estrutura pessoa com os membros peso, idade e altura
typedef struct {
  double peso;
  int idade;
  double altura;
} pessoa;

// Função para imprimir as informações de uma pessoa
void imprimePessoa(pessoa p) {
  // Imprime os valores de peso, idade e altura formatados
  printf("Peso: %lf. Idade: %d. Altura: %lf.\n\n", p.peso, p.idade, p.altura);
}

int main() {
  // Declara um array de 5 pessoas e uma variável p1 do tipo pessoa
  pessoa pessoas[5], p1;

  // Atribui valores iniciais à primeira pessoa do array
  pessoas[0].peso = 80.6;
  pessoas[0].idade = 40;
  pessoas[0].altura = 1.70;

  // Atribui a p1 os valores da primeira pessoa do array
  p1 = pessoas[0];

  // Verifica se a idade de p1 é maior que 20
  if (p1.idade > 20) {
    // Se a idade for maior que 20, incrementa a idade de p1
    p1.idade++;
  }

  // Atribui os valores da primeira pessoa do array à segunda pessoa
  pessoas[1] = pessoas[0];

  // Imprime as informações das pessoas no array
  imprimePessoa(p1);
  imprimePessoa(pessoas[0]);
  imprimePessoa(pessoas[1]);
  imprimePessoa(pessoas[2]);
  imprimePessoa(pessoas[3]);
  imprimePessoa(pessoas[4]);

  // Retorna 0 para indicar que o programa foi executado com sucesso
  return 0;
}
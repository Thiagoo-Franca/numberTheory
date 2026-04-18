# Number Theory

Coleção de algoritmos de teoria dos números implementados em C++ para programação competitiva e resolução de problemas.

## Funcionalidades

### 1. Máximo Divisor Comum (GDC)
- **Função:** `gdc(int a, int b)`
- **Descrição:** Calcula o máximo divisor comum entre dois números usando o algoritmo de Euclides
- **Complexidade:** O(log(min(a, b)))

### 2. Menor Múltiplo Comum (LMC)
- **Função:** `lmc(int a, int b)`
- **Descrição:** Calcula o menor múltiplo comum entre dois números
- **Fórmula:** LMC(a, b) = (a × b) / GDC(a, b)
- **Complexidade:** O(log(min(a, b)))

### 3. Verificação de Número Primo
- **Função:** `primeNumber(int n)`
- **Descrição:** Verifica se um número é primo
- **Retorno:** `true` se primo, `false` caso contrário
- **Complexidade:** O(√n)

### 4. Números Primos até N
- **Função:** `primeNumbers(int n)`
- **Descrição:** Encontra todos os números primos entre 1 e N usando o Crivo de Eratóstenes
- **Retorno:** Vector contendo todos os primos até N
- **Complexidade:** O(n log log n)

## Como Compilar

```bash
g++ -o numberTheory numberTheory.cpp
```

## Como Executar

```bash
./numberTheory
```

O programa solicitará um número inteiro N como entrada e exibirá todos os números primos de 2 até N.

## Exemplo de Uso

**Entrada:**
```
20
```

**Saída:**
```
2 3 5 7 11 13 17 19
```

## Notas de Implementação

- O programa utiliza o **Crivo de Eratóstenes** para encontrar primos de forma eficiente
- Ideal para encontrar múltiplos primos em uma faixa
- Otimizado para programação competitiva
- Macros: `endl` definido como `'\n'` para maior velocidade de I/O
- Usa `#include <bits/stdc++.h>` para incluir todas as bibliotecas padrão 

# atividade-estacionamentoEC

# Sistema de Estacionamento

## Nome e matrícula
Nome: 
Matrícula: 

---

## Descrição do problema

Este programa consiste em um sistema de estacionamento.

O programa recebe: 
- a placa do veículo, 
- o tipo do veículo,
- o tempo de permanência no estacionamento.

Levando em consideração essas informações, o sistema calcula: 
- o valor base, 
- possíveis descontos,
- multas,
- e o valor final a ser pago. 

Os tipos de veículos disponíveis são: 
- Carro
- Moto
- Caminhonete

---

## Explicação da lógica

O funcionamento do programa é o seguinte:

1. O usuário informa: 
- placa,
- tipo do veículo, 
- quantidade de horas. 

2. O sistema define o valor da hora conforme o tipo: 
- Carro -> R$ 5/horas
- Moto -> R$ 3/hora
- Caminhonete -> R$ 8/hora

3. Caso o tempo seja menor que 1 hora, o sistema cobra o valor mínimo de 1 hora.

4. O valor base é calculado multiplicando:
   valor da hora × quantidade de horas.

5. Se o veículo permanecer mais de 5 horas:
   - o sistema aplica 10% de desconto.

6. Se o veículo permanecer mais de 10 horas:
   - o sistema adiciona multa fixa de R$ 20.

7. Por fim, o programa mostra um resumo com:
   - placa,
   - tipo do veículo,
   - tempo,
   - valor base,
   - desconto,
   - multa,
   - valor final.

   ---

## Como compilar e executar

### Compilar

```bash
gcc main.c -o estacionamento
```

### Executar

Windows:
```bash
estacionamento.exe
```
---

## Exemplo de entrada e saída

### Entrada

```txt
Digite a placa: ABC1234
Tipo de veiculo (1-Carro, 2-Moto, 3-Caminhonete): 1
Tempo (horas): 6
```

### Saída

```txt
--- RESUMO ---
Placa: ABC1234
Tipo: Carro
Tempo: 6.00 horas
Valor base: R$ 30.00
Desconto: R$ 3.00
Multa: R$ 0.00
Valor final: R$ 27.00
```

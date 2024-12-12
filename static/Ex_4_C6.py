"""
Para a avaliação da solução computacional apresentada, será analisada:  
1.  A organização da entrada de dados e a organização da saída de dados,  
2.  A organização do código-fonte, que precisa ser legível e identado,  
3.  A capacidade do programa de realizar dos cálculos com a precisão da máquina e sem 
erros algébricos.
4.  A inexistência de erros conceituais nos conceitos físicos e matemáticos.
5.  A capacidade do programa de ser adaptável para resolver um problema similar.
6.  As questões devem ser resolvidas integralmente, de acordo com essas instruções e os 
respectivos enunciados.  

Os nomes dos participantes do grupo devem estar no cabeçalho, como foi apresentado no 
exemplo, na forma de interface com o usuário, que significa imprimir na tela as informações ao 
leitor.  
O uso de instruções básicas da linguagem é recomendado. 
"""
#Organizar váriaveis, opção de fazer com outros valores, máximo de precisão 

print("Exercício 4.C6\n\nIntegrantes do grupo:\n\nHenryque Oliveira\nFelipe Gonçalves\nFelipe Silva\n")

ExplicandoProblema = """Explicando o problema:\n   O exercício apresenta um guindaste que está em um plano vertical formando um ângulo 𝜙 com o plano XY, sustentando uma caixa de 2000 kg. 
Ele é mantido por uma junta esférica em  A (0,0,0) e por dois cabos conectados nos pontos D (-2 , 0 , 1.5) e E (-2 , 0 , -1.5). 
Com essas informações ele pede para que seja calculada a tensão em cada cabo variando os valores de 𝜙 de 0 a 60°, com incrementos de 5°. 
Também pede para determinar o valor de 𝜙 para o qual a tensão em BE é máxima, usando incrementos menores conforme o necessário"""
print(ExplicandoProblema) #Ver se está bem explicado

ComoResolver = "\nComo resolver?\nbla bla bla"
print(ComoResolver) #Substituir o texto a cima pela explicação de como resolver o problema

#Colocar variáveis que serão utilizadas


"""

Cálculo de tensões em cabos BE e DE para um guindaste com carga suspensa.

Descrição do Problema:
Este programa calcula as tensões nos cabos BE e DE que suportam uma carga suspensa em um guindaste. 
O guindaste é articulado no ponto A e inclina-se em relação ao plano XY por um ângulo φ. O sistema é 
analisado utilizando princípios de equilíbrio estático.

Entradas:
- Massa da carga (kg)
- Comprimento da viga (m)
- Coordenadas dos pontos A, D e E (m)
- Intervalo de ângulos φ (em graus) e incrementos desejados
- Lembre-se de inserir apenas os números com um (1) espaço

Saídas:
- Tensões no cabo BE para cada valor de φ
- Ângulo φ onde a tensão no cabo BE é máxima

Aplicações:
O código é genérico e pode ser utilizado para resolver problemas semelhantes envolvendo guindastes 
ou sistemas de cabos que equilibram uma carga sob forças externas.

"""

"""import numpy as np
from scipy.optimize import fsolve

# === Função para coletar entradas do usuário ===
def solicitar_parametros():
    print("=== Configuração do Sistema ===")
    massa_carga = float(input("Massa da carga (kg): "))
    comprimento_viga = float(input("Comprimento da viga (m): "))

    print("Insira as coordenadas dos pontos (em metros):")
    A = np.array([float(x) for x in input("Coordenadas de A (x, y, z): ").split()])
    D = np.array([float(x) for x in input("Coordenadas de D (x, y, z): ").split()])
    E = np.array([float(x) for x in input("Coordenadas de E (x, y, z): ").split()])
    
    return massa_carga, comprimento_viga, A, D, E

# === Função para calcular as tensões dado um ângulo φ ===
def calcular_tensoes(phi_graus, massa_carga, comprimento_viga, A, D, E):
    g = 9.81  # Aceleração gravitacional (m/s²)
    peso = massa_carga * g  # Peso da carga (N)

    phi = np.radians(phi_graus)  # Converte φ para radianos
    posicao_carga = np.array([
        comprimento_viga * np.cos(phi),  # Coordenada x
        0,                              # Coordenada y
        -comprimento_viga * np.sin(phi) # Coordenada z
    ])

    def equilibrio(tensoes):
        T_BE, T_DE, F_Ax, F_Ay, F_Az = tensoes
        u_BE = (E - posicao_carga) / np.linalg.norm(E - posicao_carga)
        u_DE = (D - posicao_carga) / np.linalg.norm(D - posicao_carga)
        eq1 = F_Ax + T_BE * u_BE[0] + T_DE * u_DE[0]
        eq2 = F_Ay + T_BE * u_BE[1] + T_DE * u_DE[1]
        eq3 = F_Az + T_BE * u_BE[2] + T_DE * u_DE[2] - peso
        momento_BE = np.cross(E, T_BE * u_BE)
        momento_DE = np.cross(D, T_DE * u_DE)
        momento_total = momento_BE + momento_DE
        eq4 = momento_total[0]
        eq5 = momento_total[1]
        return [eq1, eq2, eq3, eq4, eq5]

    palpite_inicial = [1000, 1000, 0, 0, peso]
    solucao = fsolve(equilibrio, palpite_inicial)
    T_BE, T_DE, _, _, _ = solucao
    return T_BE, T_DE

# === Função principal ===
def main():
    # Coleta os parâmetros do sistema
    massa_carga, comprimento_viga, A, D, E = solicitar_parametros()

    # Solicita os incrementos de φ
    print("=== Configuração dos Cálculos ===")
    phi_min = float(input("Ângulo inicial φ (graus): "))
    phi_max = float(input("Ângulo final φ (graus): "))
    incremento = float(input("Incremento de φ (graus): "))

    # Varre os valores de φ e calcula as tensões
    valores_phi = np.arange(phi_min, phi_max + incremento, incremento)
    tensoes_BE = []

    for phi in valores_phi:
        T_BE, T_DE = calcular_tensoes(phi, massa_carga, comprimento_viga, A, D, E)
        tensoes_BE.append(T_BE)

    # Determina tensão máxima em BE e ângulo correspondente
    tensoes_BE = np.array(tensoes_BE)
    tensao_maxima = np.max(tensoes_BE)
    phi_otimo = valores_phi[np.argmax(tensoes_BE)]

    # Resultados
    print("\n=== Resultados ===")
    print("Ângulos φ (graus):", valores_phi)
    print("Tensões no cabo BE (N):", tensoes_BE)
    print(f"Tensão máxima no cabo BE: {tensao_maxima:.2f} N no ângulo φ = {phi_otimo}°")

# Executa o programa
if _name_ == "_main_":
    main()"""
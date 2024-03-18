"# essay1" 

1) Neste exercício, utilize o algoritmo SelectSort para atualizar o estado atual do vetor em
cada iteração.
Instruções:
        1. Execute o algoritmo SelectSort para ordenar a palavra “roma”.
        2. Preencha uma tabela com os seguintes dados:
        • Iteração: Indica o número da iteração atual do laço externo.
        • Estado Atual: Vetor de elementos após cada iteração.
        Segue a tabela de processamento:
        Iteração Estado Atual
        0 [a, o, m, r]
    Segue o algoritmo:
        void selectionSort(int v[], int tam) {
            int i, j, min, aux;
                for (i = 0; i < tam - 1; i++) {
                    min = i;
                    for (j = i + 1; j < tam; j++) {
                        if (v[j] < v[min]) {
                        min = j;
                        }
                        }
                    aux = v[min];
                    v[min] = v[i];
                    v[i] = aux;
                 }
        }

2) Imprima os elementos da seguinte árvore em pré-ordem, in-ordem e pós-ordem:
             (4)
            /    \
          (2)    (6)
          / \    / \
       (1) (3) (5) (7)
    Pré-ordem:
    In-ordem:
    Pós-ordem:

3) Neste exercício, você deverá fazer uma rotação dupla em uma árvore AVL para corrigir
o balanceamento da árvore. Além disso, você deve desenhar a árvore AVL balanceada para
melhor visualização. Certifique-se de calcular os fatores de balanceamento primeiro.
Observação: Exercício para compreender os conceitos de rotações simples e rotações duplas em árvores AVL.
Aqui está a árvore AVL que você deve ordenar:
            (3)
            / \
          (2) (5)
              / \
             (4)(6)
                  \
                  (7)

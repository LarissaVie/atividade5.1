# 📚 Manipulação de Fila com Vetor

Este documento explora como manipular uma fila representada por um vetor, onde a parte ocupada pela fila é `f[s..t]`. Vamos entender como remover e inserir elementos nessa fila.

## 1. Remover um Elemento da Fila 🚪

Para remover um elemento da fila:
- Atualize o índice inicial `s` para o próximo elemento.

Isso move o início da fila para o próximo elemento, efetivamente removendo o elemento atual do início da fila.

## 2. Inserir um Objeto `y` na Fila ➕

Para inserir um novo objeto `y` na fila:
- Adicione o elemento na posição imediatamente após o final atual da fila (`t`).
- Atualize o índice final `t` para refletir a nova posição.

Isso coloca o novo elemento no final da fila e ajusta o índice final para incluir o novo elemento.


🧪 1. ATIVIDADE ARDUINO TREINO
Sistema de Monitoramento Ambiental Automatizado
🎯 Contexto:
A empresa AgroTech Inovação Ltda. precisa automatizar o controle de temperatura e ventilação em suas estufas para melhorar a eficiência e evitar perdas na produção.

✅ Requisitos do Sistema:
Monitoramento contínuo de temperatura (usando sensor de temperatura).

Controle automatizado de ventilação (acionamento de motor ou servo para abrir/fechar aberturas).

Abertura proporcional (0%, 25%, 50%, 75%, 100%).

Alerta sonoro (buzzer) em caso de temperatura crítica.

Botão de emergência para controle manual.

Robustez e confiabilidade para ambiente de estufa.

🛠 Componentes Sugeridos:
Arduino Uno ou similar

Sensor de temperatura (ex: LM35 ou DHT22)

Servomotor ou motor DC com driver

Buzzer

Botão

Display LCD (opcional)

📌 Entregável:
Código Arduino + esquema de montagem (pode ser feito no Tinkercad ou Fritzing).

2. DESAFIO <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/c3/Python-logo-notext.svg/1869px-Python-logo-notext.svg.png" width="20" height="20">
Sistema de Controle de Estoque
🎯 Contexto:
A Armazém Central precisa de um sistema para gerenciar entradas e saídas de produtos de papelaria e emitir alertas de reposição.

✅ Requisitos do Sistema:
Ler um dicionário estoque_atual com pelo menos 8 itens.

Processar uma lista movimentacoes_dia com pelo menos 15 movimentações.

Atualizar o estoque conforme entradas e saídas.

Adicionar novos produtos se não existirem.

Verificar itens com estoque ≤ 50 e emitir alerta de reposição.

📊 Exemplo de Estrutura:
python
estoque_atual = {
    "canetas": 150,
    "cadernos": 95,
    # ... mais 6 itens
}

movimentacoes_dia = [
    ("canetas", "saída", 25),
    ("cadernos", "entrada", 10),
    ("borrachas", "saída", 50),
    # ... mais 12 movimentações
]
📌 Entregável:
Script Python funcional que imprima:

Estoque final atualizado

Lista de produtos que precisam de reposição

👨‍💻 Equipe:
Davi de Assis Fabricio

Vinicius Queiroz

Thomas Gabriel

👨‍💻 Professores:
Luiz Felipe Cardozo

Lucas Machado

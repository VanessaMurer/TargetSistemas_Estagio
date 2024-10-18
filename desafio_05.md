# Desafio 05

Você está em uma sala com três interruptores, cada um conectado a uma lâmpada em salas diferentes. Você não pode ver as lâmpadas da sala em que está, mas pode ligar e desligar os interruptores quantas vezes quiser. Seu objetivo é descobrir qual interruptor controla qual lâmpada. Como você faria para descobrir, usando apenas duas idas até uma das salas das lâmpadas, qual interruptor controla cada lâmpada?

## Resposta:

Nomeio os interruptores A, B e C.

Caso 1: Se as lâmpas estiverem na mesma sala <br>
Ligo o A e deixo por alguns minutos. Desligo e ligo o B. Vou até a sala das lâmpadas: <br>

Lâmpada ligada é do interruptor B. <br>
Lâmpada desligada e fria é do interruptor C. <br>
Lâmpada desligada e quente é do interruptor A. <br>

Caso 2: Se as lâmpadas estiverem em salas diferentes: <br>

- 2.1 Duas idas podem ser feitas na mesma sala ou em salas diferentes.

Mesmo procedimento do primeiro caso. <br>
Vou na primeira sala: <br>
Lâmpada ligada? é do interruptor B. <br>
Lâmpada desligada e fria? é do interruptor C. <br>
Lâmpada desligada e quente? é do interruptor A. <br>

Suponha que descobrimos que a primeira sala é do interruptor B: <br>
Desligo o interruptor B. Ligo o A.

Vou para a segunda sala:
Se a lâmpada está acesa é o interruptor A, se não é o C.

Caso a primeira sala for do interruptor A ou C faço o passo anterior na segunda sala com os dois interruptores que faltam.

- 2.2 Duas idas para apenas uma sala. <br>

Mesmo procedimento do primeiro caso. <br>
Vou na primeira sala: <br>
Lâmpada ligada? é do interruptor B. <br>
Lâmpada desligada e fria? é do interruptor C. <br>
Lâmpada desligada e quente? é do interruptor A. <br>

Descubro qual das lâmpadas corresponde a primeira sala. Não importa o quanto eu mexer nos outros interruptores se eu só puder voltar para a sala da qual já sei a resposta não vou poder descobrir quais são os interruptores das outras.

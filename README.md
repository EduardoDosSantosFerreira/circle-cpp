# Controle de LEDs RGB com Adafruit NeoPixel em Arduino

![Circle](https://github.com/EduardoDosSantosFerreira/circle-cpp/blob/main/circle.png)

O código fornecido utiliza a biblioteca Adafruit NeoPixel para controlar uma fita de LEDs RGB. O código implementa a transição de cores ao longo da fita de LED e também controla uma lâmpada externa.

## Componentes Utilizados

- Arduino board
- Fita de LEDs RGB NeoPixel
- Lâmpada (ou outro dispositivo externo)

## Funcionalidades do Código

1. **Configuração Inicial**

   - A biblioteca NeoPixel é inicializada para controlar a fita de LEDs.
   - O pino da lâmpada é configurado como saída.

2. **Loop de Animação**

   - A fita de LED realiza uma transição de cores, percorrendo as cores vermelho, amarelo e verde.
   - Cada transição de cor é acompanhada pelo acionamento da lâmpada.

3. **Controle das Cores da Fita de LED**

   - Durante cada transição de cor, a função `leds.setPixelColor` é utilizada para definir a cor dos LEDs.
   - A função `leds.show` atualiza a exibição dos LEDs com as novas cores.

4. **Controle da Lâmpada**

   - O pino da lâmpada é acionado em conjunto com a transição de cores, simbolizando a ativação e desativação da lâmpada.

## Considerações Finais

Esse projeto demonstra como utilizar a biblioteca Adafruit NeoPixel para controlar LEDs RGB em um Arduino. Além disso, o código coordena a transição de cores na fita de LED e a ativação de uma lâmpada externa, oferecendo uma experiência visual e prática de controle de dispositivos de iluminação.

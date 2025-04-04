const int pinoSensor = A0; // Cria uma constante inteira que recebe o valor da entrada analógica do arduino "A0".
const float umidadeMaxima = 80;
const float umidadeMinima = 50;

void setup() { // O void roda o código apenas uma vez.
  Serial.begin(9600); // Inicia a comunicação serial no valor de 9.600 bauds.
  pinMode(pinoSensor, INPUT); // Atribui que o pinoSensor será a entrada de informações.
}

void loop() { // Roda o código em repetição, ou seja, em loop.
  int leituraSensor = analogRead(pinoSensor); // Cria a variável inteira "LeituraSensor" que recebe a leitura analogica do "pinoSensor".

  float umidade = map(leituraSensor, 0.0, 1023.0, 100.0, 0.0); //Criação da variável "umidade" e a atribui o valor de "leituraSensor" de forma mapeada, invertendo os valores.

  //Label de umidade atual. 
  Serial.print(umidade); 
  Serial.println(" "); 
    
  delay (2000); //A frequência em que se atualiza o loop.
}

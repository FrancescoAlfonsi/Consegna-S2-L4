#include<stdio.h>
#include<stdlib.h>
#define BOLD_ON  "\e[1m"
#define BOLD_OFF   "\e[m"
#define RED     "\033[31m"
#define RESET   "\033[0m"



int main() {
  int gioca, punteggio=0;
  printf(RED BOLD_ON "\n\n\t\t\t  Jumanji\t\t\t\n" BOLD_OFF RESET);  
  printf("\n Un gioco che sa trasportar chi questo mondo vuol lasciar.");
  printf("\n Questo gioco vi proporrà cinque domande.");
  printf("\n Ogni risposta esatta vale un punto.");
  printf("\n Ogni risposta errata e' fonte di sventura.");
  printf("\n Alcune risposte sono considerate ne' corrette ne' errate.");
  printf("\n Queste risposte non porteranno sventure ne' alzeranno il punteggio.");
  do{
    printf(BOLD_ON "\n\n Avventurosi attenzione. Non cominciate se non intendete finire." BOLD_OFF);
    printf(BOLD_ON "\n Ogni sconvolgente conseguenza del gioco scomparirà solo quando" BOLD_OFF);
    printf(BOLD_ON "\n un giocatore raggiunto Jumanji gridato forte il nome avrà" BOLD_OFF);
    printf("\n\n Iniziare una nuova partita?\n\n 1. Sì\t 2. Grida Jumanji\n\n ");
    scanf("%d", &gioca);
    system("clear");
    punteggio=0;
    int sciagure=0;
    if(gioca==1){
      printf("\n\n Dammi il tuo nome: ");
      char giocatore[30];
      scanf("%s",giocatore);
      printf("\n\n Benvenuto in Jumanji, %s.",giocatore);
      printf("\n Iniziamo con le domande.");
      printf("\n\n Chi non deve nominare mai piu' Pappalardo\n");
      printf("\n 1. Mia madre\t2. La madre di Zequila\t3. Mark Caltagirone\n\n ");
      int risposta;
      scanf("%d", &risposta);
      if (risposta==1)
	printf("\n Anche, ma non totalmente corretto. Zero punti e zero sciagure.\n\n");
      else if (risposta==2){
	printf("\n Coretto. Ma non nominarla maiiiiii. Maiiii. Ti spacco la faccia.\n\n");
	punteggio++;}
      else{ 
	printf("\n Risposta errata. Nella giungla dovrai stare, finche' un 5 o un 8 non compare.\n\n");
	sciagure++;}
      printf("\n Cosa doveva fare Mara Venier col disco regalato da Ornella Vanoni?\n ");
      printf("\n 1. Scelofanarlo \t2. Celofanarlo \t3. Nessuno l'ha mai capito\n\n ");
      scanf("%d",&risposta);
      if (risposta==1){
	punteggio++;	  
	printf("\n Corretto. Ora va', e scelofanalo\n\n");}
      else if (risposta==2){
	sciagure++;
	printf("\n Risposta errata. Ha zanne aguzze. Vi vuole assaggiare. Non vi conviene... temporeggiare.\n\n");}
      else
	printf("\n Vero, ma non la esattamente la risposta che volevamo. Zero punti.\n\n");
      printf("\n Grazie a cosa vinsero battaglia le Amazzoni?\n ");
      printf("\n 1. La loro fuga\t2. La loro foga\t3. La loro figa\n\n ");
      scanf("%d",&risposta);
      if (risposta==3){
	punteggio++;	  
	printf("\n Esattamente la risposta che ci piace. Guadagni un punto.\n\n");}
      else if (risposta==1){
	printf(" Risposta corretta, ma non sarai mai memorabile come il signor Giancarlo. Zero Punti per te.\n\n");}
      else{
	sciagure++;
	printf("\n Risposta errata. Un cacciatore dalla giungla è venuto... ti fa sentire un bambino sperduto.\n\n ");}
      printf("\n Quale presidente si è finto morto per non rispondere alle domande della Perego?\n ");
      printf("\n 1. Andreotti\t2. PIER Silvio Berlusconi \t3. Truce Baldazzi\n\n ");
      scanf("%d",&risposta);
      if (risposta==1){
	punteggio++;	  
	printf("\n Un punto davvero meritato.\n\n");}
      else{
	sciagure++;
	printf("\n Risposta errata. Si mette male la missione, scimmie rallentano la spedizione.\n\n ");}
      printf("\n Ultima domanda. Due risposte saranno considerate corrette, una sola ti ricoprira' di sventura.");
      printf("\n \n Fa schiuma ma non e' sapone. Cos'e'?\n");
      printf("\n 1. La birra\t2. La borra \t3. Rosario Muniz\n\n ");
      scanf("%d",&risposta);
      if (risposta==2||risposta==3){
	punteggio++;	  
	printf("\n Complimenti, risposta errata ma non per il nostro gioco. Guadagni un punto.\n");
	printf("\n Gioco Terminato!\n");
	printf("\n\n Il tuo punteggio, %s, e': %d; ti sono state invece inflitte %d sventure.\n\n ",giocatore,punteggio,sciagure);}
      else{
	printf("\n Risposta errata. Basterà un pizzico per farti grattare, con mille starnuti ti farà dimenare.\n\n ");
	printf("\n Gioco Terminato!\n");
	printf("\n\n Il tuo punteggio, %s, e': %d; ti sono state invece inflitte %d sventure.\n\n ",giocatore,punteggio,sciagure);}}
    else
      return 0;}
  while(gioca==1);
  return 0;}

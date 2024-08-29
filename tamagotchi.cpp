#include <stdio.h>
#include <stdlib.h>

int hungry;
int happy;
int energy;
  
hungry=50;
happy=50;
energy=50;
  
int choice, menu,tama,eat;
int select, food, play, sleep, clean;
char ntama[20];

int main(){
	printf("Pilih tamagotchi: \n1. Cat\n2. Dog\n3. Bird\n");
	printf("\nSilahkan pilih: "); 
	scanf("%d", &tama);
	
// CAT
		if(tama==1){
      		system("cls");
			printf("\n ,_     _\n");
			printf(" |\\_,-~/\n");
			printf(" / _  _ |    ,--.\n");
			printf("(  @  @ )   / ,-'\n");
			printf(" \\  _T_/-._( (\n");
			printf(" /         `. \\ \n");
			printf("|         _  \ |\n");
			printf(" \\  \\ ,  /    |\n");
			printf("  || |-_\__   /\n");
			printf(" ((_/`(____,-'\n\n");
		
		rest:

    while (1) {
        if(hungry<=0){
        	system("cls");
			printf("\n-------****------****-----*=----*----******---******---*-------*---******---*****-------**--\n");
			printf("------*---------*----*---*-*---*-*---*--------*----*---*-------*---*--------*----*------**--\n"); 
			printf("-----*----------*----*---*--*-*--*---*--------*----*----*-----*----*--------*----*------**--\n");
			printf("-----*---***----******---*---*---*---******---*----*----*-----*----******---*---*-------**--\n");
			printf("-----*------*---*----*---*-------*---*--------*----*-----*---*-----*--------*-*---------**--\n");
			printf("------*-----*---*----*---*-------*---*--------*----*------*-*------*--------*--*------------\n");
			printf("-------****-----*----*---*-------*---******---******-------*-------******---*----*------**--\n");
        	break;
    }
// Menampilkan Display Tamagotchi
	printf("Status Tamagotchi Cat:\n");
    printf("Hunger: %d\n", hungry);
	printf("Happy: %d\n", happy);
    printf("Energy: %d\n\n", energy);

// Menampilkan menu aksi Hewan Tamagochi
    printf("Apa yang ingin Anda lakukan?\n");
    printf("1. Beri makan\n");
    printf("2. Mainkan\n");
    printf("3. Tidur\n");
    printf("4. Keluar\n\n");
    printf("Masukkan pilihan Anda (1-4): ");


    int choice;
    scanf("%d", &choice);
    	if (choice == 1) {
      		system("cls");
			printf("\n                                                                               J    L\n");
			printf("                                                                                |    |\n");
			printf("                                                                                F    F\n");
			printf("                                                                               J    J\n");
			printf("                                                                              /    /\n");
			printf("                                                                             /    /\n");
			printf("                                                                           .'    /\n");
			printf("                                                   .--""--._                /     /\n");
			printf("                                               _.-'         `-.          /     /\n");
			printf("                                    __       .'                `.       /     /\n");
			printf("                                 _-'-. `-.  J                    \      /     /\n");
			printf("                            .---(  `, _   `'|                     `.  J     /\n");
			printf("                              `. )                                  ""       /\n");
			printf("                               F                                          J\n");
			printf("                               L                  |                      J\n");
			printf("                               ` (/     /         |                      F\n");
			printf("                                |    ._'          |                      |\n");
			printf("                               /'`--'`.           |                      J\n");
			printf("                               '||\   |-._        `.  ___.               |\n");
			printf("                                 `     \  `.        |/    `-            J\n");
			printf("                                        F   L       /       J           /\n");
			printf("                                        |   J      J         F         J\n");
			printf("                                        |    \     J         |        J\n");
			printf("                                        |    |L    J         J        J\n");
			printf("                                        |    FJ    |          L       |\n");
			printf("                                        |   J  L   |          L\      F\n");
			printf("                                        |   F  |   |           L\    J\n");
			printf("       ________                         F  F   |   |           | L   |\n");
			printf("      /        \\                       J  J    |   |           | |   F\n");
			printf("     /          \\                      /  )    F  J            F F  J\n");
			printf("    /            \\                    ( .'    )   F           J J  F\n");
			printf("   /______________\\                    `      (   J           /.'  J\n");
			printf("                                              `-'           ||-' |)\n");
			printf("                                                             '-')" ");\n");
		    printf("\nPilih makanan :\n");
		    printf("1. Ikan\n");
		    printf("2. Daging\n");
		    printf("3. Makanan kering\n\n");
		    printf("Masukkan pilihan Anda (1-4): ");
        	scanf("%d", &eat);

// Memberi makan Cat	
	switch(eat){
    case 1: 
    	system("cls");
        printf("Aku suka ikan!\n\n");
		printf("\n                                                                               J    L\n");
		printf("                                                                                |    |\n");
		printf("                                                                                F    F\n");
		printf("                                                                               J    J\n");
		printf("                                                                              /    /\n");
		printf("                                                                             /    /\n");
		printf("                                                                           .'    /\n");
		printf("                                                   .--""--._                /     /\n");
		printf("                                               _.-'         `-.          /     /\n");
		printf("                                    __       .'                `.       /     /\n");
		printf("                                 _-'-. `-.  J                    \      /     /\n");
		printf("                            .---(  `, _   `'|                     `.  J     /\n");
		printf("                              `. )                                  ""       /\n");
		printf("                               F                                          J\n");
		printf("                               L                  |                      J\n");
		printf("                               ` (/     /         |                      F\n");
		printf("                                |    ._'          |                      |\n");
		printf("                               /'`--'`.           |                      J\n");
		printf("                               '||\   |-._        `.  ___.               |\n");
		printf("                                 `    \\  `.        |/    `-            J\n");
		printf("                                        F   L       /       J           /\n");
		printf("                                        |   J      J         F         J\n");
		printf("                                        |    \     J         |        J\n");
		printf("                                        |    |L    J         J        J\n");
		printf("                                        |    FJ    |          L       |\n");
		printf("         | \\/ |                         |   J  L   |          L\      F\n");
		printf("         \\   /                          |   F  |   |           L\    J\n");
		printf("       ___/__|_                         F  F   |   |           | L   |\n");
		printf("      /        \\                       J  J    |   |           | |   F\n");
		printf("     /   IKAN   \\                      /  )    F  J            F F  J\n");
		printf("    /            \\                    ( .'    )   F           J J  F\n");
		printf("   /______________\\                    `      (   J           /.'  J\n");
		printf("                                              `-'           ||-' |)\n");
		printf("                                                             '-')" ");\n");
        break;
        
    case 2: 
        system("cls");
        printf("Daging yang enak!\n\n");
		printf("\n                                                                               J    L\n");
		printf("                                                                                |    |\n");
		printf("                                                                                F    F\n");
		printf("                                                                               J    J\n");
		printf("                                                                              /    /\n");
		printf("                                                                             /    /\n");
		printf("                                                                           .'    /\n");
		printf("                                                   .--""--._                /     /\n");
		printf("                                               _.-'         `-.          /     /\n");
		printf("                                    __       .'                `.       /     /\n");
		printf("                                 _-'-. `-.  J                    \      /     /\n");
		printf("                            .---(  `, _   `'|                     `.  J     /\n");
		printf("                              `. )                                  ""       /\n");
		printf("                               F                                          J\n");
		printf("                               L                  |                      J\n");
		printf("                               ` (/     /         |                      F\n");
		printf("                                |    ._'          |                      |\n");
		printf("                               /'`--'`.           |                      J\n");
		printf("                               '||\   |-._        `.  ___.               |\n");
		printf("                                 `     \  `.        |/    `-            J\n");
		printf("                                        F   L       /       J           /\n");
		printf("                                        |   J      J         F         J\n");
		printf("                                        |    \     J         |        J\n");
		printf("                                        |    |L    J         J        J\n");
		printf("                                        |    FJ    |          L       |\n");
		printf("                                        |   J  L   |          L\      F\n");
		printf("                                        |   F  |   |           L\    J\n");
		printf("       ________                         F  F   |   |           | L   |\n");
		printf("      /        \\                       J  J    |   |           | |   F\n");
		printf("     /          \\                      /  )    F  J            F F  J\n");
		printf("    /   DAGING   \\                    ( .'    )   F           J J  F\n");
		printf("   /______________\\                    `      (   J           /.'  J\n");
		printf("                                              `-'           ||-' |)\n");
		printf("                                                             '-')" ");\n");
        break;
        
    case 3: 
        system("cls");
        printf("Terima kasih untuk makanan keringnya!\n\n");
		printf("\n                                                                               J    L\n");
		printf("                                                                                |    |\n");
		printf("                                                                                F    F\n");
		printf("                                                                               J    J\n");
		printf("                                                                              /    /\n");
		printf("                                                                             /    /\n");
		printf("                                                                           .'    /\n");
		printf("                                                   .--""--._                /     /\n");
		printf("                                               _.-'         `-.          /     /\n");
		printf("                                    __       .'                `.       /     /\n");
		printf("                                 _-'-. `-.  J                    \      /     /\n");
		printf("                            .---(  `, _   `'|                     `.  J     /\n");
		printf("                              `. )                                  ""       /\n");
		printf("                               F                                          J\n");
		printf("                               L                  |                      J\n");
		printf("                               ` (/     /         |                      F\n");
		printf("                                |    ._'          |                      |\n");
		printf("                               /'`--'`.           |                      J\n");
		printf("                               '||\   |-._        `.  ___.               |\n");
		printf("                                 `     \  `.        |/    `-            J\n");
		printf("                                        F   L       /       J           /\n");
		printf("                                        |   J      J         F         J\n");
		printf("                                        |    \     J         |        J\n");
		printf("                                        |    |L    J         J        J\n");
		printf("                                        |    FJ    |          L       |\n");
		printf("                                        |   J  L   |          L\      F\n");
		printf("                                        |   F  |   |           L\    J\n");
		printf("       ________                         F  F   |   |           | L   |\n");
		printf("      /        \\                       J  J    |   |           | |   F\n");
		printf("     /          \\                      /  )    F  J            F F  J\n");
		printf("    /   CATFOOD  \\                    ( .'    )   F           J J  F\n");
		printf("   /______________\\                    `      (   J           /.'  J\n");
		printf("                                              `-'           ||-' |)\n");
		printf("                                                             '-')" ");\n");
        break;
        default:
    
    system("cls");
	printf("Pilihan salah\n");
    }
        if (hungry < 100) {
        	hungry += 20;
		}
        if (hungry > 100) {
        	hungry = 100;
        }
	}
	
// Membuat Cat disuruh tidur jika cape
	else if (choice == 2) {
        if (energy <= 0){
        	system("cls");
        	printf("You need some rest! \n");
        	printf("\n |\\__/,|   (`\\ \n");
			printf(" |_ _  |.--.) )\n");
			printf(" ( T   )     /\n");
			printf("(((^_(((/(((_/\n\n");
        goto rest;
	}
	
// Membuat Cat jadi bermain
	else if (happy < 100 && energy > 0) {
        happy += 10;
        energy -= 10;
    }
        system("cls");
        printf("Wow menyenangkan! \n");
	    printf("\n    /\\_/\\           ___\n");
		printf("   = o_o =_______    \\ \\ \n"); 
		printf("    __^      __(  \.__) ) \n");
		printf("(@)<_____>__(_____)____/ \n\n");
    }
	
// Membuat Cat tidur
	else if (choice == 3) {
        energy = 100;
        system("cls");
        printf("\nZZZzz |\\      _,,,---,,_\n");
		printf("      /,`.-'`'    -.  ;-;;,_\n");
		printf("     |,4-  ) )-,_. ,\ (  `'-'\n");
		printf("    '---''(_/--'  `-'\_)         \n\n");
    } 

// Membuat tamagotchi keluar
	else if (choice == 4) {
        printf("Thank you for playing!\n");
        break;
    } 

// Error
	else {
        printf("Pilihan tidak valid\n");
        system("cls");
    }

// Mengurangi kelaparan dan kebahagiaan Cat
      hungry -= 5;
      happy -= 5;
}

// ANJING ============================================================================================================================================================================================================
    } else if (tama==2){
        	system("cls");
			printf("\n       |\\_/|\n");                  
			printf("       | @ @   Woof!\n"); 
			printf("       |   <>              _\n");  
			printf("       |  _/\\------____ ((| |))\n");
			printf("       |               `--' |   \n");
			printf("   ____|_       ___|   |___.' \n");
			printf("  /_/_____/____/_______|\n\n");
		
		rest2:

    while (1) {
        if(hungry<=0){
        	system("cls");
			printf("\n-------****------****-----*=----*----******---******---*-------*---******---*****-------**--\n");
			printf("------*---------*----*---*-*---*-*---*--------*----*---*-------*---*--------*----*------**--\n"); 
			printf("-----*----------*----*---*--*-*--*---*--------*----*----*-----*----*--------*----*------**--\n");
			printf("-----*---***----******---*---*---*---******---*----*----*-----*----******---*---*-------**--\n");
			printf("-----*------*---*----*---*-------*---*--------*----*-----*---*-----*--------*-*---------**--\n");
			printf("------*-----*---*----*---*-------*---*--------*----*------*-*------*--------*--*------------\n");
			printf("-------****-----*----*---*-------*---******---******-------*-------******---*----*------**--\n");
        	break;
    }
// Menampilkan Display Tamagotchi
	printf("Status Tamagotchi Dog:\n");
    printf("Hunger: %d\n", hungry);
	printf("Happy: %d\n", happy);
    printf("Energy: %d\n\n", energy);

// Menampilkan menu aksi Hewan Tamagochi
    printf("Apa yang ingin Anda lakukan?\n");
    printf("1. Beri makan\n");
    printf("2. Mainkan\n");
    printf("3. Tidur\n");
    printf("4. Keluar\n\n");
    printf("Masukkan pilihan Anda (1-4): ");


    int choice;
    scanf("%d", &choice);
    	if (choice == 1) {
      		system("cls");
      		printf("\n .-------------.       .    .   *       * \n");  
			printf("  /_/_/_/_/_/_/_/ \\         *       .   )    .\n");
			printf(" //_/_/_/_/_/_// _ \\ __          .        .   \n");
			printf("/_/_/_/_/_/_/_/|/ \\.' .`-o                    \n");
			printf(" |             ||- (/ ,--'                    \n");
			printf(" |             ||  _ |       _____            \n");
			printf(" |             ||  ||       /     \\            \n");
			printf(" |_____________|| |_|L     /_______\\           \n");
		    printf("\nPilih makanan :\n");
		    printf("1. Susu\n");
		    printf("2. Daging\n");
		    printf("3. Makanan kering\n\n");
		    printf("Masukkan pilihan Anda (1-4): ");
        	scanf("%d", &eat);
        	
 // Memberi makan Dog       	
	switch(eat){
    case 1: 
    	system("cls");
        printf("Aku suka susu!\n\n");
    	printf("   .-------------.       .    .   *       * \n");  
		printf("  /_/_/_/_/_/_/_/ \\         *       .   )    .\n");
		printf(" //_/_/_/_/_/_// _ \\ __          .        .   \n");
		printf("/_/_/_/_/_/_/_/|/ \\.' .`-o                    \n");
		printf(" |             ||- (/ ,--'                    \n");
		printf(" |             ||  _ |       ______           \n");
		printf(" |             ||  ||       /      \\            \n");
		printf(" |_____________|| |_|L     /__SUSU__\\           \n\n");
        break;
        
    case 2: 
        system("cls");
        printf("Daging yang enak!\n\n");
        printf("   .-------------.       .    .   *       * \n");  
		printf("  /_/_/_/_/_/_/_/ \\         *       .   )    .\n");
		printf(" //_/_/_/_/_/_// _ \\ __          .        .   \n");
		printf("/_/_/_/_/_/_/_/|/ \\.' .`-o                    \n");
		printf(" |             ||- (/ ,--'                    \n");
		printf(" |             ||  _ |       ________         \n");
		printf(" |             ||  ||       /        \\            \n");
		printf(" |_____________|| |_|L     /__DAGING__\\           \n\n");
        break;
        
    case 3: 
        system("cls");
        printf("Terima kasih untuk makanan keringnya!\n\n");
        printf("   .-------------.       .    .   *       * \n");  
		printf("  /_/_/_/_/_/_/_/ \\         *       .   )    .\n");
		printf(" //_/_/_/_/_/_// _ \\ __          .        .   \n");
		printf("/_/_/_/_/_/_/_/|/ \\.' .`-o                    \n");
		printf(" |             ||- (/ ,--'                    \n");
		printf(" |             ||  _ |       ________        \n");
		printf(" |             ||  ||       / MAKANAN\\            \n");
		printf(" |_____________|| |_|L     /__KERING__\\           \n\n");
        break;
        default:
        	
	printf("Pilihan salah\n");
    }
        if (hungry < 100) {
        	hungry += 20;
		}
        if (hungry > 100) {
        	hungry = 100;
        }
	}
	
// Membuat Dog disuruh tidur jika cape
	else if (choice == 2) {
        if (energy <= 0){
        	system("cls");
        	printf("You need some rest! \n");
			printf("                _,)\n");
			printf("        _..._.-;-'\n");
			printf("     .-'     `(\n");
			printf("    /      ;   \\ \n");
			printf("   :.' :'  ,:  :\n");
			printf("  .'' ``. (  \\ : \n");
			printf(" / f_ _L \ ;   )\\ \n");
			printf(" \\/|' '|\\/: : </\n");
			printf("((; \\_/  (()      \n");
			printf("     ' \n");
        goto rest2;
	}
	
// Membuat Dog jadi bermain
	else if (happy < 100 && energy > 0) {
        happy += 10;
        energy -= 10;
    }
        system("cls");
        printf("Wow menyenangkan! \n");
		printf("       ___\n");
		printf("    __/_  `.  .-'''-.\n");
		printf("    \\_,` | \\-'  /   )'-')\n");
		printf("      ') ` ' `    \\ ((``\n");
		printf("    ___Y  ,    .'7 /|\n");
		printf("(@)(_,___/...-` (_/_/ \n\n");
    }
	
// Membuat Dog tidur
	else if (choice == 3) {
        energy = 100;
        system("cls");
    	printf("\n.            /A\\,\n");
		printf("          .//`_`\\\\,\n");
		printf("        ,//`____-`\\\\,\n");
		printf("      ,//`[_ --_ _]`\\\\,\n");
		printf("    ,//`=  ==  __-  _`\\\\,\n");
		printf("   //|__=  __- == _  __|\\\\ \n");
		printf("   ` |  __ .-----.  _  | `\n");
		printf("     | - _/ ZZzz  \\-   |\n");
		printf("     |__  | .- -. | __=|\n");
		printf("     |  _=|/)   (\\|    |\n");
		printf("     |-__ (/ ^ ^ \\) -__|\n");
		printf("     |___ /`\\_Y_/`\\____|\n");
		printf("          \\)     (/ \n\n");
    } 

// Membuat tamagotchi keluar
	else if (choice == 4) {
        printf("Thank you for playing!\n");
        break;
    } 

// Error
	else {
        printf("Pilihan tidak valid\n");
        system("cls");
    }

// Mengurangi  kelaparan dan kebahagiaan Dog
      hungry -= 5;
      happy -= 5;
    }


// BURUNG ============================================================================================================================================================================================================
    } else if(tama==3){
          system("cls");
          printf("  __________\n");
          printf(" / ___  ___ \\ \n");
          printf("/ / @ \\/ @ \\ \\ \n");
          printf("\\ \\___/\\___/ /\\ \n");
          printf(" \\____\\/____/||\n");
          printf(" /     /\\\\\\\\\\//\n");
          printf("|     |\\\\\\\\\\\\\ \n");
          printf(" \\      \\\\\\\\\\\\\ \n");
          printf("   \\______/\\\\\\\\\ \n");
          printf("    _||_||_ \n");
	
	rest3:
		
	while (1) {
        if(hungry<=0){
        	system("cls");
			printf("\n-------****------****-----*=----*----******---******---*-------*---******---*****-------**--\n");
			printf("------*---------*----*---*-*---*-*---*--------*----*---*-------*---*--------*----*------**--\n"); 
			printf("-----*----------*----*---*--*-*--*---*--------*----*----*-----*----*--------*----*------**--\n");
			printf("-----*---***----******---*---*---*---******---*----*----*-----*----******---*---*-------**--\n");
			printf("-----*------*---*----*---*-------*---*--------*----*-----*---*-----*--------*-*---------**--\n");
			printf("------*-----*---*----*---*-------*---*--------*----*------*-*------*--------*--*------------\n");
			printf("-------****-----*----*---*-------*---******---******-------*-------******---*----*------**--\n");
        	break;
    }
// Menampilkan Display Tamagotchi
      printf("Status Tamagotchi Burung:\n");
      printf("Hunger: %d\n", hungry);
      printf("Happy: %d\n", happy);
      printf("Energy: %d\n", energy);

// Menampilkan menu aksi Hewan Tamagochi
      printf("Apa yang ingin Anda lakukan?\n");
      printf("1. Beri makan\n");
      printf("2. Mainkan\n");
      printf("3. Tidur\n");
      printf("4. Keluar\n");
      printf("Masukkan pilihan Anda (1-4): ");


      int choice;
      scanf("%d", &choice);

      if (choice == 1) {
      	    system("cls");
      		printf("Pilih makanan :\n");
		    printf("1. Biji-bijian\n");
		    printf("2. Serangga\n");
		    printf("3. Sayuran\n");
		    printf("Masukkan pilihan Anda (1-3): ");
			scanf("%d", &eat);
        
      switch(eat)
      {
        case 1: 
        system("cls");
        printf("Aku suka biji-bijan!\n");
        break;
        
        case 2: 
        system("cls");
        printf("Serangga yang enak!\n");
        break;
        
        case 3: 
        system("cls");
        printf("Terima kasih untuk sayurannya!\n");
        break;
        default:
        printf("Pilihan salah\n");
      }
      
// Memberi makan Burung
		if (hungry < 100) {
        	hungry += 20;
        }
        if (hungry > 100) {
        	hungry = 100;
        }
        
      } else if (choice == 2) {
// Membuat Burung jadi bermain
        if (energy <= 0){
        	system("cls");
        	printf("You need some rest! \n");
        goto rest3;
     }
        else if (happy < 100 && energy > 0) {
        	happy += 10;
        	energy -= 10;
        }
        system("cls");
        printf("Wow menyenangkan! \n\n");
      } else if (choice == 3) {
      	
// Membiarkan Burung tidur
        energy = 100;
        system("cls");
      } else if (choice == 4) {
        printf("Thank you for playing\n");
        break;

      } else {
        printf("Pilihan tidak valid\n");
        system("cls");
      }

// Mengurangi  kelaparan dan kebahagiaan Burung
      hungry -= 5;
      happy -= 5;
    }
    }
}


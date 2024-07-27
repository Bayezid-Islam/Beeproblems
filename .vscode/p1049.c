#include <stdio.h>

int main() {
    char level_one[15], level_two[15], level_three[15];
    
    scanf("%14s", level_one);
    scanf("%14s", level_two);
    scanf("%14s", level_three);
    if (level_one[0] == 'v') {
        if (level_two[0] == 'a') {
            if (level_three[0] == 'c') {
                printf("aguia\n");
            } else {
                printf("pomba\n");
            }
        } else {
            if (level_three[0] == 'o') {
                printf("homem\n");
            } else {
                printf("vaca\n");
            }
        }
    } else {
        if (level_two[0] == 'i') {
            if (level_three[2] == 'm') {
                printf("pulga\n");
            } else {
                printf("lagarta\n");
            }
        } else {
            if (level_three[0] == 'h') {
                printf("sanguessuga\n");
            } else {
                printf("minhoca\n");
            }
        }
    }
    
   return 0;
}
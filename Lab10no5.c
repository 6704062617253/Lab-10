#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char loginname[64];
    char password[64];
} account;

typedef struct {
    char stdID[16];
    char nameSurname[25];
    account stdACC;
} hoststd;

int main() {
    hoststd cs[5] = {
        {"66-040626-2686-9", "MR.A", {"user1", "passwd1"}},
        {"66-040626-2686-2", "MR.B", {"user2", "passwd2"}},
        {"66-040626-2686-3", "MR.C", {"user3", "passwd3"}},
        {"66-040626-2686-4", "MR.D", {"user4", "passwd4"}},
        {"66-040626-2686-5", "MR.E", {"user5", "passwd5"}}
    };

    char inputUser[64];
    char inputPass[64];
    int i;

    printf("Enter username: ");
    scanf("%s", inputUser);
    printf("Enter password: ");
    scanf("%s", inputPass);

    int found = 0;
    for (i = 0; i < 5; i++) {
        if (strcmp(cs[i].stdACC.loginname, inputUser) == 0 &&
            strcmp(cs[i].stdACC.password, inputPass) == 0) {
            printf("Welcome\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Incorrect login or password\n");
    }

    return 0;
}

#include <stdio.h>
#include "oidc-agent-api.h"


int main() {
    printf("accounts:\n");
    printf("%s\n\n", getLoadedAccounts());
    return 0;
}

main: main.c
	gcc -o $@ $< -L. -I. -loidc-agent


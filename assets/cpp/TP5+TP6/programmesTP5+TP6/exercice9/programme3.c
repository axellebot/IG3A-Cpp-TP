int main() {
    int cpt=0;
    while (cpt < 3) {
        if (fork() > 0)
            cpt++;
        else
            cpt=3;
    }
}
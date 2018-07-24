
int main(){
    char exit = 'n';
    while (exit != 'y')
        {
        int godzina,minuta;
        int wynik;
        printf("\nInput your time to calculate clock angle ");
        printf("\nInput Hour:");
        scanf("%d",&godzina);
        printf("Input minutes:");
        scanf("%d",&minuta);
        wynik = ((5.5 * minuta) - (30 * godzina));
        printf("Angle is %d", abs(wynik));
        printf("\nExit y/n ?");
        scanf("%s", &exit);
        }
    return 0;
}

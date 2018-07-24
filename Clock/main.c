
int main(){
    int godzina,minuta;
    int wynik;
    printf("Input your time to calculate clock angle ");
    printf("\nInput Hour:");
    scanf("%d",&godzina);
    printf("Input minutes:");
    scanf("%d",&minuta);
    wynik = ((5.5 * minuta) - (30 * godzina));
    printf("Angle is %d", abs(wynik));
    return 0;
}

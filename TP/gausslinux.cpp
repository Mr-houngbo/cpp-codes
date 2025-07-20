void exercice35()
{

int n;
int af;
int g,i,p,x;
int y=0;
int f,g,ligne,sol;
double temp;
int a,t;
long double e[11][10];
long double s[10];
printf("programme du pivot de gauss\nCombien d'equations a resourdre ?\nN= ");
scanf("%ld",&n);
for ( i=0;i<n;i++)
{
	printf("equation %hd  ",i);
	for (p=0;p<n;p++)
	{
	 printf("v %hd = ",p);
	 scanf("%Lf",&e[p][i]);
	}
	printf("\n");
	printf("equation %hd = ",i);
	scanf("%Lf",&e[n][i]);
	printf("\n");
}	// on a saisi les facteurs des equations ds e[][]
for(x=0;x<n-1;x++)
{
 for(a=1+x;a<n;a++)
 {
	temp=e[x][a];

	for (t=x;t<n+1;t++)
	{
		e[t][a]=e[t][a]*e[x][x]-e[t][x]*temp;  /// triangulation du systeme.
	}
 }
}
// affichage test du tableau e
for (f=0;f<n;f++){
printf("\n");
	for (g=0;g<n+1;g++){
		printf("%Lf  ",e[g][f]);}}
s[n-1]=e[n][n-1]/e[n-1][n-1];
e[n][n-1]=0;
e[n-1][n-1]=0;
for (f=0;f<n;f++){
printf("\n");
	for (g=0;g<n+1;g++){
		printf("%Lf  ",e[g][f]);}}
for (ligne=1;ligne<=n;ligne++)
{
for (sol=2;sol<=n;sol++){
e[n-ligne][n-sol]*=s[n-ligne];
e[n][n-sol]-=e[n-ligne][n-sol];
e[n-ligne][n-sol]=0;
}
s[n-(ligne+1)]=e[n][n-(ligne+1)]/e[n-(ligne+1)][n-(ligne+1)];
for (f=0;f<n;f++){
printf("\n");
	for (g=0;g<n+1;g++){
		printf("%Lf  ",e[g][f]);}}
}
printf("\n\nSolutions : \n");
// Affichage..
for (af=0;af<n;af++){printf(" var %hd = %Lf",af,s[af]);}
scanf("%hd",&n);1
}

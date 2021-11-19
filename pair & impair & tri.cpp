#include<stdio.h>

//tri - pair/impair


int n,t[30],p,ip,i,tmp;

int pair(){
	for(i=0;i<n;i++){
		if(t[i]%2!=0){
			ip++;		
		}
		else{
			p++;
			
		}
	}
}

int c;
void tri(int t[]){
	do{
		c=0;
		for(i=0;i<n-1;i++){
			if(t[i]>t[i+1]){
				tmp=t[i];
				t[i]=t[i+1];
				t[i+1]=tmp;
				c++;
			}
		}
	}while(c>0);
}


int main(){
	int A;
	printf("donner le nombre des elements du tableau : ");
	scanf("%d",&n);
	//remplissage
	for(i=0;i<n;i++){
		printf("t[%d] = ",i);
		scanf("%d",&t[i]);
	}
	A=pair();
	printf("vous avez %d nombres pair\n",p);
	printf("vous avez %d nombres impair\n",ip);
	printf("\nle tableau avant le tri : \n");
	for(i=0;i<n;i++){
		printf("%d\t",t[i]);
	}
	tri(t);
	printf("\nle tableau apres le tri : \n");
	for(i=0;i<n;i++){
		printf("%d\t",t[i]);
	}
	
}


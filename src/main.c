
#include <stdio.h>
#include <math.h>

int funcprimo(int a){

	int vetorzao[94] ={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491};
	
	int comp, i, flagdiv;
	
	comp = sqrt(a);

	for(i=0; comp < vetorzao[i]; i++){
		flagdiv = a % vetorzao[i];
		if(flagdiv == 0){return 0;}
	}
	
	return 1;
}

int main() {

	int n, flag_primo = 0, vetor_nprimo[200000], i = 0, j, k, tmp;
	
	scanf("%d\n", &n);

	if(n>=0){
		flag_primo = funcprimo(n);
			
		if(flag_primo == 0){
			vetor_nprimo[i] = n;
			i++;
		}

		while(n>=0){	
			scanf("%d\n", &n);
			flag_primo = funcprimo(n);
			
			if(flag_primo == 0){
				vetor_nprimo[i] = n;
				i++;
			}
		}
		
		
	}
	//i--

	//ordenar

	for(k=0;k<i;k++)
     	{
           for(j=0;j<i-k;j++)
           {
                 if(vetor_nprimo[j]<vetor_nprimo[j+1])
                 {
                       tmp=vetor_nprimo[j+1];
                       vetor_nprimo[j+1]=vetor_nprimo[j];
                       vetor_nprimo[j]=tmp;
                 }
           }
     	}
	
	//printar
	for(k=0;k<i;k++){
		printf("%d\n", vetor_nprimo[k]);
	}

  return 0;
}

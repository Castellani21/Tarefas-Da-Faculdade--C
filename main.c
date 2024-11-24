 #include <stdio.h>
 
 void VerificarParImpar(int num); // assinatura da funçao 
 
int main(){
        int numero;
        
        printf("digite um numero");
            scanf("%d", &numero);
            
            VerificarParImpar(numero); // chama a funçao 
           
    return 0;
}

void VerificarParImpar(int num){    //funçao 
            for(int i =0; i < num; i++){
                
    if(i % 2 == 0){
        printf("%d é par \n", i);
    }
        else{
            printf("%d é impar\n", i);
        }

            } 
  
}      

 
 
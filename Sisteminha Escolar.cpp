#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");  
char aluno[5][20];    
    int mat[5][4],por[5][4],ing[5][4],fis[5][4],geo[5][4];
    int op,i=0,var,bimestre=1,media,menu,notasaluno1, totalfinalmat1,totalfinalmat2,totalfinalmat3,totalfinalmat4,totalfinalmat5,totalfinalfis;
   
    /*VARIAVEIS PRA A SOMA DAS NOTAS FINAIS*/
int resultado_A_por,resultado_A_mat,resultado_A_ing,resultado_A_fis,resultado_A_geo;
int resultado_B_geo,resultado_B_fis,resultado_B_ing,resultado_B_por,resultado_B_mat;
int resultado_C_mat,resultado_C_por,resultado_C_ing,resultado_C_fis,resultado_C_geo;
int resultado_D_mat,resultado_D_por,resultado_D_ing,resultado_D_fis,resultado_D_geo;
int resultado_E_mat,resultado_E_por,resultado_E_ing,resultado_E_fis,resultado_E_geo;
int resultmat_p1,resultmat_p2,resultmat_p3,resultmat_p4,resultmat_p5;

   
   
    /*INICIO*/
    printf("\t\t\t\t---------------+ Universidade de Harvard +---------------\n\n");
    printf("\t\t\t\t+-----------BEM-VINDO AO SISTEMA ESCOLAR-----------------+\n\n");
    system("pause");
   
    //for para preencher nomes
    system("cls");
    printf("<----ABAIXO, DIGITE AS NOTAS DOS ALUNOS NAS SEGUINTES POSIÇÕES---->\n");
    for(i=0;i<5;i++)
    {
      printf("\n %i°- ALUNO(A): ",i+1);
      scanf("%s",&aluno[i]);
}
    //SELEÇÃO DOS ALUNOS
    system("cls");
    voltaqui:
    bimestre=1;
    system("pause");
    system("cls");
    printf("DE QUAL ALUNO DESEJAR PREENCHER AS NOTAS:\n\n1°- %s\n2°- %s\n3°- %s\n4°- %s\n5°- %s\n\n0°-Sair\nRESPOSTA:",aluno[0],aluno[1],aluno[2],aluno[3],aluno[4]);
    scanf("%i",&op);
   
    switch(op){
         
    case 1:
   
    bimestre=1;
    for(i=0;i<4;i++){
    volteaqui0:
                printf("Qual é a nota de MATEMÁTICA - %i°BIM:",bimestre);    
                scanf("%i",&mat[0][i]);
                bimestre++;
               
                if(mat[0][i]>25 || mat[0][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui0;
                   }
            }
             
            system("pause");
            system("cls");
            bimestre=1;
             
           
            volteaqui01:
            for(i=0;i<4;i++){
   
                printf("Qual é a nota de PORTUGUÊS - %i°BIM:",bimestre);    
                scanf("%i",&por[0][i]);
                bimestre++;
               
                if(por[0][i]>25 || por[0][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui01;
}
   
            }
            system("pause");
            system("cls");
            bimestre=1;
           
            volteaqui02:
            for(i=0;i<4;i++){
   
                printf("Qual é a nota de INGLÊS - %i°BIM:",bimestre);    
                scanf("%i",&ing[0][i]);
                bimestre++;
               
                if(ing[0][i]>25 || ing[0][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui02;
}
            }
            system("pause");
            system("cls");
            bimestre=1;
           
            volteaqui03:
            for(i=0;i<4;i++){
   
                printf("Qual é a nota de FÍSICA - %i°BIM:",bimestre);    
                scanf("%i",&fis[0][i]);
                bimestre++;
               
                 if(fis[0][i]>25 || fis[0][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui03;
}
            }
            system("pause");
            system("cls");
            bimestre=1;
           
            volteaqui04:
            for(i=0;i<4;i++){
   
                printf("Qual é a nota de GEOGRAFIA - %i°BIM:",bimestre);    
                scanf("%i",&geo[0][i]);
                bimestre++;
               
                if(geo[0][i]>25 || geo[0][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui04;
                }
            }
            system("cls");
            printf("\n\n\t------SOMA DE TODAS AS MATÉRIAS------\n");
            printf("\tNOTA TOTAL DO ALUNO %s:",aluno[0]);
             
            /*SOMAS DAS MATERIAS DO ALUNO 1*/
            resultado_A_mat=mat[0][0]+mat[0][1]+mat[0][2]+mat[0][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE MATEMÁTICA DO ALUNO(A): %i",resultado_A_mat);
           
            resultado_A_por=por[0][0]+por[0][1]+por[0][2]+por[0][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE PORTUGUÊS DO ALUNO(A): %i",resultado_A_por);
           
            resultado_A_ing=ing[0][0]+ing[0][1]+ing[0][2]+ing[0][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE INGLÊS DO ALUNO(A): %i",resultado_A_ing);
           
            resultado_A_fis=fis[0][0]+fis[0][1]+fis[0][2]+fis[0][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE FÍSICA DO ALUNO(A): %i",resultado_A_fis);
           
            resultado_A_geo=geo[0][0]+geo[0][1]+geo[0][2]+geo[0][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE GEOGRAFIA DO ALUNO(A): %i\n",resultado_A_geo);
           
           
            system("pause");
            system("cls");
            bimestre=1;
            goto voltaqui;
            break;
           
           
        case 2:
        bimestre=1;
        volteaqui05:
    for(i=0;i<4;i++){
   
                printf("Qual é a nota de MATEMÁTICA - %i°BIM:",bimestre);    
                scanf("%i",&mat[1][i]);
                bimestre++;
               
                if(mat[1][i]>25 || mat[1][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui05;
                }
            }
            system("pause");
            system("cls");
            bimestre=1;
             
             volteaqui06:
            for(i=0;i<4;i++){
   
                printf("Qual é a nota de PORTUGUÊS - %i°BIM:",bimestre);    
                scanf("%i",&por[1][i]);
                bimestre++;
               
                if(por[1][i]>25 || por[1][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui06;
}
            }
            system("pause");
            system("cls");
            bimestre=1;
           
            volteaqui07:
            for(i=0;i<4;i++){
   
                printf("Qual é a nota de INGLÊS - %i°BIM:",bimestre);    
                scanf("%i",&ing[1][i]);
                bimestre++;
               
                if(ing[1][i]>25 || ing[1][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui07;
}
            }
            system("pause");
            system("cls");
            bimestre=1;
           
            volteaqui08:
            for(i=0;i<4;i++){
   
                printf("Qual é a nota de FÍSICA - %i°BIM:",bimestre);    
                scanf("%i",&fis[1][i]);
                bimestre++;
               
                if(fis[1][i]>25 || fis[1][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui08;
}
            }
            system("pause");
            system("cls");
            bimestre=1;
           
            volteaqui09:
            for(i=0;i<4;i++){
   
                printf("Qual é a nota de GEOGRAFIA - %i°BIM:",bimestre);    
                scanf("%i",&geo[1][i]);
                bimestre++;
               
                if(geo[1][i]>25 || geo[1][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui09;
}
            }
           
            printf("\n\n\t------SOMA DE TODAS AS MATÉRIAS------\n");
            printf("\tNOTA TOTAL DO ALUNO %s: ",aluno[1]);
           
            /*SOMAS DAS MATERIAS DO ALUNO 2*/
            resultado_B_mat=mat[1][0]+mat[1][1]+mat[1][2]+mat[1][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE MATEMÁTICA DO ALUNO(A): %i",resultado_B_mat);
           
            resultado_B_por=por[1][0]+por[1][1]+por[1][2]+por[1][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE PORTUGUÊS DO ALUNO(A): %i",resultado_B_por);
           
            resultado_B_ing=ing[1][0]+ing[1][1]+ing[1][2]+ing[1][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE INGLÊS DO ALUNO(A): %i",resultado_B_ing);
           
            resultado_B_fis=fis[1][0]+fis[1][1]+fis[1][2]+fis[1][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE FÍSICA DO ALUNO(A): %i",resultado_B_fis);
           
            resultado_B_geo=geo[1][0]+geo[1][1]+geo[1][2]+geo[1][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE GEOGRAFIA DO ALUNO(A): %i\n",resultado_B_geo);
           
            system("pause");
            system("cls");
            goto voltaqui;
            bimestre=1;
            break;
           
           
           
case 3:
volteaqui10:
    for(i=0;i<4;i++){
   
                printf("Qual é a nota de MATEMÁTICA - %i°BIM:",bimestre);    
                scanf("%i",&mat[2][i]);
                bimestre++;
               
                if(mat[2][i]>25 || mat[2][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui10;
}
            }
            system("pause");
            system("cls");
            bimestre=1;
             
            volteaqui11:
            for(i=0;i<4;i++){
   
                printf("Qual é a nota de PORTUGUÊS - %i°BIM:",bimestre);    
                scanf("%i",&por[2][i]);
                bimestre++;
               
                if(por[2][i]>25 || por[2][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui11;
}
            }
            system("pause");
            system("cls");
            bimestre=1;
           
            volteaqui12:
            for(i=0;i<4;i++){
   
                printf("Qual é a nota de INGLÊS - %i°BIM:",bimestre);    
                scanf("%i",&ing[2][i]);
                bimestre++;
               
                if(ing[2][i]>25 || ing[2][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui12;
}
            }
            system("pause");
            system("cls");
            bimestre=1;
           
            volteaqui13:
            for(i=0;i<4;i++){
   
                printf("Qual é a nota de FÍSICA - %i°BIM:",bimestre);    
                scanf("%i",&fis[2][i]);
                bimestre++;
               
                if(fis[2][i]>25 || fis[2][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui13;
}
            }
            system("pause");
            system("cls");
            bimestre=1;
           
            volteaqui14:
            for(i=0;i<4;i++){
   
                printf("Qual é a nota de GEOGRAFIA - %i°BIM:",bimestre);    
                scanf("%i",&geo[2][i]);
                bimestre++;
               
                if(geo[2][i]>25 || geo[2][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui14;
}
            }
           
            printf("\n\n\t------SOMA DE TODAS AS MATÉRIAS------\n");
            printf("\tNOTA TOTAL DO ALUNO %s: ",aluno[2]);
           
            /*SOMAS DAS MATERIAS DO ALUNO 3*/
            resultado_C_mat=mat[2][0]+mat[2][1]+mat[2][2]+mat[2][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE MATEMÁTICA DO ALUNO(A): %i",resultado_C_mat);
           
            resultado_C_por=por[2][0]+por[2][1]+por[2][2]+por[2][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE PORTUGUÊS DO ALUNO(A): %i",resultado_C_por);
           
            resultado_C_ing=ing[2][0]+ing[2][1]+ing[2][2]+ing[2][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE INGLÊS DO ALUNO(A): %i",resultado_C_ing);
           
            resultado_C_fis=fis[2][0]+fis[2][1]+fis[2][2]+fis[2][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE FÍSICA DO ALUNO(A): %i",resultado_C_fis);
           
            resultado_C_geo=geo[2][0]+geo[2][1]+geo[2][2]+geo[2][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE GEOGRAFIA DO ALUNO(A): %i\n",resultado_C_geo);
           
            bimestre=1;
            system("pause");
            system("cls");
           
            goto voltaqui;
            break;
           
case 4:
volteaqui15:
    for(i=0;i<4;i++){
   
                printf("Qual é a nota de MATEMÁTICA - %i°BIM:",bimestre);    
                scanf("%i",&mat[3][i]);
                bimestre++;
               
                if(mat[3][i]>25 || mat[3][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui15;
}
            }
            system("pause");
            system("cls");
            bimestre=1;
             
            volteaqui16:
            for(i=0;i<4;i++){
   
                printf("Qual é a nota de PORTUGUÊS - %i°BIM:",bimestre);    
                scanf("%i",&por[3][i]);
                bimestre++;
               
                if(por[3][i]>25 || por[3][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui16;
}
            }
            system("pause");
            system("cls");
            bimestre=1;
           
            volteaqui17:
            for(i=0;i<4;i++){
   
                printf("Qual é a nota de INGLÊS - %i°BIM:",bimestre);    
                scanf("%i",&ing[3][i]);
                bimestre++;
               
                if(ing[3][i]>25 || ing[3][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui17;
}
            }
            system("pause");
            system("cls");
            bimestre=1;
           
            volteaqui18:
            for(i=0;i<4;i++){
   
                printf("Qual é a nota de FÍSICA - %i°BIM:",bimestre);    
                scanf("%i",&fis[3][i]);
                bimestre++;
               
                if(fis[3][i]>25 || fis[3][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui18;
}
            }
            system("pause");
            system("cls");
            bimestre=1;
           
            volteaqui19:
            for(i=0;i<4;i++){
   
                printf("Qual é a nota de GEOGRAFIA - %i°BIM:",bimestre);    
                scanf("%i",&geo[3][i]);
                bimestre++;
               
                if(geo[3][i]>25 || geo[3][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui19;
}
            }
           
            printf("\n\n\t------SOMA DE TODAS AS MATÉRIAS------\n");
            printf("\tNOTA TOTAL DO ALUNO %s: ",aluno[3]);
           
            /*SOMAS DAS MATERIAS DO ALUNO 4*/
            resultado_D_mat=mat[3][0]+mat[3][1]+mat[3][2]+mat[3][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE MATEMÁTICA DO ALUNO(A): %i",resultado_D_mat);
           
            resultado_D_por=por[3][0]+por[3][1]+por[3][2]+por[3][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE PORTUGUÊS DO ALUNO(A): %i",resultado_D_por);
           
            resultado_D_ing=ing[3][0]+ing[3][1]+ing[3][2]+ing[3][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE INGLÊS DO ALUNO(A): %i",resultado_D_ing);
           
            resultado_D_fis=fis[3][0]+fis[3][1]+fis[3][2]+fis[3][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE FÍSICA DO ALUNO(A): %i",resultado_D_fis);
           
            resultado_D_geo=geo[3][0]+geo[3][1]+geo[3][2]+geo[3][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE GEOGRAFIA DO ALUNO(A): %i\n",resultado_D_geo);
           
            bimestre=1;
            system("pause");
            system("cls");
            goto voltaqui;
            break;
           
case 5:
volteaqui20:
    for(i=0;i<4;i++){
   
                printf("Qual é a nota de MATEMÁTICA - %i°BIM:",bimestre);    
                scanf("%i",&mat[4][i]);
                bimestre++;
               
                if(mat[4][i]>25 || mat[4][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui20;
}
            }
            system("pause");
            system("cls");
            bimestre=1;
             
             volteaqui21:
            for(i=0;i<4;i++){
   
                printf("Qual é a nota de PORTUGUÊS - %i°BIM:",bimestre);    
                scanf("%i",&por[4][i]);
                bimestre++;
               
                if(por[4][i]>25 || por[4][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui21;
}
            }
            system("pause");
            system("cls");
            bimestre=1;
           
            volteaqui22:
            for(i=0;i<4;i++){
   
                printf("Qual é a nota de INGLÊS - %i°BIM:",bimestre);    
                scanf("%i",&ing[4][i]);
                bimestre++;
               
                if(ing[4][i]>25 || ing[4][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui22;
}
            }
            system("pause");
            system("cls");
            bimestre=1;
           
            volteaqui23:
            for(i=0;i<4;i++){
   
                printf("Qual é a nota de FÍSICA - %i°BIM:",bimestre);    
                scanf("%i",&fis[4][i]);
                bimestre++;
               
                if(fis[4][i]>25 || fis[4][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui23;
}
            }
            system("pause");
            system("cls");
            bimestre=1;
           
            volteaqui24:
            for(i=0;i<4;i++){
   
                printf("Qual é a nota de GEOGRAFIA - %i°BIM:",bimestre);    
                scanf("%i",&geo[4][i]);
                bimestre++;
               
                if(geo[4][i]>25 || geo[4][i]<0){
                printf("A nota pode ser dada somente ate 25 pontos bimestrais! Clique pra preencher novamente o mesmo aluno.\n\n");
                system("pause");
                    system("cls");
                    bimestre=bimestre-1;
                    goto volteaqui24;
}
            }
           
            printf("\n\n\t------SOMA DE TODAS AS MATÉRIAS------\n");
            printf("\tNOTA TOTAL DO ALUNO %s:",aluno[4]);
           
            /*SOMAS DAS MATERIAS DO ALUNO 5*/
            resultado_E_mat=mat[4][0]+mat[4][1]+mat[4][2]+mat[4][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE MATEMÁTICA DO ALUNO(A): %i",resultado_E_mat);
           
            resultado_E_por=por[4][0]+por[4][1]+por[4][2]+por[4][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE PORTUGUÊS DO ALUNO(A): %i",resultado_E_por);
           
            resultado_E_ing=ing[4][0]+ing[4][1]+ing[4][2]+ing[4][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE INGLÊS DO ALUNO(A): %i",resultado_E_ing);
           
            resultado_E_fis=fis[4][0]+fis[4][1]+fis[4][2]+fis[4][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE FÍSICA DO ALUNO(A): %i",resultado_E_fis);
           
            resultado_E_geo=geo[4][0]+geo[4][1]+geo[4][2]+geo[4][3];
            printf("\nO RESULTADO TOTAL DA MATÉRIA DE GEOGRAFIA DO ALUNO(A): %i\n",resultado_E_geo);
           
            system("pause");
            system("cls");
            bimestre=1;
            goto voltaqui;
            break;
case 0:
   printf("OBRIGADO, SUAS NOTAS FORAM ARMAZENADAS!");
   
   break;
        default:
            printf("Digite uma opção válida\n \n");
            system("pause");
            system("cls");
            goto voltaqui;
            break;
    }  
       printf("\n-------------------MENU DE OPÇÕES - UNIVERSIDADE DE HAVARD------------------\n\n");
       printf("<----O QUE DESEJA?----->\n\n");
       printf("1-Visu   alizar a nota de um aluno específico\n2-Visualizar a maior nota da disciplina Matemática no 3 Bimestre\n3-Visualizar a maior nota da disciplina de Matemática no final do ano.\n4-Visualizar a Média das notas finais dos 5 alunos em Matemática\n5-Visualizar a Média das notas finais dos 5 alunos em Física.\n6-Fazer a média final dos alunos e verificar o melhor aluno da sala.\n7-Fazer a média final dos alunos e verificar o aluno que apresentou a menor media das disciplinas.\n8-Visualizar a maior nota da disciplina de Inglês no final do ano.\n9-Visualizar a Média das notas finais dos 5 alunos em Geografia.\n10-Visualizar a Média das notas finais dos 5 alunos em Português\n");
       scanf("%i",&menu);
       
       switch(menu){
        case 1:
        /*VISUALIZAR A NOTA DO ALUNO ESPECIFICO*/
            printf("\nALUNOS ADICIONADOS:\n");
        printf("n1°- %s\n2°- %s\n3°- %s\n4°- %s\n5°- %s\n",aluno[0],aluno[1],aluno[2],aluno[3],aluno[4]);
            system("pause");
             system("cls");
             printf("OBRIGADO! VOLTE SEMPRE");
             break;
         case 2:
          /*VISUALIZAR A MAIOR NOTA DA DISICPLINA DE MATEMATICA NO 3°BIMESTRE*/
          printf("A MAIOR NOTA EM MATEMATICA NO 3° BIM:");
        //Se o nota1>nota2 e nota1>nota3 e nota1>nota4
        if(mat[0][2]>mat[1][2]&&mat[0][2]>mat[2][2]&&mat[0][2]>mat[3][2]&&mat[0][2]>mat[4][2]){
            printf("A MAIOR NOTA É%i",mat[0][2]);
  }
    else if(mat[1][2]>mat[0][2]&&mat[1][2]>mat[2][2]&&mat[1][2]>mat[3][2]&&mat[1][2]>mat[4][2]){
    printf("A MAIOR NOTA É %i",mat[1][2]);
           }
             else if(mat[2][2]>mat[0][2]&&mat[2][2]>mat[1][2]&&mat[2][2]>mat[3][2]&&mat[2][2]>mat[4][2]){
    printf("A MAIOR NOTA É %i",mat[2][2]);
           }
        else if(mat[3][2]>mat[0][2]&&mat[3][2]>mat[1][2]&&mat[3][2]>mat[4][2]&&mat[3][2]>mat[5][2]){
    printf("A MAIOR NOTA É %i",mat[3][2]);
           }
        else if(mat[4][2]>mat[0][2]&&mat[4][2]>mat[1][2]&&mat[4][2]>mat[3][2]&&mat[4][2]>mat[5][2]){
    printf("A MAIOR NOTA É %i",mat[4][2]);
           }
        else{
        printf("Você precisa preencher mais de 4 alunos pra está comparando as notas.");/*COLOCAR UM VOLTA AQUI*/
}  
    case 3:
    /*VISUALIZAR A MAIOR NOTA DA DISICPLINA DE MATEMATICA NO FINAL DO ANO*/
    if(resultado_A_mat>resultado_B_mat&&resultado_A_mat>resultado_C_mat&&resultado_A_mat>resultado_D_mat&&resultado_A_mat>resultado_E_mat){
    printf("A MAIOR NOTA DE MATEMÁTICA DO FINAL É %i",resultado_A_mat);
}

         
   
   
   
   
return 0;
    }
         
  }


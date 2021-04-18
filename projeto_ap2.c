
// Implementar o projeto em linguagem C utilizando funções com passagem de parâmetros no Codeblocks e postar o código-fonte dos programas.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <locale.h>

struct aluno
{
    char nome[60], curso[4];
    int prontuario;
};

struct livro
{
    char titulo[41], autores[50], sit;
    int ano, tombo;
};
struct emprestimo
{
    int dia, mes, diadev, mesdev, tombo, pront;
    char situ;
};

void preencher_aluno(struct aluno stud[])
{

    stud[0].prontuario = 1232121;
    stud[1].prontuario = 1312128;
    stud[2].prontuario = 1423221;
    stud[3].prontuario = 1876518;
    stud[4].prontuario = 1765452;
    stud[5].prontuario = 1764562;

    strcpy(stud[0].nome, "Antonio Marcos de Oliveira");
    strcpy(stud[1].nome, "Maria Eduarda de Freitas");
    strcpy(stud[2].nome, "Olavo Siqueira");
    strcpy(stud[3].nome, "Marcia da Silva");
    strcpy(stud[4].nome, "Marcelo Pereira de Almeida");
    strcpy(stud[5].nome, "Joao Carlos de Souza");

    strcpy(stud[0].curso, "BCC");
    strcpy(stud[1].curso, "ADS");
    strcpy(stud[2].curso, "TII");
    strcpy(stud[3].curso, "BCC");
    strcpy(stud[4].curso, "BCC");
    strcpy(stud[5].curso, "TII");
}
void preencher_livro(struct livro book[])
{
    book[0].tombo = 1;
    book[1].tombo = 2;
    book[2].tombo = 3;
    book[3].tombo = 4;
    book[4].tombo = 5;

    strcpy(book[0].titulo, "Aprendendo C com dificuldade");
    strcpy(book[1].titulo, "Tropecando no codigo fonte em C");
    strcpy(book[2].titulo, "Linguagem C: agora vai");
    strcpy(book[3].titulo, "Java. E agora.... Socorro...");
    strcpy(book[4].titulo, "Orientacaoo a Objetos: O que e isso");

    strcpy(book[0].autores, "Andre e Danilo");
    strcpy(book[1].autores, "Melissa");
    strcpy(book[2].autores, "Andre, Melissa e Danilo");
    strcpy(book[3].autores, "Cesar e Vilson");
    strcpy(book[4].autores, "Andre e Vilson");

    book[0].ano = 2019;
    book[1].ano = 2018;
    book[2].ano = 2017;
    book[3].ano = 2018;
    book[4].ano = 2017;

    book[0].sit = 'D';
    book[1].sit = 'E';
    book[2].sit = 'E';
    book[3].sit = 'D';
    book[4].sit = 'E';
}
void preencher_emprestimos(struct emprestimo loan[])
{
    loan[0].dia = 3;
    loan[1].dia = 10;
    loan[2].dia = 11;
    loan[3].dia = 20;
    loan[4].dia = 25;
    loan[5].dia = 26;
    loan[6].dia = 30;
    loan[7].dia = 7;
    loan[8].dia = 10;

    loan[0].mes = 4;
    loan[1].mes = 4;
    loan[2].mes = 4;
    loan[3].mes = 4;
    loan[4].mes = 4;
    loan[5].mes = 4;
    loan[6].mes = 4;
    loan[7].mes = 5;
    loan[8].mes = 5;

    loan[0].diadev = 10;
    loan[1].diadev = 17;
    loan[2].diadev = 18;
    loan[3].diadev = 27;
    loan[4].diadev = 2;
    loan[5].diadev = 3;
    loan[6].diadev = 7;
    loan[7].diadev = 14;
    loan[8].diadev = 17;

    loan[0].mesdev = 4;
    loan[1].mesdev = 4;
    loan[2].mesdev = 4;
    loan[3].mesdev = 4;
    loan[4].mesdev = 5;
    loan[5].mesdev = 5;
    loan[6].mesdev = 5;
    loan[7].mesdev = 5;
    loan[8].mesdev = 5;

    loan[0].tombo = 1;
    loan[1].tombo = 3;
    loan[2].tombo = 4;
    loan[3].tombo = 5;
    loan[4].tombo = 2;
    loan[5].tombo = 1;
    loan[6].tombo = 3;
    loan[7].tombo = 4;
    loan[8].tombo = 2;

    loan[0].pront = 1423221;
    loan[1].pront = 1765452;
    loan[2].pront = 1876518;
    loan[3].pront = 1312128;
    loan[4].pront = 1232121;
    loan[5].pront = 1423221;
    loan[6].pront = 1876518;
    loan[7].pront = 1232121;
    loan[8].pront = 1765452;

    loan[0].situ = 'F';
    loan[1].situ = 'F';
    loan[2].situ = 'F';
    loan[3].situ = 'P';
    loan[4].situ = 'F';
    loan[5].situ = 'F';
    loan[6].situ = 'P';
    loan[7].situ = 'F';
    loan[8].situ = 'P';
}
int incluir_alunos(struct aluno stud[], int tam_aluno)
{
    int i,pront, marcador = 0;
    printf("Digite o prontuario do aluno: ");
    scanf("%d", &pront);

    for (i = 0; i < tam_aluno; i++)
    {
        if (pront == stud[i].prontuario)
        {
            marcador = 1;
        }
    }
    if (marcador != 1)
    {
        stud[tam_aluno].prontuario = pront;
        printf("\nDigite o nome do aluno : ");
        fflush(stdin);
        gets(stud[tam_aluno].nome);

        printf("\nInsira o curso do aluno: ");
        fflush(stdin);
        gets(stud[tam_aluno].curso);
        
        tam_aluno++;
    }
    else
    {
        printf("\nEste Aluno ja esta cadastrado\n");
    }
    return tam_aluno;
}

int incluir_livros(struct livro book[], int tam_livro)
{
    int tombo, i, cont = 0;
    printf("Digite o tombo do Livro: ");
    scanf("%d", &tombo);

    for (i = 0; i < tam_livro; i++)
    {
        if (tombo == book[i].tombo)
        {
            cont++;
        }
    }

    if (cont == 0)
    {
        book[tam_livro].tombo = tombo;
        printf("\nDigite o titulo do Livro: ");
        fflush(stdin);
        gets(book[tam_livro].titulo);

        printf("\nDigite o Autor do Livro: ");
        gets(book[tam_livro].autores);

        printf("\nDigite o ano do Livro: ");
        scanf("%d", &book[tam_livro].ano);
        fflush(stdin);

        book[tam_livro].sit = 'D';

        tam_livro++;
    }
    else
    {
        printf("Este tombo ja esta sendo usado\n");
    }

    return tam_livro;

}
void apresenta_alunos(struct aluno stud[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        printf("\nProntuario: %d", stud[i].prontuario);
        printf("\nNome: %s", stud[i].nome);
        printf("\nCurso: %s", stud[i].curso);
        printf("\n___________");
    }
}
void apresentar_situacao(struct livro book[], int tam_livro)
{
    int i;

    for (i = 0; i < tam_livro; i++)
    {

        printf("Tombo: %d | Livro: %s | situacao: %c\n\n", book[i].tombo, book[i].titulo, book[i].sit);
    }
    tam_livro++;
}
int incluir_emprestimo(struct aluno stud[], struct emprestimo loan[], struct livro book[], int tam_aluno, int tam_loan, int tam_livro)
{
    int prontuario_busca, livro_busca, contA, contL = 0, marcador = 0;

    printf("Digite o prontuario do aluno: ");
    scanf("%d", &prontuario_busca);

    printf("Codigo do livro que sera emprestado: ");
    scanf("%d", &livro_busca);

    contA = tam_aluno;
    do
    {
        contA--;

        if (prontuario_busca == stud[contA].prontuario)
        {
            do
            {
                if (livro_busca == book[contL].tombo)
                {
                    if (book[contL].sit == 'D')
                    {
                        loan[tam_loan].pront = prontuario_busca;
                        loan[tam_loan].tombo = livro_busca;

                        printf("Digite o dia do emprestimo: ");

                        scanf("%d", &loan[tam_loan].dia);

                        printf("Digite o mes do emprestimo: ");
                        scanf("%d", &loan[tam_loan].mes);

                        if ((loan[tam_loan].dia + 7) > 30)
                        {
                            loan[tam_loan].diadev = loan[tam_loan].dia - 23;

                            if (loan[tam_loan].mes == 12)
                            {
                                loan[tam_loan].mesdev = 1;
                            }

                            else
                            {
                                loan[tam_loan].mesdev = loan[tam_loan].mes + 1;
                            }
                        }

                        else
                        {
                            loan[tam_loan].diadev = loan[tam_loan].dia + 7;

                            loan[tam_loan].mesdev = loan[tam_loan].mes;
                        }
                    }

                    else
                    {
                        tam_loan--;
                        printf("O Livro desejado nao esta Disponivel\n");
                    }

                    marcador = 1;
                    book[contL].sit = 'E';
                    printf("livro: %s | sit: %c\n", book[contL].titulo, book[contL].sit);

                    loan[tam_loan].situ = 'P';

                    tam_loan++;
                }
                contL++;

            } while (contL < tam_livro);
        }

    } while (contA >= 0);

    if (marcador != 1)
    {
        printf("O prontuario e/ou Livro Inserido nao e valido!\n");
    }

    return tam_loan;
}
void apresenta_emprestimo(struct emprestimo loan[], struct aluno stud[], struct livro book[], int tam_loan, int tam_aluno, int tam_livro)
{
    int i, j, pront, marcador = 0, aux;

    printf("Digite o prontuario do aluno: ");
    scanf("%d", &pront);

    for (i = 0; i < tam_aluno; i++)
    {
        if (pront == stud[i].prontuario)
        {
            marcador = 1;
            aux = i;
        }
    }
    if (marcador == 1)
    {
        printf("\nAluno: %s\n", stud[aux].nome);
        printf("__________________________");
        for (i = 0; i < tam_loan; i++)
        {
            if (loan[i].pront == pront)
            {
                printf("\nDia do Emprestimo: %d - mes: %d \n", loan[i].dia, loan[i].mes);

                for (j = 0; j < tam_livro; j++)
                {
                    if (loan[i].tombo == book[j].tombo)
                    {
                        printf("Tombo: %d | Livro: %s | Autor: %s\n", book[j].tombo, book[j].titulo, book[j].autores);
                        printf("Dia de Devolucao: %d - Mes de Devolucao: %d\n", loan[i].diadev, loan[i].mesdev);
                        printf("Prontuario: %d\n", loan[i].pront);
                    }
                }
            }
        }
    }
}
void apresenta_emprestimo_por_curso(struct aluno stud[], struct emprestimo loan[], int tam_stud, int tam_loan)
{
    int i = 0, j, cont = 0;
    char curso[4];
    fflush(stdin);
    printf("Digite o curso que deseja verificar: ");
    fflush(stdin);
    gets(curso);

    for (i = 0; i < tam_stud; i++)
    {
        if (strcmp(curso, stud[i].curso) == 0)
        {
            for (j = 0; j < tam_loan; j++)
            {
                if (loan[j].pront == stud[i].prontuario)
                {
                    cont++;
                }
            }
        }
    }

    printf("\nEmprestimos neste curso: %d\n", cont);
}

void apresentar_dados_livrosD(struct livro book[], int tam_livro)
{
    int i;

    for (i = 0; i < tam_livro; i++)
    {
        if (book[i].sit == 'D')
        {
            printf("Tombo: %d | Titulo %s | Autor : %s | Ano : %d\n", book[i].tombo, book[i].titulo, book[i].autores, book[i].ano);
        }
    }
}
void apresentar_livros_em_atraso(struct emprestimo loan[], struct livro book[], int tam_loan, int tam_livro)
{
    int i, j, dia, mes;
    printf("\t somente numeros)\n");
    printf("Digite o dia atual: ");
    scanf("%d", &dia);
    printf("Digite o mes atual: ");
    scanf("%d", &mes);

    for (i = 0; i < tam_loan; i++)
    {
        if (loan[i].diadev < dia)
        {
            for (j = 0; j < tam_livro; j++)
            {
                if (loan[i].tombo == book[j].tombo)
                {
                    if (loan[i].situ != 'F')
                    {
                        printf("\nTombo: %d %s | sit. %c\n", book[j].tombo, book[j].titulo, loan[i].situ);
                    }
                }
            }
        }
    }
}

void realizar_devolucao(struct emprestimo loan[], struct livro book[], int tam_loan, int tam_livro)
{
    int i, j, tombo, opcao;

    time_t start_t, end_t;
    double diff_t;

    printf("Digite o tombo do livro:");
    scanf("%d", &tombo);

    for (i = 0; i < tam_loan; i++)
    {
        if (tombo == loan[i].tombo)
        {
            for (j = 0; j < tam_livro; j++)
            {
                if (tombo == book[j].tombo)
                {
                    printf("%s\nData de retirada: %d/%d\nData de entrega: %d/%d ", book[j].titulo, loan[i].dia, loan[i].mes, loan[i].diadev, loan[i].mesdev);

                    printf("Deseja devolver este livro? 1 - Sim : ");
                    scanf("%d", &opcao);

                    if (opcao != 1)
                    {
                        break;
                    }
                }

                if (opcao == 1)
                {
                    book[j].sit = 'D';
                    loan[i].situ = 'F';
                    printf("AGUARDE UM INSTANTE...\n");
                    time(&start_t);
                    while (diff_t <= 2.0000)
                    {
                        time(&end_t);
                        diff_t = difftime(end_t, start_t);
                    }
                    printf("\nPronto, seu livro foi devolvido.\n");
                    break;
                }
            }
        }
    }
}

void apresentar_total_emprestimos(struct livro book[], struct emprestimo loan[], int tam_livro, int tam_loan)
{
    int i, j, cont = 0;

    for (i = 0; i < tam_livro; i++)
    {

        for (j = 0; j < tam_loan; j++)
        {

            if (book[i].tombo == loan[j].tombo)
            {
                cont++;
            }
        }
        printf("Livro: %s | Quantidade de emprestimos: %d\n", book[i].titulo, cont);
        cont = 0;
    }
}

int main()
{
    struct aluno stud[20];
    struct livro book[20];
    struct emprestimo loan[20];
    int tam_aluno = 6, tam_livro = 5, tam_loan = 9, opcao;

    preencher_aluno(stud);
    preencher_livro(book);
    preencher_emprestimos(loan);
    do
    {
        printf("\n\tMENU\n 1 - Incluir Alunos\n 2 - Incluir Livros\n 3 - Apresentar Lista de Alunos\n 4 - Apresentar Lista de Livros\n 5 - Incluir Emprestimos\n");
        printf(" 6 - Apresentar Emprestimos\n 7 - Apresenta Emprestimos por Curso\n 8 - Apresentar dados de Livros disponiveis\n 9 - Apresentar Livros em atraso\n");
        printf(" 10 - Realizar Devolucao\n 11 - Apresentar total de Emprestimos\n: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao)
        {
        case 1:
            tam_aluno = incluir_alunos(stud, tam_aluno);
            break;
        case 2:
            tam_livro = incluir_livros(book, tam_livro);
            break;

        case 3:
            apresenta_alunos(stud, tam_aluno);
            break;
        case 4:
            apresentar_situacao(book, tam_livro);
            break;
        case 5:
            tam_loan = incluir_emprestimo(stud, loan, book, tam_aluno, tam_loan, tam_livro);
            break;
      
        case 6:
            apresenta_emprestimo(loan, stud, book, tam_loan, tam_aluno, tam_livro);
            break;
        case 7:
            apresenta_emprestimo_por_curso(stud, loan, tam_aluno, tam_loan);
            break;
        case 8:
            apresentar_dados_livrosD(book, tam_livro);
            break;
        case 9:
            apresentar_livros_em_atraso(loan, book, tam_loan, tam_livro);
            break;
        case 10:
            realizar_devolucao(loan, book, tam_loan, tam_livro);
            break;
        case 11:
            apresentar_total_emprestimos(book, loan, tam_livro, tam_loan);
            break;
        default:
            printf("\nOpcao invalida\n");
            break;
        }

    } while ((opcao = !0));
}

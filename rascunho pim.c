#include <stdio.h>
#include <locale.h>

struct vendas{
int cod;
char nome[100];
int idade;
float preco;
char tipopgto[50];
};
int qtde=0;
struct vendas vd[1000];
int ttinteira=0, ttmeia=0, ttisento=0;

 main() {
    setlocale(LC_ALL, "Portuguese");
    int contagem = 0;
    char entrada;
    char codigo;

    system("cls");

    printf("seja bem vindo ao museu da ong thunder web\n\n");
    printf("nosso museu terra dino onde voces adiquire o maior conhecimento\nsobre os queridos animais extintos mais perigosos ja exitentes\n\n");

    printf("voce seria um visitante(v) ou um administrador?(a) ");
    scanf(" %c", &codigo);

    while (1) {

    if(codigo == 'v' || codigo =='V'){
        system("cls");

        printf("Voce esta no hall de entrada escolha para onde deseja ir\n\n");
        printf("Pressione 'e' para se locomover para sala principal\n 'q' para sair do museu ou\n 'x' para sair e exibir a contagem de vezes que voce voltou para o salao principal: ");
        scanf(" %c", &entrada);

        if (entrada == 'e' || entrada == 'E') {
            contagem++;

            system("cls");
            printf("Voce indicou salao principal. Total de vezes que voce ingressou ao salao principal: %d\n\n", contagem);

        int salao,especie;
        printf("seja bem vindo ao nosso salao principal onde voce tem um resumo das obras que serao vistas em nosso museu\n");
        printf("somos dividos por 4 areas cada uma especializada em algumas classes de dinossauros \n\n1- Carnivoros\n\n2- Herbivoros\n\n3- Aerios\n\n4- Maritimos\n\n");
        printf("Teria interesse em visitar qual salao pimeiro? (digite o numero de sua escolha)");
        scanf("%d", &salao);
            switch (salao) {
        case 1:
            system("cls");

            printf ("Bem vindo a ala dos carnivoros\n\n");
            printf("1- Tiranossauro rex.\n\n2- Espinossauro\n\n3- Oxalaia\n\n4- Giganotossauro\n\n5- Carcharodontosaurus\n\n6- Tiranotitan\n\n7- sair da Ala dos Carnivoros\n\n");
            printf("esses sao nossos queridos carnivoros disponiveis , teria interesse em saber mais alguma infora�ao sobre nossos queridos fosseis ? (digite o numero de sua escolha)");
            scanf("%d", &especie);

                    switch (especie) {
                            case 1:
                                system("cls");
                                printf("1- Tiranossauro rex.\n\nO tiranossauro rex � um animal que viveu entre 90 e 66 milh�es de anos atr�s.\nOs tiranossauros possu�am cerca de 12 metros de comprimento e 3,65 metros de altura e podiam pesar oito toneladas.\nPossu�a um olfato bastante desenvolvido.\nProvavelmente, ca�ava suas presas mas tamb�m se alimentava de carni�a.\nConhecido como �rei lagarto tirano�, esse gigante possu�a cerca de 60 dentes enormes, atingindo at� mais de 20 cent�metros.\nSe seu dente j� era grande, imagine seu comprimento.\nEsse animal chegava a 12 metros de comprimento.\nS� a cabe�a dele atingia mais de 1,5 metro,e sua altura poderia atingir at� 3,65 metros.\nEstudos sugerem que as f�meas eram relativamente maiores que os machos.\nEsse animal pesava entre cinco e oito toneladas.\nMuito se discute tamb�m sobre a capacidade de correr desses animais.\nAlguns pesquisadores sugerem que eles atingiam at� 50 km/h.\nAtualmente, considera-se que esses animais atingiam apenas 19 km/h.\nSegundo um estudo publicado em 2021 e intitulado �Natural Frequency Method: estimating the preferred walking speed of Tyrannosaurus rex based on tail natural frequency�,\no tiranossauro rex, provavelmente, tinha como velocidade preferida de sua caminhada algo em torno de 4,8 km/h, um valor bem semelhante ao de humanos.\nesses animais eram capazes de localizar a sua presa em longas dist�ncias.\nEm rela��o � vis�o, alguns pesquisadores acreditam que o tiranossauro apresentava uma vis�o t�o eficiente quanto a das atuais aves de rapina.\nO T. rex j� foi descrito h� mais de um s�culo, e ainda hoje existem diversas d�vidas sobre seu modo de vida. Apesar de seus dentes grandes e seu tamanho exagerado,\nde que seus pequenos bra�os poderiam dificultar que esse animal se levantasse ap�s uma queda durante um ataque, por exemplo.\nAl�m disso, o formato dos dentes e o sentido do olfato bem desenvolvido indicam que ele poderia sim ser um animal que se alimentava de carni�a.\nEntretanto, o T. rex tamb�m possu�a caracter�sticas que o tornavam um bom ca�ador. Sua mordida, por exemplo, � a mais forte que de qualquer outro animal no planeta.\nPesquisadores descobriram que cada dente do animal era capaz de exercer uma press�o de seis toneladas. Para se alimentar, o tiranossauro lan�ava a sua presa no ar\ne a engolia inteira. Vale salientar ainda que j� foram encontrados f�sseis de animais com marcas de mordida do T. rex,\no que indica que, se esse animal n�o ca�ava, pelo menos, ele tentava realizar essa tarefa. Diante disso, atualmente, considera-se que o tiranossauro agia como necr�fago,\nou seja, se alimentava de animais mortos mas tamb�m ca�ava.\n");
                                printf("\n\nclique qualquer tecla para retornar");
                                getch();
                                break;

                            case 2:
                                system("cls");
                                printf("2- Espinossauro\n\nEsse dinossauro viveu durante o per�odo Cret�ceo, entre 112 e 97 milh�es de anos atr�s, nos p�ntanos da �frica do Norte. Al�m do mais, ele pertenceu ao reino Animalia, \n ao filo Chordata e a classe Reptilia, Contudo,  mesmo tendo vivido h� milh�es de anos, o o espinossauro ainda � considerado o maior dinossauro carn�voro que j� existiu. \nTanto � que ele consegue ser maior que o Tiranossauro Rex e o Giganotossauro. Basicamente, seu tamanho variava entre 12,6 metros a 18 metros. \n Ali�s, ele era tamb�m considerado o mais comprido da esp�cie ter�pode de dinossauro. Al�m do seu tamanho, ele tamb�m era bem pesado. \nEstima-se que o espinossauro tinha cerca de 8 toneladas, embora, esp�cie variasse de 6,35 a 20,87 toneladas. Ou seja, ele era 450 kg mais pesado que o Giganotossauro, e 900 kg a mais que o Tiranossauro. \n Primeiramente, vale destacar que o nome espinossauro, significa �lagarto espinha�. \n Ali�s, o nome � bem condizente com a apar�ncia do animal , j� que ele possu�a um prolongamento de v�rtebras nas costas. \n Suas in�meras espinhas, ali�s, era compridas e j� foram chamadas de �velas� (como as dos barcos) algumas vezes por pesquisadores. \n Al�m do mais, essas espinhas tinham cerca de 1,65 metros de comprimento, e eram conectadas por uma pele. Sobretudo, essas protuber�ncias auxiliavam na capta��o de calor, \n quando eram expostas � luz do sol. Ali�s, elas faziam com que eles conseguissem ser mais �geis que grande parte dos dinossauros de grande porte. \n E para melhorar, essas velas serviam ainda como um adorno de beleza. Ou seja, serviam para atrair mais f�meas. Ou ent�o, para se mostrar, \n aparentar ser maiores e mais agressivos que outros dinossauros. \n Basicamente, o espinossauro, assim como os demais predadores terrestres, tamb�m contava com caracter�sticas tradicionais. Como por exemplo, pernas fortes, boca e dentes enormes. \n Por�m, os seus dentes eram retos, serrilhados e n�o curvados. O que indica que, provavelmente, ele vivia de peixes e carca�as. \nJ�, o seu cr�nio, era estreito e comprido, similar com o dos crocodilos. \n Al�m dessas caracter�sticas, como j� mencionamos, ele era relativamente r�pido para seu tamanho. Ali�s, ele conseguia alcan�ar uma velocidade entre 19 km/h e 24 km/h. \n Como seus bra�os tamb�m eram comprimidos, a forma como ele caminhava, contudo, ainda n�o � um consenso. Basicamente, \n seria poss�vel que ele caminhasse usando suas pernas musculosas, ou ent�o, de quatro. Ainda sobre os ossos do espinossauro, vale destacar que, em 2011, na Austr�lia, \n foi descoberto uma v�rtebra do pesco�o de um dinossauro com um focinho parecido com o de um crocodilo. Basicamente, para a Ci�ncia, \nisso mostrou que o espinossauro vivia em uma regi�o muito maior que a Hist�ria acreditava at� ent�o. \n");
                                printf("\n\nclique qualquer tecla para retornar");
                                getch();
                                break;

                            case 3:
                                system("cls");
                                printf("3- Oxalaia\n\n� um dinossauro ter�pode que viveu h� 95 milh�es de anos, no fim do Cret�ceo, � o maior ter�pode conhecido que andou em territ�rio brasileiro, \n com 12 a 14 m de comprimento e 5 a 7 toneladas. \nO Oxalaia deveria ser o predador dominante no nordeste do Brasil em sua �poca. \n  Faz parte de um grupo de dinossauros que desperta grande interesse por suas caracter�sticas peculiares, os espinossaur�deos, \n entre os quais s� perde em tamanho para o espinossauro. Espinossaur�deos tinham cr�nio longo e estreito, \n alimentavam-se de peixes e pequenos animais e muitos possu�am uma esp�cie de vela nas costas. Outros dois j� haviam sido descobertos no Brasil: Angaturama e Irritator. \n A esp�cie foi identificada a partir de um conjunto de f�sseis, com partes do maxilar e dentes, encontrado em 1999, \n na Ilha do Cajual, Maranh�o. Sua nomea��o e divulga��o s� ocorreu, entretanto, em 2011. O nome espec�fico, Oxalaia quilombensis, \nlembra dos assentamentos quilombolas constru�dos na regi�o na �poca da escravid�o e de sua popula��o ser constitu�da por descendentes de escravos. \n Esta foi a oitava esp�cie oficialmente nomeada de ter�pode brasileiro. \n");
                                printf("\n\nclique qualquer tecla para retornar");
                                getch();
                                break;

                            case 4:
                                system("cls");
                                printf("4- Giganotossauro\n\nO Giganotossauro cujo nome significa �Lagarto Gigante do Sul� viveu h� aproximadamente 67 milh�es de anos atr�s durante o per�odo Cret�ceo na Patag�nia Argentina, \nmas provavelmente dava seus passeios em territ�rios brasileiros, ultrapassou o tamanho do maior Tiranossauro rex conhecido e dos Carcharodontossauros e Espinossauros, \n sendo sem d�vida um dos maiores carn�voros terrestres conhecidos e com esse tamanho todo poderiam ca�ar at� enormes saur�podes que quase n�o tinham inimigos naturais, \n provavelmente os Giganotossauro (Giganotosaurus) eram territoriais, e como eram enormes deveriam precisar de enormes quantidades de comida, e seus territ�rios ent�o seriam enormes. \nSuas mand�bulas eram tamb�m enormes e seu cr�nio um dos maiores, mais de 1,6 metros de comprimento, \nseus dentes podiam medir 15 cent�metros de comprimento, sendo curvos e afiados o que � um indicio de que eles eram utilizados para morder algo vivo, \nque ao se debater e tentar escapar acabaria indo mais para dentro da boca do predador, mas certamente o Giganotossauro (Giganotosaurus) n�o negaria uma refei��o j� morta em putrefa��o, \n agindo tamb�m como carniceiro.");
                                printf("\n\nclique qualquer tecla para retornar");
                                getch();
                                break;

                            case 5:
                                system("cls");
                                printf("5- Carcharodontosaurus\n\nCarcharodontosaurus (em portugu�s Carcarodontossauro do latim 'lagarto com dente de tubar�o') foi um g�nero de dinossauro ter�pode que viveu durante o per�odo Cret�ceo no Nordeste da �frica. \nAtualmente s� temos duas esp�cies conhecidas, a esp�cie-tipo C. saharicus e a esp�cie C. iguinensis. O seu nome foi inspirado no g�nero cient�fico Carcharodon, mesmo g�nero que inclui o tubar�o-branco. \nCarcharodontosaurus � um dos maiores dinossauros ter�podes conhecidos, com C. saharicus atingindo 12�12,5 metros de comprimento e aproximadamente 6�6,2 toneladas de massa corporal. \nTinha um cr�nio grande e de constru��o leve com uma tribuna triangular. Suas mand�bulas eram revestidas com dentes afiados, \nrecurvados e serrilhados que guardam semelhan�as impressionantes com os do grande tubar�o branco, inspira��o para o nome. Embora gigante, seu cr�nio ficou mais leve por fossas e fenestras muito expandidas, \nmas tamb�m o tornou mais fr�gil que o dos tiranossaur�deos. Os membros anteriores eram min�sculos, enquanto os membros posteriores eram robustos e musculosos. Como a maioria dos outros ter�podes, tinha uma cauda alongada para se equilibrar. \nO Carcharodontosaurus viveu na �frica, em locais onde hoje est�o a Arg�lia (local da descoberta dos primeiros f�sseis, em 1927), o Egito e a Tun�sia, por exemplo. Existem sinais da presen�a de carcarodontossaurideos tamb�m na Am�rica do Sul, \ncorroborando a teoria que os atuais continentes �frica e Am�rica do Sul tenham sido um �nico espa�o em parte da era Mesoz�ica, o Gondwana, e que come�aram sua separa��o h� cerca de 135 milh�es de anos. \nMuitos ter�podes gigantescos s�o conhecidos no Norte da �frica durante este per�odo, incluindo ambas as esp�cies de Carcharodontosaurus, bem como o espinossaur�deo Spinosaurus e o ceratossauro Deltadromeus. \n Isto sugere que houve divis�o de nicho entre os diferentes grupos, com o Spinosaurus sendo pisc�voro, enquanto o Carcharodontosaurus consumiria dinossauros saur�podes, agindo como o predador alfa em seu pale o ambiente. \n");
                                printf("\n\nclique qualquer tecla para retornar");
                                getch();
                                break;

                            case 6:
                                system("cls");
                                printf("6- Tiranotitan\n\nTyrannotitan (tit� tir�nico) � um g�nero de dinossauros ter�pode carn�voro que, apesar do nome similar, n�o eram relacionados aos tiranossaur�deos, sendo pertencente � fam�lia dos carcarodontossaur�deos. \nA �nica esp�cie descrita na literatura � o T. chubutensis, descoberto por paleont�logos da Argentina na regi�o de Chubut em 2005. Trata-se de uma esp�cie de grandes propor��es que viveu na Am�rica do Sul, no per�odo Cret�ceo. \n Seus dentes chegavam a cerca de 25 cm de comprimento. O Tyrannotitan era um dinossauro carn�voro predador de grandes propor��es. Este dinossauro viveu h� 100 milh�es de anos e podia chegar a ter 12 metros de comprimento e 4 metros de altura. \n Este dinossauro enorme poderia pesar at� 7 toneladas sendo parte da tribo Giganotosaurini, sendo portanto um parente muito pr�ximo do Giganotosaurus. \n Acredita-se que eles tenham sido do Membro Cerro Casta�o, da Forma��o Cerro Barcino (est�gio Aptiano) entre 112,2 � 121 milh�es de anos atr�s. \nO comprimento desses animais foi estimado em at� 11,4 at� 12,2 metros. Em 2010, Gregory S. Paul deu estimativas mais altas de 13 metros. Seu peso foi estimado entre 4,9 e 7 toneladas. Outros autores deram uma massa corporal de 4,8 a 5,4 toneladas, \n com intervalos de 3,6 a 6,7 toneladas. \n");
                                printf("\n\nclique qualquer tecla para retornar");
                                getch();
                                break;

                            case 7:
                                system("cls");
                                printf("Que pena tente conhecer melhor alguma especie da proxima vez\n\nClique qualque tecla para retornar");
                                getch();
                                break;

                            default:
                                system("cls");
                                printf("Numero invalido, estou te encaminhando para o salao principal, Ate logo.");
                                printf("\n\nclique qualquer tecla para retornar");
                                getch();
                                break;
                     }
        break;
        case 2:
            system("cls");

            printf ("Bem vindo a ala dos herbivoros\n\n");
            printf("1- Braquiossauro\n\n2- Diplodoco \n\n3- Estegossauro \n\n4- sair da Ala dos herbivoros\n\n");
            printf("esses sao nossos queridos herbivoros disponiveis , teria interesse em saber mais alguma infora�ao sobre nossos queridos fosseis ? (digite o numero de sua escolha)");
            scanf("%d", &especie);

                    switch (especie) {
                            case 1:
                            system("cls");
                                printf("1- Braquiossauro\n\nO Braquiossauro tinha duas caracter�sticas marcantes em seu corpo. A primeira delas eram as longas patas dianteiras, bem maiores do que as traseiras. \nOs paleont�logos acreditam que eles n�o conseguiam se elevar sobre os membros inferiores. Al�m disso, o seu pesco�o era gigantesco, fazendo com que ele tivesse uma incr�vel semelhan�a com a girafa. \nO paleont�logo Heinrich Mallison argumentou em um artigo publicado na 'Biologia dos Dinossauros Saur�podes' que essa esp�cie tinha muito menos energia do que as outras por causa dessas caracter�sticas. \nOutra coisa muito interessante sobre os braquiossauros � a temperatura de seu corpo. Pesquisadores calcularam, em 2011, atrav�s da medi��o dos �ndices de is�topos, que esses bichos tinham cerca de 45� C em seus corpos. \nPor isso, foram classificados como um animal de sangue quente, bem como outros saur�podes. \nAcredita-se que a esp�cie tinha cerca de 25 metros de comprimento, embora ele pudesse ser ainda maior, j� que os f�sseis analisados vieram a partir de amostrar de animais que n�o estavam totalmente desenvolvidos. \n Os pesquisadores n�o conseguiram, ent�o, chegar a uma altura exata de um braquiossauro adulto. \nMuitas pesquisas foram feitas e, de acordo com um estudo publicado na revista PLOS Biology, em 2014, o animal dessa esp�cie poderia pesar entre 56 a 62 toneladas aproximadamente, \nlevando-se em considera��o a altura e todas as caracter�sticas obtidas at� ent�o sobre os braquiossauros e todo o seu estilo de vida. \n");
                                printf("\n\nclique qualquer tecla para retornar");
                                getch();
                                break;

                            case 2:
                            system("cls");
                                printf("2- Diplodoco \n\nEra um gigante rabo-de-chicote de pesco�o comprido, medindo cerca de 90 p�s (27 m) de comprimento com um 26 p�s (8 m) de comprimento do pesco�o e um de 45 p�s (14 m) de comprimento da cauda, \nmas sua cabe�a estava a menos de 2 p�s grandes.Ele estava entre os maiores animais terrestres de todos os tempos.Suas narinas estavam no topo de sua cabe�a e tinha dentes peg-like, \nmas apenas na parte da frente dos maxilares.Suas patas dianteiras eram mais curtos do que suas pernas traseiras, e todos tinham elefante-like, p�s de cinco dedos.\nUm dedo do p� em cada p� tinha uma garra polegar, provavelmente para prote��o. A impress�o de pele fossilizada Diplodoco (Diplodocus) revela que ele tinha uma fileira de espinhos executando as suas costas.\nDiplodoco (Diplodocus) era um herb�voro (ele comia somente plantas). Ele deve ter comido uma quantidade enorme de material vegetal a cada dia para se sustentar.\nEle engoliu as folhas inteiras, sem mastigar-los, e pode ter ingerido gastroliths (pedras que permaneceram em seu est�mago) para ajudar a digerir este material planta resistente.\nEle tinha dentes sem corte, �teis para descascar folhagem.Sua principal comida era provavelmente con�feras, que eram a planta dominante quando os grandes saur�podes viveram. Alimentos fontes secund�rias podem ter inclu�do gingkos, samambaias de sementes, cicas, bennettitaleans,\nsamambaias, musgos clube, e cavalinhas.Diplodoco (Diplodocus) viveu no final do per�odo jur�ssico, 155-145 milh�es de anos atr�s.\nO primeiro f�ssil Diplodoco (Diplodocus) foi encontrado por Earl Douglass e Samuel W. Williston em 1877 e\nfoi nomeado pelo paleont�logo Othniel C. Marsh em 1878.Muitos f�sseis foram encontrados Diplodoco (Diplodocus) nas Montanhas Rochosas do oeste dos EUA (em Colorado, Montana, Utah, e Wyoming).");
                                printf("\n\nclique qualquer tecla para retornar");
                                getch();
                                break;

                            case 3:
                            system("cls");
                                printf("3- Estegossauro \n\nO Estegossauro era um dinossauro de porte m�dio a grande, que viveu no final do per�odo Jur�ssico (de 155 a 145 milh�es de anos atr�s).Os Estegossauros eram herb�voros, ou seja, alimentavam-se de vegetais.\n Os principais vegetais que faziam parte da alimenta��o deste dinossauro eram: samambaias, musgos, cicad�ceas e cavalinhas. Comiam tamb�m frutas, sendo a principal o abacaxi.\nPossu�am dupla fileira de placas �sseas nas costas, que atingiam cerca de 80 cent�metros de altura. Estas placas tinham como objetivo principal\n fazer a regula��o da temperatura corporal do estegossauro. Quando este dinossauro precisava aquecer o corpo, bastava ficar ao sol que estas placas absorviam o calor. J� na sombra, tinha o efeito contr�rio.Viveram na regi�o centro-oeste da Am�rica do Norte.\n Eram quadr�pedes, ou seja, se apoiavam em quatro patas, possu�am cabe�a pequena e alongada, possu�am dentes pequenos no formato triangular. \nAs principais esp�cies s�o: Stegosaurus armatus, Stenops Stegosaurus e Longispinus Stegosaurus.Seu comprimento era a cerca de 9 metros. \nSua altura era a cerca de 4 metros (animal adulto). Peso de 2 a 4 toneladas (animal adulto). Cor verde ou marrom, \nsendo que as placas nas costas podiam ser da mesma cor do animal ou de cor forte (vermelha, amarela ou laranja). Sua Velocidade era de 5 a 15 km/h");
                                printf("\n\nclique qualquer tecla para retornar");
                                getch();
                                break;

                            case 4:
                            system("cls");
                                printf("Que pena tente conhecer melhor alguma especie da proxima vez\n\nClique qualque tecla para retornar");
                                getch();
                                break;

                            default:
                            system("cls");
                                printf("Numero invalido, estou te encaminhando para o salao principal, Ate logo.");
                                printf("\n\nclique qualquer tecla para retornar");
                                getch();
                                break;
                    }
            break;

            default:
                printf("erro");
                break;
            }
            } else if (entrada == 'q' || entrada == 'Q') {
            printf("Voce indicou saida.\n");
        } else if (entrada == 'x' || entrada == 'X') {
            printf("Saindo. Total de pessoas interessadas em entrar: %d\n", contagem);
            break;
        } else {
            printf("Opcao invalida. Tente novamente.\n");
            break;
        }
    }else if (codigo == 'a' || codigo =='A'){

        int senha = 912;

    printf("Bem vindo Administrador informe sus senha: ");
    scanf("%d", &senha);

    if(senha==912){
        char escolha;
    do{
        system("cls");
        printf("Escolha\n");
        printf("1-Nova Venda\n");
        printf("2-Listar Vendas\n");
        printf("3-Relatorios de Vendas\n");
        printf("4-Sair\n\n");
        scanf(" %c", &escolha);
        switch(escolha){
        case '1':
            system("cls");

            printf("Digite cod: ");
            scanf("%d", &vd[qtde].cod);
            printf("Digite nome: ");
            scanf("%s", &vd[qtde].nome);
            printf("Digite idade: ");
            scanf("%d", &vd[qtde].idade);
            printf("Digite tipopgto: ");
            scanf("%s", &vd[qtde].tipopgto);
            if (vd[qtde].idade<16){
                vd[qtde].preco=10.00;
                ttmeia++;
            }
            else if(vd[qtde].idade>=60){
                vd[qtde].preco=0.00;
                ttisento++;
            }
            else{
                vd[qtde].preco=20.00;
                ttinteira++;
            }
            qtde++;

            getch();
            break;
        case '2':
            system("cls");

            int cont;
            for(cont=0; cont<qtde; cont++){
                printf("Cod = %d\n", vd[cont].cod);
                printf("Nome = %s\n", vd[cont].nome);
                printf("Idade = %d\n", vd[cont].idade);
                printf("Preco = %.2f\n", vd[cont].preco);
                printf("Tipo Pgto = %s\n\n", vd[cont].tipopgto);

            }

            getch();
            break;
        case '3':
            system("cls");

            printf("Total de vendas: %d\n", qtde);
            printf("Valor total das vendas: %.2f\n\n", ttinteira*20.00+ttmeia*10.00);
            printf("Total de inteiras: %d\n", ttinteira);
            printf("Valor total de inteiras: %.2f\n\n", ttinteira*20.00);
            printf("Total de meia: %d\n", ttmeia);
            printf("Valor total de meia: %.2f\n\n", ttmeia*10.00);
            printf("Total de isento: %d\n", ttisento);



            getch();
            break;

        case '4':
            system("cls");
            printf("Encerrando......\n");
            getch();
            break;
        default:
            system("cls");
            printf("Opcao invalida\n");
            getch();
            break;
        }

    }while(escolha!='4');

    }else{
        printf("Senha invalida, obrigado.");
    }


        }else{
            printf("salve");
        }

    }


}

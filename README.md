Sistema de Compra e Gestão de Ingressos em C
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
            printf("esses sao nossos queridos carnivoros disponiveis , teria interesse em saber mais alguma inforaçao sobre nossos queridos fosseis ? (digite o numero de sua escolha)");
            scanf("%d", &especie);

                    switch (especie) {
                            case 1:
                                system("cls");
                                printf("1- Tiranossauro rex.\n\nO tiranossauro rex é um animal que viveu entre 90 e 66 milhões de anos atrás.\nOs tiranossauros possuíam cerca de 12 metros de comprimento e 3,65 metros de altura e podiam pesar oito toneladas.\nPossuía um olfato bastante desenvolvido.\nProvavelmente, caçava suas presas mas também se alimentava de carniça.\nConhecido como “rei lagarto tirano”, esse gigante possuía cerca de 60 dentes enormes, atingindo até mais de 20 centímetros.\nSe seu dente já era grande, imagine seu comprimento.\nEsse animal chegava a 12 metros de comprimento.\nSó a cabeça dele atingia mais de 1,5 metro,e sua altura poderia atingir até 3,65 metros.\nEstudos sugerem que as fêmeas eram relativamente maiores que os machos.\nEsse animal pesava entre cinco e oito toneladas.\nMuito se discute também sobre a capacidade de correr desses animais.\nAlguns pesquisadores sugerem que eles atingiam até 50 km/h.\nAtualmente, considera-se que esses animais atingiam apenas 19 km/h.\nSegundo um estudo publicado em 2021 e intitulado “Natural Frequency Method: estimating the preferred walking speed of Tyrannosaurus rex based on tail natural frequency”,\no tiranossauro rex, provavelmente, tinha como velocidade preferida de sua caminhada algo em torno de 4,8 km/h, um valor bem semelhante ao de humanos.\nesses animais eram capazes de localizar a sua presa em longas distâncias.\nEm relação à visão, alguns pesquisadores acreditam que o tiranossauro apresentava uma visão tão eficiente quanto a das atuais aves de rapina.\nO T. rex já foi descrito há mais de um século, e ainda hoje existem diversas dúvidas sobre seu modo de vida. Apesar de seus dentes grandes e seu tamanho exagerado,\nde que seus pequenos braços poderiam dificultar que esse animal se levantasse após uma queda durante um ataque, por exemplo.\nAlém disso, o formato dos dentes e o sentido do olfato bem desenvolvido indicam que ele poderia sim ser um animal que se alimentava de carniça.\nEntretanto, o T. rex também possuía características que o tornavam um bom caçador. Sua mordida, por exemplo, é a mais forte que de qualquer outro animal no planeta.\nPesquisadores descobriram que cada dente do animal era capaz de exercer uma pressão de seis toneladas. Para se alimentar, o tiranossauro lançava a sua presa no ar\ne a engolia inteira. Vale salientar ainda que já foram encontrados fósseis de animais com marcas de mordida do T. rex,\no que indica que, se esse animal não caçava, pelo menos, ele tentava realizar essa tarefa. Diante disso, atualmente, considera-se que o tiranossauro agia como necrófago,\nou seja, se alimentava de animais mortos mas também caçava.\n");
                                printf("\n\nclique qualquer tecla para retornar");
                                getch();
                                break;

                            case 2:
                                system("cls");
                                printf("2- Espinossauro\n\nEsse dinossauro viveu durante o período Cretáceo, entre 112 e 97 milhões de anos atrás, nos pântanos da África do Norte. Além do mais, ele pertenceu ao reino Animalia, \n ao filo Chordata e a classe Reptilia, Contudo,  mesmo tendo vivido há milhões de anos, o o espinossauro ainda é considerado o maior dinossauro carnívoro que já existiu. \nTanto é que ele consegue ser maior que o Tiranossauro Rex e o Giganotossauro. Basicamente, seu tamanho variava entre 12,6 metros a 18 metros. \n Aliás, ele era também considerado o mais comprido da espécie terópode de dinossauro. Além do seu tamanho, ele também era bem pesado. \nEstima-se que o espinossauro tinha cerca de 8 toneladas, embora, espécie variasse de 6,35 a 20,87 toneladas. Ou seja, ele era 450 kg mais pesado que o Giganotossauro, e 900 kg a mais que o Tiranossauro. \n Primeiramente, vale destacar que o nome espinossauro, significa “lagarto espinha”. \n Aliás, o nome é bem condizente com a aparência do animal , já que ele possuía um prolongamento de vértebras nas costas. \n Suas inúmeras espinhas, aliás, era compridas e já foram chamadas de “velas” (como as dos barcos) algumas vezes por pesquisadores. \n Além do mais, essas espinhas tinham cerca de 1,65 metros de comprimento, e eram conectadas por uma pele. Sobretudo, essas protuberâncias auxiliavam na captação de calor, \n quando eram expostas à luz do sol. Aliás, elas faziam com que eles conseguissem ser mais ágeis que grande parte dos dinossauros de grande porte. \n E para melhorar, essas velas serviam ainda como um adorno de beleza. Ou seja, serviam para atrair mais fêmeas. Ou então, para se mostrar, \n aparentar ser maiores e mais agressivos que outros dinossauros. \n Basicamente, o espinossauro, assim como os demais predadores terrestres, também contava com características tradicionais. Como por exemplo, pernas fortes, boca e dentes enormes. \n Porém, os seus dentes eram retos, serrilhados e não curvados. O que indica que, provavelmente, ele vivia de peixes e carcaças. \nJá, o seu crânio, era estreito e comprido, similar com o dos crocodilos. \n Além dessas características, como já mencionamos, ele era relativamente rápido para seu tamanho. Aliás, ele conseguia alcançar uma velocidade entre 19 km/h e 24 km/h. \n Como seus braços também eram comprimidos, a forma como ele caminhava, contudo, ainda não é um consenso. Basicamente, \n seria possível que ele caminhasse usando suas pernas musculosas, ou então, de quatro. Ainda sobre os ossos do espinossauro, vale destacar que, em 2011, na Austrália, \n foi descoberto uma vértebra do pescoço de um dinossauro com um focinho parecido com o de um crocodilo. Basicamente, para a Ciência, \nisso mostrou que o espinossauro vivia em uma região muito maior que a História acreditava até então. \n");
                                printf("\n\nclique qualquer tecla para retornar");
                                getch();
                                break;

                            case 3:
                                system("cls");
                                printf("3- Oxalaia\n\nÉ um dinossauro terópode que viveu há 95 milhões de anos, no fim do Cretáceo, É o maior terópode conhecido que andou em território brasileiro, \n com 12 a 14 m de comprimento e 5 a 7 toneladas. \nO Oxalaia deveria ser o predador dominante no nordeste do Brasil em sua época. \n  Faz parte de um grupo de dinossauros que desperta grande interesse por suas características peculiares, os espinossaurídeos, \n entre os quais só perde em tamanho para o espinossauro. Espinossaurídeos tinham crânio longo e estreito, \n alimentavam-se de peixes e pequenos animais e muitos possuíam uma espécie de vela nas costas. Outros dois já haviam sido descobertos no Brasil: Angaturama e Irritator. \n A espécie foi identificada a partir de um conjunto de fósseis, com partes do maxilar e dentes, encontrado em 1999, \n na Ilha do Cajual, Maranhão. Sua nomeação e divulgação só ocorreu, entretanto, em 2011. O nome específico, Oxalaia quilombensis, \nlembra dos assentamentos quilombolas construídos na região na época da escravidão e de sua população ser constituída por descendentes de escravos. \n Esta foi a oitava espécie oficialmente nomeada de terópode brasileiro. \n");
                                printf("\n\nclique qualquer tecla para retornar");
                                getch();
                                break;

                            case 4:
                                system("cls");
                                printf("4- Giganotossauro\n\nO Giganotossauro cujo nome significa “Lagarto Gigante do Sul” viveu há aproximadamente 67 milhões de anos atrás durante o período Cretáceo na Patagônia Argentina, \nmas provavelmente dava seus passeios em territórios brasileiros, ultrapassou o tamanho do maior Tiranossauro rex conhecido e dos Carcharodontossauros e Espinossauros, \n sendo sem dúvida um dos maiores carnívoros terrestres conhecidos e com esse tamanho todo poderiam caçar até enormes saurópodes que quase não tinham inimigos naturais, \n provavelmente os Giganotossauro (Giganotosaurus) eram territoriais, e como eram enormes deveriam precisar de enormes quantidades de comida, e seus territórios então seriam enormes. \nSuas mandíbulas eram também enormes e seu crânio um dos maiores, mais de 1,6 metros de comprimento, \nseus dentes podiam medir 15 centímetros de comprimento, sendo curvos e afiados o que é um indicio de que eles eram utilizados para morder algo vivo, \nque ao se debater e tentar escapar acabaria indo mais para dentro da boca do predador, mas certamente o Giganotossauro (Giganotosaurus) não negaria uma refeição já morta em putrefação, \n agindo também como carniceiro.");
                                printf("\n\nclique qualquer tecla para retornar");
                                getch();
                                break;

                            case 5:
                                system("cls");
                                printf("5- Carcharodontosaurus\n\nCarcharodontosaurus (em português Carcarodontossauro do latim 'lagarto com dente de tubarão') foi um gênero de dinossauro terópode que viveu durante o período Cretáceo no Nordeste da África. \nAtualmente só temos duas espécies conhecidas, a espécie-tipo C. saharicus e a espécie C. iguinensis. O seu nome foi inspirado no gênero científico Carcharodon, mesmo gênero que inclui o tubarão-branco. \nCarcharodontosaurus é um dos maiores dinossauros terópodes conhecidos, com C. saharicus atingindo 12–12,5 metros de comprimento e aproximadamente 6–6,2 toneladas de massa corporal. \nTinha um crânio grande e de construção leve com uma tribuna triangular. Suas mandíbulas eram revestidas com dentes afiados, \nrecurvados e serrilhados que guardam semelhanças impressionantes com os do grande tubarão branco, inspiração para o nome. Embora gigante, seu crânio ficou mais leve por fossas e fenestras muito expandidas, \nmas também o tornou mais frágil que o dos tiranossaurídeos. Os membros anteriores eram minúsculos, enquanto os membros posteriores eram robustos e musculosos. Como a maioria dos outros terópodes, tinha uma cauda alongada para se equilibrar. \nO Carcharodontosaurus viveu na África, em locais onde hoje estão a Argélia (local da descoberta dos primeiros fósseis, em 1927), o Egito e a Tunísia, por exemplo. Existem sinais da presença de carcarodontossaurideos também na América do Sul, \ncorroborando a teoria que os atuais continentes África e América do Sul tenham sido um único espaço em parte da era Mesozóica, o Gondwana, e que começaram sua separação há cerca de 135 milhões de anos. \nMuitos terópodes gigantescos são conhecidos no Norte da África durante este período, incluindo ambas as espécies de Carcharodontosaurus, bem como o espinossaurídeo Spinosaurus e o ceratossauro Deltadromeus. \n Isto sugere que houve divisão de nicho entre os diferentes grupos, com o Spinosaurus sendo piscívoro, enquanto o Carcharodontosaurus consumiria dinossauros saurópodes, agindo como o predador alfa em seu pale o ambiente. \n");
                                printf("\n\nclique qualquer tecla para retornar");
                                getch();
                                break;

                            case 6:
                                system("cls");
                                printf("6- Tiranotitan\n\nTyrannotitan (titã tirânico) é um gênero de dinossauros terópode carnívoro que, apesar do nome similar, não eram relacionados aos tiranossaurídeos, sendo pertencente à família dos carcarodontossaurídeos. \nA única espécie descrita na literatura é o T. chubutensis, descoberto por paleontólogos da Argentina na região de Chubut em 2005. Trata-se de uma espécie de grandes proporções que viveu na América do Sul, no período Cretáceo. \n Seus dentes chegavam a cerca de 25 cm de comprimento. O Tyrannotitan era um dinossauro carnívoro predador de grandes proporções. Este dinossauro viveu há 100 milhões de anos e podia chegar a ter 12 metros de comprimento e 4 metros de altura. \n Este dinossauro enorme poderia pesar até 7 toneladas sendo parte da tribo Giganotosaurini, sendo portanto um parente muito próximo do Giganotosaurus. \n Acredita-se que eles tenham sido do Membro Cerro Castaño, da Formação Cerro Barcino (estágio Aptiano) entre 112,2 à 121 milhões de anos atrás. \nO comprimento desses animais foi estimado em até 11,4 até 12,2 metros. Em 2010, Gregory S. Paul deu estimativas mais altas de 13 metros. Seu peso foi estimado entre 4,9 e 7 toneladas. Outros autores deram uma massa corporal de 4,8 a 5,4 toneladas, \n com intervalos de 3,6 a 6,7 toneladas. \n");
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
            printf("esses sao nossos queridos herbivoros disponiveis , teria interesse em saber mais alguma inforaçao sobre nossos queridos fosseis ? (digite o numero de sua escolha)");
            scanf("%d", &especie);

                    switch (especie) {
                            case 1:
                            system("cls");
                                printf("1- Braquiossauro\n\nO Braquiossauro tinha duas características marcantes em seu corpo. A primeira delas eram as longas patas dianteiras, bem maiores do que as traseiras. \nOs paleontólogos acreditam que eles não conseguiam se elevar sobre os membros inferiores. Além disso, o seu pescoço era gigantesco, fazendo com que ele tivesse uma incrível semelhança com a girafa. \nO paleontólogo Heinrich Mallison argumentou em um artigo publicado na 'Biologia dos Dinossauros Saurópodes' que essa espécie tinha muito menos energia do que as outras por causa dessas características. \nOutra coisa muito interessante sobre os braquiossauros é a temperatura de seu corpo. Pesquisadores calcularam, em 2011, através da medição dos índices de isótopos, que esses bichos tinham cerca de 45º C em seus corpos. \nPor isso, foram classificados como um animal de sangue quente, bem como outros saurópodes. \nAcredita-se que a espécie tinha cerca de 25 metros de comprimento, embora ele pudesse ser ainda maior, já que os fósseis analisados vieram a partir de amostrar de animais que não estavam totalmente desenvolvidos. \n Os pesquisadores não conseguiram, então, chegar a uma altura exata de um braquiossauro adulto. \nMuitas pesquisas foram feitas e, de acordo com um estudo publicado na revista PLOS Biology, em 2014, o animal dessa espécie poderia pesar entre 56 a 62 toneladas aproximadamente, \nlevando-se em consideração a altura e todas as características obtidas até então sobre os braquiossauros e todo o seu estilo de vida. \n");
                                printf("\n\nclique qualquer tecla para retornar");
                                getch();
                                break;

                            case 2:
                            system("cls");
                                printf("2- Diplodoco \n\nEra um gigante rabo-de-chicote de pescoço comprido, medindo cerca de 90 pés (27 m) de comprimento com um 26 pés (8 m) de comprimento do pescoço e um de 45 pés (14 m) de comprimento da cauda, \nmas sua cabeça estava a menos de 2 pés grandes.Ele estava entre os maiores animais terrestres de todos os tempos.Suas narinas estavam no topo de sua cabeça e tinha dentes peg-like, \nmas apenas na parte da frente dos maxilares.Suas patas dianteiras eram mais curtos do que suas pernas traseiras, e todos tinham elefante-like, pés de cinco dedos.\nUm dedo do pé em cada pé tinha uma garra polegar, provavelmente para proteção. A impressão de pele fossilizada Diplodoco (Diplodocus) revela que ele tinha uma fileira de espinhos executando as suas costas.\nDiplodoco (Diplodocus) era um herbívoro (ele comia somente plantas). Ele deve ter comido uma quantidade enorme de material vegetal a cada dia para se sustentar.\nEle engoliu as folhas inteiras, sem mastigar-los, e pode ter ingerido gastroliths (pedras que permaneceram em seu estômago) para ajudar a digerir este material planta resistente.\nEle tinha dentes sem corte, úteis para descascar folhagem.Sua principal comida era provavelmente coníferas, que eram a planta dominante quando os grandes saurópodes viveram. Alimentos fontes secundárias podem ter incluído gingkos, samambaias de sementes, cicas, bennettitaleans,\nsamambaias, musgos clube, e cavalinhas.Diplodoco (Diplodocus) viveu no final do período jurássico, 155-145 milhões de anos atrás.\nO primeiro fóssil Diplodoco (Diplodocus) foi encontrado por Earl Douglass e Samuel W. Williston em 1877 e\nfoi nomeado pelo paleontólogo Othniel C. Marsh em 1878.Muitos fósseis foram encontrados Diplodoco (Diplodocus) nas Montanhas Rochosas do oeste dos EUA (em Colorado, Montana, Utah, e Wyoming).");
                                printf("\n\nclique qualquer tecla para retornar");
                                getch();
                                break;

                            case 3:
                            system("cls");
                                printf("3- Estegossauro \n\nO Estegossauro era um dinossauro de porte médio a grande, que viveu no final do período Jurássico (de 155 a 145 milhões de anos atrás).Os Estegossauros eram herbívoros, ou seja, alimentavam-se de vegetais.\n Os principais vegetais que faziam parte da alimentação deste dinossauro eram: samambaias, musgos, cicadáceas e cavalinhas. Comiam também frutas, sendo a principal o abacaxi.\nPossuíam dupla fileira de placas ósseas nas costas, que atingiam cerca de 80 centímetros de altura. Estas placas tinham como objetivo principal\n fazer a regulação da temperatura corporal do estegossauro. Quando este dinossauro precisava aquecer o corpo, bastava ficar ao sol que estas placas absorviam o calor. Já na sombra, tinha o efeito contrário.Viveram na região centro-oeste da América do Norte.\n Eram quadrúpedes, ou seja, se apoiavam em quatro patas, possuíam cabeça pequena e alongada, possuíam dentes pequenos no formato triangular. \nAs principais espécies são: Stegosaurus armatus, Stenops Stegosaurus e Longispinus Stegosaurus.Seu comprimento era a cerca de 9 metros. \nSua altura era a cerca de 4 metros (animal adulto). Peso de 2 a 4 toneladas (animal adulto). Cor verde ou marrom, \nsendo que as placas nas costas podiam ser da mesma cor do animal ou de cor forte (vermelha, amarela ou laranja). Sua Velocidade era de 5 a 15 km/h");
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

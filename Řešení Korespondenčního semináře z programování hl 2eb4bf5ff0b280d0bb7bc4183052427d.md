# Řešení Korespondenčního semináře z programování hlavní kategorie (KSP-H)

---

## 1. Úvod - Co je KSP-H a proč tato práce?

### 1.1. Co je KSP

Korespondenční seminář z programování hlavní kategorie, zkráceně KSP-H je jak už název napovídá seminář zaměřující se na programátorské úlohy. Tento seminář je pořádaný Matematicko-fyzikální fakultou Univerzity Karlovy hlavně pro středoškoláky, kteří jsou nadšenci do teoretické informatiky a baví je řešit problémy spojené s programováním a algoritmy.

KSP se dělí na dvě kategorie. První a hlavní kategorií je nesoucí stejný název “hlavní kategorie”. Ta svojí obtížností navazuje na druhou kategorii s názvem “základní kategorie”, která je určená pro studenty základních škol. My se ale v této práci budeme zabývat pouze hlavní kategorií, kterou jsem právě řešil.

Průběh KSP-H a jeho pravidla jsou následující:

- Organizátoři KSP-H v průběhu školního roku vydávají přesně pět sérií algoritmických úloh se stanoveným termínem odevzdání, jejichž počet v jedné sérii je také pět.
- Obecně popsáno, každé zadání úlohy odkrývá jednoduchým popisem “příběhové situace” problém, který řešitel musí návrhem vlastního algoritmu vyřešit.
- Typy jednotlivých úloh série nejsou stejné a dělí se do čtyřech skupin:
    1. **Teoretické úlohy**: pro tento typ úloh musí řešitel navrhnout algoritmus jako efektivní řešení daného problému a ten pak **slovně popsat** a odevzdat organizátorům (samotný algoritmus není nutné programovat).
    2. **Open-data úlohy**: jsou naopak úlohy u kterých je nutné, aby řešitel svůj návrch algoritmu naprogramoval a odzkoušel jeho funkčnost na testovacích vstupech vygenerovaných na portálu KSP. Tyto vstupy pak spustí na svém algoritmu a vygenerované výstupy odevzdá, přičemž správnost svých výstupů se dozví okamžitě.
    3. **Seriálové úlohy**: úlohy tohoto typu jsou obsaženy v každé sérii pouze jednou a v průběhu všech sérií na sebe navazují a postupně rozebírají některé z témat teoretické informatiky. Úlohy se odevzdávají ve formátu jako teoretické avšak někdy s lehčími odlišnostmi, které organizátoři KSP v zadání upřešní.
    4. **Bonusové úlohy**: posledním typem úloh jsou bonusové, ty se mohou vyskytnou v sériích jen občas jako nástavba nad ty standardní a do celkového bodového ohodnocení se nezapočítávají, proto úlohám tohoto typu nebudeme v mé maturitní práci věnovat pozornost.
    

Maximální počet bodů, které je možné za každou sérii získat je 60 bodů. Logicky za celý školní rok 300 bodů. Témata jednotlivých úloh jsou různá. Obecně lze ale říci, že se pohybují okolo témat návrhů algoritmů technikami z teoretické informatiky, například se věnují třídícím algoritmům, grafům, dynamickému programování, efektivní práci s pamětí a výkonem algoritmu (paměťové a časové složitosti).

### 1.2. Proč řešení KSP-H jako téma maturitní práce

Programováním a řešením logických problémů se zabývám už od dětství a tento seminář je místo, kde své znalosti mohu zdokonalovat a ponořit se do problematiky algoritmů mnohem více do hloubky. Zároveň vím, že existuje spousta nadšenců, jako jsem já, které informatika baví a řešení KSP-H by si také chtěli zkusit, jen třeba neví, kde přesně začít a na co mohou v průběhu řešení semináře narazit a chtěli by se připravit. Z těchto důvodů tak vznikl nápad spojit osobní zkušenosti s vlastním řešením KSP-H a maturitním projektem.

Cílem této práce je čtenářům a případným budoucím řešitelům odhalit průběh řešení KSP-H a podělit se poznatky i vědomosti, které jsem v průběhu řešení 38. ročníku získal a v neposlední řadě prakticky ukázat vlastní řešení některých z úloh, popsat jak jsem nad nimi uvažoval, co mi pomohlo a v čem jsem naopak měl mezery. To vše doplním o bodová ohodnocení těchto úloh organizátory, aby čtenář získal i povědomí, jak k odevzdaným řešením organizátoři při ohodnocování přistupují.

Celkově by se dalo říci, že forma této práce bude jakýmsi návodem pro čtenáře i technickou dokumentací s prvky připomínající vedení osobního deníku v průběhu řešení KSP-H. To vše v jednom dokumentu.

---

## 2. Jak se na KSP-H připravit

Úplně tím prvním, co bych chtěl předat a co by rozhodně případný začínající řešitel neměl podcenit, je příprava, protože jak se říká, štěstí přeje připraveným. V případě řešení KSP to platí dvojnásob. Prvně je tedy nezbytné, aby začínající řešitel získal představu, co vše KSP-H zahrnuje ať už ze strany úroveň obtížnosti úloh, potřebných znalostí nebo třeba také časové náročnosti, kterou může mnoho lidí, včetně mě, podcenit. 

Pokud tedy chcete mít v průběhu řešení navrch a necítit se ztracený hned po přečtení zadání první úlohy, prosím, věnujte těmto oddílům náležitou pozornost. 

### 2.1. Co od řešení KSP-H očekávat

Z pohledu požadavků na znalosti praktických programátorských technik a některého z programovacích jazyků se KSP-H může vzhledem k jeho názvu jevit v tomto ohledu jako nejnáročnější. Budete překvapeni, ale opak je pravdou. Jelikož v situacích, kdy dojde na samotné psaní kódu, postačí mít střední základy programovacího jazyka a jeho konstrukcí.

Například u open-data úloh, u kterých dostanete vygenerované vstupy, nepůjde o nic jiného než čtení textu ze souboru, provedení požadovaných výpočtů a opětovné uložení výstupu do souboru, který pak odevzdáte. Žádný syntakticky složitý a dlouhý kód psát nebudete. Naopak je požadováno, aby bylo naprogramované řešení co nejpřehlednější a efektivní. Proto pokud jde o znalost programování, je přednější než používat nějaké komplexní a složité výrazy, ve kterých se sami budete ztrácet, vědět, jak jazyk pracuje s pamětí a které oblasti jazyka a programátorské techniky jsou výpočetně drahé (toto ale rozebereme detailně zvlášť níže).

Avšak oblast, na kterou jsou nároky největší, je schopnost logického a abstraktního programátorského myšlení jako takového. Zde jednoznačně pohoří nejvíce řešitelů. Pokud řešitel není schopný logicky uvažovat a využívat informace, které se naučil v praxi, nemůže nikdy KSP vyřešit. Dobrou zprávou ale je, že i průměrně inteligentní člověk s trochou píle je schopen této požadované úrovně logického myšlení dosáhnout. **Proto je třeba, abyste posílili své logické myšlení ve spojení s řešením problémů a teoretickou informatikou na co nejvyšší úroveň, jaká to jde.**

Když už jsem zmínil důležitost logického myšlení, další významnou částí, jež se společně ruku v ruce pojí, je samozřejmě samotná znalost algoritmizačních technik a obecně informací, ze kterých budete čerpat. Všechny jednotlivé oblasti, které je třeba umět, a do jaké míry také rozeberu níže.

Kromě znalostí algoritmů a programování je také potřeba mít představu o tom, jak KSP-H probíhá z hlediska časové náročnosti, termínů a také toho, kam se případně obrátit ve chvíli, kdy si nejsem jistý například zadáním úlohy, požadavky na výstupní formu řešení aj. 

Co se týče termínů uveřejnění zadání všech úloh každé série a jejich odevzdání, tak ty se zveřejňují v průběhu školního roku vyjma letních prázdnin (od 1. 9. do 30. 6.). Zároveň mějte na paměti, že jednotlivé termíny nikdy nejsou předem stanovené a platily by napříč ročníky. V překladu to znamená, že uveřejňování sérií a jejich termíny odevzdání závisí na tom, jak organizátoři KSP-H stíhají. To platí i pro čas na vyřešení jednotlivých sérií, které se mohou lišit (třeba i z důvodu, že některá z úloh je obtížnější). 

A i přesto, že datum vydání a odevzdání každé série se většinou liší, dodržují často napříč ročníky opakující se vzor. Obvykle se zadání první série řešitel dočká v září, pro kterou termín odevzdání je měsíc, až měsíc a půl vzdálený. Poté následuje týden až dvacet dní pauza, než se vydá další série. Tento vzor platí víceméně pro všechny série. Hlavní je, aby termín odevzdání poslední série, tj. páté, byl před 30. 6.

Pokud bychom chtěli odhadnout časové náklady na vyřešení jednotlivých úloh, bude to záviset primárně na schopnostech řešitele. Pro pokročilé může řešení jedné úlohy trvat jednu až čtyři hodiny, pro jiné, třeba začátečníky, klidně i desítky hodin. Mně osobně například jedna z prvních úloh, která byla k mé smůle obtížnější, přičemž jsem navíc zvolil řešení, jež bylo nástavbou nad to požadované, trvala k vyřešení a finálnímu odevzdání odhadem i čtyřicet až padesát hodin.

<aside>

*KSP-H NENÍ JEN O ŘEŠENÍ PROGRAMÁTORSKÝCH ÚLOH, ALE TAKÉ O ROZVRŽENÍ ČASU A UMĚNÍ VYHODNOTIT, KDY JE LEPŠÍ V PŘÍPADĚ, ŽE SI NEVÍTE RADY, ÚLOHU PŘESKOČIT A VRÁTIT SE K NÍ, POKUD ZBYDE ČAS!*

</aside>

Rovněž se někdy může stát, že nepochopíte přímo samotné zadání úlohy nebo si nebudete prostě jisti. Občas totiž zadání bývají nejasná a pokud jste KSP nikdy předtím neřešili a nevíte přesně, co po Vás organizátoři chtějí a máte pouze domněnku, je namístě organizátory kontaktovat a požádat o dovysvětlení nejasností. 

Z osobní zkušenosti Vám organizátoři velice rádi pomohou a jsou velice ochotní. Pokud jste zadání pochopili a nevíte čistě jak úlohu vyřešit, tak v těchto situací pomoc nedostanete. Způsob, jakým můžete organizátory kontaktovat, je buď přímo emailem na adrese [*ksp@mff.cuni.cz*](mailto:ksp@mff.cuni.cz) nebo na jejich oficiálním discord serveru, což mě osobně vyhovuje více.

### 2.2. Tematické zaměření KSP-H a požadované znalosti + kde je získat

Pokud tedy chcete mít v průběhu řešení navrch a necítit se ztraceni hned po přečtení zadání první úlohy, zde jsou znalosti, které byste neměli před podáním přihlášky pro řešení KSP vynechat:

- Obecné základy teoretické informatiky a matematiky (zejména principy fungování algoritmů)
    - Získání představy, jak počítače fungují na hardwarové úrovni (operace s pamětí, výpočetní operace)
    - Jak se liší složitost těchto operací v různých situací (obzvlášť jak s nimi operuje vámi zvolený programovací jazyk) a získat schopnost popsat efektivitu vašeho algoritmu
    - Základní techniky pro řešení algoritmických úloh → třídící algoritmy, teorie grafů, datové struktury,  algoritmizační techniky: rozděl a panuj, dynamické programování, principy časové a paměťové složitosti
    - Znalost známých konkrétních algoritmů → Djikstra, BFS, DFS, QuickSort, MergeSort aj.
    - Matematický zápis jako popis fungování algoritmů (zejména složitost) a schopnost jej číst
- Znalost základů alespoň jednoho obecného programovacího jazyka (Python pro začátečníky, C/C++ pro pokročilejší)
    - Jak jazyk operuje s pamětí a náročnost na operace jeho funkcí

Potřebná úroveň porozumění tématům v bodech výše je proměnlivá (někdy jsou úlohy jednoduché, jindy vyžadují znalosti navíc). Obecně je lepší znát od všeho trochu než pouze pár technik nazpaměť.

<aside>

*NEJDŮLEŽITĚJŠÍ JE ZÍSKAT OBECNÝ PŘEHLED A SCHOPNOST ROZPOZNAT, JAKOU METODOU JE MOŽNÉ ÚLOHU VYŘEŠIT!*

</aside>

Co je ale možné řící skoro s jistotou, tak 90 % úloh, které se v KSP-H objeví nebudou znalostně přesahovat informace, které najdete přímo na webu semináře:

<aside>
🌐

odkaz na encyklopedii KSP: https://ksp.mff.cuni.cz/encyklopedie/

</aside>

Tím se tak dostáváme k otázce, kde potřebné informace získat na kterou pak navazuje v další podkapitole návod na osvojení si schopnosti efektivního řešení úloh KSP-H. A jak jsem již uvedl, na webu KSP najdete prakticky vše, co budete potřebovat. Nicméně existuje pár dalších dobrých zdrojů, které Vám s těmito technikami pomohou a umožní si tak vybrat preferovaný způsob čerpání informací.

Zde je pár dalších zdrojů ze světa algoritmů a kompetitivního programování:

- Web KSP (ještě jednou): https://ksp.mff.cuni.cz/
    - Stručná a zároveň snadno pochopitelná sbírka téměř všeho, co se v úlohách může vyskytovat.
    - Archiv úloh s řešeními a komentáři organizátorů z minulých ročníků.
    - Další extrémní výhoda je tzv. **cvičistě**, tedy možnost zpětně odevzdávat výstupy z vašeho algoritmu u zadání archivovaných úloh (pouze u úloh typu open-data) a své znalosti i schopnosti nanečisto procvičovat.
- YouTube kanály zaměřující se na algoritmické úlohy pro začátečníky
    - Pro lidi, co nejsou vášnivými čtenáři a mají detailnější vysvětlování
    - Široká škála způsobů úhlů vysvětlování konkrétních témat → vhodné pokud z jednoho zdroje téma nepochopíte.
    - Pár konkrétních YT kanálů/playlistů:
        - https://youtube.com/playlist?list=PLxgZQoSe9cg0-p9RHvaf32XoFEHT_2tj2&si=u-EZB4zyg5Z6gGuU
        - https://www.youtube.com/@FelixTechTips/videos
        - https://youtube.com/playlist?list=PLgUwDviBIf0oE3g
        A41TKO2H5bHpPd7fzn&si=mho4MxH54ldlDLhM
        - https://www.youtube.com/playlist?list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb
- Kniha: Průvodce Labyrintem algoritmů
    - Kniha, která obsahuje všechny techniky, které se mohou v KSP objevit.
    - Pro začátečníky může být ze začátku obtížnější porozumět matematickým zápisů a pseudokódu. Osobně z ní velice často čerpám, jelikož nabízí hlubší porozumění problematiky.
    - Přímo napsaná absolventy a dnes již vyučujícími MFF UK
- Online soutěže a problemsety pro programátory podobné KSP
    - Výhodou je veliká sbírka úloh, které si můžete filtrovat podle skóre obtížnosti a dokonce i metody, kterou se daná úloha řeší.
    - Codeforces: https://codeforces.com/problemset
        - Jedna z nejpopulárnějších platforem pro kompetitivní programování.
        - Opravdu velká databáze problemsetů (úloh) různých obtížností.
        - Možnost zapojit se do soutěže podobně jako u KSP.
    - CSES: https://cses.fi/problemset/
        - Čistě obrovská databáze úloh, které je možné řešit a místo vygenerovaných výstupů odevzdat vámi naprogramovaný algoritmus.
        - Správná řešení se musí vejít do časových a paměťových limitů, které jsou u každé úlohy stanoveny.
        - Po vložení kódu můžete vidět řešení jiných účastníků a zdokonalovat se tak.

### 2.3. Řešení úloh během přípravy je základ - Jak na to?

Samotné učení metod kompetitivního programování a izolované “hraní” si s nově nabytými zkušenostmi pro úspěšné absolvování ročníku KSP-H nestačí. Už prakticky při úplném začátku přípravy (uvažujeme od úrovně, kdy máte základy programování a při studování algoritmizačních technik popsaných výše, rozumíte výkladu) je dobré se alespoň pokusit archivované úlohy vyřešit. Je to hlavně z toho důvodu, abyste zjistili náročnost problematiky, do které jste se pustili.

Jakmile si úlohu vyzkoušíte vyřešit a strávíte nad ní pár hodin, pravděpodobně se může stát, že jste se správnému řešení ani nepřiblížili. To je v případě, kdy nemáte s kompetitivním programováním předchozí zkušenosti úplně v pořádku. A bude lepší snížit laťku o kategorii níže a zkoušet řešit úlohy z kategorie Z (Z se řídí stejnými pravidly  a probíhá úplně stejně jako H), ty jsou oproti hlavní kategorii mnohem jednoduší a cílí na to, aby řešitel využil hlavně úplné základy (techniky jako teorie grafů, složitější datové struktury nebo pokročilejší třídící algoritmy nejsou pro funkčnost řešení potřeba). Ve chvíli, kdy KSP-Z budete hravě zvládat, můžete se opět pustit do procvičování na úlohách z hlavní kategorie.

Ovšem není třeba nad řešením konkrétní úlohy trávit nadměrně dlouhou dobu, protože je dost pravděpodobné, že na řešení stejně ve výsledku po pár ztrávených hodinách bez posunutí nepřijdete a jen marníte čas. Toto byla například jedna z velkých chyb, které jsem při procvičování řešení úloh z hlavní kategorie dělal. Zkrátka jsem kvůli egu nechtěl odejít od nevyřešené úlohy a řešení sám vymyslet - marnil jsem tak čas. Naopak přístup, který je narozdíl od předchozího produktivní, vychází z průběžného učení potřebných znalostí, kdy po určitém bloku, co se naučíte (blokem je myšlena klidně i jedna technika, např. osvojení si znalost a využití Djikstrova algoritmu), můžete buď z KSP-H vybrat jednu úlohu a tu zkusit vyřešit (v archivu KSP-H bohužel nejsou úlohy kategorizovány podle optimálních technik k řešení), nebo si na konkrétní techniku najít úlohy z platforem, které jsem ukázal výše a ty řešit nově nabytými znalostmi.

Pokud tímto přístupem začnete procvičovat, zbytečně byste nad úlohou neměli trávit moc času, v situaci, kdy si opět nevíte rady. Doporučuju nad zadáním **strávit maximálně dvě hodiny** vymýšlením řešení a pokud se vůbec nikam neposunete, bude lepší když se podíváte na vzorové řešení úlohy a to si pečlivě prostudujete. Není pak od věci si řešení zkusit naprogramovat podle “vzoráku” tím si tak totiž projdete procesem programování algoritmu od A do Z, což je pro učení důležité.

Výhodu při řešení KSP-H “naostro” také přinese procvičovat všechny druhy úloh. U procvičování open-data úloh je výhodou, že skutečnost, jestli vaše řešení funguje, zjistíte ihned. Avšak open-data úlohy tvoří v KSP-H cca 20%, ve zbylých teoretických úlohách (zahrnuje i seriálové) je požadováno, abyste jako výstup odevzdávali čistě slovní popis algoritmu, aby se zajistilo, že řešení skutečně rozumíte a dokážete ho popsat. Bohužel archivované teoretické úlohy Vám zpětně nikdo neopraví a tudíž nedostanete potřebnou zpětnou vazbu na vaše řešení.

Přesto je dobré, abyste teoretické úlohy řešili. A ve chvíli kdy chcete ověřit správnost vašeho řešení, můžete pro kontrolu využít nějaké LLM (ChatGPT, Claude, Gemini). Tyto modely mají velikou databázi všech možných úloh podobného typu a poskytnou vám relevantní zhodnocení i kritiku. Pro vnitřní klid můžete nechat své řešení ohodnotit více modely zároveň a odpovědi pak porovnat. V situaci, kdy Vám něco nebude sedět, můžete další sérií chytrých dotazů nejasnost rozkouskovat a dohledat se pravdy.

<aside>
🔴

POZOR! V PRŮBĚHU ŘEŠENÍ KSP-H V AKTUÁLNÍM ROČNÍKU JE VYUŽITÍ LLMs ZAKÁZÁNO A JEHO UŽITÍ PRO GENEROVÁNÍ ŘEŠENÍ JE BRÁNO JAKO PODVOD!

</aside>

*soupis pravidel naleznete na jejich webu

Kdybych měl určit optimální kvantitu procvičovaných úloh během přípravy, tak bych jen zmínil, že je z mé vlastní zkušenosti a ze zkušenosti mého kamaráda (pro rok 2027 bude část všech zadání KSP-H vymýšlet on), jehož názoru přiřazuji maximální váhu, zaměřit se ze začátku spíše na kvantitu pokusů o řešení úloh a následné procházení vzorových řešení. Důvod je takový, že Vám to v hlavě poskytne jakousi vnitřní databázi vzorů, díky které už při přečtení úlohy dokážete lépe odhadnout, jakým způsobem úlohu řešit.

### 2.4. Tabulka shrnutí nejpodstatnějšího + upozornění

- Asi ani není třeba zmiňovat, že první věc, co byste měli udělat, je prostudování jejich webu. Získáte tam všechny faktické informace spojené s KSP a uděláte si představu do čeho jdete.
- Z pohledu obtížnosti je KSP-H určeno pro pokročilejší středoškoláky a pokud tedy nemáte s řešením algoritmických úloh vůbec žádné zkušenosti, bude lepší se předtím podívat na KSP-Z.
- Ideální cesta, jak se řešení úloh tohoto typu naučíte nebo se zlepšíte, je postupným prostudováním všech technik, které se v úlohách mohou vyskytovat. Nejlepší je začít s obecným získáním přehledu všech jednotlivých témat, během čehož si budete postupně zkoušet řešení úloh nanečisto a váš studijní plán díky zpětné vazbě upravovat.
- Ze začátku, hlavně když se jedná o procvičování není třeba nad úlohami trávit nadměrně času, aniž byste v řešení nepokročili. Důležité je, prostudovat si detailně vzorové řešení těchto úloh.
- Je také dobré získávat informace z různých zdrojů a zkoušet vyřešit pár úloh z jiných platforem, jelikož si u nich přesně můžete zvolit, který typ úlohy chcete řešit.
- Během přípravy není od věci využívat LLMs způsobem, který vás posune a nebude dělat vše za vás. Přesto doporučuji, pokud během řešení narazíte na problém u kterého víte jakou metodou jej řešit, ale detailní postup si nepamatujete, místo nechání si vygenerovat informace nebo postup konkrétní metody AI, tak raději si vzít do ruky knihu doporučenou výše a celé téma si pročíst. Důvod je takový, že tomu věnujete mnohem více úsilí a pravděpodobnost, že Vám to utkví v paměti je vyšší.
- V případě, že zadání úlohy nerozumíte nebo si nejste jisti, neváhejte organizátorům napsat. To ale spíše platí pro řešitele aktuálního ročníku. Jelikož v archivovaných úlohách se nachází i vzoráky.

<aside>
⚠️

**Upozornění pro nováčky:**

Tímto bych chtěl všem začínajícím řešitelům připomenout a zároveň upozornit, že získat schopnost efektivně řešit úlohy KSP-H, nebude hned a je potřeba věnovat tomu hodně úsilí. Upozorňuji na to z toho důvodu, že spoustě lidí, kterým myšlenka ohledně umění řešení takovýchto úloh nadchla, může po určité době připadat, že se vůbec nikam neposouvají a že stále problematiku nechápou. A to je v pořádku, obzvlášť pro začátečníky. Schopnost logicky myslet v tomto směru se získává dlouhodobě. Ale zaručuji, že v momentě, kdy nemáte 90IQ a budete se studiu tohoto tématu věnovat, tak postupem času výsledky uvidíte. Otázka, kdy, bude záležet na vaší píli. Spousta lidí během studování stále problematiku nechápe a vše jim nakonec dojde naráz až na konci, jako kdyby se jim najednou rozsvítilo v hlavě.

</aside>

---

## 3. Návod na ostré řešení úloh + strukturovaný plán

Jakmile máte pocit, že jste připraveni začít řešit úlohy naostro a rozhodnete se do nadcházejícího ročníku přihlásit, bude dobré vytvořit si plán, jak nejefektivněji KSP-H řešit. Protože v případě, kdy budete seminář brát vážně a chcete se stát úspěšnými řešiteli (úspěšný řešitel je ten, kdo během ročníku získal 50 % ze všech 300 bodů), budete tomu muset obětovat jako nováček velké úsilí a také během roku spoustu času. A právě proto jsem sepsal tento plán, který mi umožňuje řešení úloh stíhat a zároveň se věnovat i jiným věcem (avšak ne vždy se to upřímně povede). 

Plán se bude věnovat nejen postupu, jak jednotlivé úlohy řešit, ale také i ucelenému postupu pro řešení celé série. Jeho forma bude stručná a v bodech, které když bude třeba více rozepíšu. A když budete chtít, můžete ho poté využít jako mustr pro vaše potřeby.

Návod a hlavně ukázku samotného řešení úloh a rozebírání problematiky kolem nich velice detailně popíšu v další kapitole, která bude tou nejobsáhlejší této práce a konkrétně tak na příkladech mnou řešených úloh ukážu, jak po přečtení zadání postupovat.

<aside>

### Strukturovaný plán postupu:

**Co dělat, když vyšla nová série:**

1. **Získat přehled:** jakého typu je která úloha a jejich bodové ohodnocení → ve většině případech Vám počet bodů u každé úlohy napoví jejich obtížnost (avšak nemusí platit vždy). Je dobré si také přečíst všechna zadání, díky čemuž můžete už po prvním přečtení úlohy zjistit, zda máte tušení, jak by úloha mohla být vyřešena. Celkově tak budete mít přehled a získaný odhad, která úloha bude vyžadovat více času a která naopak méně, a podle toho všeho tomu přizpůsobíte váš čas.
2. **V jakém pořadí úlohy řešit:** je pro co nejefektivnějšího dosáhnutí výsledku také důležité a odpověď je pro každého individuální. Obecně se obtížnost úloh stupňuje chronologicky až na seriál. Proto když získáte přehled, bude nejrozumnější začínat řešit úlohu, u které máte po přečtení zadání největší představu, jak ji řešit. Samotný seriál doporučuji řešit až jako poslední, jelikož je z pohledu potřebných schopností  nejjednodušší. Zabere Vám ovšem čas.
3. **Nevíte si s úlohou rady:** i to se může stát a leckdo by se divil, kdyby ne. V této situaci je někdy lepší úlohu opustit a začít řešit jinou. Čím více totiž nad ní strávíte promarněného času, bez jediného posunutí ke správnému řešení, tím více vám schopnost čistého a proaktivního přemýšlení bude klesat. Opačně, když začnete řešit jinou úlohu, mozek bude z nového problému více stimulován a poté, když se k předchozí vrátíte, je větší šance, že řešení vymyslíte.
4. **Nemusíte mít 100 % řešení:** ať už u open-data nebo teoretických úloh, pokud víte, že řešení, které jste vymysleli není dostatečně efektivní, aby v časovém limitu zvládlo ty nejtěžší testovací vstupy a ještě Vám v řešení ostatních úloh zbývá spoustu práce, nesnažte se 
</aside>

---

## 4. Osobní zkušenosti s řešením (jak úlohy řešit + rozbor)

Konečně kapitola, která bude praktická a ukáže osobní výsledky. A ještě než s detailním rozepisováním jednotlivých řešení úloh začnu, chtěl bych zde uvést svojí historii ve spojení s KSP. Důvod je ten, jelikož tento návod není psán dlouholetým ostříleným řešitelem, který už má za sebou vyřešených přinejmenším několik ročníků hlavní série a rozhodl se podělit o dlouholeté a ověřené zkušenosti. Spíše naopak, tento návod píšu v průběhu řešení mého aktuálně prvního ročníku, kterého se plnohodnotně a se vší vážností poprvé  účastním. Přestože tato informace může znít čtenářům z hlediska motivace pokračovat ve čtení odpudivě, dovolil bych si Vás požádat, abyste ve čtení, alespoň do půlky této kapitoly, pokračovali a já Vás přesvědčím, proč samotný návod+rozbor psaný nováčkem může být čtenářům, kteří se nachází na podobném místě více užitečný než od “OSTŘÍLENÉHO PROFÍKA”!

Důvod je následující: A není jím nic jiného než je pochopení potřeb a aktuálního stavu, ve kterém se budoucí řešitel začátečník nachází. Když jsem se na řešení hlavní série KSP připravoval, nechal jsem si dát několik rad od zkušeného, se znalostmi potřebnými pro KSP-H až směšně přesahujícími, mého kamaráda, abych získal přehled a také nějaké “taháky do kapsy” pro ostré řešení. A i když byly jeho rady velice přínosné, někdy ovšem až moc profesionální a pokročilé. Jednoduše řečeno, tak rady/znalosti, které mi poskytoval a pro něj byly naprostý základ, mi někdy připadaly jak z jiné planety a trvalo dlouhou dobu studování IT problematiky než jsem je začal chápat. Toho bych se zde chtěl vyvarovat a předat Vám tak informace od stejně uvažující osoby.

Nyní, když jsem důvod, proč byste neměli přestat číst, pokud to myslíte s KSP-H opravdu vážně, dostatečně vyjasnil, rád doplním další informace ke svým zkušenostem z IT obecně a KSP. Co se obecné schopnosti programovat týče, tak tu jsem v začátcích řešení KSP-H měl na úrovni “středně pokročilého”. Dokázal jsem chápat souvislosti, kterými se KSP-H zabývá a logickým odvozením se dobrat představě řešení. To ale nestačilo, jelikož samotná řešení nebyly často efektivní, nebo v nich byly nejasnosti, které jsem nedokázal vysvětlit. To se ale změnilo při intenzivní přípravě a v průběhu řešení aktuálního ročníku. Největší podíl na tom mělo studium algoritmizačních a kompetitivních programátorských technik. Díky čemuž jsem dokázal i složitejší matematické zápisy chápat a v hlavě si v průběhu čtení zadání úloh už budovat samotnou představu, jak by správné řešení mělo vypadat. 

Nicméně v průběhu vysvětlování principů řešení konkrétních úloh, které tu následně ukážu, se pokusím brát ohled na to, že tyto znalosti zatím nemáte a popsat postupy, jak jsem nad tím uvažoval tak, aby to i ti méně pokročilý chápali, nebo aspoň získali nějaké odrazové body. Nemohu však ale zaručit, že se tak bude dít vždy, jelikož některé části vysvětlit bez pokročilejších technik prostě nepůjde, nebo alespoň já to tak neumím.

### Ukázka postupu řešení úloh:

1. **Zadání úlohy 38-1-1: One shot burza:**

<aside>

Trpaslík Plesnivous se rozhodl, že drakův poklad je pro něj moc práce a musí si vydělat jinak. Jenže vydělávat standardní cestou je zaprvé náročné, zadruhé neefektivní a zatřetí nic pro něj. Proto se rozhodl jít za Lady Hrochtenzií – místním orákulem. Ta mu sdělila cenu uhlí pro každý z příštích *N* dní.

Bohužel si ale důlní úřad kontroluje velké finančně-uhelné transakce, proto smí Plesnivous za svých *K* sesterciů pouze jednou nakoupit libovolné kladné celé množství uhlí a jednou ho všechno prodat. Chce při tom postupovat se značnou obezřetností, aby si vydělal co nejvyšší sumu. Pomozte Plesnivousovi zjistit, kdy má uhlí nakoupit a kdy prodat, aby skončil s co nejvíce sestercii.

![](https://ksp.mff.cuni.cz/img/hippo_points_bare.png)

Toto je praktická open-data úloha. V [odevzdávátku](https://ksp.mff.cuni.cz/h/odevzdavatko/) si necháte vygenerovat vstupy a odevzdáte příslušné výstupy. Záleží jen na vás, jak výstupy vyrobíte.

*Formát vstupu:* Na prvním řádku dostanete *N*, počet dní, na které Lady Hrochtenzie předpověděla ceny uhlí, a *K*, Plesnivousův kapitál v sesterciích. Na druhém řádku dostanete *N* kladných celých čísel reprezentující ceny uhlí v daných dnech.

*Formát výstupu:* Na jednom řádku vypište dvě čísla – den, ve který má Plesnivous uhlí nakoupit a kdy prodat. Dny indexujeme jako správní trpaslíci od nuly. Pokud je takových řešení více, vypište libovolné z nich. Pokud Plesnivous na uhlí nemůže nic vydělat, nebo by dokonce prodělal, vypište namísto toho `-1`. Pozor, Plesnivousův výdělek se nemusí vejít do 32-bitového čísla.

*Ukázkový vstup:*

`8 6`

`3 7 2 4 9 1 5 4`

*Ukázkový výstup:*

`5 6`

Když by Plesnivous nakoupil v den 5, nakupoval by uhlí za 1 sestercius, tedy by jich mohl koupit 6. 6 uhlí potom v den 6 prodá každé za 5 sestercií, čímž získá peněžní obnos v hodnotě *6·5=30* sestercií. Vydělal tedy *30-6=24* sestercií, což je pro daný vstup maximální.

</aside>

Toto je zadání první úlohy z první série 38. ročníku KSP-H a jeho originál si můžete prohlédnout na jejich webu na tomto odkaze: [https://ksp.mff.cuni.cz/h/ulohy/38/zadani1.html#task-38-1-1](https://ksp.mff.cuni.cz/h/ulohy/38/zadani1.html#task-38-1-1)

Jedná se o open-data úlohu, tudíž není třeba, abyste vaše řešení slovně sepsali ale pouze naprogramovali a odzkoušely na testovacích vstupech ke kterým odevzdáte výstupy.

Jak jsem tedy při hledání řešení postupoval?

<aside>

**Postup hledání řešení:**

Základem bylo pochopit požadavky zadání a ty si následně na obyčejný papír pro přehled zapsat. Co tedy ze zadání přímo i nepřímo vyplývá?

```latex
V úloze máme za úkol pomoci trpaslíku Plesnivousovi vydělat co nejvíce 
sesterciů a to tak, že abychom nebyly odhaleni, můžeme si dovolit
nakoupit uhlí pouze jednou a v tu správnou chvíli ho následně prodat.

Postřeh ze zadání:
Z fundamentálního principu fungování burzy a času vyplývá, že dny a
ceny uvedených pro ně plynou z přítomnosti do budoucnosti, tudíž
nemůžeme nakoupit v den, který je uveden z pohledu čtení zleva-doprava
blíže právé straně a prodat v den, který je historicky předním!

První řádek vstupu obsahuje dvě hodnoty N a K oddělené mezerou, kde:
N - značí počet dní, u kterých předem víme, jaká bude cena uhlí
K - značí počet sesterciů, kterými trpaslík disponuje
Na druhém řádku je pak zapsaných N hodnot, reprezentujících ceny uhlí 
v jednotlivých dnech, které jsou opět oddělené mezerou.

Formát výstupu budou dvě houdnoty, ta první bude značit den, ve který
má trpaslík uhlí nakoupit a druhá kdy prodat.
DNY SE INDEXUJÍ OD NULY! - to znamená, že pokud je u ukázkového výstupu
první hodnota 5 -> jedná se o šestý den všech N dní vypsaných na vstupu
očíslování dnů      -> 0 1 2 3 4 5 6 7
cena uhlí v ten den -> 3 7 2 4 9 1 5 4

Trpaslík tedy nakoupil 5. den, kdy cena jedná jednotky uhlí byla 1
sestercius (celkem nakoupil 6 jednotek uhlí) a prodal o den později
tedy 6. den kdy hodnota byla 5 sesterciů za jednotku uhlí.

Z toho si můžeme spočítat, jak je i ukázáno v zadání, že výdělek byl
pro tento konkrétní obchod:
(6ks uhlí při 1 sestercius/ks) * (5 sesterciů/ks) - (nákupní cena) = 
= 30 - 6 = 24 sesteriů zisk!
To je nejvyšší možný výdělek, kterého lze dosáhnout.

Kdybychom se pokusili nakoupit např. 4. den(cena 9 sester./ks) a 
prodat 7. den (cena 7 sester./ks) -> neměli bychom ani kapitál pro
koupi 1ks uhlí. 
```

> *Psát si poznatky ze zadání ručně na papír je postup, který osobně všem začátečníkům doporučuji, jelikož jim umožní problematiku formulovat způsobem, který oni sami nejlépe chápou, což jim pomůže v dalších krocích.*
> 

Abychom navrhli tedy efektivní algoritmus, který bude k úspěšnému výsledku potřebovat udělat co nejméně kroků, musíme vycházet z toho nejduležitějšího. A tím je najít úsek směrem zleva-doprava v jednotlivých dnech, ve kterém budeme schopni nakoupit nejlevněji a prodat nejdráž, pokud je to možné.

Nicméně v průběhu plynoucích dnů bude jistě existovat spousta potenciálně nejlepších “dvojic” nákupu a prodeje. Proto už při návrhu algoritmu budeme počítat s tím, že všechny potenciálně nejlepší dvojice je z pohledu efektivity výhodné si pamatovat.

Uvažujme ale, co je pro nás potenciálně nejlepší dvojice. Pokud se zamyslíme, každá potenciálně nejlepší dvojice je ta, kde zisk bude větší než u té předchozí. Takže z toho plyne, že ukládat si dvojici, jejíž výnosnost bude nižší než u předchozí je zbytečné, jelikož to podle zadání nikdy nebude správný výsledek.

Dále nestačí hledat jen dvojice způsobem, kdy najdeme den, ve který je výhodné uhlí koupit a některý z následujících dnů, kdy je výhodné prodat a poté si dvojici uložíme a budeme lepší dvojice hledat zcela znova. Efektivnější bude si v průběhu času a procházení jednotlivých dnů průběžně pamatovat ten den, ve který je nákupní cena nejnižší a pokaždé si k této hodnotě ukládat vždy ten den s nejvyšší cenou. V případě, že narazíme na den, u kterého je cena uhlí doposud nejnižší, aktualizujeme naší potenciálně nejlepší nákupní cenu a den na tento a pro všechny následující dny, které budeme jednotlivě procházet budeme počítat potenciální výdělek s touto nákupní cenou. Opačně v situaci, kdy narazíme na den, který má největší nákupní cenu uložíme tento den spolu s dnem jež se vyskytoval někde předním a jeho cena byla v ten moment nejnižší známá, jako dvojici a pokračujeme, dokud nenarazíme na nejvýhodnější den pro koupi nebo prodej a provedeme stejný proces.

**Ukázkový pseudo-kód algoritmu:**

```latex
Načti N, K
minCena=+∞, minIdx=0
maxCena=0,  maxIdx=0
options=[]

pro i=0..N-1:
  načti cenu c

  # když přijde nová nižší cena (nebo konec), uzavři dosavadní obchod min→max
  pokud ( (i>0 a c<minCena a minCena<=K) nebo i==N-1 ):
    pokud (i==N-1 a c>maxCena a c>minCena): maxCena=c, maxIdx=i
    pokud (minIdx < maxIdx):
      cash = (K/minCena)*maxCena + (K%minCena)
      options.push( min=(minCena,minIdx), max=(maxCena,maxIdx), cash )
      maxCena=0

  # průběžně udržuj nejlepší nákupní cenu a nejlepší prodejní cenu po ní
  pokud (c<minCena a c<=K): minCena=c, minIdx=i
  jinak pokud (c>minCena a c>maxCena): maxCena=c, maxIdx=i

pokud options prázdné: vypiš -1
jinak: vyber option s největším cash a vypiš (minIdx, maxIdx)
```

</aside>

Své naprogramované řešení jsem spustil na všech velikostí testovacích vstupů, které KSP poskytuje a dosáhl jsem plného počtu bodů 11.

Pro ty, kteří si chtějí prohlédnout celý kód v C++, mohou tak učinit prokliknutím skrze následující odkaz: [https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-1-1/KSP-H-38-1-1/main.cpp](https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-1-1/KSP-H-38-1-1/main.cpp)

1. **Zadání úlohy 38-1-2: Bambulus:**

<aside>

Matúšovi se konečně podařilo rozjet jeho kariéru motivačního řečníka. O jeho sérii přednášek „Bambulus: tři pilíře životního štěstí?“ je nebývalý zájem a nezřídka bývají představení vyprodaná. Nově nabytá sláva s sebou však nese jistá úskalí: Matúšovi obdivovatelé se nemůžou shodnout na tom, který z pilířů jeho učení je nejdůležitější, a rozdělili se na tři navzájem rozhádané tábory. Jedni věří, že klíčem ke všemu je *ladění* (harmonie se sebou i okolím), druzí vidí hlavní smysl v *řádění* (následování svého vnitřního dítěte a žití v okamžiku), třetí nedají dopustit na *parádění* (hledání vnitřní i vnější krásy ve všedních věcech).

Tyto rozbroje jsou problém pro Matúšova vystoupení, jelikož příslušníci rozhádaných táborů si odmítají sednout vedle sebe. Po minulém představení, kde kvůli tomu zůstala půlka míst volná, už Matúšovi došla trpělivost. Přicházející diváci prostě dostanou nějaké místo přidělené, a basta. Jenže jak, aby byli pořád všichni spokojení, ale přitom volných míst zbylo co nejméně? Matúš je zaneprázdněn googlením motivačních citátů, a tak tento úkol připadl na vás.

Hlediště je tvořené *N* židlemi umístěnými v jedné řadě. Na začátku je hlediště prázdné a pak do něj po jednom přicházejí diváci. Vaším cílem je navrhnout algoritmus, který dostává události tvaru „právě přišel divák vyznávající 1./2./3. pilíř“ a na každou z nich odpovídá místem, na které si daný divák má sednout. Chceme přitom, aby vedle sebe nikdy neseděli dva diváci vyznávající různé pilíře.

Váš algoritmus je *online:* diváci přicházejí jeden po druhém, a nový divák přijde až potom, co umístíme předchozího. Již usazené diváky nejde přemisťovat.

Kvalitu vašeho řešení budeme hodnotit podle *ztráty* – množství volných míst, které zbývají v okamžiku, kdy už nejde umístit dalšího diváka. Stejně jako u časové složitosti nás zde nezajímá konkrétní číslo, ale pouze asymptotické chování: zdali je volných míst *Θ(N)*, *Θ(√N)*, nebo nějaká jiná funkce v *N*. Počet volných míst vyhodnocujeme na nejhorším možném vstupu. Můžete si představit, že před vchodem stojí Ríša, který Matúšovi nepřeje úspěch, a který dovnitř pouští diváky v takovém pořadí, aby váš algoritmus selhal co nejdříve. Ríša zná zdrojový kód vašeho algoritmu a má opravdu hodně času na vymýšlení co nejzapeklitějšího vstupu.

*Příklad:* Uvažme algoritmus, který každého přicházejícího diváka umístí na co nejlevější použitelné místo. Takový algoritmus nechá až *N/2* míst volných, a to v situaci, kdy se nám přicházejí střídavě vyznavači 1. a 2. pilíře – pak budou na sudých místech sedět diváci a lichá místa budou prázdná. Naopak si jde rozmyslet, že více než *N/2* volných míst nikdy nezůstane. Ztráta tohoto algoritmu je tedy *Θ(N)*.

Cílíme na algoritmus, který v nejhorším případě ponechá *Θ(log N)* míst volných, ale částečné body získáte i za asymptoticky horší závislost na *N* (třeba *Θ(√N)*). Ve vašem řešení nezapomeňte zdůvodnit, proč je jeho ztráta zrovna taková, jaká tvrdíte.

Toto je teoretická úloha. Není nutné ji programovat, [odevzdává](https://ksp.mff.cuni.cz/h/odevzdavatko/) se pouze slovní popis algoritmu. Více informací [zde](https://ksp.mff.cuni.cz/viz/tinfo).

</aside>

Jako druhou ukázku si představíme úlohu tentokrát teoretickou. A i když v zadání píší, že ji není nutné programovat, tak přesto jsem to udělal. Důvod je ten, že slovně popsat viditelný kód je jednoduší, než si jeho představu utvářet pouze v hlavě, obzvlášť v začátcích. Navíc díky tomu můžete předejít spousty nedostatkům, respektive problémům, kterých si všimnete až ve chvíli kdy vaše řešení zkusíte otestovat na vlastních generovaných vstupech splňující požadavky zadání.

Odkaz na originál je zde: 

[https://ksp.mff.cuni.cz/h/ulohy/38/zadani1.html#task-38-1-2](https://ksp.mff.cuni.cz/h/ulohy/38/zadani1.html#task-38-1-2)

Z hlediska náročnosti je tato úloha těžší, a to nejen proto, že je třeba poskytnout slovní popis vašeho řešení, ve kterém musíte uvést i odhad složitostí, ale i náročností samotného způsobu řešení. Pořád se ale řadí mezi ty lehčí, na které můžete v KSP-H narazit.

Ještě před odhalením postupu bych chtěl sdělit, že k této úloze (a k mnoho dalším) mám už od organizátorů obodované moje odevzdané řešení, které také ukážu a čtenářům tak poskytne představu, jak při hodnocení odevzdaných řešení organizátoři přemýšlí.

<aside>

**Postup hledání řešení:**

Stejně jako u předchozí úlohy, i zde je nejlepší si vzít do ruky tužku a papír do kterého si budete dělat poznámky během procházení zadání. Osobně jsem tak postřehl tyto informace:

```latex
1) Máme jednořadé hlediště velikosti N, do kterého budou průběžně
přicházet diváci ze tří skupin.

2) Platí pravidlo, že diváci z rozdílných skupin nesmí sedět vedle sebe
a musí být mezi nimi alespoň jedno místo volné.

3) Podle zadání předem nevíme v jakém pořadí jednotlivých skupin budou
diváci přicházet. Tím pádem se algoritmus vždy musí přizpůsobit dané
situaci a nemůže si rozsazení všech diváků naplánovat předem.

4) Další divák proto bude do hlediště přicházet až ve chvíli, kdy bude
usazen předchozí. Již usazené diváky není možné přemístit.

5) Cílem je usazovat průběžně přicházející diváky tak, aby počet míst,
které jsou volné, byl minimální -> i přesto, že pořadí bude nejhorší
možné pro náš algoritmus (maximální ztráta -> O(log N), ideálně).
```

Při úvaze nad zadáním mi bylo jasné, že nejefektivnější bude diváky nějakým způsobem shlukovat do skupin. Proto jsem se rozhodl pokračovat tak, že jsem si zkusil simulovat na papíře různé způsoby příchodu diváků do jeviště a pokusil se hledat nějaký vzorec, který je v počtu volných míst nejoptimálnější. Tento proces jsem opakoval na různě velkých N.

Po pár simulacích se jeden ze způsobů usazování začal jevit jako doposud nejvýhodnější. Tento způsob fungoval na principu, kdy skupiny (dle zadání budeme jednotlivé příslušníky a skupiny označovat 1./2./3.) a jejich diváky budeme rozsazovat do třech částí jeviště. Skupinu 1. do levé části, skup. 2. do pravé a 3. skup. do středu volného místa mezi dvěma předchozími.

Při pokusu o jiný způsob rozsazování nebylo zaručeno, že všechny skupiny mají stejné podmínky pro rozsazení a ve chvíli kdy přijde na řadu nejhorší možná sekvence diváků, jistě by tohoto znevýhodnění bylo zneužito a řešení by nebylo optimální.

Když jsem se tento způsob rozmísťování rozhodl podrobit nejhoršímu vstupu, který jsem dokázal vymyslet, vyskytl se zádrhel jež jsem musel vyřešit. Ten nastával ve chvíli, kdy jsem na jeviště prvně vyslal tři zástupce kde každý byl z jiné skupiny (např. 1./2./3.) a poté jsem začal vysílat všechny další zástupce stejné skupiny sídlící buď na levé nebo pravé straně hlediště (v tomto příkladě z 1. skupiny).

Problém spočíval v tom, že jakmile příchozí divák z 1. sk. dosáhl diváka 3. sk., který seděl ve středu, nebylo jasné, kam toho z 1. sk. usadit. Zda diváka usadit o jedno místo za toho z 3. sk., nebo někam jinam.

Protože když jsem se pokusil diváka z 1. sk. usadit hned za toho ve středu z 3. sk. okamžitě bylo vidět, jak by se tento způsob usazování dal “zneužít”. Jednoduše by poté stačilo až do konce vysílat střídavě diváky z 1. a 3. sk., což by způsobilo potřebu mezi každým divákem nechat jedno volné místo. Tím by ztráta byl podobná jako v příkladu ze zadání: *Θ(N).*

Dobrou zprávou je, že řešení tohoto problému je jednodušší než se zdá a prakticky jím je samotná podstata rozmísťování jednotlivých skupin na začátku. Konkrétně to, že diváky prvních dvou skupin, které přišly se snažíme shlukovat na opačných stranách hlediště (v této situaci se to rovná volnému místu mezi již částečně rozsazenými skupinami) a diváky, jejichž skupina na hlediště přišla až jako “poslední” usazujeme do středu.

Tuto problematickou situaci si můžeme představit způsobem, kde ve chvíli kdy divák 1. sk. nemůže být usazen ke své skupině jelikož už dosáhla středu osídleným divákem z 3. sk., jedná se o stejnou situaci ve které jsou obě strany hlediště už osídlené 1. a 2. sk. a přichází divák z 3. sk. Toho podle principu také nemůžeme usadit vedle diváků z 1. sk. jelikož by pouhé střídání 1./3./1./3… zapříčinilo lineární ztrátu. Proto stejným způsobem budeme nahlížet na diváka 1. sk. jež dosáhl diváka 3. sk.

V tomto smyslu bude princip usazování pro diváka z 1. sk. platit stejně jako na začátku pro 3. sk. → tedy budeme jej usazovat do středu volného místa jež v této problematické situaci, kterou řešíme bude právě střed mezi diváky 3. sk. (levá strana volného místa) a 2. sk. (pravá strana). 

Obecně řečeno: ***Diváci té postranní skupiny, která dosáhne skupiny sídlící na středu, se nově budou usazovat na střed volného místa mezi dosaženou prostřední skupinou a skupinou usazující se na opačné straně. To platí pro skupiny ze všech stran, liší se pouze ve směru, kam se budou usazovat.***

Když jsme tento zádrhel vyřešili, stačilo už pak vymyslet, jakým směrem budeme usazovat ty příchozí diváky, jejichž skupina se aktuálně má usazovat na střed volného místa. Odpověď: Divák prostřední skupiny se usadí na tu stranu středu u které je více volného místa od posledního diváka postranních skupin.

</aside>

Tato úloha spočívala hlavně v řešení tohoto problému. Jakmile jsme tento problém → pravidla pro rozsazování diváků, nalezli, stačilo už jen jej popsat více programátorským postupem na úrovni “stručně shrnutého fungování programu”, dodat odhad ztrátové složitosti i sekundárně paměťové a časové a dle požadavků zadání navrhnout i ten nejhorší možný vstup pro naše řešení. Vše následně samozřejmě obhájit, že tomu tak skutečně je.

Osobně, i když to nebylo třeba, jak jsem výše uvedl, jsem úlohu taktéž naprogramoval abych měl utvrzení, že mé řešení funguje.

Co se bodového ohodnocení organizátory týče, tak jsem dostal jedenáct bodů z dvanácti, kde hlavní výtkou byl nedostatečný důkaz, že nejhorší vstup, který jsem uvedl je skutečně nejhorší.

Originál slovního popisu řešení, které jsem organizátorům odevzdal, jejich ohodnocenou verzi, kterou mi vrátili i zdrojový kód si můžete prohlédnout na odkazech:

Odevzdaná verze:

[https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-1-2.pdf](https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-1-2.pdf)

Ohodnocená:

[https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-1-2 (1).pdf](https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-1-2%20(1).pdf)

1. **Zadání úlohy 38-1-3: Mediánový poddaný:**

<aside>

Za sedmero horami a sedmero řekami vládl moudrý král Ríša. Ten si udržoval svoje rádce, kteří mu každoročně počítali a plánovali chod království. Nicméně aby rádci mohli připravit své plány, potřebovali by sehnat reprezentativního poddaného…

Ríšovo království je rozděleno na *K* krajů. Protože Ríša má rád pravidelnost, v každém kraji je právě *N* poddaných, kde každý poddaný má unikátní celočíselnou pracovitost *Pi* (*1 ≤ Pi ≤ Pmax*). Rádci by chtěli sehnat poddaného, pro něhož se počty poddaných s vyšší pracovitostí a s nižší liší nejvýš o 1. Tedy poddaného, který je mediánem všech poddaných v celém království.

Nicméně Ríšovo království je velmi velké a rozlehlé, takže se záznamy o pracovitosti poddaných udržují pouze v krajích, kde žijí. Ríša ale může vyslat svého věrného posla s *konstantně* (Konstantně dlouhá zpráva smí obsahovat jen konstantně mnoho „rozumně velkých“ čísel – čísel velkých nejvýše polynomiálně k číslům na vstupu. Délka zprávy v bitech tedy musí být v *O(log K + log N + log Pmax)*.) dlouhým rozkazem do jednoho z krajů. Tam může zkonzultovat archivy a vrátit se s *konstantně* dlouhým výsledkem. Mezi vysláním posla a jeho návratem uplyne vždy jeden týden. Na základě všech předchozích výsledků může poté Ríša posla vyslat do dalšího kraje.

Například můžeme poslat posla:

- Zjistit nejmenší pracovitost v daném kraji.
- Zjistit počet poddaných s pracovitostmi mezi *A* a *B*.

Ale nemůžeme:

- Vyslat ho se seznamem největších pracovitostí v každém kraji, neboť rozkaz je dlouhý *Θ(K)*.
- Nechat si poslat seznam *N/2* nejméně pracovitých poddanných v kraji, neboť výsledek je dlouhý *Θ(N)*.

Pomozte Ríšovi zjistit medián pracovitosti. Vaše řešení budou hodnocena primárně podle celkového počtu vyslání Ríšova věrného posla. Při návrhu algoritmu předpokládejte, že *K* je řádově menší než *N*, a to je řádově menší než *Pmax*.

Toto je teoretická úloha. Není nutné ji programovat, [odevzdává](https://ksp.mff.cuni.cz/h/odevzdavatko/) se pouze slovní popis algoritmu. Více informací [zde](https://ksp.mff.cuni.cz/viz/tinfo).

</aside>

Další teoretická úloha první série u které jsem strávil asi nejvíce času ze všech. Náročnost této úlohy v porovnání s předchozími byla znatelně vyšší. Opět i zde jsem své řešení ještě předtím než jsem ho slovně popsal, naprogramoval. A kdybych měl svůj výsledek zhodnotit, tak si myslím, že jsem neodvedl tu nejkvalitnější/nejstrategičtější práci. Zbytečně jsem kvůli zajímavému nápadu, jakým způsobem úlohu řešit, strávil nesmyslně mnoho času, který jsem si ubral pro řešení ostatních úloh. A to i přesto, že jsem si byl vědom toho, že v bodovém ohodnocení můj způsob nebude hrát velkou roli a chtěl jsem jej prostě vyzkoušet.

I kvalita naprogramovaného řešení nebyla nejlepší. Kód, co se týče správného fungování, bezpečnosti a jeho čitelnosti a srozumitelnosti nebyl adekvátní. Přesto bych tuto úlohu zde chtěl rozebrat.

Originální zadání zde: [https://ksp.mff.cuni.cz/h/ulohy/38/zadani1.html#task-38-1-3](https://ksp.mff.cuni.cz/h/ulohy/38/zadani1.html#task-38-1-3)

<aside>

**Postup hledání řešení:**

Poznatky ze zadání:

```latex
1) Království je rozděleno do K krajů. V každém kraji se nachází přesně
N poddaných.

2) Všichni poddaní mají nějakou unikátní pracovitost Pi napříč celým 
královstvím (ne pouze v kraji -> nemohou existovat poddaní se stejnou Pi)) s rozsahem (1<=Pi<=Pmax).

3) Pravidla pro vyslání posla: může být vyslán pouze do jednoho kraje zároveň.
Jakmile se vrátí, může být vyslán do dalšího.

4) Maximální délka zprávy (objem informací, které může sebou nést 
do krajů i zpět je konstantně dlouhá -> O(log K + log N + log Pmax) bitů.

5) Cíl: najít poddaného, který je mediánem všech poddaných v celém kraji.
Pokud je celkový počet poddaných lichý, mediánový poddaný bude ležet přímo ve středu.

6) V případě sudého počtu mohu jako výsledek vybrat poddaného, jehož poloha bude o jednoho
poddaného blíž nebo naopak dál od středu.

7) Efektivita algoritmu se posuzuje podle celkového počtu vyslání posla.
8) Předpoklady pro vstup: K je řádově menší než N, které je řádově menší
než Pmax.
```

Ze zadání plyne, že musíme najít efektivní algoritmus, který nám pomůže najít toho poddaného, který je mediánem všech v celém království.  Hlavní zádrhelem je omezená délka zprávy, která nám zakazuje si jednoduše vzít sebou celý archiv ze všech krajů a setřídit je do jednoho pole ve kterém bychom medián nalezli jednoduše.

Organizátoři chtějí, abychom dokázali najít mediánového poddaného s minimem informací. Je dobré se vždy takto zamyslet nad hlavní myšlenkou celé úlohy, která nám pomůže správně identifikovat problém a najít rychleji lepší řešení.

Jak jsem už napsal, tato úloha nebyla tou nejlépe vyřešenou. Nicméně myšlenka řešení je velice zajímavá a efektivní.

Při hledání řešení jsem zjistil, že budu muset získat určitý typ informací a ten přesně zpracovat. Odhad, který z nich následně získám v dalším kole porovnám s archivy a zjistím, jak moc velkou odchylku jsem při odhadu udělal.

Stejně jako ve všech předchozích řešeních jsem si na papír vytvořil ukázkové vstupy dle zadání (velice krátké → max. 20 poddaných v království a 4-5 krajů, ***Pmax*** okolo 200). Chvíli jsem zkoušel různě simulovat, jak se pracovitost poddaných v jednotlivých krajích a globálně chová.

Přitom jsem zjistil, zásadní věc. Když totiž v každém kraji získám hodnotu poddaného, který je lokálním mediánem svého kraje a všechny je seřadím podle pracovitosti, tak se ***GLOBÁLNÍ MEDIÁNOVÝ PODDANÝ CELÉHO KRÁLOVSTVÍ MUSÍ NACHÁZET HODNOTOVĚ MEZI NIMI!.***

Toto byl ten nejdůležitější poznatek, který jsem v úloze nalezl. A který jsem využil pro efektivní řešení. Díky tomu jsem totiž hned po ***K*** vysláních posla byl schopen získat velmi zůžený rozsah, ve kterém se hledaný poddaný nachází.

Ještě bych chtěl dodat, že jsem tak trochu počítal s tím, že poddaní jsou v každém archivu kraje setříděni podle pracovitosti vzestupně (pro ulehčení časové složitosti). A jelikož to není explicitně uvedeno v zadání, řešitel by s tím neměl počítat na 100 %. Proto jakýkoliv předpoklad, který sami vyvodíte a není zaručený, musíte uvést do svého řešení, aby s tím organizátoři při posuzování toho, jak úlohu chápete, s tím počítali. Ideálně případně i uvést,  jak byste konkrétní problém vyřešili, kdyby váš předpoklad neplatil. 

V této úloze jsem konkrétně v situaci, kdyby archivy nebyly setříděny, uvedl, že by posel pokaždé, když do kraje dorazí, archivy setřídil. To by se mohlo jevit jako neefektivní, ale jelikož je algoritmus posuzován z hlediska počtu vyslání posla do krajů, tak úkony, které dělá v samotném kraji, ať už jsou jakkoliv neefektivní v úloze nejsou nikterak zohledňeny.

Ale zpátky k řešení. Když jsem teda učinil tento objev, tak jsem ještě musel vymyslet způsob, jak tyto data zpracovat a zkrátka odhadnout co nejblíže hodnotu pracovitosti, která je rovna mediánu. Vytvořil jsem jednoduchý program, který simuloval kraje, jejich poddané v nich, kteří byli reprezentováni unikátní číslenou hodnotou, jež byla jejich pracovitost ***Pi (***celý vstup prakticky byl 2D pole, u kterého první dimenze představovala kraje a ta druhá jejich poddané). Simuloval jsem také vysílání posla u kterého jsem počítal počet vyslání.

Při každém vyslání posel z každého kraje získal hodnotu poddaného, která byla mediánem konkrétního kraje. Pro odhad hodnoty pracovitosti, jež je mediánem celého království jsem se rozhodl pro jednoduchý aritmetický průměr ve kterém jsem součet všech pracovitostí vydělil počtem krajů.

Když jsem odhad získal, zbývalo přijít na to, jak zjistit odchylku odhadu od požadovaného mediánu. Pro vyřešení situace bylo třeba se zamyslet nad tím, jak medián obecně funguje. O mediánu víme, že je polohově závislý, respektive leží ve středu seřazené řady. Zanedbatelný rozdíl bude v případě, kdy je počet poddaných lichý nebo sudý. V prvním případě je správným řešením přesně jeden poddaný, v tom druhém můžeme vybrat libovolného z obou, kteří leží na středu.

Napoví nám také zadání, kde přímo píší, že počet poddaných od mediánu pro lichý počet je na obou stranách stejný (sudý o 1 menší/větší). Můžeme náš odhad v dalším kole vyslání posla porovnat se všemi poddanými v každém kraji a uchovat si hodnoty, které budou dvě čísla obsahující celkový počet poddaných, kteří byli podle ***Pi*** větší než odhad a počet těch, kteří byly menší.

Z každého kraje pak tyto informace sečteme a jednoduše porovnáme, zda u lichého počtu není počet obou hodnot stejný nebo pro sudý případ o 1 menší/větší. Pokud není, znamená to, že jedno číslo bude o určitý počet vyšší. A na tu stranu se musíme vydat.

Posledním krokem pak byla změna metody pro výpočet odhadu. Jelikož se může stát následující situace, kde jednotlivé čísla představují seřazené poddané podle ***Pi*** z celého království = {1,2,3,4,5,6,7,4221,57745}. 

Jak můžete vidět, tento příklad krásně ilustruje, jak může být způsob odhadu mediánu pomocí aritmetického průměru naivní. Správným řešením je poddaný s hodnotou 5, který je mediánem. Zkusme si tedy pomocí aritmetického průměru zkusit získat odhad:

$$
	\begin{aligned}K &= 3,\; N = 3,\; P_{\max} = 57745 \\
K_1 &= \{1,3,5\}\\
K_2 &= \{2,6,7\}\\
K_3 &= \{4,4221,57745\}\\
m_1 &= 3, m_2 = 6, m_3 = 4221\\
\bar{x} &= \frac{3+6+4221}{3}=\frac{4230}{3}=1410
\end{aligned}
$$

$K_1,K_2,K_3$ jsou jednotlivé kraje obsahující své poddané. Hodnota průměru, která nám vyšla jak vidíte je extrémně vychýlena. Proto bylo třeba nalézt lepší způsob, jak odhad získat. Každého poddaného je totiž nutné brát s určitou váhou a zabránit extrémům znepřesnit výsledek. K tomu jsem využil CDF, konkrétně její váženou verzi. Ta mi umožnila ze získaných hodnot a počtu poddaných mezi nimi zajistit plynulé stoupání ***Pi*** bez ovlivnění extrémy.  K tomu se ale pojí pak opětovná kontrola správnosti odhadu, kterou bylo nutné rozšířit o získání počtu všech poddaných od levé strany k odhadu (vestupně setříděných). Změnit typ informací ohledně hodnot poddaných (namísto získání pouze lokálních mediánů z krajů jsem vždy také zjistil nejvyšší i nejnižší hodnotu ve které se medián nachází a zároveň jsou nejblíže → min. hodnota ze všech mi umožní spočítat, kolik poddaných se mezi ní a odhadem nachází).

Díky CDF, více hodnotám poddaných včetně jejich pozici v číselné řadě (hlavně počet poddaných od nejnižší pracovitosti k odhadu) jsem byl schopen získat už po pár vyslání správný výsledek. A to proto, jelikož CDF nejen, že zmapuje míru stoupání pracovitosti podle hodnot a jejich vzájemné pozici, ale také umožní, pokud známe vzdálenost v počtu poddaných od nejnižší hodnoty určit přesný a rovnoměrný odhad. A vzdálenost získat umíme. Víme, že medián se nachází na pozici $\frac{K\cdot N}{2}$, také víme počty poddaných menších i větších než náš odhad. Když odečteme od pozice mediánu jednu z hodnot, získáme vzdálenost od odhadu k mediánu v počtu poddaných mezi. Pak už stačí tuto vzdálenost předat CDF, která nám vrátí nový odhad s větší přesností. Toto celé opakujeme dokud medián nenalezneme (hodnota poddaného, u nějž jsou počty menších/větších ***Pi*** stejné nebo +- 1).

</aside>

Odevzdané řešení:

[https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-1-3.pdf](https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-1-3.pdf)

Ohodnocené:

[https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-1-3 (1).pdf](https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-1-3%20(1).pdf)

Pokud chcete, prohlédněte si celé odevzdané řešení. Jak už bylo zmíněno, není nejlepší, hlavně, co se strukturovanosti slovního popisu týče. Příliš času jsem strávil programováním algoritmu přestože to organizátoři nepožadovali.

Bodové ohodnocení, které jsem za tuto úlohu dostal, nebylo špatné → 12/14.

1. **Seriálová úloha 38-1-S: Hoďte si kostkou**

### Popis tématu - Úvod do pravděpodobnosti:

<aside>

V letošním seriálu se spolu vydáme do říše *pravděpodobnostních algoritmů.* To jsou takové, které si během výpočtu „hází kostkou“ – tedy generují nějaká náhodná čísla. To dokáže být překvapivě užitečné. Často jsou takové algoritmy daleko jednodušší, nebo dokonce rychlejší (aspoň v průměru) než jejich determinističtí (nenáhodní) příbuzní.

Abychom uměli o náhodě uvažovat, bude se nám hodit matematická *teorie pravděpodobnosti.* O té už v KSPčku máme [kuchařku](https://ksp.mff.cuni.cz/viz/kucharky/pravdepodobnost). Před řešením úloh si ji prosím přečtěte.

Dnešní díl seriálu se bude týkat generování náhody. Budeme používat:

- *Poctivé mince* – ty generují náhodný bit `0` nebo `1` tak, že obě možnosti mají stejnou pravděpodobnost *1/2*.
- *Obecné mince* – ty generují `1` s nějakou obecnou pravděpodobností *p* a `0` s pravděpodobností *1-p*.
- *Poctivé kstěnné kostky* – na nich padají čísla od *0* do *k-1*, všechna se stejnou pravděpodobností *1/k*. Poctivá mince je tedy ekvivalentní s poctivou 2-stěnnou kostkou. Na konkrétním rozsahu hodnot samozřejmě nezáleží, stejně dobře si můžeme pořídit kostku třeba s čísly *1* až *k* nebo *5* až *k+4*.
- *Obecné kstěnné kostky* – jednotlivá čísla mají pravděpodobnosti *p0*, *p1*, …, *pk-1*, přičemž *p0 + … + pk-1 = 1*.

Stačí ovšem mít k dispozici libovolnou kostku nebo minci, a hned umíme simulovat všechny ostatní. Nejdřív dokážeme, že pomocí poctivé mince dokážeme simulovat poctivou *k*-stěnnou kostku pro libovolné *k≥ 2*. Simulací myslíme algoritmus, který bude mít k dispozici funkci na hod mincí a jeho výstupem bude hod kostkou.

Kdyby počet stěn *k* byl mocnina dvojky *2b* pro nějaké *b > 0*, stačilo by *b*-krát hodit mincí a získané bity přečíst jako číslo ve dvojkové soustavě. Takto budou mít všechna čísla od *0* do *k-1* stejnou pravděpodobnost *1/2b = 1/k*. (Například pro *k=8* bude *b=3*, hodíme mincemi `101` a výsledek bude 5.)

Pokud *k* není mocnina dvojky, najdeme si nejbližší mocniny dvojky, tedy *2b-1 < k < 2b*. Pak stejně jako předtím *b*-krát hodíme mincí, a tím získáme rovnoměrně náhodné číslo *x* od *0* do *2b-1* (*rovnoměrně náhodné* znamená, že všechny možnosti jsou stejně pravděpodobné).

Je-li *x<k*, máme vyhráno a oznámíme výsledek *x*. V případě *x≥ k* se nabízí oznámit *x mod k*, ale pozor, to není rovnoměrné: například pro *k=5* je *b=3* a výsledek 0 oznámíme jak pro hody `000` (*x=0*), tak pro `101` (*x=5*). Výsledek 0 má tedy pravděpodobnost *2/8 = 1/4* místo požadované *1/5*.

Lepší je v případě *x≥ k* prostě na všechno zapomenout a házet znovu. Když i napodruhé bude *x≥ k*, zkusíme to potřetí atd. Tím zajistíme rovnoměrnou náhodnost, ale v nejhorším případě selže *každý* pokus a algoritmus se nikdy nezastaví. Dokážeme ovšem, že průměrný počet hodů mincí (a tím i průměrná časová složitost) jsou konečné.

Spočítejme pravděpodobnost, že se pokus podaří (tedy bude *x < k*). To nastane v *k* případech z *2b*, takže pravděpodobnost úspěchu bude *p = k / 2b*. Jelikož *k > 2b-1 = 2b / 2*, bude *p > 1/2*. Podle lemmatu o džbánu z naší kuchařky vychází střední hodnota počtu pokusů do prvního úspěšného *1 / p < 2*. Každý pokus spotřebuje *b* hodů mincí, takže náš algoritmus potřebuje v průměru (ve střední hodnotě) méně než *2b* hodů mincí. To je nejvýše *2 log2 k + 2*, jelikož *b ≤ log2 k + 1*. Pokud nám stačí asymptotický odhad, je to prostě *O(log k)* hodů v průměru.

To je poměrně typická situace: náš pravděpodobnostní algoritmus je v průměru rychlý, ale v nejhorším případě velmi pomalý – máme-li smůlu, dokonce se nemusí zastavit. Podobně Quicksort s náhodnou volbou pivota, zmiňovaný v kuchařce, má průměrnou složitost *O(n log n)*, ale v nejhorším případě kvadratickou.

</aside>

### Úkoly:

<aside>

**Úkol 1 [4b]**

Ukažte, jak pomocí poctivé *k*-stěnné kostky simulovat poctivou *ℓ*-stěnnou.

**Úkol 2 [3b]**

Ukažte, jak pomocí obecné mince simulovat poctivou. Pravděpodobnost jedničky na obecné minci ovšem neznáte.

**Úkol 3 [4b]**

Ukažte, jak pomocí poctivé mince simulovat obecnou. Pravděpodobnost *p* jedničky na obecné minci dostanete na vstupu. Je to nějaké reálné číslo mezi 0 a 1. Můžete předpokládat, že váš počítač umí provádět aritmetické operace s reálnými čísly v konstantním čase.

**Úkol 4 [4b]**

Dokažte, že neexistuje algoritmus, který by pomocí poctivé mince simuloval poctivou 3-stěnnou kostku, a měl konečnou časovou složitost v nejhorším případě.

Vaše řešení úkolů 1–3 by mělo obsahovat algoritmus, důkaz správnosti (tedy že všechny možné výsledky mají požadované pravděpodobnosti) a výpočet složitosti v nejhorším případě a v průměru.

</aside>

Zadání na odkazu zde: [https://ksp.mff.cuni.cz/h/ulohy/38/zadani1.html](https://ksp.mff.cuni.cz/h/ulohy/38/zadani1.html)

Jak je vidět, seriálová úloha se od ostatních lehce liší. Namísto zadání, které popisuje jeden konkrétní problém, se zde v první řadě nachází základní informace o tématu, kterým se seriál zabývá a pak hned několik úkolů, které jsou bodované samostatně.

Jelikož je úkolů více, jejich obtížnost je nižší než u normálních úloh a pokud si s daným úkolem nevíte rady, můžete ho přeskočit a nepřijdete o významný počet bodů. 

Způsob odevzdávání seriálu se může někdy lišit. Většinou se buď odevzdává .pdf soubor se slovním popisem řešení úkolů nebo .zip pokud požadují odevzdat i zdrojové kódy.

<aside>

**Postup hledání řešení:**

Po přečtení zadání je vidět, že úloha je více zaměřená na teorii a potřebu dodatečně studovat její tematické zaměření. Rozhodně proto vždy ať už v seriálu nebo obecně u všech typů úloh, pokud doporučují v zadání si přečíst zdroje, na které přímo odkazují, měli byste tak učinit. Nezřídka totiž řešení konkrétního úkolu/problému se ve studijních materiálech nachází. Osobně jsem u této úlohy musel studovat téma i u externích zdrojů, jelikož byl jejich výklad pro mě nedostačující. A v situaci, kdy řešiteli informace uvedené nestačí, je dobré studovat dodatečně všude, kde to jen půjde.

Prakticky teprve zde jsem si naplno uvědomil rozdíl mezi tím „napsat algoritmus“ a „umět ho obhájit“. U open-data úloh se často dostanu pouze k tomu, že je napíšu, otestuju a když to sedí na vstupech, mám hotovo. Tady ale chtěli u úkolů 1–3 vždy:

- algoritmus (co přesně dělám krok po kroku),
- důkaz správnosti (proč to dává přesně ty pravděpodobnosti),
- složitost v nejhorším případě **a** průměru.

Zádrhele, které mě u toho reálně brzdily, byly matematické důkazy – musel jsem si dostudovat, jak se takové důkazy alespoň v “přijatelné formě” píšou, a skutečně doložit, že to, co tvrdím tak funguje. A následně složitost u pravděpodobnostních algoritmů – hlavně ten detail, že i když to běží v průměru rychle, v nejhorším případě se to klidně nemusí zastavit (a to je úplně jiný typ uvažování než u běžných deterministických algoritmů). To se mi projevilo hlavně v Úkolu 1, kde jsem původně zjednodušil složitost až moc naivně.

**1. Úkol:**

Zde bylo úkolem pomocí k-stěnné kostky simulovat l-stěnnou (obě poctivé). K-stěnnou kostku pomocí poctivé mince simulujeme, jak už v zadání je vysvětleno, způsobem, kdy házíme b-krát mincí, kdy  $b=\lceil log_2k\rceil$ krát mincí a generujeme bity. Pokud je číslo v decimální soustavě větší jak $k$ házím znovu jinak číslo vrátím jako platný hod.

Zde je možné si uvědomit, že stejným přístupem, kterým pomocí mince generujeme hod kostkou, můžeme využít k-stěnnou kostku pro simulování l-stěnné kostky. U mince je pravděpodobnost dvou jevů 50 %. Zde můžeme situaci namodelovat tak, abychom polovinu všech možných výsledků kostky uvažovali jako jeden elementární jev mince → první polovina všech stěn → 1, druhá polovina → 0. V případě, že je počet $k$ lichý, tak prostřední hodnotu zahodím a házím znovu (nezapočítám ji).

Pro sudé $k$ platí:

hod ≤ $\frac{k}{2}$ → vrátím 0

hod > $\frac{k}{2}$ → vrátím 1

Pro liché:

hod < $\frac{k}{2}$ → vrátím 0

hod > $\frac{k}{2}$ → vrátím 1

hod = $\frac{k}{2}$ → nezapočítám a hodím znovu

Poctivost zajišťuje poctivost mince. Jelikož každé číslo k-stěnné kostky má stejnou pravděpodobnost, tudíž polovina všech spodních hodů bude míst stejnou pravděpodobnost jako ta horní. Pro liché $k$ střední hodnotu zahodím abych tuto rovnost neporušil.

Když jsem odhadoval asymptotickou časovou složitost mého řešení, udělal jsem velkou chybu, když jsem tvrdil, že je $O(log_2k)$. Nejen, že jsem zde nezapočítal operaci s řetězci (počítal jsem s konstantní složitostí), které jsem využíval ale také fakt, že jelikož prostřední hodnotou pro liché $k$ zahazuji, bude v nejhorším případě algoritmus běžet do nekonečna a budou padat samé střední hodnoty.

</aside>

Řešení zbylých úloh popisovat zde nebudu, jelikož jsou stejné myšlenky a na odkazech zde:

Odevzdaná verze:

[https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-1-S (1).pdf](https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-1-S%20(1).pdf)

Ohodnocená:

[https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-1-S (2).pdf](https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-1-S%20(2).pdf)

Asi nejtěžší úloha pro využití matematický důkazů k obhajobě vlastního řešení. Bodově jsem si vedl docela dobře a získal 13/15.

1. **Zadání úlohy 38-2-1: Všechny cesty vedou přes Řím**

<aside>

Uvažme svět, kde celou společnost řídí skrytá organizace bohatých slonů (hippoteticky). Tahle organizace se doslechla, že se slézají hroši v Brně na Velké Programovací Konferenci. Toho by se jistě dalo využít pro zbohatnutí! Bohatý slon = šťastný slon!

Víme, že nejvíce hrochů jede do Brna z Kolína (tam se asi potkali, kdo ví…). Chceme najít město, kam umístit závoru se slonem, který bude vybírat peníze za vstup dovnitř. Jenže hroši jsou mazaní jako liška, rychlí jako jaguár a chytří jako Medvěd, tedy se vyhnou podporování sloní organizace jakkoliv to jen půjde.

Proto musíme závoru umístit do města, přes které hroši určitě projedou, ať chtějí, nebo ne. Jaká města připadají v úvahu? Jinými slovy, vaším úkolem je najít všechna města, která jsou na *všech cestách* z Kolína do Brna, aby se jim nedalo vyhnout. Nezapomeňte svoje řešení pořádně zdůvodnit.

Mapa je zadaná jako orientovaný graf, kde města reprezentují vrcholy.

</aside>

V tomhle zadání se po nás chce najít všechna „nevyhnutelná“ města: taková, přes která hroši musí projet na každé cestě z Kolína do Brna. Náročnost nebyla velká a funkční řešení za méně bodů bylo následující:

<aside>

**Postup hledání řešení:**

Šel jsem na to co nejpřímočařeji:

**zkusím postupně zakázat každý vrchol a pokaždé ověřím, jestli se stále dá dostat z Kolína do Brna.** Pokud po „zakázání“ vrcholu `v` už do Brna dojít nejde, znamená to, že bez `v` neexistuje žádná cesta → tedy `v` musí být na všech cestách (jinak by existovala cesta, co se mu vyhne).

K ověřování dosažitelnosti používám BFS (prohledávání do šířky), jen s tím rozdílem, že jeden vybraný vrchol má stav `BLOCKED` a BFS ho ignoruje (ani do něj nevstoupí, ani z něj nepokračuje dál).

Toto byl celý můj postup, určitě existují i složitější a hlavně efektivnější metody, jak toho dosáhnout, ale ty jsem neprozkoumával.

Složitostně byl pak algoritmus kvadratický, protože samotný BFS algoritmus, který prochází celý graf má časovou složitost $O(V+E)$, kde $V$ je počet vrcholů a $E$ je počet hran, a já zakážů celkem $V$ vrchoů a pokaždé BFS spustím, bude výsledek $O(V(V+E))$

</aside>

Jak je vidět myšlenka řešení je triviální, jeho impementace stejně tak. Vzhledem k tomu jsem od organizátorů za úlohu dostal 7/12.

Odevzdané řešení zde:

[https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-2-1.pdf](https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-2-1.pdf)

Ohodnocené:

[https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-2-1 (1).pdf](https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-2-1%20(1).pdf)

1. **Zadání úlohy 38-2-3: Opisování**

<aside>

Petr má poslední dobou plné ruce práce. Spousta lidí si chce narychlo zařídit řidičský průkaz, aby mohli jet na Velkou Programovací Konferenci v dalekém Brně, takže má jeho autoškola rekordní počet *N* studentů. Všichni jeho studenti ale posledních pár týdnu veškerý volný čas věnovali přípravě na konferenci, takže se na rychle se blížící závěrečný písemný test skoro vůbec neučili. Rozhodli se tedy, že budou podvádět.

Petr je toho názoru, že by školní prostředí mělo být co nejpodobnější praxi. Proto své studenty nechává při zkouškách sedět na silnici. Všichni studenti sedí v jedné řadě a dívají se stejným směrem – po směru silnice. Každý student (až na prvního) vidí do testu studenta sedícího před ním. Pokud na nějakou otázku student nezná odpověď, tak ji opíše od studenta sedícího před ním, pokud ten student odpověď zná, nebo ji od někoho také opsal.

Závěrečný test se skládá z *M* otázek. Petr je přísný učitel, nechá proto projít jen studenty, které zodpoví správně všechny otázky. Také chce své studenty za jejich opisování potrestat, rád by tedy určil zasedací pořádek tak, aby jich prošlo co nejméně. Využil tedy svou schopnost čtení mysli, aby zjistil, kteří studenti znají odpověď na kterou otázku. Pomůžete mu?

Na vstupu dostanete čísla *N* a *M* a tabulku jedniček a nul o velikosti *N × M*, která pro každou dvojici studenta a otázky obsahuje informaci o tom, jestli na danou otázku daný student zná odpověď. Vaším úkolem je vypsat takové pořadí studentů, aby po opisovaní mělo plný počet bodů co nejméně studentů. Petr si chce být jistý, že studentů projde opravdu co nejméně, je tedy **nezbytné**, abyste o vašem algoritmu důsledně dokázali, že opravdu vždy vyprodukuje optimální řešení.

![image.png](%C5%98e%C5%A1en%C3%AD%20Koresponden%C4%8Dn%C3%ADho%20semin%C3%A1%C5%99e%20z%20programov%C3%A1n%C3%AD%20hl/image.png)

</aside>

<aside>

**Postup hledání řešení:**

Předtím, než mě napadlo samotné jádro řešení jsem zkoušel na papíře různé způsoby řazení a uspořádání měnit podle všech různých úloh, které studenti nevědí. Po chvilce ale bylo vše primitivně jasné.

U této úlohy je totiž klíčové si nejdřív úplně přesně ujasnit, co opisování udělá se „znalostmi“ studentů v řadě. Jakmile jsem si to přepsal do tabulky, celé se to zredukuje na jednu jednoduchou myšlenku: **student na pozici** $i$ **po opisování umí přesně to, co uměl kdokoliv před ním (včetně jeho samotného).**

Tudíž nemělo cenu hledat nějaké optimální kombinace studentů, které bych uspořádal podle více, než jedné hodnoty → tou hodnotou je počet studentů, kteří neví danou otázku. **Jednoduše jsem pak usadil první ty, kteří nevěděly tu nejvíce nevěděnou otázku.** To je celé, žádné další problémy v úloze nebyly.

</aside>

Tato úloha byla velice lehká a dostal jsem plný počet bodů 11/11.

Celé odevzdané řešení zde: 

[https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-2-3.pdf](https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-2-3.pdf)

Ohodnocené:

[https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-2-3 (1).pdf](https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-2-3%20(1).pdf)

1. **Zadání úlohy 38-2-4: Zákeřná parkovací místa:**

<aside>

Sára jela do Brna na Velkou Programovací Konferenci. Našla si tam hezké ubytování v hotelu HippoSleep, ale bohužel bylo parkoviště plné, takže musela zaparkovat na vedlejším parkovišti nedaleko hotelu. Tato parkoviště bylo poměrně zvláštní. Všechna parkovací místa byla v jedné řadě za sebou a každé místo bylo označené nějakým přirozeným číslem (včetně nuly). Dokonce bylo i možné, že některá místa měla stejná čísla!

Sára byla po své dlouhé cestě tak unavená, že si těchto zvláštností všimla až další den ráno, když si uvědomila, že si nepamatuje, kde zaparkovala své auto. Navíc jsou teď všechna místa obsazená auty, které vypadají totožně jako její a také všechna překrývají čísla na parkovacích místech. Sára chvíli panikařila, ale pak si vzpomněla, že číslo označující její parkovacího místa je větší nebo rovno než čísla na obou sousedních parkovacích místech. Pro parkovací místa na okrajích předpokládáme, že vedle nich se nachází pomyslné místo označené nulou.

Aby našla své parkovací místo, Sára prochází řadou parkovacích míst a kouká se pod auta. Přitom ale nechce pod auta koukat příliš dlouho, protože má na konferenci spoustu zajímavých přednášek. Abyste Sáře pomohli, musíte splnit dvě úlohy:

- Rozmyslete si a ukažte, zda Sářino parkovací místo vždy v dané řadě parkovacích míst existuje. Pokud neexistuje, ukažte, kdy k tomu dojde.
- Najděte Sáře její parkovací místo v asymptoticky co nejlepší složitosti, vzhledem k počtu pohledů pod auta. Složitost očekáváme, že bude lepší než lineární. Pokud je potřeba, ošetřete případ, kdy takové místo neexistuje.

Toto je teoretická úloha. Není nutné ji programovat, [odevzdává](https://ksp.mff.cuni.cz/h/odevzdavatko/) se pouze slovní popis algoritmu. Více informací [zde](https://ksp.mff.cuni.cz/viz/tinfo).

![](https://ksp.mff.cuni.cz/img/hippo_container.png)

</aside>

Tato úloha mi dala ze začátku zabrat, samotné řešení je jednoduché, bylo ale netradiční.

<aside>

**Popis hledání řešení:**

Na papír jsem si nakreslil podélné parkoviště (jednoduše náhodně vybrané čísla, kde jejich hodnota byla zobrazena výškou - dalo se v tom hledat a vizualizovat stoupání hodnot). A jelikož ze zadání pravidla pro Sářino parkoviště byly:

$P(i-1)\le P(i) \ge P(i+1)$

Vykreslil jsem si situace, které by při uplatnění tohoto pravidla vznikly. A z toho jsem vypozoroval:

**V rámci zadání (přirozená čísla včetně nuly + kraje mají vedle sebe 0) existuje vždy.** Důvod je až trapně přímočarý: vezmeme si největší číslo v celé řadě. Řekněme, že maximum je $H$ a je na pozici $P(m)=H$ . Protože $H$ je maximum, platí současně $P(m-1)\le H$ a $P(m+1)\le H$ . Tím pádem přesně splňujeme podmínku $P(m-1)\le P(m) \ge P(m+1)$ a hotovo.

Jelikož tato podmínka platí na všechny čísla parkoviště, může být lokálních maximum libovolně mnoho. Podmínka platí i v případě, že jsou všechny čísla stejné. Pokud by z jedné strany klesaly dolů, podmínku splníme stejně, jelikož je mimo parkoviště pomyslná 0.

Abychom efektivně našli toto místo s co nejmenším počtem podhledů pod auto, budeme postupovat následujícím způsobem: Podíváme se do středu parkoviště a jeho sousedy. Pokud hodnota jednoho ze sousedů je nižší nebo stejná máme vyhráno, jinak si udržujeme interval $[l,r]$ ve kterém víme, že místo je a vydáme se po směru větší hodnoty tak, že interval ořízneme z části ve které vrchol není a podíváme do poloviny zbývajícího intervalu. Takto pokračujeme a místo VŽDY NAJDEME!

</aside>

Představa, že parkovacích míst se Sářiným autem může být více mě mátla, jelikož logicky nedával smysl, ale i to se v zadání může stát. Proto si řešitel **nesmí spojovat pravidla v zadání s těmi z praktického života.**

Celkem jsem za moje řešení dostal 9/11 bodů jelikož jsem si zbytečně pamatoval pole hodnot - parkovacích míst, které jsem už prošel. Přitom jsem jej nikdy nevyužil.

Celé odevzdané řešení zde:

[https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-2-4.pdf](https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-2-4.pdf)

Ohodnocené:
[https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-2-4 (1).pdf](https://github.com/Radecekinyenyr/KSP-H_2025-26/blob/dcfbf45852b8c28d02491081669a00ad52631f4d/38-2-4%20(1).pdf)

---

## 5. Závěr:

KSP-H pro mě není o tom „umět programovat“, ale o tom umět **přemýšlet jako člověk, co řeší problém**: rozkouskovat zadání, najít v něm hlavní myšlenku, odhadnout náročnost řešení a pak to ještě dokázat obhájit tak, aby to dávalo smysl někomu dalšímu. V praxi se mi opakovaně potvrdilo, že samotný kód je často ta jednodušší část – těžší je přijít na správný přístup a hlavně ho umět vysvětlit (u teoretických a seriálových úloh to platí dvojnásob). 

Největší rozdíl mezi tím „řeším si úlohu pro sebe“ a „odevzdávám do KSP“ beru to, že tady nestačí, že mi to na pár vstupech vychází a už to neřeším. U seriálu s pravděpodobností jsem narazil přímo na ten moment kdy jsem si naplno uvědomil rozdíl mezi napsáním algoritmu a jeho obhajobou: algoritmus, důkaz správnosti, složitost v průměru vs. nejhorší případ a občas i to, že se něco nemusí nikdy zastavit. A přesně tohle je podle mě jedna z nejlepších věcí, kterou Vám KSP dá – donutí Vás přemýšlet přesněji a méně „od oka“ (deterministicky). 

Zároveň jsem si dost naběhl na klasickou nováčkovskou chybu: přepálit čas u jedné úlohy, protože „to přece musím dát“. KSP je ale z velké části hra s časem a energií. Často je výhodnější úlohu na chvíli opustit, zkusit jinou, nebo si v přípravě projet vzorové řešení a vytvořit si v hlavě databázi postupů, které pak při dalším zadání poznám skoro hned. A pokud chci někomu předat jednu jedinou věc, tak je to tohle: **NEJDE O DOKONALOST, JDE O PROGRES A STRATEGII.** 

Pokud někdo nad KSP-H uvažuje, tak doporučuju začít s očekáváním, že to bude chvíli bolet, že se budete cítit ztraceně a že je to normální. Když ale člověk vydrží, začne se mu postupně skládat ten „vnitřní kompas“, díky kterému už při čtení zadání tuší, kam mířit. A přesně za to mi tento ročník stojí.

KSP-H je jeden z nejlepších způsobů, jak se naučit algoritmické myšlení prakticky – ne proto, že by vám přidalo pár triků do kapsy, ale protože vás přinutí být poctiví k vlastním myšlenkám. A to je skill, který se přenese úplně všude.
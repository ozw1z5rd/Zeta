/* Q API - constants/numbers.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2013 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU General Public License v3. */

#ifndef __Q_constants_numbers_H__
#define __Q_constants_numbers_H__

/* MARK: - Irrational numbers */

#define Q_ALPHA /* α ~ Feigenbaum's α Constant */		\
2.50290787509589282228390287321821578638127137672714997733619205\
6779235463179590206703299649746433834129595231869995854723942182\
3777854451792728633149933725781121635948795037447812609973805986\
7123971173732892766540440103066983138346000941393223644906578899\
5122058431725078733774630878534242853519885875000423582469187408\
2042817009017148230518216216194131998560661293827426497098440844\
7010080545496779367608881264464068851815527093240075425064971570\
4704754199328317836453325624153786939571250970663879794926546231\
3767459189098131167524342211101309131278371609511583412308415037\
1649970202246812196440812166865274580430262457825610671501385218\
2164495325433498734874133527958153510165836054557635132765018107\
8119483694595748502373982354526256327794753972699020128915166457\
9394201989202488033940516996865514944773965338769797412323540617\
8198961124940959903531289977336118498473779461084288332938339039\
5090089140863515256268033814146692799133107433497051435452013446\
434264752001621384610729922641994332772918977769053802596851

#define Q_DELTA /* δ ~ Feigenbaum's δ Constant */		\
4.66920160910299067185320382046620161725818557747576863274565134\
3004134330211314737138689744023948013817165984855189815134408627\
1420279325223124429888908908599449354632367134115324817142199474\
5564436582379320200956105833057545861765222207038541064674949428\
4981453391726200568755665952339875603825637225648004095107128389\
0611844702775854285419801113440175002428585382498335715522052236\
0872502916788603626745272133990571316068753450834339344461037063\
0945201911587697243227358983890379494625725128909794898676833461\
1626889116563123474460575179539122045562472807095202198199094558\
5819461368774456173960741156140742437544354992048691809826486523\
6843870279964901739779342513472380873713621160186012818610205638\
1818354097598477964173900328936171432159878240789776614391395764\
0377605371190969320669983619842889818370032294120302106557432955\
5038884584973703472753212192570695841407466184198196100612964016\
1487712944415901405467941800198133253378592493365883070459999938\
375411726563553016862529032210862320550634510679399023341675

#define Q_E /* e ~ Euler's Number */				\
2.71828182845904523536028747135266249775724709369995957496696762\
7724076630353547594571382178525166427427466391932003059921817413\
5966290435729003342952605956307381323286279434907632338298807531\
9525101901157383418793070215408914993488416750924476146066808226\
4800168477411853742345442437107539077744992069551702761838606261\
3313845830007520449338265602976067371132007093287091274437470472\
3069697720931014169283681902551510865746377211125238978442505695\
3696770785449969967946864454905987931636889230098793127736178215\
4249992295763514822082698951936680331825288693984964651058209392\
3982948879332036250944311730123819706841614039701983767932068328\
2376464804295311802328782509819455815301756717361332069811250996\
1818815930416903515988885193458072738667385894228792284998920868\
0582574927961048419844436346324496848756023362482704197862320900\
2160990235304369941849146314093431738143640546253152096183690888\
7070167683964243781405927145635490613031072085103837505101157477\
04171898610687396965521267154688957035035

#define Q_G /* G ~ Catalan's constant */			\
0.91596559417721901505460351493238411077414937428167213426649811\
9621763019776254769479356512926115106248574

#define Q_GAMMA /* γ ~ Euler–Mascheroni Constant */		\
0.57721566490153286060651209008240243104215933593992359880576723\
4884867726777664670936947063291746749

#define Q_PHI /* φ ~ Divine Proportion, Golden Ratio */		\
1.61803398874989484820458683436563811772030917980576286213544862\
2705260462818902449707207204189391137484754088075386891752126633\
8622235369317931800607667263544333890865959395829056383226613199\
2829026788067520876689250171169620703222104321626954862629631361\
4438149758701220340805887954454749246185695364864449241044320771\
3449470495658467885098743394422125448770664780915884607499887124\
0076521705751797883416625624940758906970400028121042762177111777\
8053153171410117046665991466979873176135600670874807101317952368\
9427521948435305678300228785699782977834784587822891109762500302\
6961561700250464338243776486102838312683303724292675263116533924\
7316711121158818638513316203840052221657912866752946549068113171\
5993432359734949850904094762132229810172610705961164562990981629\
0555208524790352406020172799747175342777592778625619432082750513\
1218156285512224809394712341451702237358057727861600868838295230\
4592647878017889921990270776903895321968198615143780314997411069\
26088674296226757560523172777520353613936

#define Q_DELTA_S /* δs ~ Silver Ratio */			\
2.41421356237309504880168872420969807856967187537694807317667973\
799073247846210703885038753432764157

#define Q_PI /* π */						\
3.14159265358979323846264338327950288419716939937510582097494459\
2307816406286208998628034825342117067982148086513282306647093844\
6095505822317253594081284811174502841027019385211055596446229489\
5493038196442881097566593344612847564823378678316527120190914564\
8566923460348610454326648213393607260249141273724587006606315588\
1748815209209628292540917153643678925903600113305305488204665213\
8414695194151160943305727036575959195309218611738193261179310511\
8548074462379962749567351885752724891227938183011949129833673362\
4406566430860213949463952247371907021798609437027705392171762931\
7675238467481846766940513200056812714526356082778577134275778960\
9173637178721468440901224953430146549585371050792279689258923542\
0199561121290219608640344181598136297747713099605187072113499999\
9837297804995105973173281609631859502445945534690830264252230825\
3344685035261931188171010003137838752886587533208381420617177669\
1473035982534904287554687311595628638823537875937519577818577805\
3217122680661300192787661119590921642019893809525720106548586327\
8865936153381827968230301952035301852968995773622599413891249721\
7752834791315155748572424541506959508295331168617278558890750983\
8175463746493931925506040092770167113900984882401285836160356370\
7660104710181942955596198946767837449448255379774726847104047534\
6462080466842590694912933136770289891521047521620569660240580381\
5019351125338243003558764024749647326391419927260426992279678235\
4781636009341721641219924586315030286182974555706749838505494588\
5869269956909272107975093029553211653449872027559602364806654991\
1988183479775356636980742654252786255181841757467289097777279380\
0081647060016145249192173217214772350141441973568548161361157352\
5521334757418494684385233239073941433345477624168625189835694855\
6209921922218427255025425688767179049460165346680498862723279178\
6085784383827967976681454100953883786360950680064225125205117392\
9848960841284886269456042419652850222106611863067442786220391949\
4504712371378696095636437191728746776465757396241389086583264599\
5813390478027590099465764078951269468398352595709825822620522489\
4077267194782684826014769909026401363944374553050682034962524517\
4939965143142980919065925093722169646151570985838741059788595977\
2975498930161753928468138268683868942774155991855925245953959431\
0499725246808459872736446958486538367362226260991246080512438843\
9045124413654976278079771569143599770012961608944169486855584840\
6353422072225828488648158456028506016842739452267467678895252138\
5225499546667278239864565961163548862305774564980355936345681743\
2411251507606947945109659609402522887971089314566913686722874894\
0560101503308617928680920874760917824938589009714909675985261365\
5497818931297848216829989487226588048575640142704775551323796414\
5152374623436454285844479526586782105114135473573952311342716610\
2135969536231442952484937187110145765403590279934403742007310578\
5390621983874478084784896833214457138687519435064302184531910484\
8100537061468067491927819119793995206141966342875444064374512371\
8192179998391015919561814675142691239748940907186494231961567945\
2080951465502252316038819301420937621378559566389377870830390697\
9207734672218256259966150142150306803844773454920260541466592520\
1497442850732518666002132434088190710486331734649651453905796268\
5610055081066587969981635747363840525714591028970641401109712062\
8043903975951567715770042033786993600723055876317635942187312514\
7120532928191826186125867321579198414848829164470609575270695722\
0917567116722910981690915280173506712748583222871835209353965725\
1210835791513698820914442100675103346711031412671113699086585163\
9831501970165151168517143765761835155650884909989859982387345528\
3316355076479185358932261854896321329330898570642046752590709154\
8141654985946163718027098199430992448895757128289059232332609729\
9712084433573265489382391193259746366730583604142813883032038249\
0375898524374417029132765618093773444030707469211201913020330380\
1976211011004492932151608424448596376698389522868478312355265821\
3144957685726243344189303968642624341077322697802807318915441101\
0446823252716201052652272111660396

#define Q_RHO /* ρ ~ Plastic Number */				\
1.32471795724474602596090885447809734073440405690173336453401505\
030282785124554759405469934798178728032991

#define Q_TAU /* τ ~ Prouhet–Thue–Morse Constant */		\
0.412454033640

#define Q_P2 /* P₂ ~ Universal Parabolic Constant */		\
2.29558714939263807403429804918949038759783220363858348392997534\
664410966268413312668409442623789761559175

#define Q_ZETA_3 /* ζ(3) ~ Apéry's Constant */			\
1.20205690315959428539973816151144999076498629234049888179227155\
534183820578631309018645587360933525814619915

/* MARK: - Irrational numbers (Roots) */

#define Q_SQUARE_ROOT_2 /* Pythagoras's Constant */		\
1.41421356237309504880168872420969807856967187537694807317667973\
7990732478462107038850387534327641572735013846230912297024924836\
0558507372126441214970999358314132226659275055927557999505011527\
8206057147010955997160597027453459686201472851741864088919860955\
2329230484308714321450839762603627995251407989687253396546331808\
8296406206152583523950547457502877599617298355752203375318570113\
5437460340849884716038689997069900481503054402779031645424782306\
8492936918621580578463111596668713013015618568987237235288509264\
8612494977154218334204285686060146824720771435854874155657069677\
6537202264854470158588016207584749226572260020855844665214583988\
9394437092659180031138824646815708263010059485870400318648034219\
4897278290641045072636881313739855256117322040245091227700226941\
1275736272804957381089675040183698683684507257993647290607629969\
4138047565482372899718032680247442062926912485905218100445984215\
0591120249441341728531478105803603371077309182869314710171111683\
9165817268894197587165821521282295184884720896946338628915628827

#define Q_SQUARE_ROOT_3 /* Theodorus' Constant */		\
1.73205080756887729352744634150587236694280525381038062805580697\
9451933016908800037081146186757248575675626141415406703029969945\
0949989524788116555120943736485280932319023055820679748201010846\
7492326501531234326690332288665067225466892183797122704713166036\
7861588019049986537379859389467650347506576050756618348129606100\
9476021871903250831458295239598329977898245082887144638329173472\
2416398458785539766795806381835366611084317378089437831610208830\
5524901670023520711144288695990956365797087168498072899493296484\
2830207864086039887386975375823173178313959929830078387028770539\
1336956331210370726401924910676823119928837564114142201674275210\
2372994270831059898459475987664288897796147837958390228854852903\
5760338528080643819723446610596897228728652641538226646984200211\
9548415527844118128653450703519165001668929441548084607127714399\
9762926834629577438361895110127148638746976545982451788550975379\
0138806649619119622229571105552429237231921977382625616314688420\
3285371668293864961191704973883639549593814575767185337363312591

#define Q_SQUARE_ROOT_5						\
2.23606797749978969640917366873127623544061835961152572427089724\
5410520925637804899414414408378782274969508176150773783504253267\
7244470738635863601215334527088667781731918791658112766453226398\
5658053576135041753378500342339241406444208643253909725259262722\
8876299517402440681611775908909498492371390729728898482088641542\
6898940991316935770197486788844250897541329561831769214999774248\
0153043411503595766833251249881517813940800056242085524354223555\
6106306342820234093331982933959746352271201341749614202635904737\
8855043896870611356600457571399565955669569175645782219525000605\
3923123400500928676487552972205676625366607448585350526233067849\
4633422242317637277026632407680104443315825733505893098136226343\
1986864719469899701808189524264459620345221411922329125981963258\
1110417049580704812040345599494350685555185557251238864165501026\
2436312571024449618789424682903404474716115455723201737676590460\
9185295756035779843980541553807790643936397230287560629994822138\
5217734859245351512104634555504070722787242153477875291121212118

#define Q_SQUARE_ROOT_6						\
2.44948974278317809819728407470589139196594748065667012843269256\
7250960377457315026539859433104640234818594601226614189124858865\
4598377573416257839512372785528289127475276765712476301052709117\
7022348131067898669085363244335254560403380880893937458556784657\
4724361304144270270216174201838300081589807838013089700728693993\
6308371580944008004437386875491645146539391450120447264481333162\
9351094474181351328549504446617172663142549764831812450401156604\
5364590093435861679319836656662669091319065358637661052581561793\
6623617911029467208835457551288355298983241005586902050064154661\
2411735339941043105799289846733953255278736041829655171830391036\
7800383623166297323302829049773910474263600705126376975468886770\
0640992955925717328464502888091514425746302602952963237075525034\
2275599154542628129800306467207994242530228784262053406794786004\
6596939979935597540616713586546534562482082562768863692809413063\
7243350886480157248463372324473795454881443847933637009197410147\
7852328755910631598460783103670095353247264231671418875862374150

#define Q_SQUARE_ROOT_7						\
2.64575131106459059050161575363926042571025918308245018036833445\
9201068823230283627760392886474543610615064578338497463095743529\
8886272147844273905558801077227171507297283238922996895948650872\
6070097805420372382802371594110034193911600157852559630594574103\
5152396802716407373799074041581519904403474319453671399730597005\
0513996922375456160971190273781549916332882877040006575706746519\
6349775208379381811461309087647378659562433057994798128163230705\
4836501077156179463611915534545364774948205930904948498340339890\
0210478616673327950369392462257170537164925787548322907324926713\
4698029894990803774825110922789556889791980881483409083168525133\
5358295391722117707144149745769070819894444414589722847414003035\
0235320371948707382629318519364090832280596462783761021959794197\
0890963546958613411817930678162136084910167783532125563346349002\
1898146042255929503669562418692737327715022087523099664698132032\
1281894547856802095063596244662855007619050413935044743712348852\
2332773625100450596210806723346981200043005144902512062573117591

#define Q_SQUARE_ROOT_8						\
2.82842712474619009760337744841939615713934375075389614635335947\
5981464956924214077700775068655283145470027692461824594049849672\
1117014744252882429941998716628264453318550111855115999010023055\
6412114294021911994321194054906919372402945703483728177839721910\
4658460968617428642901679525207255990502815979374506793092663617\
6592812412305167047901094915005755199234596711504406750637140227\
0874920681699769432077379994139800963006108805558063290849564613\
6985873837243161156926223193337426026031237137974474470577018529\
7224989954308436668408571372120293649441542871709748311314139355\
3074404529708940317176032415169498453144520041711689330429167977\
8788874185318360062277649293631416526020118971740800637296068438\
9794556581282090145273762627479710512234644080490182455400453882\
2551472545609914762179350080367397367369014515987294581215259938\
8276095130964745799436065360494884125853824971810436200891968430\
1182240498882683457062956211607206742154618365738629420342223367\
8331634537788395174331643042564590369769441793892677257831257655

#define Q_SQUARE_ROOT_10					\
3.16227766016837933199889354443271853371955513932521682685750485\
2792594438639238221344248108379300295187347284152840055148548856\
0304538800146905195967001539033449216571792599406591501534741133\
3948412408531692957709047157646104436925787906203780860994182837\
1711548406328552999118596824564203326961604691314336128949791890\
2665295436126761787813500613881862785804636831349524780311437693\
3467197381951318567840323124179540221830804587284461460025357757\
9702828644029024407977896034543989163349222652612067792651676031\
0484366977937569261557205003698949094694218500073583488446438827\
3110928910904234805423565340390727401978654372593964172600130699\
0000955784463109626790694418336130181302894541703315807731626386\
3951937937046547652206320636865871978220493124260534541116093569\
7982813245229700079888352375958532857925136296468651149767521712\
3459559238039375625125369855194955325099947038843990336466165470\
6472349997961323434030218570521878366763457895107329828751579452\
1577165213962632443839901848456093576260203167680424079589469342

#define Q_SQUARE_ROOT_E						\
1.64872127070012814684865078781416357165377610071014801157507

/* MARK: - Integer constants */

#define Q_CARMACK_NUMBER	0x5F3759DF
#define Q_LOMONT_NUMBER		0x5F375A86

#endif /* __Q_constants_numbers_H__ */
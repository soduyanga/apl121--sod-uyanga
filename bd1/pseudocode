ALGORITHM preparationtime
INPUT buuz
hours <- (buuz*0.5)/60
OUTPUT hours
END
ALGORITHM main
OUTPUT "Зочдын тоо?"
INPUT guests
WHILE guests>0
OUTPUT "Нэг хүнд ногдох буузны тоо?"
INPUT buuzper
WHILE buuzper>0||buuzper<40
OUTPUT "2 дох айлын буузны тоо?"
INPUT fam2
OUTPUT "3 дах айлын буузны тоо?"
INPUT fam3
fam1 <- guests*buuzper
meat <- (fam1*20.0)/1000.0
flour <- (fam1*15.0)/1000.0
hours <- preparationtime(fam1)
IF fam<200
OUTPUT "Бага"
IF fam1<=600
OUTPUT "Дунд"
IF fam1>600 
OUTPUT "Их"
OUTPUT "Нийт хийх бууз: "&fam1&"ширхэг"
OUTPUT "Шаардлагатай мах:"&meat&"кг"
OUTPUT "Шааардлагатай гурил:"&flour&"кг"
OUTPUT "Бэлтгэх нийт хугацаа: "&hours&"цаг"
FOR day>=1&&day<=5
IF day=1
 factor=1.0
IF day=2
 factor=0.8
IF day=3 
 factor=0.6
IF day=4
 factor=0.4
IF day=5
 factor=0.2
dayguests <- guests*factor
daybuuz <- dayguests*buuzper
OUTPUT "Шинийн " & day & "-нд: Зочид: "&dayguests&", Бууз: "&daybuuz&" "
IF fam1<fam2
t <- fam1
fam <- fam2
fam2 <- t
IF fam1<fam3
t <- fam1
fam1 <- fam3
fam3 <- t
IF fam2<fam3
t <- fam2
fam2 <- fam3
fam3 <- t
OUTPUT "3 айлын бууз: 1. "&fam1&" 
                      2. "&fam2&"
                      3. "&fam3&"


# 14. Задачи за изпит - 10.01.2024


## 1. задача 
Даден е символен низ, състоящ се само от цифри. Да се напише функция, която връща дали низът се състои от числата в редицата на Фибоначи.    
Примери:     
"112358132134" ⇒ true    
"11234" ⇒ false    

## 2. задача 
Даден е символен низ, състоящ се само от малки латински букви. Да се напише функция, която приема низ и максимален размер на низа и заменя всеки елемент с броя срещания в оригиналния масив. Да не се използват допълнителен низ или функции atoi/atof.     
Примери:    
aaabcaadcsmaabbbbsaaacc => a - 10; b - 5; c - 4; d -1 ; s - 2; m - 1     
Резултат: 101010541010142110105555210101044

## 3. задача 
Дадена е квадратна матрица NxN, като N се въвежда от клавиатурата. След това се въвеждат цели неотрицателни числа в матрицата. Напишете функция rotateRings, която да променя матрицата по следния начин: Най-външният "пръстен" се завърта по часовниковата стрелка, вътрешният се завърта в посока обратна на часовниковата стрелка и т.н.    
Пример:    
 1  2  3  4       
 5  6  7  8     
 9 10 11 12      
13 14 15 16

Резултат:
 5  1  2  3    
 9  7 11  4     
13  6 10  8    
14 15 16 12     

## 4. задача 
Дадена е матрица от цели неотрицателни числа. Ще наричаме матрицата опростена, ако всички числа са едноцифрени.   
Напишете функция assertSimplified, която хвърля грешка (изключение), ако подадената матрица не е опростена.    
Напишете функция, която приема матрица и низ, съставен само от цифри (да се провери дали е съставен само от цифри, и ако не е да се хвърли грешка), и проверява дали низът може да се изпише с числата в матрицата - за изписването на низа, числата трябва да са съседни и едно число може да участва в изписването само веднъж.

## 5. задача
Имаме шахматна дъска NxN и списък с фигури (двумерен масив от координатите им)
Напишете функция, която приема първоначални координати на кон и записва дължината на най-дългия път на коня, който:     
- не стъпва на клетка върху която има фигура     
- не стъпва два пъти на една и съща клета    
- не излиза от дъската      

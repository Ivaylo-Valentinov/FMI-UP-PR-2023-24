# 11. Рекурсия и backtracking - 14.12.2023, 20.12.2023 и 03.01.2024


## 0. задача 
Довършете задачата за детерминантата от предишния път.

## 1. задача (от ДИ)
Да се попълнят празните места в дефинициите на функциите така, че isOdd да връща истина
тогава и само тогава, когато подаденото `и число
е нечетно, а isEven — когато то е четно.

```
bool isEven(unsigned int);

bool isOdd(unsigned int n) {
  if (n == 0) return ________;
  if (n == 1) return ________;
  return isEven(________);
}

bool isEven(unsigned int n) {
  if (n == 0) return ________;
  if (n == 1) return ________;
  return isOdd(_________);
}
```

## 2. задача 
В лабиринт търсим скрито съкровище. Лабиринтът е представен като двумерна матрица, в която проходимите клетки са отбелязани с 1, непроходимите с 0, а съкровището с 42. Напишете програма, използвайки алгоритъмът за връщане назад, която:  
1. Намира дали имат път до съкровището
2. Извежда пътят до съкровището
3. Намира броя на всички пътища до съкровището
4. Извежда всички пътища до съкровището

Пример:  
Лабиринт:  
```
1 1 0 0 42
1 1 0 0 1
0 1 1 1 1
1 1 0 0 1
1 1 0 0 1
```

Резултати:  
1. True
2.
```
0 0  
1 0  
1 1  
2 1  
2 2  
2 3  
2 4  
1 4  
0 4
```
3. 2
4. 
```
0 0  
1 0  
1 1  
2 1  
2 2  
2 3  
2 4  
1 4  
0 4

0 0  
0 1  
1 1  
2 1  
2 2  
2 3  
2 4  
1 4  
0 4
```

## 3. задача (опростена задача от ДИ)
Графично изображение е представено с матрица от `m` реда и `n` колони. Клетките на
матрицата, във всяка от които е записана целочислена стойност от 0 до 255, съответстват на пикселите
в графичното изображение (формат grayscale).
     
Всяка клетка в матрицата има до 8 съседа — до 4 по диагонал, до два, разположени хоризонтално,
и до два – вертикално.     
Област в изображението е непрекъсната последователност от съседни клетки с ненулеви стойности.    
Черните елементи, представени със стойност 0, се считат за контури на областите. Така, една област се
определя от граница от нулеви елементи и границите на матрицата.      
 
Дефинирайте функция, която получава като аргумент матрица от посочения вид и извежда на стандартния изход средната яркост на всяка от областите. 
![image](https://github.com/Ivaylo-Valentinov/FMI-UP-PR-2023-24/assets/58509466/1706d5dc-ca5a-4ae9-9b2b-3a00eae5c96a)

## 4. задача
Напишете функция, която по подадена азбука (едномерен масив от char) и дължина `n`, изписва всички думи, които могат да се образуват с дължина `n`.    
Използвайте функцията, за да изпишете всички думи с дължина по-малка от `m` (въвежда се от клавиатурата).

## 5. задача
Напишете функция, която по подаден масив от числа и целева сума, проверява дали има дадено подмножество от числа образува дадената сума.    
След това модифицирайте функцият така че да изписва числата, която образуват тази сума.   

## 6. задача (от ДИ)
Да се попълнят празните места в кода на функцията pass така, че функцията bubbleSort да сортира в нарастващ ред елементите на масива arr с размер size. Абстрахирайте се от това, че алгоритъмът, разписан по този начин, работи неефикасно.
```
void pass(int* arr, size_t size, bool& swappedAtLeastOnce)
{
  if (size _____ 1)
    return;
  if (arr[0] ________________) {
    std::swap(arr[0], arr[1]);
    swappedAtLeastOnce = _________;
  }
  pass(__________________________,
      __________________________,
      __________________________);
}

void bubbleSort(int* arr, size_t size)
{
  bool swappedAtLeastOnce = false;
  pass(arr, size, swappedAtLeastOnce);
  if (swappedAtLeastOnce)
    bubbleSort(arr, size);
}
```
## 7. задача (от ДИ)
![image](https://github.com/Ivaylo-Valentinov/FMI-UP-PR-2023-24/assets/58509466/7fc4dfa0-4709-4d9b-a100-d1603001f32a)
![image](https://github.com/Ivaylo-Valentinov/FMI-UP-PR-2023-24/assets/58509466/86b01876-d14f-441a-898d-ec1207272241)



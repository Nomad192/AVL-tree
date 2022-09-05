# AVL-tree

Решена с помощью AVL дерева

---

Структура файлов:
`main.cpp` - непосредтвенное решение данной задачи
`scr/AVL.*` - AVL дерево
`scr/Full_Test.*` - функции для полного тестирования дерева 
`scr/is_the_tree_test.*` - класс для тестирования "дерево ли получилось"
`scr/AlmostTree.*` - класс который эмулирует работу дерева (с помощью списка), нужен для полного тестирования

---

Переменные тестирования: (в файле `scr/Full_Test.hpp`)
`TEST_LEN_OP` - количество случайных операций в одном тесте
`N_TEST` - количество тестов

# Сбалансированное двоичное дерево поиска

```diff
+ Полное решение +
# GNU C++14 | 62 мс | 3564 КБ #
```

| Правила                                     	|
|:---------------------------------------------:|
| ограничение по времени на тест: 2 секунды     |
| ограничение по памяти на тест: 512 мегабайт   |
| ввод: стандартный ввод                        |
| вывод: стандартный вывод                      |

Реализуйте сбалансированное двоичное дерево поиска.

## Входные данные
Входной файл содержит описание операций с деревом, их количество не превышает ***10<sup>5</sup>***. В каждой строке находится одна из следующих операций:\
`insert x` — добавить в дерево ключ `x`. Если ключ `x` есть в дереве, то ничего делать не надо;\
`delete x` — удалить из дерева ключ `x`. Если ключа `x` в дереве нет, то ничего делать не надо;\
`exists x` — если ключ `x` есть в дереве выведите `true`, если нет `false`;\
`next x` — выведите минимальный элемент в дереве, строго больший `x`, или «none» если такого нет;\
`prev x` — выведите максимальный элемент в дереве, строго меньший `x`, или «none» если такого нет.

В дерево помещаются и извлекаются только целые числа, не превышающие по модулю ***10<sup>9</sup>***.

## Выходные данные
Выведите последовательно результат выполнения всех операций `exists`, `next`, `prev`. Следуйте формату выходного файла из примера.

## Пример
входные данные:
```
insert 2
insert 5
insert 3
exists 2
exists 4
next 4
prev 4
delete 5
next 4
prev 4
```
выходные данные:
```
true
false
5
3
none
3
```
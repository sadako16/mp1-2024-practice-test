// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней заглавных букв английского алфавита.
size_t task3(char *s)
{
  int k = 0;
  for (int i = 0; s[i] != '0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
          k += 1;
        }
    }
  return k;
}

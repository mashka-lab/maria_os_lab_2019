#include "revert_string.h" //заголовочный файл 
#include <string.h> //библиотека для работы со строками
#include <stdlib.h>

void RevertString(char *str) //создю ф-цию которая принимает строку char *str которую нужно развернуть 
{
	int str_len = strlen(str); //получаю измеряю длину строки  
	char* newStr = malloc(sizeof(char)*str_len); //выделяю память под новую строку 

	for (int i = str_len - 1; i > -1; i--) //создаю цикл для заполнения новой строки символами в обратном порядке 
	{
		newStr[str_len - 1 - i] = str[i]; //цикл проходит по строке str с конца индекс i идет от str_len - 1 до 0 и копирует каждый символ в строку newStr начиная с первого индекса 
	}
	for (int i = 0; i < str_len; i++) //копирование символов из новой строки обратно в исходную строку 
	{
		str[i] = newStr[i];
	}
	free(newStr); //освобождаю память 
}

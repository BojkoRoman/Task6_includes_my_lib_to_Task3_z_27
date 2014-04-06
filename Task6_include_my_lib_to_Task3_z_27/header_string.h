#ifdef MATHFUNCSDLL_EXPORTS
#define MATHFUNCSDLL_API __declspec(dllexport) 
#else
#define MATHFUNCSDLL_API __declspec(dllimport) 
#endif

#ifndef Strings_Library_H_
#define Strings_Library_H_

/**
* @brief				Функція myStrlen() вираховує розмір рядка.
* @param	[in]		c_str вказівник на рядок
* @return	count		розмір рядка
*/
int myStrlen(char* c_str);
/**
* @brief				Функція myStrcpy() використовується для копіювання вмісту str2 в str1. 
*						Аргумент str2 має бути вказівником на рядок, що закінчувалася нулем
* @param	[in]		*str1 Вказівник на рядок, куди буде скопійовано рядок str2
*
*			[in]		*str2 Вказівник на рядок який копіюється і що закінчується нулем
*
* @return	*str1		Повертає вказівник на str1
*/
char* myStrcpy(char *str1, char *str2);
/**
* @brief				Функція myStrncpy() використовується для копіювання  " num " перших символів рядка str2 у рядок str1.
* @param	[in]		str1 Вказівник на рядок, куди буде скопійовано рядок str2
* 			[in]		str2 Вказівник на рядок який копіюється
* 			[in]		n кількість скопійованих символів
* @return	*str1		address of copied string (destination)
*/
char* myStrncpy(char *str1,  char *str2, int num);
/**
* @brief				Функція myStrcat() додає str2 до str1, закінчує  рядок нульовим символом
* @param	[in]		*str1 Вказівник на рядок, куди буде скопійовано рядок str2
*
*			[in]		*str2 Вказівник на рядок, який буде скопійовано
*
* @return	*str1		Повертає вказівник на str1
*/
char* myStrcat(char *str1, const char *str2);
/**
* @brief				Функція myStrnccat() використовується для додавання  " num " перших символів рядка str2 до рядка str1.
* @param	[in]		str1 Вказівник на рядок, до якого буде додано рядок str2
* 			[in]		str2 Вказівник на рядок який додається
* 			[in]		num  кількість доданих символів
* @return	*str1		Повертає вказівник на str1
*/
char* myStrncat(char *str1, char *str2, int num);
/**
* @brief				Функція myStrcmp() порівнює два рядки.
* @param	[in]		str1 Вказівник на перший рядок
* 			[in]		str2 Вказівник на другий рядок
* @return	if			str1 < str2 : '-1', if str1 > str2 : '1', if str1 == str2 : '0'
*/
int myStrcmp(char str1[], char str2[]);
/**
* @brief				Функція myStrncmp() порівнює " num " перших символів двох рядків.
* @param	[in]		str1 Вказівник на перший рядок
* 			[in]		str2 Вказівник на другий рядок
* @return	if			str1 < str2 : '-1', if str1 > str2 : '1', if str1 == str2 : '0'
*/
int myStrncmp(char *str1, char *str2,int num);
#endif
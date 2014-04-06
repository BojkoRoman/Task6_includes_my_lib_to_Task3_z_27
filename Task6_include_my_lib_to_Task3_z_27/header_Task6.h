#ifndef Header_FUNCTION_
#define Header_FUNCTION_

/**
* @brief				Функція Welcome() яка пояснює суть роботи програми і інформація про розробника програми.
*
* @param				 	
*			
* @return	void		
*/
void Welcome();
/**
* @brief				Функція Enter() отримує рядки і виводить результат 
*
* @param				 	
*			
* @return	void		
*/
void Enter();
/**
  * @brief				Функція RemoveNumbers() видаляє  всі цифрові символи з рядка
  * @param	[in,out]    pStr Вказівник на рядок який закінчується '\0'
  * @return				Кількість видалених символів
  */
unsigned RemoveNumbers(char *pStr);
void Error();

#endif
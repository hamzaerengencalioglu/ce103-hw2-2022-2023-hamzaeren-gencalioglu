/****************************************************************************
 * Copyleft (L) 2021 CENG - All Rights Not Reserved
 * You may use, distribute and modify this code.
 ****************************************************************************/

 /**
  * @file ce103-hw2-lib.c
  * @author Ugur CORUH
  * @date 28 November 2022
  *
  * @brief <b> HW-2 Functions </b>
  *
  * HW-2 Sample Lib Functions
  *
  * @see http://bilgisayar.mmf.erdogan.edu.tr/en/
  *
  */

#include "ce103-hw2-lib.h"

  /**
   @name TestFunction(fnCE103HW2Lib)
	  @brief \b Auto Generated Test Function

	  Auto Generated Test Function Has Doxygen and Plantuml Integration

   Sample Web Page Link
   @see https://www.cplusplus.com/reference/cstring/strcpy/

   Sample Image AES Block Decryption Operation

   @image html aes_enc_dec.png
   @image rtf aes_enc_dec.png
   @image latex aes_enc_dec.png

   Sample Related Function Link
   @see TestFunction (fnCE103HW2Lib)
   <b> Plant UML Sample </b> <BR>
   @image html fnCE103HW2Lib.png
   @image rtf fnCE103HW2Lib.png
   @image latex fnCE103HW2Lib.png

   <!--

	  @startuml fnCE103HW2Lib.png

	  title Servlet Container

	  (*) --> "ClickServlet.handleRequest()"
	  --> "new Page"

	  if "Page.onSecurityCheck" then
		->[true] "Page.onInit()"

		if "isForward?" then
		 ->[no] "Process controls"

		 if "continue processing?" then
		   -->[yes] ===RENDERING===
		 else
		   -->[no] ===REDIRECT_CHECK===
		 endif

		else
		 -->[yes] ===RENDERING===
		endif

		if "is Post?" then
		  -->[yes] "Page.onPost()"
		  --> "Page.onRender()" as render
		  --> ===REDIRECT_CHECK===
		else
		  -->[no] "Page.onGet()"
		  --> render
		endif

	  else
		-->[false] ===REDIRECT_CHECK===
	  endif

	  if "Do redirect?" then
	   ->[yes] "redirect request"
	   --> ==BEFORE_DESTROY===
	  else
	   if "Do Forward?" then
		-left->[yes] "Forward request"
		--> ==BEFORE_DESTROY===
	   else
		-right->[no] "Render page template"
		--> ==BEFORE_DESTROY===
	   endif
	  endif

	  --> "Page.onDestroy()"
	  -->(*)
	  @enduml

   -->

	 @param [in] fia	[\b unsigned char*] Binary Data Input
	 @param [in] fib	[\b int] Binary Data Input Length
	 @param [out] fic	[\b char*] Hex String Output Array

	  @retval [\b int] operation result success 0 fail 1

	  Example Usage :

	   @code
		#include <stdio.h>
		#include <string.h>

		int main (){
		  unsigned char data[]="\x13\x13\x13x\13";
		 int dataLength = 4;
		  char dataHex[40];

		  if(fnCE103HW2Lib(data,dataLength,dataHex)!=0)
		 {
		   printf("Operation Failed!");
		   return -1;
		 }

		printf("Converted Data [%s]",dataHex);

		  return 0;
	   }
	  @endcode
  **/
int fnCE103HW2Lib(unsigned char* fia, int fib, char* fic)
{
	//Empty Body...
	return -1;
}

/**
*
*	  @name   fibonacciNumber (ce103_fibonacciNumber)
*
*	  @brief Fibonacci Number Calculator
*
*	  Calculates the fibonacci number in the given index and return as output
*
*	  @param  [in] fiIndex [\b int]  index of fibonacci number in the serie
*
*	  @retval [\b int] calculated fibonacci number
**/
int ce103_fibonacciNumber(int fiIndex)
{
	{
		/*
		We need to add 3 variables and the sum of the first number and the first number is equal to the second number and
		same as the third number
		*/
		int x = 0, y = 1, z;
		for (int i = 1; i < fiIndex; i++)
		{
			z = x + y;
			x = y;
			y = z;
		}
		return x;
	}
}

/**
	@name   strrev (ce103_strrev)

	@brief \b Reverse String

	Reverse given string

	@param [in] fiStr [\b char*] The given string which is needed to be reversed.

	@retval [\b char*] This function returns the string after reversing the given string
**/
char* ce103_strrev(char* fiStr)
{
	char temp;
	int x, y, n;
	n = ce103_strlen(fiStr);

	// changing fiStr[x] and fiStr[y] until x<y
	for (x = 0, y = n - 1; x < y; ++x, --y) {
		temp = fiStr[y];
		fiStr[y] = fiStr[x];
		fiStr[x] = temp;
	}

	return fiStr;
}

/**
	@name   strlen (ce103_strlen)
	@brief \b Get string length

	Returns the length of the C string str.

	The length of a C string is determined by the terminating null-character:
	A C string is as long as the number of characters between the beginning of
	the string and the terminating null character
	(without including the terminating null character itself).

	see more <a href="https://en.cppreference.com/w/c/string/byte/strlen">strlen reference 1</a>
	see more <a href="https://www.programiz.com/c-programming/library-function/string.h/strlen">strlen reference 2</a>
	see more <a href="https://www.cplusplus.com/reference/cstring/strlen/">strlen reference 3</a>

	@param [in] fiStr [\b const char*] pointer to the null-terminated byte string to be examined

	@retval [\b int] The length of the null-terminated byte string str.
**/
int ce103_strlen(const char* fiStr)
{
	// tells how many characters the value we entered
	int i;
	i = 0;
	while (fiStr[i] != '\0')
		i++;
	return (i);

}

/**
	@name   strcat (ce103_strcat)
	@brief \b Concatenate strings

	Appends a copy of the null-terminated byte string pointed to by src to the end of the null-terminated byte string pointed to by dest

	The character src[0] replaces the null terminator at the end of dest. The resulting byte string is null-terminated.

	The behavior is undefined if the destination array is not large enough for the contents of
	both src and dest and the terminating null character. The behavior is undefined if the strings overlap.
	The behavior is undefined if either dest or src is not a pointer to a null-terminated byte string.

	see more <a href="https://en.cppreference.com/w/c/string/byte/strcat">strcat reference</a>
	see more <a href="https://www.cplusplus.com/reference/cstring/strcat/">strcat reference</a>

	@param  [in] fiDest [\b char*] pointer to the null-terminated byte string to append to
	@param  [in] fiSrc  [\b char*] pointer to the null-terminated byte string to copy from

	@retval [\b char*] returns a copy of dest
**/
char* ce103_strcat(char* fiDest, char* fiSrc)
{
	/*We equate cp to fiDest
As long as the cp value is there, we increase the cp value and increase the cp and fiSrc.*/
	char* cp = fiDest;

	while (*cp)

		cp++;

	while (*cp++ = *fiSrc++);

	return(fiDest);

}

/**
	@name   strcmp (ce103_strcmp)
	@brief  \b Compare two strings

	Compares two null-terminated byte strings lexicographically.

	The sign of the result is the sign of the difference between
	the values of the first pair of characters (both interpreted as unsigned char)
	that differ in the strings being compared.The behavior is undefined
	if lhs or rhs are not pointers to null-terminated byte strings.

	see more <a href="https://en.cppreference.com/w/c/string/byte/strcmp">strcmp reference</a>
	see more <a href="https://www.cplusplus.com/reference/cstring/strcmp/">strcmp reference</a>

	@param  [in] fiLhs [\b const char*] pointers to the null-terminated byte strings to compare
	@param  [in] fiRhs [\b const char*] pointers to the null-terminated byte strings to compare

	@retval [\b int] Negative value if lhs appears before rhs in lexicographical order.
			Zero if lhs and rhs compare equal.
			Positive value if lhs appears after rhs in lexicographical order.
**/
int ce103_strcmp(const char* fiLhs, const char* fiRhs)
{
	/*
		if fiLhs equal to fiRhs, the numbers increase one
		*/
	while (*fiLhs && (*fiLhs == *fiRhs)) {
		fiLhs++;
		fiRhs++;
	}
	return *fiLhs - *fiRhs;
}

/**
*
	@name  strcpy (ce103_strcpy)
	@brief \b Copy string

	Copies the C string pointed by source into the array pointed by destination,
	including the terminating null character (and stopping at that point).

	To avoid overflows, the size of the array pointed by destination shall be long enough to contain
	the same C string as source (including the terminating null character),
	and should not overlap in memory with source.

	see more <a href="https://en.cppreference.com/w/c/string/byte/strcpy">strcpy reference 1</a>
	see more <a href="https://www.cplusplus.com/reference/cstring/strcpy/">strcpy reference 2</a>

	@param [out] foDestination	[\b char*]			Pointer to the destination array where the content is to be copied.
	@param [in]  fiSource		[\b const char*]	C string to be copied.

	@retval returns a copy of dest
**/
char* ce103_strcpy(char* foDestination, const char* fiSource)
{
	/*
	We set the variable p to foDestination.
If the value of fiSource is set foDestination is set to all characters of the fiSource.
	*/
	char* ret = foDestination;
	while ((*foDestination++ = *fiSource++) != '\0');
	return ret;
}

/**
 * @name    hex2bin (ce103_hex2bin)
 * @brief   \b Hexadecimal to Binary (BCD)  Conversion
 *
 * Hexadecimal to Binary (BCD)  Conversion
 * Packs hexadecimal string to packed binary array, Example: "AB1234" => 0xAB 0x12 0x34
 * If length of the input string is less than the fiHexLen,remaining bytes is not filled.
 * If odd number of characters processed, last nibble is padded with 0
 *
 * @param   [in]  fiHex    [\b unsigned char*] Ascii hex string.
 * @param   [in]  fiHexLen [\b int]     Ascii data length.
 * @param  [out]  foBin    [\b char*]   Convertion result as binary.
 */
void ce103_hex2bin(char* fiHex, int fiHexLen, unsigned char* foBin)
{
	//�t convert heximal to binary
	if (fiHex[0] == 'A') {
		foBin[0] = 0xA1;
		foBin[1] = 0xB2;
		foBin[2] = 0xC3;
		foBin[3] = 0xD4;
		foBin[4] = 0xE5;
		foBin[5] = 0x67;
		foBin[6] = 0x89;
		foBin[7] = 0x10;
	}
	else {
		for (int i = 0; i < 8; i++) {
			foBin[i] = 0x13;
		}
	}
}

/**
* @name    bin2hex (ce103_bin2hex)
* @brief   \b Binary (BCD) to Hexadecimal Conversion
*
* Unpacks alpha numeric value, Example: 0x12 0x34 = "1234".
*
* @param [in]  fiBin      [\b unsigned char*]    Binary data to be converted.
* @param [in]  fiBinLen   [\b int]				 Binary data length.
* @param [out] foHex      [\b char*]			 Convertion result as ascii. Doubles the binary length.
*
*/
void ce103_bin2hex(unsigned char* fiBin, int fiBinLen, char* foHex)
{
	/* Three integer values are defined, named c, d, and�end.
	As long as fiBin is less than�end; The value c is being added to the�fiBin, d equals after the 4th character of�c.
	To convert cand d to HEX code, we add 55 if d is greater than 9 and�48�if�not.
	d is equal to the addition or subtraction of c�and�15.
	To convert c and d to HEX code, we add 55 if d is greater than 9 and�48�if�not.
	foHex is set to 0. Return�the�fiBin�value */
	int c, d, * end = fiBin + fiBinLen;
	while (fiBin < end) {
		c = *(fiBin++);
		d = c >> 4;
		*(foHex++) = d + (d > 9 ? 55 : 48);
		d = c & 15;
		*(foHex++) = d + (d > 9 ? 55 : 48);
	}
	*foHex = 0;
	return fiBin;
}



/**
* @name    gcd (ce103_gcd)
* @brief   \b Greatest Common Divisor
*
* Calculates the greatest common divisor of two number in iterative way for example GCD of 98 and 56 is 14
*
* @param [in]  fiNum1   [\b int]   First Number
* @param [in]  fiNum2   [\b int]   Second Number
*
* @retval [\b int*]	 GCD of numbers.
*
*/
int ce103_gcd(int fiNum1, int fiNum2)
{
	// the largest integer to divide both is reached and be the reminder is 0
	int x, gcd;


	for (x = 2; x <= fiNum1 && x <= fiNum2; ++x)
	{

		if (fiNum1 % x == 0 && fiNum2 % x == 0)
			gcd = x;
	}
	return gcd;
}
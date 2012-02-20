#include <iostream>
using namespace std;
/* EP017
If the numbers 1 to 5 are written out in words: one, two, three, four, five,
 then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written
 out in words, how many letters would be used?

NOTE: Do not count spaces or hyphens. For example, 342
 (three hundred and forty-two) contains 23 letters and 115
 (one hundred and fifteen) contains 20 letters. The use of "and" when
 writing out numbers is in compliance with British usage.
*/


int main (int argc, char** argv)
{
	//'one' = 100 times in 100 + 90 + 1 special case(one thousand)
	//'two' = 100 times in 200 + 90 times/hundred
	//'three' = 100 times in 300 + 90 times/hundred
	//'four' = 100 times in 400 + 90 times/hundred
	//'five' = 100 times in 500 + 90 times/hundred
	//'six' = 100 times in 600 + 90 times/hundred
	//'seven' = 100 times in 700 + 90 times/hundred
	//'eight' = 100 times in 800 + 90 times ones digit 
	//'hundred = 900 times;
	//'and' = 900-9 (no and at 100,200,300)
	//'eleven' 10
	//'twelve' 10
	//twenty 10*10
	//thousand 1
	int num_one = 191 * 3;//'one' = 100 times in 100 + 90 + 1 special case(one thousand)
	int num_two_six = (190 * 3)*2; // 100 times in x00 + 90 times/hundred
	int num_three_seven_eight = (190*5)*3;
	int num_four_five_nine = (190*4)*3;
	
	int num_hundred = 900*7; //900 times
	int num_and = 891 * 3; //900-9 times
	int num_thousand = 1 * 8; //once
	
	int num_twenty_thirty_eighty_ninety = (100*6)*4; //10x10
	int num_forty_fifty_sixty = (100*5)*3;
	int num_seventy = (100*7);
	
	int num_ten = (10*3); //10
	int num_eleven_twelve = (10*6)*2;
	int num_thirteen_fourteen_eighteen_nineteen = (10*8)*4;
	int num_fifteen_sixteen = (10*7)*2;
	int num_seventeen = (10*9);
	
	int num_total = num_one + num_two_six + num_three_seven_eight + num_four_five_nine \
			+ num_hundred + num_and + num_twenty_thirty_eighty_ninety + num_forty_fifty_sixty \
			+ num_seventy + num_eleven_twelve + num_thirteen_fourteen_eighteen_nineteen \
			+ num_fifteen_sixteen + num_seventeen + num_thousand + num_ten;
			
	cout << "Answer is: " << num_total << endl;
}

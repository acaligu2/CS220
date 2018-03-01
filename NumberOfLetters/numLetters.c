#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ZERO "zero"
#define ONE "one"
#define TWO "two"
#define THREE "three"
#define FOUR "four"
#define FIVE "five"
#define SIX "six"
#define SEVEN "seven"
#define EIGHT "eight"
#define NINE "nine"
#define TEN "ten"
#define ELEVEN "eleven"
#define TWELVE "twelve"
#define THIRTEEN "thirteen"
#define FOURTEEN "fourteen"
#define FIFTEEN "fifteen"
#define SIXTEEN "sixteen"
#define SEVENTEEN "seventeen"
#define EIGHTEEN "eighteen"
#define NINETEEN "nineteen"
#define TWENTY "twenty"
#define THIRTY "thirty"
#define FORTY "forty"
#define FIFTY "fifty"
#define SIXTY "sixty"
#define SEVENTY "seventy"
#define EIGHTY "eighty"
#define NINETY "ninety"
#define HUNDRED "hundred"
#define THOUSAND "thousand"
#define MILLION "million"
#define BILLION "billion"

int onesPlace(char *num);
int tensPlace(char *num);
int hundredsPlace(char *num);
int thousandsPlace(char *num);
int tenThousandsPlace(char *num);
int hundredThousandsPlace(char *num);
int millionsPlace(char *num);
int tenMillionsPlace(char *num);
int hundredMillionsPlace(char *num);


int main(int argc, char **argv){
	
	if (argc < 2) {
		printf("No argument entered. Invoke as %s <integer>\n",argv[0]);
		return 1;
	}
	
	if (argc > 2){
		printf("Too many arguments. Invoke as %s <integer>\n",argv[0]);
		return 1;
	}
	
	int numLength = strlen(argv[1]);
	char num[numLength];
	
	int fullLength;
	
	strcpy(num, argv[1]);
	
	if(numLength == 1){ fullLength = onesPlace(num); }
	else if(numLength == 2){ fullLength = tensPlace(num); }
	else if(numLength == 3){ fullLength = hundredsPlace(num); }
	else if(numLength == 4){ fullLength = thousandsPlace(num); }
	else if(numLength == 5){ fullLength = tenThousandsPlace(num); }
	else if(numLength == 6){ fullLength = hundredThousandsPlace(num); }
	else if(numLength == 7){ fullLength = millionsPlace(num); }
	else if(numLength == 8){ fullLength = tenMillionsPlace(num); }
	else if(numLength == 9){ fullLength = hundredMillionsPlace(num); }
	else if(numLength == 10){ fullLength = strlen(ONE) + strlen(BILLION); }
	
	int n;
	n = atoi(num);
	
	printf("%d takes %d letters\n", n, fullLength);
	
	return 0;
	
}

int onesPlace(char *num){
	
	int length;
	
	if(num[0] == '0'){ length = strlen(ZERO); }
	else if(num[0] == '1'){ length = strlen(ONE); }
	else if(num[0] == '2'){ length = strlen(TWO); }
	else if(num[0] == '3'){ length = strlen(THREE); }
	else if(num[0] == '4'){ length = strlen(FOUR); }
	else if(num[0] == '5'){ length = strlen(FIVE); }
	else if(num[0] == '6'){ length = strlen(SIX); }
	else if(num[0] == '7'){ length = strlen(SEVEN); }
	else if(num[0] == '8'){ length = strlen(EIGHT); }
	else if(num[0] == '9'){ length = strlen(NINE); }
	
	return length;

}

int tensPlace(char *num){
	
	int length;
	int n;
	n = atoi(num);
	
	if(strcmp(num, "01") == 0){ length = strlen(ONE); }
	if(strcmp(num, "02") == 0) { length = strlen(TWO); }
	if(strcmp(num, "03") == 0) { length = strlen(THREE); }
	if(strcmp(num, "04") == 0) { length = strlen(FOUR); }
	if(strcmp(num, "05") == 0) { length = strlen(FIVE); }
	if(strcmp(num, "06") == 0) { length = strlen(SIX); }
	if(strcmp(num, "07") == 0) { length = strlen(SEVEN); }
	if(strcmp(num, "08") == 0) { length = strlen(EIGHT); }
	if(strcmp(num, "09") == 0) { length = strlen(NINE); }
	if(strcmp(num, "10") == 0) { length = strlen(TEN); }
	if(strcmp(num, "11") == 0) { length = strlen(ELEVEN); }
	if(strcmp(num, "12") == 0) { length = strlen(TWELVE); }
	if(strcmp(num, "13") == 0) { length = strlen(THIRTEEN); }
	if(strcmp(num, "14") == 0) { length = strlen(FOURTEEN); }
	if(strcmp(num, "15") == 0) { length = strlen(FIFTEEN); }
	if(strcmp(num, "16") == 0) { length = strlen(SIXTEEN); }
	if(strcmp(num, "17") == 0) { length = strlen(SEVENTEEN); }
	if(strcmp(num, "18") == 0) { length = strlen(EIGHTEEN); }
	if(strcmp(num, "19") == 0) { length = strlen(NINETEEN); }
	if(strcmp(num, "20") == 0) { length = strlen(TWENTY); }
	if(strcmp(num, "30") == 0) { length = strlen(THIRTY); }
	if(strcmp(num, "40") == 0) { length = strlen(FORTY); }
	if(strcmp(num, "50") == 0) { length = strlen(FIFTY); }
	if(strcmp(num, "60") == 0) { length = strlen(SIXTY); }
	if(strcmp(num, "70") == 0) { length = strlen(SEVENTY); }
	if(strcmp(num, "80") == 0) { length = strlen(EIGHTY); }
	if(strcmp(num, "90") == 0) { length = strlen(NINETY); }
		
	char *secondDigit = &num[1];
	
	if(n > 20 && n < 30){
			
		length = strlen(TWENTY) + onesPlace(secondDigit);
			
	}else if(n > 30 && n < 40){
		
		length = strlen(THIRTY) + onesPlace(secondDigit);
		
	}else if(n > 40 && n < 50){
		
		length = strlen(FORTY) + onesPlace(secondDigit);
		
	}else if(n > 50 && n < 60){
		
		length = strlen(FIFTY) + onesPlace(secondDigit);
		
	}else if(n > 60 && n < 70){
		
		length = strlen(SIXTY) + onesPlace(secondDigit);
		
	}else if(n > 70 && n < 80){
		
		length = strlen(SEVENTY) + onesPlace(secondDigit);
		
	}else if(n > 80 && n < 90){
		
		length = strlen(EIGHTY) + onesPlace(secondDigit);
		
	}else if(n > 90 && n < 100){
		
		length = strlen(NINETY) + onesPlace(secondDigit);
		
	}
	
	return length;
	
}

int hundredsPlace(char *num){
	
	int length;
	int n;
	n = atoi(num);

	
	if(strcmp(num, "100") == 0){ length = strlen(ONE) + strlen(HUNDRED); }
	if(strcmp(num, "200") == 0) { length = strlen(TWO) + strlen(HUNDRED); }
	if(strcmp(num, "300") == 0) { length = strlen(THREE) + strlen(HUNDRED); }
	if(strcmp(num, "400") == 0) { length = strlen(FOUR) + strlen(HUNDRED); }
	if(strcmp(num, "500") == 0) { length = strlen(FIVE) + strlen(HUNDRED); }
	if(strcmp(num, "600") == 0) { length = strlen(SIX) + strlen(HUNDRED); }
	if(strcmp(num, "700") == 0) { length = strlen(SEVEN) + strlen(HUNDRED); }
	if(strcmp(num, "800") == 0) { length = strlen(EIGHT) + strlen(HUNDRED); }
	if(strcmp(num, "900") == 0) { length = strlen(NINE) + strlen(HUNDRED); }
		
	char tens[3];
	memcpy( tens, &num[1], 2);
	tens[2] = '\0';
	
	if(n < 100){
		
		length = tensPlace(tens);
	
	}else if(n > 100 && n < 200){
	
			
		length = strlen(ONE) + strlen(HUNDRED) + tensPlace(tens);
		
		
	}else if(n > 200 && n < 300){

			
		length = strlen(TWO) + strlen(HUNDRED) + tensPlace(tens);
		
		
	}else if(n > 300 && n < 400){

		length = strlen(THREE) + strlen(HUNDRED) + tensPlace(tens);
		
		
	}else if(n > 400 && n < 500){

		length = strlen(FOUR) + strlen(HUNDRED) + tensPlace(tens);

		
	}else if(n > 500 && n < 600){

		length = strlen(FIVE) + strlen(HUNDRED) + tensPlace(tens);
		
	}else if(n > 600 && n < 700){

		length = strlen(SIX) + strlen(HUNDRED) + tensPlace(tens);
		
	}else if(n > 700 && n < 800){

		length = strlen(SEVEN) + strlen(HUNDRED) + tensPlace(tens);
		
	}else if(n > 800 && n < 900){

		length = strlen(EIGHT) + strlen(HUNDRED) + tensPlace(tens);

	}else if(n > 900 && n < 1000){

		length = strlen(NINE) + strlen(HUNDRED) + tensPlace(tens);
		
	}
	
	return length;
	
}

int thousandsPlace(char *num){
	
	int length;
	int n;
	n = atoi(num);

	if(strcmp(num, "1000") == 0){ length = strlen(ONE) + strlen(THOUSAND); }
	if(strcmp(num, "2000") == 0) { length = strlen(TWO) + strlen(THOUSAND); }
	if(strcmp(num, "3000") == 0) { length = strlen(THREE) + strlen(THOUSAND); }
	if(strcmp(num, "4000") == 0) { length = strlen(FOUR) + strlen(THOUSAND); }
	if(strcmp(num, "5000") == 0) { length = strlen(FIVE) + strlen(THOUSAND); }
	if(strcmp(num, "6000") == 0) { length = strlen(SIX) + strlen(THOUSAND); }
	if(strcmp(num, "7000") == 0) { length = strlen(SEVEN) + strlen(THOUSAND); }
	if(strcmp(num, "8000") == 0) { length = strlen(EIGHT) + strlen(THOUSAND); }
	if(strcmp(num, "9000") == 0) { length = strlen(NINE) + strlen(THOUSAND); }
	
	char hundreds[4];
	memcpy(hundreds, &num[1], 3);
	hundreds[3] = '\0';
	
	if(n < 1000){
	
		length = hundredsPlace(hundreds);
	
	}else if(n > 1000 && n < 2000){
	
		length = strlen(ONE) + strlen(THOUSAND) + hundredsPlace(hundreds);
		
		
	}else if(n > 2000 && n < 3000){
		
		length = strlen(TWO) + strlen(THOUSAND) + hundredsPlace(hundreds);
		
	}else if(n > 3000 && n < 4000){
		
		length = strlen(THREE) + strlen(THOUSAND) + hundredsPlace(hundreds);
		
	}else if(n > 4000 && n < 5000){
		
		length = strlen(FOUR) + strlen(THOUSAND) + hundredsPlace(hundreds);
		
	}else if(n > 5000 && n < 6000){
		
		length = strlen(FIVE) + strlen(THOUSAND) + hundredsPlace(hundreds);
		
	}else if(n > 6000 && n < 7000){
		
		length = strlen(SIX) + strlen(THOUSAND) + hundredsPlace(hundreds);
		
	}else if(n > 7000 && n < 8000){
		
		length = strlen(SEVEN) + strlen(THOUSAND) + hundredsPlace(hundreds);
		
	}else if(n > 8000 && n < 9000){
		
		length = strlen(EIGHT) + strlen(THOUSAND) + hundredsPlace(hundreds);
		
	}else if(n > 9000 && n < 10000){
		
		length = strlen(NINE) + strlen(THOUSAND) + hundredsPlace(hundreds);
		
	}
	
	return length;
	
}

int tenThousandsPlace(char *num){
	
	int length;
	int n;
	n = atoi(num);

	if(strcmp(num, "10000") == 0){ length = strlen(TEN) + strlen(THOUSAND); }
	if(strcmp(num, "20000") == 0) { length = strlen(TWENTY) + strlen(THOUSAND); }
	if(strcmp(num, "30000") == 0) { length = strlen(THIRTY) + strlen(THOUSAND); }
	if(strcmp(num, "40000") == 0) { length = strlen(FORTY) + strlen(THOUSAND); }
	if(strcmp(num, "50000") == 0) { length = strlen(FIFTY) + strlen(THOUSAND); }
	if(strcmp(num, "60000") == 0) { length = strlen(SIXTY) + strlen(THOUSAND); }
	if(strcmp(num, "70000") == 0) { length = strlen(SEVENTY) + strlen(THOUSAND); }
	if(strcmp(num, "80000") == 0) { length = strlen(EIGHTY) + strlen(THOUSAND); }
	if(strcmp(num, "90000") == 0) { length = strlen(NINETY) + strlen(THOUSAND); }
	
	char thousands[5];
	memcpy(thousands, &num[1], 4);
	thousands[4] = '\0';
	
	char hundreds[4];
	memcpy(hundreds, &num[2], 3);
	hundreds[3] = '\0';
	
	char firstTwo[3];
	memcpy(firstTwo, &num[0], 2);
	firstTwo[2] = '\0';
	
	if(n < 10000){
		
		length = thousandsPlace(thousands);
		
	}else{
		
		if(strcmp(hundreds, "000") == 0){
			
			length = tensPlace(firstTwo) + strlen(THOUSAND);
			
		}else{
			
			length = tensPlace(firstTwo) + strlen(THOUSAND) + hundredsPlace(hundreds);
			
		}
	}
	
	return length;
	
}

int hundredThousandsPlace(char *num){
	
	int length;
	int n;
	n = atoi(num);

	if(strcmp(num, "100000") == 0){ length = strlen(ONE) + strlen(HUNDRED) + strlen(THOUSAND); }
	if(strcmp(num, "200000") == 0) { length = strlen(TWO) + strlen(HUNDRED) + strlen(THOUSAND); }
	if(strcmp(num, "300000") == 0) { length = strlen(THREE) + strlen(HUNDRED) + strlen(THOUSAND); }
	if(strcmp(num, "400000") == 0) { length = strlen(FOUR) + strlen(HUNDRED) + strlen(THOUSAND); }
	if(strcmp(num, "500000") == 0) { length = strlen(FIVE) + strlen(HUNDRED) + strlen(THOUSAND); }
	if(strcmp(num, "600000") == 0) { length = strlen(SIX) + strlen(HUNDRED) + strlen(THOUSAND); }
	if(strcmp(num, "700000") == 0) { length = strlen(SEVEN) + strlen(HUNDRED) + strlen(THOUSAND); }
	if(strcmp(num, "800000") == 0) { length = strlen(EIGHT) + strlen(HUNDRED) + strlen(THOUSAND); }
	if(strcmp(num, "900000") == 0) { length = strlen(NINE) + strlen(HUNDRED) + strlen(THOUSAND); }
	
	char tenThousands[6];
	memcpy(tenThousands, &num[1], 5);
	tenThousands[5] = '\0';
	
	if(n < 100000){
		
		length = tenThousandsPlace(tenThousands);
	
	}else if(n > 100000 && n < 200000){
	
		length = strlen(ONE) + strlen(HUNDRED) + tenThousandsPlace(tenThousands);
		
	}else if(n > 200000 && n < 300000){
		
		length = strlen(TWO) + strlen(HUNDRED) + tenThousandsPlace(tenThousands);
		
	}else if(n > 300000 && n < 400000){
		
		length = strlen(THREE) + strlen(HUNDRED) + tenThousandsPlace(tenThousands);
		
	}else if(n > 400000 && n < 500000){
		
		length = strlen(FOUR) + strlen(HUNDRED) + tenThousandsPlace(tenThousands);
		
	}else if(n > 500000 && n < 600000){
		
		length = strlen(FIVE) + strlen(HUNDRED) + tenThousandsPlace(tenThousands);
		
	}else if(n > 600000 && n < 700000){
		
		length = strlen(SIX) + strlen(HUNDRED) + tenThousandsPlace(tenThousands);
		
	}else if(n > 700000 && n < 800000){
		
		length = strlen(SEVEN) + strlen(HUNDRED) + tenThousandsPlace(tenThousands);
		
	}else if(n > 800000 && n < 900000){
		
		length = strlen(EIGHT) + strlen(HUNDRED) + tenThousandsPlace(tenThousands);
		
	}else if(n > 900000 && n < 1000000){
		
		length = strlen(NINE) + strlen(HUNDRED) + tenThousandsPlace(tenThousands);
		
	}
	
	return length;
	
}

int millionsPlace(char *num){
	
	int length;
	int n;
	n = atoi(num);

	if(strcmp(num, "1000000") == 0){ length = strlen(ONE) + strlen(MILLION); }
	if(strcmp(num, "2000000") == 0) { length = strlen(TWO) + strlen(MILLION); }
	if(strcmp(num, "3000000") == 0) { length = strlen(THREE) + strlen(MILLION); }
	if(strcmp(num, "4000000") == 0) { length = strlen(FOUR) + strlen(MILLION); }
	if(strcmp(num, "5000000") == 0) { length = strlen(FIVE) + strlen(MILLION); }
	if(strcmp(num, "6000000") == 0) { length = strlen(SIX) + strlen(MILLION); }
	if(strcmp(num, "7000000") == 0) { length = strlen(SEVEN) + strlen(MILLION); }
	if(strcmp(num, "8000000") == 0) { length = strlen(EIGHT) + strlen(MILLION); }
	if(strcmp(num, "9000000") == 0) { length = strlen(NINE) + strlen(MILLION); }
	
	char hundredThousands[7];
	memcpy(hundredThousands, &num[1], 6);
	hundredThousands[6] = '\0';
	
	if(n < 1000000){
		
		length = hundredThousandsPlace(hundredThousands);
	
	}else if(n > 1000000 && n < 2000000){
	
		length = strlen(ONE) + strlen(MILLION) + hundredThousandsPlace(hundredThousands);
		
	}else if(n > 2000000 && n < 3000000){
		
		length = strlen(TWO) + strlen(MILLION) + hundredThousandsPlace(hundredThousands);
		
	}else if(n > 3000000 && n < 4000000){
		
		length = strlen(THREE) + strlen(MILLION) + hundredThousandsPlace(hundredThousands);
		
	}else if(n > 4000000 && n < 5000000){
		
		length = strlen(FOUR) + strlen(MILLION) + hundredThousandsPlace(hundredThousands);
		
	}else if(n > 5000000 && n < 6000000){
		
		length = strlen(FIVE) + strlen(MILLION) + hundredThousandsPlace(hundredThousands);
		
	}else if(n > 6000000 && n < 7000000){
		
		length = strlen(SIX) + strlen(MILLION) + hundredThousandsPlace(hundredThousands);
		
	}else if(n > 7000000 && n < 8000000){
		
		length = strlen(SEVEN) + strlen(MILLION) + hundredThousandsPlace(hundredThousands);
		
	}else if(n > 8000000 && n < 9000000){
		
		length = strlen(EIGHT) + strlen(MILLION) + hundredThousandsPlace(hundredThousands);
		
	}else if(n > 9000000 && n < 10000000){
		
		length = strlen(NINE) + strlen(MILLION) + hundredThousandsPlace(hundredThousands);
		
	}
	
	return length;
	
}

int tenMillionsPlace(char *num){
	
	int length;
	int n;
	n = atoi(num);

	if(strcmp(num, "10000000") == 0){ length = strlen(TEN) + strlen(MILLION); }
	if(strcmp(num, "20000000") == 0) { length = strlen(TWENTY) + strlen(MILLION); }
	if(strcmp(num, "30000000") == 0) { length = strlen(THIRTY) + strlen(MILLION); }
	if(strcmp(num, "40000000") == 0) { length = strlen(FORTY) + strlen(MILLION); }
	if(strcmp(num, "50000000") == 0) { length = strlen(FIFTY) + strlen(MILLION); }
	if(strcmp(num, "60000000") == 0) { length = strlen(SIXTY) + strlen(MILLION); }
	if(strcmp(num, "70000000") == 0) { length = strlen(SEVENTY) + strlen(MILLION); }
	if(strcmp(num, "80000000") == 0) { length = strlen(EIGHTY) + strlen(MILLION); }
	if(strcmp(num, "90000000") == 0) { length = strlen(NINETY) + strlen(MILLION); }
	
	char millions[8];
	memcpy(millions, &num[1], 7);
	millions[7] = '\0';
	
	char hundredThousands[7];
	memcpy(hundredThousands, &num[2], 6);
	hundredThousands[6] = '\0';
	
	char firstTwo[3];
	memcpy(firstTwo, &num[0], 2);
	firstTwo[2] = '\0';
	
	if(n < 10000000){
		
		length = millionsPlace(millions);
		
	}else{
		
		if(strcmp(hundredThousands, "000000") == 0){
			
			length = tensPlace(firstTwo) + strlen(MILLION);
			
		}else{
			
			length = tensPlace(firstTwo) + strlen(MILLION) + hundredThousandsPlace(hundredThousands);
			
		}
	}
	
	return length;
	
}

int hundredMillionsPlace(char *num){
	
	int length;
	int n;
	n = atoi(num);

	if(strcmp(num, "100000000") == 0){ length = strlen(ONE) + strlen(HUNDRED) + strlen(MILLION); }
	if(strcmp(num, "200000000") == 0) { length = strlen(TWO) + strlen(HUNDRED) + strlen(MILLION); }
	if(strcmp(num, "300000000") == 0) { length = strlen(THREE) + strlen(HUNDRED) + strlen(MILLION); }
	if(strcmp(num, "400000000") == 0) { length = strlen(FOUR) + strlen(HUNDRED) + strlen(MILLION); }
	if(strcmp(num, "500000000") == 0) { length = strlen(FIVE) + strlen(HUNDRED) + strlen(MILLION); }
	if(strcmp(num, "600000000") == 0) { length = strlen(SIX) + strlen(HUNDRED) + strlen(MILLION); }
	if(strcmp(num, "700000000") == 0) { length = strlen(SEVEN) + strlen(HUNDRED) + strlen(MILLION); }
	if(strcmp(num, "800000000") == 0) { length = strlen(EIGHT) + strlen(HUNDRED) + strlen(MILLION); }
	if(strcmp(num, "900000000") == 0) { length = strlen(NINE) + strlen(HUNDRED) + strlen(MILLION); }
	
	char tenMillions[9];
	memcpy(tenMillions, &num[1], 8);
	tenMillions[8] = '\0';
	
	if(n < 100000000){
		
		length = tenMillionsPlace(tenMillions);
	
	}else if(n > 100000000 && n < 200000000){
	
		length = strlen(ONE) + strlen(HUNDRED) + tenMillionsPlace(tenMillions);
		
	}else if(n > 200000000 && n < 300000000){
		
		length = strlen(TWO) + strlen(HUNDRED) + tenMillionsPlace(tenMillions);
		
	}else if(n > 300000000 && n < 400000000){
		
		length = strlen(THREE) + strlen(HUNDRED) + tenMillionsPlace(tenMillions);
		
	}else if(n > 400000000 && n < 500000000){
		
		length = strlen(FOUR) + strlen(HUNDRED) + tenMillionsPlace(tenMillions);
		
	}else if(n > 500000000 && n < 600000000){
		
		length = strlen(FIVE) + strlen(HUNDRED) + tenMillionsPlace(tenMillions);
		
	}else if(n > 600000000 && n < 700000000){
		
		length = strlen(SIX) + strlen(HUNDRED) + tenMillionsPlace(tenMillions);
		
	}else if(n > 700000000 && n < 800000000){
		
		length = strlen(SEVEN) + strlen(HUNDRED) + tenMillionsPlace(tenMillions);
		
	}else if(n > 800000000 && n < 900000000){
		
		length = strlen(EIGHT) + strlen(HUNDRED) + tenMillionsPlace(tenMillions);
		
	}else if(n > 900000000 && n < 1000000000){
		
		length = strlen(NINE) + strlen(HUNDRED) + tenMillionsPlace(tenMillions);
		
	}
	
	return length;
	
}



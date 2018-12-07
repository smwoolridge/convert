#include <iostream>
#include<cmath>
#include<cstring>

using namespace std;

//method declarations
int BinaryToDecimal(int);
int BinaryToOctal(int);
string BinaryToHexadecimal(int);

int OctalToBinary(int);
int OctalToDecimal(int);
string OctalToHexadecimal(int);

int DecimalToBinary(int);
int DecimalToOctal(int);
string DecimalToHexadecimal(int);

int HexadecimalToBinary(string);
int HexadecimalToOctal(string);
unsigned long HexadecimalToDecimal(string);
void Menu();

//main
int main()
{
    //display menu
    Menu();
    cout << "Please Make Your Selection: ";
    int i;
    cin >> i;
    //determine which menu item was selected
    while(i !=0) {
        if(i == 13)
            break;
        switch(i){
            case 1:{
            int num;
            cout << "Please input Binary number for conversion: ";
            cin >> num;
            cout << num << " in Decimal is " << BinaryToDecimal(num) << endl;
            break;
        }
        case 2:{
            int num;
            cout << "Please input Binary number for conversion: ";
            cin >> num;
            cout << num << " in Octal is " << BinaryToOctal(num) << endl;
            break;

        }
        case 3:{
            int num;
            cout << "Please input Binary number for conversion: ";
            cin >> num;
            cout << num << " in Hexadecimal is " << BinaryToHexadecimal(num) << endl;
            break;
        }
        case 4: {
        int num;
            cout << "Please input Octal number for conversion: ";
            cin >> num;
            cout << num << " in Binary is " << OctalToBinary(num) << endl;
            break;
        }
        case 5: {
        int num;
            cout << "Please input Octal number for conversion: ";
            cin >> num;
            cout << num << " in Decimal is " << OctalToDecimal(num) << endl;
            break;
        }
        case 6: {
            int num;
            cout << "Please input Octal number for conversion: ";
            cin >> num;
            cout << num << " in Hexadecimal is " << OctalToHexadecimal(num) << endl;
            break;
        }
        case 7: {
            int num;
            cout << "Please input Decimal number for conversion: ";
            cin >> num;
            cout << num << " in Binary is " << DecimalToBinary(num) << endl;
            break;
        }
        case 8: {
            int num;
            cout << "Please input Decimal number for conversion: ";
            cin >> num;
            cout << num << " in Octal is " << DecimalToOctal(num) << endl;
            break;
        }
        case 9: {
            int num;
            cout << "Please input Decimal number for conversion: ";
            cin >> num;
            cout << num << " in Hexadecimal is " << DecimalToHexadecimal(num) << endl;
            break;
        }
        case 10: {
            string num;
            cout << "Please input Hexadecimal number for conversion: ";
            cin >> num;
            cout << num << " in Binary is " << HexadecimalToBinary(num) << endl;
            break;
        }
        case 11: {
            string num;
            cout << "Please input Hexadecimal number for conversion: ";
            cin >> num;
            cout << num << " in Octal is " << HexadecimalToOctal(num) << endl;
            break;
        }
        case 12:{
            string num;
            cout << "Please input Hexadecimal number for conversion: ";
            cin >> num;
            cout << num << " in Decimal is " << HexadecimalToDecimal(num) << endl;
            break;

        }
        default: {
            break;
        }
        }
        cout << endl;
        Menu();
        cout << "Please Make Your Selection: ";
        cin >> i;
    }
    return 0;
}

//displays the menu options for conversion
//Params: none
//Returns: void
//Format Error: there should be no errors
void Menu(){
    cout << "----------CONVERT----------" << endl;
    cout << "---------------------------" << endl;
    cout << "1.  Binary to Decimal" << endl;
    cout << "2.  Binary to Octal" << endl;
    cout << "3.  Binary to Hexadecimal" << endl;
    cout << "4.  Octal to Binary" << endl;
    cout << "5.  Octal to Decimal" << endl;
    cout << "6.  Octal to Hexadecimal" << endl;
    cout << "7.  Decimal to Binary" << endl;
    cout << "8.  Decimal to Octal" << endl;
    cout << "9.  Decimal to Hexadecimal" << endl;
    cout << "10. Hexadecimal to Binary" << endl;
    cout << "11. Hexadecimal to Octal" << endl;
    cout << "12. Hexadecimal to Decimal" << endl;
    cout << "13. Exit" << endl;
    cout << "---------------------------" << endl;
}

//converts from binary to Decimal
//Params: int binary number to convert
//Returns: int the converted number
//Format Error: there should be no errors
int BinaryToDecimal(int binaryNumber){
    int remainder, decimalNumber = 0, x = 1;
    while(binaryNumber > 0){
        remainder = binaryNumber%10;
        decimalNumber += (remainder*x);
        x*=2;
        binaryNumber /= 10;
    }
    return decimalNumber;
}

//converts from binary to Octal
//Params: int binary number to convert
//Returns: int the converted number
//Format Error: there should be no errors
int BinaryToOctal(int binaryNumber){
    return DecimalToOctal(BinaryToDecimal(binaryNumber));
}

//converts from binary to Hexadecimal
//Params: int binary number to convert
//Returns: string the converted number
//Format Error: there should be no errors
string BinaryToHexadecimal(int binaryNumber){
    return DecimalToHexadecimal(BinaryToDecimal(binaryNumber));
}

//converts from octal to binary
//Params: int octal number to convert
//Returns: int the converted number
//Format Error: there should be no errors
int OctalToBinary(int octalNumber){
    return DecimalToBinary(OctalToDecimal(octalNumber));
}

//converts from octal to Decimal
//Params: int octal number to convert
//Returns: int the converted number
//Format Error: there should be no errors
int OctalToDecimal(int octalNumber){
    int remainder, decimalNumber = 0, x = 1;
    while(octalNumber > 0){
        remainder = octalNumber%10;
        decimalNumber += (remainder*x);
        x*=8;
        octalNumber /= 10;
    }
    return decimalNumber;
}

//converts from octal to Hexadecimal
//Params: int octal number to convert
//Returns: int the converted number
//Format Error: there should be no errors
string OctalToHexadecimal(int octalNum){
    return DecimalToHexadecimal(OctalToDecimal(octalNum));
}

//converts from Decimal to binary
//Params: int decimal number to convert
//Returns: int the converted number
//Format Error: there should be no errors
int DecimalToBinary(int decimalNumber){
int binaryNumber = 0, count = 0;
int arr[1000];
    while(decimalNumber > 0){
        arr[count] = decimalNumber%2;
        count++;
        decimalNumber /= 2;
    }
    int x = 1;
    for(int i = count-1; i>= 0; i--){
        binaryNumber += (arr[i] *x);
        x *=10;
    }
    return binaryNumber;
}

//converts from Decimal to octal
//Params: int decimal number to convert
//Returns: int the converted number
//Format Error: there should be no errors
int DecimalToOctal(int decimalNumber){
int remainder, octalNumber = 0, count = 1;
    while(decimalNumber > 0){
        remainder = decimalNumber%8;
        decimalNumber/=8;
        octalNumber += (remainder *count);
        count *=10;
    }
    return octalNumber;
}
//converts from Decimal to hexadecimal
//Params: int decimal number to convert
//Returns: string the converted number
//Format Error: there should be no errors
string DecimalToHexadecimal(int decimalNumber){

    char hexaNumber[1000];
    int remainder, count = 0;
    while(decimalNumber > 0){
        remainder = decimalNumber%16;
        if(remainder <10){
            hexaNumber[count] = (48+remainder);
        } else if(remainder >= 10){
            hexaNumber[count] = (55+remainder);
        }
        count++;
        decimalNumber /= 16;
    }
    char hexa[count-1];
    int j=0;
    for(int i = count-1; i>= 0; i--){
        hexa[j] = hexaNumber[i];
        j++;
    }
    return string(hexa,count);
}

//converts from Hexadecimal to binary
//Params: string hexadecimal number to convert
//Returns: int the converted number
//Format Error: there should be no errors
int HexadecimalToBinary(string hexaNumber){
    return (DecimalToBinary(HexadecimalToDecimal(hexaNumber)));
}

//converts from Hexadecimal to octal
//Params: string hexadecimal number to convert
//Returns: int the converted number
//Format Error: there should be no errors
int HexadecimalToOctal(string hexaNumber){
    return (DecimalToOctal(HexadecimalToDecimal(hexaNumber)));

}

//converts from Hexadecimal to decimal
//Params: string hexadecimal number to convert
//Returns: int the converted number
//Format Error: there should be no errors
unsigned long HexadecimalToDecimal(string hexaNumber){
    char hexa[hexaNumber.length()+1];
    strcpy(hexa, hexaNumber.c_str());

    char *hexastr;
    int length = 0;
    unsigned long decimalNumber =0;

    for (hexastr = hexa; *hexastr != '\0'; hexastr++) {
      length++;
    }


    hexastr = hexa;
    for(int i = 0; *hexastr != '\0' && i< length; i++, hexastr++){
        if(*hexastr >= 48 && *hexastr <=57){
            decimalNumber += (((int)(*hexastr))-48)* pow(16, length-i-1);
        }else if(*hexastr >=65 && *hexastr <=70){
            decimalNumber += (((int)(*hexastr))-55)* pow(16, length-i-1);
        }else if(*hexastr >=97 && *hexastr <=102){
            cout << "option3" << endl;
            decimalNumber += (((int)(*hexastr))-87)* pow(16, length-i-1);
        }
    }
    return decimalNumber;
}

/**
 *  Calculate Complex number
 * Add, minus, multiply, divide
 *  T12032024
*/


#include <stdio.h>


typedef struct ComplexNum
{
    int realPart;
    int imagePart;
}   ComplexNum_t;

void CreateComplexNum (ComplexNum_t* num, int real, int image);
void PrintComplexNum(ComplexNum_t num);
ComplexNum_t AddTwoComplexNum (ComplexNum_t* numA, ComplexNum_t* numB);
ComplexNum_t MinusTwoComplexNum (ComplexNum_t* numA, ComplexNum_t* numB);
ComplexNum_t MultiplyTwoComplexNum (ComplexNum_t* numA, ComplexNum_t* numB);
ComplexNum_t DivideTwoComplexNum (ComplexNum_t* numA, ComplexNum_t* numB);

int main()
{
    ComplexNum_t numA, numB, numC;
    CreateComplexNum(&numA,10,-15);
    CreateComplexNum(&numB,5,0);
    PrintComplexNum(numA);
    PrintComplexNum(numB);

    // numC = AddTwoComplexNum (&numA, &numB);             // Add : Done
    // numC = MinusTwoComplexNum (&numA, &numB);             // Minus : Done
    // numC = MultiplyTwoComplexNum (&numA, &numB);             // Multiply : Done
    // numC = DivideTwoComplexNum (&numB, &numA);             // Divide : Done

    PrintComplexNum(numC);
    return 0;
}

void CreateComplexNum (ComplexNum_t* num, int real, int image)
{
    num->realPart = real;
    num->imagePart = image;
}

void PrintComplexNum(ComplexNum_t num)
{
    printf("\n Complex number is %2d + %2di",num.realPart, num.imagePart);
}

ComplexNum_t AddTwoComplexNum (ComplexNum_t* numA, ComplexNum_t* numB)
{
    ComplexNum_t result;
    result.realPart = numA->realPart + numB->realPart;
    result.imagePart = numA->imagePart + numB->imagePart;
    return result;
}

ComplexNum_t MinusTwoComplexNum (ComplexNum_t* numA, ComplexNum_t* numB)
{
    ComplexNum_t result;
    result.realPart = numA->realPart - numB->realPart;
    result.imagePart = numA->imagePart - numB->imagePart;
    return result;
}

ComplexNum_t MultiplyTwoComplexNum (ComplexNum_t* numA, ComplexNum_t* numB)
{
    ComplexNum_t result;
    result.realPart = numA->realPart * numB->realPart - numB->imagePart * numA->imagePart;
    result.imagePart = numA->realPart * numB->imagePart + numB->realPart * numA->imagePart;
    return result;
}

ComplexNum_t DivideTwoComplexNum (ComplexNum_t* numA, ComplexNum_t* numB)
{
    ComplexNum_t result;
    result.realPart = (numA->realPart * numB->realPart + numB->imagePart * numA->imagePart)/(numA->realPart*numA->realPart +  numA->imagePart* numA->imagePart);
    result.imagePart = (numA->realPart * numB->imagePart - numB->realPart * numA->imagePart)/(numA->realPart*numA->realPart +  numA->imagePart* numA->imagePart);
    return result;
}
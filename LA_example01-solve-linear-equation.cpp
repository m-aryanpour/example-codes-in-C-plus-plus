

#if 1
#include "lapackpp.h"
#endif

#if 0
#include LA_VECTOR_DOUBLE_H
#include "blaspp.h"
#include LA_SOLVE_DOUBLE_H
#include "lasvd.h"
#endif



//////////////////////////////////////////////////////////////////
int solve_AxB(LaGenMatDouble &A, const LaVectorDouble &b)
{
    LaVectorDouble x= b;
    std::cout<< " solve A*x = b , with ";
    std::cout << "\n\t A= [ " << A << "\t]";

    // save a snapshot of A
    LaGenMatDouble old_A = A;

    LaLinearSolve(A, x, b);
    std::cout << "\n\t b= [" << b << "\t]";
    std::cout << "\nsolution x= [" << x << "\t]\n";
     std::cout << "\tNorm_Inf(A*x-b)= " << Norm_Inf(old_A * x - b) << std::endl;

    return 0;
}


int main(int argc, char **argv)
{

    std::cout.precision(4);
    std::cout.setf(std::ios::scientific, std::ios::floatfield);
    LaException::enablePrint(true);

    double aa[] = { 1, -2, 3, 4, 5, -6, 8, 9 ,7 };
    double bb[] = { 11, 18, 9 };
    LaVectorDouble b1(bb,3);
    LaGenMatDouble A1(aa, 3, 3, true);
    solve_AxB(A1,b1);

    return 0;
}


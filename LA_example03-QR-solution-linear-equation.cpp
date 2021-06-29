

#if 1
#include "lapackpp.h"
#endif

#if 0
#include LA_VECTOR_DOUBLE_H
#include "blaspp.h"
#include LA_SOLVE_DOUBLE_H
#include "lasvd.h"
#endif


int main(int argc, char **argv)
{

    std::cout.precision(4);
    std::cout.setf(std::ios::scientific, std::ios::floatfield);
    LaException::enablePrint(true);

    double aa[] = { 1, 2, 3, -1, -1, 4 };

    LaGenMatDouble A(aa, 3, 2, true);
    LaVectorDouble X(2), B(3);
    B = -1.2;
//    create a copy of A
    LaGenMatDouble A1 = A; // because A1 is going to be destroyed
	
//    LaVectorDouble S(2);
//    LaGenMatDouble U(3, 2), VT(2, 2);
	LaQRLinearSolveIP(A1, X, B);

    
	 std::cout<<"\n QR solution of: A * X= B\n\n";
    std::cout << "\t A=[" << A
	 	        << "]\tB = [" << B
              << "]\n\tX  = [" << X
              << "]\n\t (A*X-B)= ["<< A*X-B<< "]\n"	;

	
    return 0;
}


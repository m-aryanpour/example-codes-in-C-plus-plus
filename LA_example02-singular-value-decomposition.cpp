

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
    // create a copy of A
    LaGenMatDouble A1 = A; // because A1 is destroyed by LaSVD_IP
	
    LaVectorDouble S(2);
    LaGenMatDouble U(3, 2), VT(2, 2);
	
	 LaSVD_IP(A1, S, U, VT);
	 std::cout<<"\n singular value decomposition: A = U*S*VT\n\n";
    std::cout << "Matrix A=[" << A
	 	        << "]\nSingular values sigma = [" << S
              << "]\nLeft  vect. U  = [" << U
              << "]\nRight vect. VT = [" << VT
              << std::endl;
     double ss[] = {S(0),0,0,S(1)};
     LaGenMatDouble S1(ss,2,2,true); // make S1 a diagonal matrix
	
	std::cout << "(A-U*S*VT)= [" << (A-U*S1*VT) << "]\n";
    return 0;
}


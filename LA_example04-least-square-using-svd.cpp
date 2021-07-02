//
//              LAPACK++ 1.1 Linear Algebra Package 1.1
//               University of Tennessee, Knoxvilee, TN.
//            Oak Ridge National Laboratory, Oak Ridge, TN.
//        Authors: J. J. Dongarra, E. Greaser, R. Pozo, D. Walker
//                 (C) 1992-1996 All Rights Reserved
//
//                             NOTICE
//
// Permission to use, copy, modify, and distribute this software and
// its documentation for any purpose and without fee is hereby granted
// provided that the above copyright notice appear in all copies and
// that both the copyright notice and this permission notice appear in
// supporting documentation.
//
// Neither the Institutions (University of Tennessee, and Oak Ridge National
// Laboratory) nor the Authors make any representations about the suitability
// of this software for any purpose.  This software is provided ``as is''
// without express or implied warranty.
//
// LAPACK++ was funded in part by the U.S. Department of Energy, the
// National Science Foundation and the State of Tennessee.


#include "lafnames.h"       /* macros for LAPACK++ filenames */
#include LA_GEN_MAT_DOUBLE_H
#include LA_VECTOR_DOUBLE_H
#include LA_SYMM_MAT_DOUBLE_H
#include "blaspp.h"
#include LA_SOLVE_DOUBLE_H
#include LA_GENERATE_MAT_DOUBLE_H
#include LA_EXCEPTION_H
#include LA_UTIL_H
#include "lasvd.h"

//-----------------------------------------------
LaGenMatDouble MatTranspose(int M, int N, const LaGenMatDouble &A)
{
	LaGenMatDouble A1(N,M);
    for (int i=0; i<N; i++){
    	for(int j=0; j<M; j++){
    		A1(i,j) = A(j,i);
    	}
    }
    return(A1);
}

//-----------------------------------------------
void PrintMat(int M, int N, const LaGenMatDouble &A)
{
	std::cout<<"[\n";
    for (int i=0; i<M; i++){
    	for(int j=0; j<N; j++){
    		std::cout<<A(i,j)<< "  ";
    	}
   std::cout <<"\n"; 	
    }
	std::cout <<"\n]\n";
}

//-----------------------------------------------
void PrintVec(int M, const LaVectorDouble &A)
{
	std::cout<<"[";
    for (int i=0; i<M; i++){
    		std::cout<<A(i)<< "  ";
    }
	std::cout <<"]\n";
}
//-----------------------------------------------
LaGenMatDouble DiagInverse(int M, const LaVectorDouble &S){
      LaGenMatDouble Diag(M,M);
      
      for (int i =0; i<M; i++){
      	for (int j=0; j<M; j++){
      		Diag(i,j) = 0.;
      		if (i==j){
      			Diag(i,j)= 1./S(i);
      		}
      	}
      	
	    }

	return(Diag);
}
//-----------------------------------------------
LaGenMatDouble VandermondeMat(int M, int N, const LaVectorDouble &x){
		double x_to_the_j;
		LaGenMatDouble P(M,N);
		for (int i=0; i<M; i++) // construct Vandermonde matrix
		{
			x_to_the_j = 1;
			for (int j=0; j<N; j++)
			{
				P(i,j) = x_to_the_j;
				x_to_the_j *= x(i);
			}
		}
	return(P);

} 
//=============================
int main(int argc, char **argv)
{

    std::cout.precision(4);
    std::cout.setf(std::ios::scientific, std::ios::floatfield);

   
      
    	double x1[] = { 1, -2., 3., 4., -5};
    	double y1[] = { 0,  2., -3., -4., -5};
		int N = 5; // min(x.size(), y.size());
		int d= 4;    	
		LaVectorDouble x(x1,N);    	
    	LaVectorDouble y(y1,N);		
 	
		LaGenMatDouble P= VandermondeMat(N,d,x);
		std::cout << "P= "; PrintMat(N,d,P);

	   LaVectorDouble S(d);
	   LaGenMatDouble U(N,d), VT(d,d);
      LaSVD_IP(P, S, U, VT);	
      std::cout << "S= "; PrintVec(d,S);
	   
	   LaGenMatDouble Diag = DiagInverse(d,S);
      std::cout << "diag(S)^-1=[ "<<Diag<<"]\n";

  	   LaGenMatDouble UT = MatTranspose(N,d,U);
  	   LaGenMatDouble V  = MatTranspose(d,d,VT);  	    
	   LaVectorDouble Coeffs= V * Diag * UT * y;
    	std::cout << "Coeffs="; PrintVec(d,Coeffs);

}











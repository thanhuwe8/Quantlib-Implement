


#include <boost/numeric/ublas/symmetric.hpp>
#include <boost/numeric/ublas/io.hpp>

int main () {
	using namespace boost::numeric::ublas;
	symmetric_matrix<double, lower> ml(3,3);
	for(unsigned i = 0; i < ml.size1(); ++i){
		for (unsigned j = 0; j <= i; ++j) {
			ml(i,j) = 3*i+j;
		}
	}
	std::cout << ml;
}

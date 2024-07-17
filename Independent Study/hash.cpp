#include <iostream>
#include <stdio.h>
#include <string>
#include "../ntCard-master/Common/ntHashIterator.hpp"

int main(int argc, const char* argv[])
{
	/* test sequence */
	std::string seq = "GAGTGTCAAACATTCAGACAACAGCAGGGGTGCTCTGGAATCCTATGTGAGGAACAAACATTCAGGCCACAGTAG";
	
	/* k is the k-mer length */
	unsigned k = 70;
	
	/* h is the number of hashes for each k-mer */
	unsigned h = 1;
	
	/* init ntHash state and compute hash values for first k-mer */
	ntHashIterator itr(seq, h, k);
	while (itr != itr.end()) {
		std::cout << (*itr)[0] << std::endl;
		++itr;
	}

	return 0;
}

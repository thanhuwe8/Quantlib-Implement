//
//  BrownianBridge.hpp
//  QuantlibImplementation
//
//  Created by Minh Thành Nguyễn on 1/26/19.
//  Copyright © 2019 Minh Thành Nguyễn. All rights reserved.
//

#ifndef BrownianBridge_hpp
#define BrownianBridge_hpp

#include <stdio.h>
#include <vector>
using namespace std;

class BrownianBridge{
public:
	BrownianBridge(unsigned long numberOfSteps);
	virtual ~BrownianBridge(){};
	void buildPath(vector<double>& theWienerProcessPath, const vector<double>& gaussianVariates);
private:
	unsigned long numberOfSteps;
	std::vector<unsigned long> leftIndex;
	std::vector<unsigned long> rightIndex;
	std::vector<unsigned long> bridgeIndex;
	std::vector<double> leftWeight;
	std::vector<double> rightWeight;
	std::vector<double> stddev;
	std::vector<double> normalVariates;
};
#endif /* BrownianBridge_hpp */

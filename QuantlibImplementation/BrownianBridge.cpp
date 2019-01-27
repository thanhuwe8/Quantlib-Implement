//
//  BrownianBridge.cpp
//  QuantlibImplementation
//
//  Created by Minh Thành Nguyễn on 1/26/19.
//  Copyright © 2019 Minh Thành Nguyễn. All rights reserved.
//

#include "BrownianBridge.hpp"
#include <cmath>

BrownianBridge::BrownianBridge(unsigned long numberOfSteps):numberOfSteps(numberOfSteps), leftIndex(leftIndex),rightIndex(rightIndex), bridgeIndex(bridgeIndex),leftWeight(leftWeight), rightWeight(rightWeight),stddev(stddev){

	vector<unsigned long> map(numberOfSteps);
	map[numberOfSteps-1] = 1;
	
	bridgeIndex[0] = numberOfSteps;
	stddev[0] = sqrt(numberOfSteps);
	
	leftWeight[0] = rightWeight[0] = 0;
	
	for(int j = 0, int i = 0; i < numberOfSteps; ++i){
		while(map[j])
			++j;
		k = j;
		
		while((!map[k]))
			++k;
		l = j + ((k-1-j)>>1);
		map[j] = i;
		
	}
}


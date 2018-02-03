/*
 * PrintTable.cpp
 *
 *  Created on: Feb 2, 2018
 *      Author: Liao_Family
 */
#include "PrintTable.h"
#include <iostream>
#include "C:/Users/Liao_Family/wpilib/cpp/current/include/WPILib.h"



void readTable(){
	std::shared_ptr<NetworkTable> table = NetworkTable::GetTable("GRIP/myContoursReport");

	while(true){
		std::cout << "Areas: ";

		std::vector<double> arr = table->GetNumberArray("area", llvm::ArrayRef<double>());
		for(int i = 0; i < arr.size(); i++){
			std::cout << arr[i] << " ";
		}

		std::cout <<std::endl;
	}

}



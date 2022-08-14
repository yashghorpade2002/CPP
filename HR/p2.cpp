# include <iostream>
# include <cmath>
int main() {
	double meal_cost;
	int tip_percent;
	int tax_percent;
	double tip, tax;
	int total_cost;

	std::cin >> meal_cost ;
	std::cin >> tip_percent;
	std::cin >> tax_percent;
	
	tip = (meal_cost/100) * tip_percent;
	tax = (meal_cost/100) * tax_percent;
	
	total_cost = (int)round( meal_cost + tip + tax );

	std::cout << total_cost << std::endl;

	return 0;
}

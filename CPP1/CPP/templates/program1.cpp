/*# include <iostream>
template <typename T>
T add(T x, T y) {

	return x+y;

}
int main() {

	std::cout << add(10,20) << std::endl;
	std::cout << add(10.5,20.5) << std::endl;
	return 0;

}*/

# include <iostream>

class Template {

	public:
		template<typename T>
			T add(T x, T y) {
			
				return x+y;

			}
};

int main() {

	Template obj;
	std::cout << obj.add(10,20) << std::endl;
	std::cout << obj.add(10.5,20.5) << std::endl;

	return 0;

}

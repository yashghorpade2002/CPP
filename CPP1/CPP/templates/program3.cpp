# include <iostream>

class Template {

	public:
		template<typename T>
			void fun(T x, T y) {
			
				std::cout << "Class Template" << std::endl;
				std::cout << x + y << std::endl;

			}
};

template<typename T>

void fun1(T x, T y) {

		std::cout << " Template" << std::endl;
		std::cout << x + y << std::endl;

}

int main() {

	Template obj;
	obj.fun<int>(10,10.5);
	fun1<int>(10,10.5);

	return 0;

}

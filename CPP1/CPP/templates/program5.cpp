/*# include <iostream>

class Template {
	public:
		
		template <typename T>
			void fun(T x) {
		
				std::cout << "Template" << std::endl;
			}

		template <>
		void fun(int x) {
		
			std::cout << "Int specific template" <<std::endl;
		}
};

int main() {

	Template obj;
	obj.fun<int>(10);
	obj.fun<double>(20.245);
	obj.fun<float>(20.5f);

	return 0;

}
*/
# include <iostream>

template<typename T>
void disp(T x) {

	std::cout << "Template" << std::endl;

}

template <>
void disp(int x) {

	std::cout << "int specific Template" << std::endl;
}

int main() {

	disp<double>(10.25);
	disp<int>(10);
	disp<float>(10.5f);
	return 0;
}

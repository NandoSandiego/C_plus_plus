

class Base1{
	
	public:
		void imprBase1();
};

void Base1::imprBase1(){
	
	std::cout << "Impressao classe Base1" << std::endl;
}


class Base2{
	
	public:
		void imprBase2();
	
};

void Base2::imprBase2(){
	
	std::cout << "Impressao classe Base2" << std::endl;
}


class herdeiro:public Base1,public Base2{ // Herda caracteristica das duas bases
	
};

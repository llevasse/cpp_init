#include "Serialization.hpp"

int	main(){
	uintptr_t ptr;
	Data *data = new Data;
	Data *post;

	data->value = 42;
	ptr = Serialization::serialize(data);
	std::cout << "post serialize() : " << ptr << std::endl;
	post = Serialization::deserialize(ptr);
	std::cout << "post deserialize() : " << post->value << std::endl;

}

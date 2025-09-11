// #include <iostream>
// #include <vector>

// int main()
// {
//     std::vector<int> sample;
//     sample.push_back(10);

//     std::cout << "vector begin value   : " << *sample.begin() << std::endl;
//     std::cout << "vector begin address : " << sample.data() << std::endl;// this how u can get the address

//     std::cout << "Sample .begin is not a pointer . Hence we cannot print the address. Its ab object so the << overload function will show an error as nobody has return a overload logic for this operator" << std::endl;



//     //vector has three metadata(information of the vector datatyor that u justinitiales)

//     //1. Iterator object pointing to first element
//     //2. Size of the vector( ie total number of values occupied in the vector).
//     //3. Capacity of the vector (ie total continous memory allocated for the vector)

//     sample.size();
// }
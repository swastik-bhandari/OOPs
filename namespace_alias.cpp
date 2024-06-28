#include <iostream>
#include <nlohmann/json.hpp>

using nlohmann::json; 
using json=nlohmann::json ;

int main() {
    // Create a JSON object
    json jsonObj;
    jsonObj["name"] = "John Doe";
    jsonObj["age"] = 30;
    jsonObj["is_student"] = false;
    jsonObj["courses"] = {"Math", "Science"};
    jsonObj["address"] = {
        {"street", "123 Main St"},
        {"city", "Anytown"}
    };

    // Serialize the JSON object to a string
    std::string jsonString = jsonObj.dump();
    std::cout << "Serialized JSON: " << jsonString << std::endl;

    // Deserialize the JSON string back to a JSON object
    json jsonData = json::parse(jsonString);

    // Access data from the JSON object
    std::cout << "Name: " << jsonData["name"] << std::endl;
    std::cout << "Age: " << jsonData["age"] << std::endl;
    std::cout << "Is Student: " << jsonData["is_student"] << std::endl;
    std::cout << "Street: " << jsonData["address"]["street"] << std::endl;
    std::cout << "City: " << jsonData["address"]["city"] << std::endl;

    return 0;
}


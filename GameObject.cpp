#include "GameObject.h"
#include <iostream>

#pragma region Initialize
Engine::GameObject::GameObject(const std::string _name) {
	this->name = _name;
}

Engine::GameObject::GameObject(const std::string _name, const std::string _tag) {
	this->name = _name;
	this->tag = _tag;
}

Engine::GameObject::GameObject(const Engine::GameObject& other) {
	this->name = other.name;
}

Engine::GameObject& Engine::GameObject::operator=(const Engine::GameObject& other) {
	this->name = other.name;
	return *this;
}
#pragma endregion


#pragma region Lifecycle
void Engine::GameObject::Awake() {
	std::cout << "MONSTER AWAKE" << std::endl;
}

void Engine::GameObject::OnEnable() {
	std::cout << "MONSTER ONENABLE" << std::endl;

}

void Engine::GameObject::Start() {
	std::cout << "MONSTER START" << std::endl;

}

void Engine::GameObject::Update() {
	std::cout << "MONSTER UPDATE" << std::endl;

}

void Engine::GameObject::OnDisable() {
	std::cout << "MONSTER ONDISABLE" << std::endl;

}

void Engine::GameObject::OnDestroy() {
	std::cout << "MONSTER ONDESTROY" << std::endl;

}
#pragma endregion


#pragma region API
const std::string& Engine::GameObject::GetName() const {
	return name;
}

std::string& Engine::GameObject::GetName() {
	return name;
}

const std::string& Engine::GameObject::GetTag() const {
	return tag;
}

std::string& Engine::GameObject::GetTag() {
	return tag;
}
#pragma endregion
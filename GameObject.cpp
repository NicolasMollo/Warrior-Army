#include "GameObject.h"
#include <iostream>

#pragma region Initialize
Engine::GameObject::GameObject(const std::string _name, const bool _isActive) {
	this->name = _name;
	this->isActive = _isActive;
	this->lastActivationState = this->isActive;
	//this->firstTimeInGame = true;
}

Engine::GameObject::GameObject(const std::string _name, const std::string _tag, const bool _isActive) {
	this->name = _name;
	this->tag = _tag;
	this->isActive = _isActive;
	this->lastActivationState = this->isActive;
	/*this->firstTimeInGame = true;*/
}

Engine::GameObject::GameObject(const Engine::GameObject& other) {
	this->name = other.name;
	this->tag = other.tag;
	this->isActive = other.isActive;
	this->lastActivationState = other.isActive;
}

Engine::GameObject& Engine::GameObject::operator=(const Engine::GameObject& other) {
	this->name = other.name;
	this->tag = other.tag;
	this->isActive = other.isActive;
	this->lastActivationState = other.isActive;
	return *this;
}

Engine::GameObject::~GameObject() {
	std::cout << "SONO STATO DISTRUTTO" << std::endl;
}
#pragma endregion


#pragma region Lifecycle
void Engine::GameObject::Awake() {
	std::cout << "MONSTER AWAKE" << std::endl;
}

void Engine::GameObject::OnEnable() {
	std::cout << "MONSTER ONENABLE" << std::endl;

	lastActivationState = true;
}

void Engine::GameObject::Start() {
	std::cout << "MONSTER START" << std::endl;

}

void Engine::GameObject::Update() {
	std::cout << "MONSTER UPDATE" << std::endl;

}

void Engine::GameObject::OnDisable() {
	std::cout << "MONSTER ONDISABLE" << std::endl;

	lastActivationState = false;
}

void Engine::GameObject::OnDestroy() {
	lastDestroyedState = true;
	Engine::GameObject::~GameObject();
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

const bool& Engine::GameObject::IsActive() const {
	return isActive;
}

bool& Engine::GameObject::IsActive() {
	return isActive;
}

const bool& Engine::GameObject::LastActivationState() const {
	return lastActivationState;
};

bool& Engine::GameObject::LastActivationState() {
	return lastActivationState;
}

const bool& Engine::GameObject::FirstTimeInGame() const {
	return firstTimeInGame;
}

bool& Engine::GameObject::FirstTimeInGame() {
	return firstTimeInGame;
}

const bool& Engine::GameObject::ItsDestroyed() const {
	return itsDestroyed;
}

bool& Engine::GameObject::ItsDestroyed() {
	return itsDestroyed;
}

const bool& Engine::GameObject::LastDestroyedState() const {
	return lastDestroyedState;
}

bool& Engine::GameObject::LastDestroyedState() {
	return lastDestroyedState;
}
#pragma endregion
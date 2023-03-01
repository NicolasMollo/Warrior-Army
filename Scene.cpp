#include "Scene.h"

#pragma region Initialization
Engine::Scene::Scene(const std::string _name) {
	this->name = _name;
}
#pragma endregion


#pragma region Lifecycle
void Engine::Scene::Awake() {
	for (Engine::GameObject object : game_objects) {
		object.Awake();
		std::cout << "Awake called" << std::endl;

	}
}

void Engine::Scene::OnEnable() {
	for (Engine::GameObject object : game_objects) {
		object.OnEnable();
		std::cout << "OnEnable called" << std::endl;
	}
}

void Engine::Scene::Start() {
	for (Engine::GameObject object : game_objects) {
		object.Start();
		std::cout << "Start called" << std::endl;

	}
}

void Engine::Scene::Update() {
	for (Engine::GameObject object : game_objects) {
		object.Update();
		std::cout << "Update called" << std::endl;

	}
}

void Engine::Scene::OnDisable() {
	for (Engine::GameObject object : game_objects) {
		object.OnDisable();
		std::cout << "OnDisable called" << std::endl;

	}
}

void Engine::Scene::OnDestroy() {
	for (Engine::GameObject object : game_objects) {
		object.OnDestroy();
		std::cout << "OnDestroycalled" << std::endl;

	}
}
#pragma endregion


#pragma region API
std::vector<Engine::GameObject>& Engine::Scene::GetMyGameObjects() {
	return Engine::Scene::game_objects;
}

const std::vector<Engine::GameObject>& Engine::Scene::GetMyGameObjects() const {
	return Engine::Scene::game_objects;
}



void Engine::Scene::AddGameObjects(std::vector<Engine::GameObject>& _objects) {
	for (Engine::GameObject object : _objects) {
		game_objects.push_back(object);
	}
}

void Engine::Scene::AddGameObject(Engine::GameObject& _object) {
	game_objects.push_back(_object);
}



void Engine::Scene::RemoveGameObject(Engine::GameObject& _object) {
	for (size_t i = 0; i < game_objects.size(); i++) {
		if (game_objects[i].GetName() == _object.GetName()) {
			game_objects.erase(game_objects.begin() + i);
		}
	}
}

void Engine::Scene::RemoveAllGameObjects() {
	game_objects.clear();
}



const std::string& Engine::Scene::GetName() const {
	return name;
}

std::string& Engine::Scene::GetName() {
	return name;
}
#pragma endregion
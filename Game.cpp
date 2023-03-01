#include "Game.h"

#pragma region Lifecycle

#pragma endregion


#pragma region API
Engine::GameObject Engine::Game::CreateGameObject(const std::string _name) {
	Engine::GameObject new_gameobject(_name);
	std::cout << new_gameobject.GetName() << std::endl;
	return new_gameobject;
}

std::vector<Engine::GameObject> Engine::Game::CreateGameObjects(const int _number, const WarriorType _warriorType) {
	std::vector<Engine::GameObject> gameobjects;
	std::string name = _warriorType == WarriorType::Goblin ? "GOBLIN: " :
					   _warriorType == WarriorType::Knight ? "KNIGHT: " :
					   _warriorType == WarriorType::Monster ? "MONSTER: " : "GOBLIN ";

	for (int i = 0; i < _number; i++) {
		gameobjects.push_back(CreateGameObject(name));
	}

	return gameobjects;
}



void Engine::Game::InitScene(Engine::Scene& _scene, const int numbofgo) {
	std::vector<Engine::GameObject> gameobjects = CreateGameObjects(numbofgo, WarriorType::Monster);
	_scene.AddGameObjects(gameobjects);
}

void Engine::Game::GameLoop(Engine::Scene& _scene) {
	_scene.Awake();
	_scene.OnEnable();
	_scene.Start();
	_scene.Update();
	_scene.OnDisable();
	_scene.OnDestroy();
}
#pragma endregion
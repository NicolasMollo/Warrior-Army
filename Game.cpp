#include "Game.h"
#include "Warrior.h"
#include "StreamOverrides.h"

#pragma region Lifecycle

#pragma endregion

//CREARE UN MANAGER CHE SI OCCUPI DELLA CREAZIONE DEI GAMEOBJECTS/FIGLI.

#pragma region API
Engine::GameObject Engine::Game::CreateGameObject(const std::string _name, const std::string _tag) {
	Engine::GameObject new_gameobject(_name, _tag);
	std::cout << new_gameobject.GetName() << std::endl;
	return new_gameobject;
}

std::vector<Engine::GameObject> Engine::Game::CreateGameObjects(const int _number, const WarriorArmy::WarriorType _warriorType) {
	std::vector<Engine::GameObject> gameobjects;
	std::string name = _warriorType == WarriorArmy::WarriorType::Goblin ? "GOBLIN: " :
					   _warriorType == WarriorArmy::WarriorType::Knight ? "KNIGHT: " :
					   _warriorType == WarriorArmy::WarriorType::Monster ? "MONSTER: " : "GOBLIN ";
	std::string tag = "GUERRIERO";

	for (int i = 0; i < _number; i++) {
		gameobjects.push_back(CreateGameObject(name, tag));
	}

	return gameobjects;
}



void Engine::Game::InitScene(Engine::Scene& _scene, const int numbofgo) {
	std::vector<Engine::GameObject> gameobjects = CreateGameObjects(numbofgo, WarriorArmy::WarriorType::Monster);
	_scene.AddGameObjects(gameobjects);

	// test
	WarriorArmy::Warrior pippo("SCIMMIA", "ANIMALE", true, 20, WarriorArmy::WarriorType::Goblin);
	_scene.AddGameObject(pippo);
	std::cout << pippo.GetName() << " " << pippo.GetTag() << " " << pippo.GetDamage() << " " << std::endl;
	printf("Type %d \n", pippo.GetType()); // Fare l'override dell'operatore '<<' per far sì che accetti il tipo "WarriorType". 
	/*std::cout << pippo.GetType() << std::endl;*/
	//
}

void Engine::Game::GameLoop(Engine::Scene& _scene) {
	_scene.Awake();
	_scene.OnEnable();
	_scene.Start();
	_scene.Update();
	/*_scene.OnDisable();*/
	/*_scene.OnDestroy();*/
}
#pragma endregion
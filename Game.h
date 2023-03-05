#ifndef WARRIORARMY_GAME
#define WARRIORARMY_GAME

#include "Scene.h"
#include "Warrior.h"
#include <vector>

// ~

namespace Engine {

	class Game {

	protected:
		std::vector<Engine::Scene> scenes;
		std::vector<Engine::GameObject> game_objects;

	public:
		Game() = default;
		~Game() = default;
		Game(const Game& other) = delete;
		Game operator=(const Game& other) = delete;

		//Scene CreateScene(const std::string _scenename);
		GameObject CreateGameObject(const std::string _name, const std::string _tag);
		std::vector<GameObject> CreateGameObjects(const int _number, const WarriorArmy::WarriorType _warriorType);
		void InitScene(Engine::Scene& _scene, const int numbofgo);
		void GameLoop(Engine::Scene& _scene);
	};

}

#endif // !WARRIORARMY_GAME
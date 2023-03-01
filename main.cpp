#include <iostream>
#include <vector>
#include "Scene.h"
#include "GameObject.h"
#include "Game.h"
#include "StreamOverrides.h"


int main(int argc, char** argv) {
	std::cout << "I'm the main" << std::endl;

#pragma region Test scene API
	//Engine::Scene scene;
	//std::vector<Engine::GameObject> game_objects;
	//Engine::GameObject a("Pippo", "AAA");
	//Engine::GameObject b("Franco", "AAA");
	//Engine::GameObject c("Topolino", "Player");
	//Engine::GameObject d("Paperino", "AAA");
	//Engine::GameObject e("Pluto", "Pino");
	//Engine::GameObject f("iiii", "AAA");
	//game_objects.push_back(a);
	//game_objects.push_back(b);
	//game_objects.push_back(c);
	//game_objects.push_back(d);
	//game_objects.push_back(e);
	//game_objects.push_back(f);

	//game_objects[0].GetTag() = "Pupazzo";

	//scene.AddGameObjects(game_objects);


	///*std::cout << "NAME " << a.GetName() << std::endl;
	//std::cout << "NAME " << d.GetName() << std::endl;*/
	//std::cout << scene.GetMyGameObjects() << std::endl;
	//std::cout << d.GetTag() << std::endl;
	//scene.RemoveGameObject(d);
	//std::cout << scene.GetMyGameObjects() << std::endl;
	//scene.RemoveAllGameObjects();
	//std::cout << scene.GetMyGameObjects() << std::endl;
	//Engine::GameObject ffff("Nuovo g.o. in citta");
	//scene.AddGameObject(ffff);
	//std::cout << scene.GetMyGameObjects() << std::endl;
#pragma endregion

	Engine::Game game;
	Engine::Scene scene("Game scene");
	game.InitScene(scene, 10);
	game.GameLoop(scene);

}
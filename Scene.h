#ifndef WARRIORARMY_SCENE
#define WARRIORARMY_SCENE

#include "IAwakeable.h"
#include "IEnable.h"
#include "IStartable.h"
#include "IUpdateable.h"
#include "IDisable.h"
#include "IDestroyable.h"
#include "GameObject.h"
#include <string>
#include <vector>
#include <iostream>

// ~

namespace Engine {

	class Scene : public Lifecycle::IAwakeable, public Lifecycle::IEnable, public Lifecycle::IStartable,
				  public Lifecycle::IUpdateable, public Lifecycle::IDisable, public Lifecycle::IDestroyable {

	protected:
		std::string name;
		std::vector<Engine::GameObject> game_objects;

	public:
		Scene() = delete;
		Scene(const std::string _name);
		~Scene() = default;
		Scene(const Scene&) = delete;
		Scene& operator=(const Scene& other) = delete;

		void Awake() override;
		void OnEnable() override;
		void Start() override;
		void Update() override;
		void OnDisable() override;
		void OnDestroy() override;

		std::vector<GameObject>& GetMyGameObjects();
		const std::vector<GameObject>& GetMyGameObjects() const;
		void AddGameObjects(std::vector<Engine::GameObject>& _objects);
		void AddGameObject(GameObject& _object);
		void RemoveGameObject(GameObject& _object);
		void RemoveAllGameObjects();
		//GameObject& FindObjectWithName(std::string _name);

		const std::string& GetName() const;
		std::string& GetName();
	};
}


#endif // !WARRIORARMY_SCENE
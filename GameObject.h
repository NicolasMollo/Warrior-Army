#ifndef WARRIORARMY_GAMEOBJECT
#define WARRIORARMY_GAMEOBJECT

#include "IAwakeable.h"
#include "IEnable.h"
#include "IStartable.h"
#include "IUpdateable.h"
#include "IDisable.h"
#include "IDestroyable.h"
#include <string>

// ~

namespace Engine {

	class GameObject : public Lifecycle::IAwakeable, public Lifecycle::IEnable, public Lifecycle::IStartable,
					   public Lifecycle::IUpdateable, public Lifecycle::IDisable, public Lifecycle::IDestroyable {

	private:
		bool firstTimeInGame = true;
		bool lastDestroyedState = false;
		bool itsDestroyed = false;

	protected:
		std::string name = "default_name";
		std::string tag = "default_tag";
		bool lastActivationState;
		bool isActive;

	public:

		GameObject() = default;
		GameObject(const std::string _name, const bool _isActive = true);
		GameObject(const std::string _name, const std::string _tag, const bool _isActive = true);
		GameObject(const GameObject& other);
		GameObject& operator=(const GameObject& other);
		~GameObject();

		virtual void Awake() override;
		virtual void OnEnable() override;
		virtual void Start() override;
		virtual void Update() override;
		virtual void OnDisable() override;
		virtual void OnDestroy() override;

		const std::string& GetName() const;
		std::string& GetName();
		const std::string& GetTag() const;
		std::string& GetTag();
		const bool& IsActive() const;
		bool& IsActive();
		const bool& LastActivationState() const;
		bool& LastActivationState();
		const bool& FirstTimeInGame() const;
		bool& FirstTimeInGame();
		const bool& ItsDestroyed() const;
		bool& ItsDestroyed();
		const bool& LastDestroyedState() const;
		bool& LastDestroyedState();

	};
}

#endif // !WARRIORARMY_GAMEOBJECT
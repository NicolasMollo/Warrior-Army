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

	protected:
		std::string name = "default_name";
		std::string tag = "default_tag";

	public:

		GameObject() = delete;
		GameObject(const std::string _name);
		GameObject(const std::string _name, const std::string _tag);
		GameObject(const GameObject& other);
		GameObject& operator=(const GameObject& other);
		~GameObject() = default;

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


	};
}

#endif // !WARRIORARMY_GAMEOBJECT
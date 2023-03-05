#ifndef WARRIORARMY_WARRIOR
#define WARRIORARMY_WARRIOR

#include "GameObject.h"
#include <string>

// ~

namespace WarriorArmy {

	enum class WarriorType {
		Goblin,
		Monster,
		Knight,
		Last
	};

	class Warrior : public Engine::GameObject {

	private:
		int hp = 100;
		WarriorType type = WarriorType::Goblin;
		int damage = 0;

	protected:
	public:
		Warrior() = delete;
		Warrior(const std::string _name, const int _hp, const WarriorType _type);
		Warrior(const std::string _name, const std::string _tag, const int _hp, const WarriorType _type);
		Warrior(const std::string _name, const std::string _tag, const bool _isActive, const int _hp, const WarriorType _type);
		Warrior(const Warrior& other);
		Warrior& operator=(const Warrior& other);
		~Warrior() = default;

		virtual void Awake() override;
		virtual void OnEnable() override;
		virtual void Start() override;
		virtual void Update() override;
		virtual void OnDisable() override;
		virtual void OnDestroy() override;

		const int& GetHp() const;
		int& GetHp();
		const WarriorType& GetType() const;
		const int& GetDamage() const;
		int& GetDamage();

		void TakeHealth(const int _hp);
		void TakeDamage(const int _damage, Warrior& _other) const;
	};

}

#endif // !WARRIORARMY_WARRIOR
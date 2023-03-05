#include "Warrior.h"

#pragma region Initialization
WarriorArmy::Warrior::Warrior(const std::string _name, const int _hp, const WarriorType _type) {
	this->name = _name;
	this->hp = _hp;
	this->type = _type == WarriorType::Last ? WarriorType::Goblin : _type;
	this->damage = _type == WarriorType::Goblin ? 10 :
		     _type == WarriorType::Knight ? 15 : 20;
}

WarriorArmy::Warrior::Warrior(const std::string _name, const std::string _tag, const int _hp, const WarriorType _type) {
	this->name = _name;
	this->tag = _tag;
	this->hp = _hp;
	this->type = _type == WarriorType::Last ? WarriorType::Goblin : _type;
	this->damage = _type == WarriorType::Goblin ? 10 :
		_type == WarriorType::Knight ? 15 : 20;
}

WarriorArmy::Warrior::Warrior(const std::string _name, const std::string _tag, const bool _isActive, const int _hp, const WarriorType _type) {
	this->name = _name;
	this->tag = _tag;
	this->isActive = _isActive;
	this->hp = _hp;
	this->type = _type == WarriorType::Last ? WarriorType::Goblin : _type;
	this->damage = _type == WarriorType::Goblin ? 10 :
		_type == WarriorType::Knight ? 15 : 20;
}

WarriorArmy::Warrior::Warrior(const Warrior& other) {
	this->hp = other.hp;
	this->type = other.type;
	this->damage = other.damage;
}

WarriorArmy::Warrior& WarriorArmy::Warrior::operator=(const Warrior& other) {
	this->hp = other.hp;
	this->type = other.type;
	this->damage = other.damage;
	return *this;
}
#pragma endregion


#pragma region Lifecycle
void WarriorArmy::Warrior::Awake() {

}

void WarriorArmy::Warrior::OnEnable() {

}

void WarriorArmy::Warrior::Start() {

}

void WarriorArmy::Warrior::Update() {

}

void WarriorArmy::Warrior::OnDisable() {

}

void WarriorArmy::Warrior::OnDestroy() {

}
#pragma endregion


#pragma region API
const int& WarriorArmy::Warrior::GetHp() const {
	return hp;
}

int& WarriorArmy::Warrior::GetHp() {
	return hp;
}

const WarriorArmy::WarriorType& WarriorArmy::Warrior::GetType() const {
	return type;
}

const int& WarriorArmy::Warrior::GetDamage() const {
	return damage;
}

int& WarriorArmy::Warrior::GetDamage() {
	return damage;
}


void WarriorArmy::Warrior::TakeDamage(const int _damage, Warrior& _other) const {
	_other.GetHp() -= _damage;
}

void WarriorArmy::Warrior::TakeHealth(const int _hp) {
	GetHp() += _hp;
}
#pragma endregion
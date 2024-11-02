#include "actor.h"
#include "battlefield.h"

std::vector<Pet_T> RainyActor::ChooseStartingPet() {
    // TODO: 返回雨天队的出场宠物
    return std::vector<Pet_T>();
}

Action_T RainyActor::ChooseAction() {
    // TODO: 返回选取的动作
    return Action::Skill;
}

Pet_T RainyActor::ChoosePet(bool) {
    // TODO: 返回即将交换上场的宠物
    // active 代表是主动交换宠物，还是场上宠物阵亡后被动交换宠物
    return Pet::W;
}

Skill_T RainyActor::ChooseSkill() {
    // TODO: 选择场上宠物使用的技能
    return Skill::Tackle;
}

PotionInfo RainyActor::ChoosePotion() {
    // TODO: 返回使用的药剂
    return this->Actor::ChoosePotion();
}

std::string RainyActor::GetName() {
    return "Rainy Team";
}


#include "actor.h"

#include <sstream>
#include <unordered_set>


HumanActor::HumanActor() {
    this->GetName();
}

std::vector<Pet_T> HumanActor::ChooseStartingPet() {
    // TODO: 从用户输入中得到上场的宠物
    return std::vector<Pet_T>();
}

Action_T HumanActor::ChooseAction() {
    // TODO: 返回选取的动作
    return Action::Escape;
}

Pet_T HumanActor::ChoosePet(bool active) {
    // TODO: 返回即将交换上场的宠物
    // active 代表是主动交换宠物，还是场上宠物阵亡后被动交换宠物
    return Pet::W;
}

Skill_T HumanActor::ChooseSkill() {
    // TODO: 选择场上宠物使用的技能
    return Skill::Tackle;
}

std::string HumanActor::GetName() {
    static std::string name;
    while (name.empty()) {
        LOG("Please enter your name: ");
        std::cin >> name;
    }
    return name;
}

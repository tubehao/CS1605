#include "actor.h"
#include "battlefield.h"


std::vector<Pet_T> SunnyActor::ChooseStartingPet() {
    // TODO: 返回晴天队的出场宠物
    return std::vector<Pet_T>();
}

Action_T SunnyActor::ChooseAction() {
    // TODO: 返回选取的动作
    return Action::Skill;
}

Pet_T SunnyActor::ChoosePet(bool) {
    // TODO: 返回即将交换上场的宠物
    // active 代表是主动交换宠物，还是场上宠物阵亡后被动交换宠物
    return Pet::W;
}

Skill_T SunnyActor::ChooseSkill() {
    // TODO: 选择场上宠物使用的技能
    return Skill::Tackle;
}

std::string SunnyActor::GetName() {
    return "Sunny Team";
}


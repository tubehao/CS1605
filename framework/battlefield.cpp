#include "battlefield.h"

#include "define.h"
#include "helper.h"

#include <string>


void BattleField::Reset() {
    this->rounds = 0;
    this->actors_[0] = this->actors_[1] = nullptr;
    this->attr.clear();
}

void BattleField::Run() {
    this->BeforeGame_();
    this->ShowInformationPhase_();

    bool ending = false;
    while (!ending) {
        LOG("--------------------------------------------------\n");
        this->StateCheck_();
        LOG("Round", ++this->rounds); LOG('\n');
        std::vector<ActionInfo> actions = this->ChooseActionPhase_();
        this->PerformActionPhase_(actions);
        this->HandleBeatenPetsPhase_();
        ending = this->ShowInformationPhase_();
    }
}

void BattleField::SetActor(Actor *a, Actor *b) {
    this->actors_[0] = a; this->actors_[1] = b;
    a->opp = b; b->opp = a;
    a->field = b->field = this;
}

void BattleField::BeforeGame_() {
    // TODO: 游戏开始前，选择宠物
}

void BattleField::StateCheck_() {
    // TODO: 每回合开始前，检查天气、昏睡回合数等
}

std::vector<ActionInfo> BattleField::ChooseActionPhase_() {
    // TODO: 向各Actor轮询采用的动作并返回

    return std::vector<ActionInfo>();
}

void BattleField::PerformActionPhase_(std::vector<ActionInfo> &actions) {
    // TODO: 执行Actor选取的动作
}

void BattleField::HandleBeatenPetsPhase_() {
    // TODO: 检查并处理本轮中被击败的宠物
}

bool BattleField::ShowInformationPhase_() {
    // TODO: 显示剩余HP等信息，并返回游戏是否分出胜负
    return false;
}

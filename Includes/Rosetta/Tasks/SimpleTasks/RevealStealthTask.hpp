// This code is based on Sabberstone project.
// Copyright (c) 2017-2019 SabberStone Team, darkfriend77 & rnilva
// RosettaStone is hearthstone simulator using C++ with reinforcement learning.
// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

#ifndef ROSETTASTONE_REVEAL_STEALTH_TASK_HPP
#define ROSETTASTONE_REVEAL_STEALTH_TASK_HPP

#include <Rosetta/Tasks/ITask.hpp>

namespace RosettaStone::SimpleTasks
{
//!
//! \brief RevealStealthTask class.
//!
//! This class represents the task for revealing stealth.
//! Stealth is a minion ability which prevents that minion from being the target
//! of enemy attacks, spells and effects until they attack.
//!
class RevealStealthTask : public ITask
{
 public:
    //! Constructs task with given \p amount and \p toStack.
    //! \param entityType The type of entity.
    explicit RevealStealthTask(EntityType entityType);

 private:
    //! Processes task logic internally and returns meta data.
    //! \param player The player to run task.
    //! \return The result of task processing.
    TaskStatus Impl(Player* player) override;

    //! Internal method of Clone().
    //! \return The cloned task.
    ITask* CloneImpl() override;
};
}  // namespace RosettaStone::SimpleTasks

#endif  // ROSETTASTONE_REVEAL_STEALTH_TASK_HPP

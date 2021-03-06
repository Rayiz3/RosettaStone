// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef ROSETTASTONE_PLAYMODE_CARD_LOADER_HPP
#define ROSETTASTONE_PLAYMODE_CARD_LOADER_HPP

#include <Rosetta/Common/Constants.hpp>
#include <Rosetta/Battlegrounds/Cards/Card.hpp>

#include <json/json.hpp>

#include <array>

namespace RosettaStone::Battlegrounds
{
//!
//! \brief CardLoader class.
//!
//! This class loads card data from cards.json.
//!
class CardLoader
{
 public:
    //! Loads card data from cards.json.
    //! \param cards Data storage to store added cards with power.
    static void Load(std::array<Card, NUM_ALL_CARDS>& cards);
};
}  // namespace RosettaStone::Battlegrounds

#endif  // ROSETTASTONE_PLAYMODE_CARD_LOADER_HPP

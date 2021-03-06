#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string const &name, std::string const &effects) : name(name), effects(effects) {}

ASpell::ASpell(ASpell const &spell) {
	*this = spell;
}

ASpell	&ASpell::operator=(ASpell const &spell) {
	if (this != &spell) {
		this->name = spell.name;
		this->effects = spell.effects;
	}
	return *this;
}

ASpell::~ASpell() {}

std::string const 	&ASpell::getName() const {
	return this->name;
}

std::string const	&ASpell::getEffects() const {
	return this->effects;
}

void	ASpell::launch(ATarget const &target) {
	target.getHitBySpell(*this);
}
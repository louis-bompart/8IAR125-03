#include "Raven_Team.h"
#include "misc/Cgdi.h"


Raven_Team::Raven_Team(int id, Raven_Game* world) :
	m_Id(id),
	m_pWorld(world)
{
}

void Raven_Team::Update() {

}

void Raven_Team::AddMember(Raven_Bot* bot) {
	m_Bots.push_back(bot);
	bot->SetTeam(this);
}

void Raven_Team::RemoveMember(Raven_Bot* bot) {
	m_Bots.remove(bot);
	bot->SetTeam(0);
}

void Raven_Team::AddDroppedWeapon(Vector2D pos) {
	m_DroppedWeapons.push_back(pos);
}

void Raven_Team::RemoveDroppedWeapon(Vector2D pos) {
	m_DroppedWeapons.remove(pos);
}

void Raven_Team::PenColor(int id) {
	switch (id) {
	case Raven_Team::Red:
		gdi->RedPen();
		break;
	case Raven_Team::Blue:
		gdi->BluePen();
		break;
	case Raven_Team::Green:
		gdi->GreenPen();
		break;
	case Raven_Team::Yellow:
		gdi->YellowPen();
		break;
	default:
		gdi->BlackPen();
		break;
	}
}

void Raven_Team::BrushColor(int id) {
	switch (id) {
	case Raven_Team::Red:
		gdi->RedBrush();
		break;
	case Raven_Team::Blue:
		gdi->BlueBrush();
		break;
	case Raven_Team::Green:
		gdi->GreenBrush();
		break;
	case Raven_Team::Yellow:
		gdi->YellowBrush();
		break;
	default:
		gdi->BlackBrush();
		break;
	}
}
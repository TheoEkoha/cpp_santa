#include "GiftPaper.hh"

GiftPaper::GiftPaper() : Wrap("GiftPaper")
{

}

void GiftPaper::closeMe()
{
	this->isOpen = false;
}
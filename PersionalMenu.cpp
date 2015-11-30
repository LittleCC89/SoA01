//
//  PersionalMenu.cpp
//  SoulOfAdventure1
//
//  Created by Peng_C on 15/11/29.
//
//

#include "PersionalMenu.hpp"

PersionalMenu::PersionalMenu():Head_logo(nullptr)
{
    
}
PersionalMenu::~PersionalMenu()
{
    
}
bool PersionalMenu::init()
{
    if (! Layer::init()) {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    Head_logo = Sprite::create("Head_logo.jpg");
    Head_logo->setAnchorPoint(Vec2(0, 1));
    
//    Head_logo->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));
    Head_logo->setPosition(0 + origin.x, visibleSize.height + origin.y);
    addChild(Head_logo);
    return true;
}
cocos2d::Scene* PersionalMenu::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = PersionalMenu::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}

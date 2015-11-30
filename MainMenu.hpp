//
//  MainMenu.hpp
//  SoulOfAdventure
//
//  Created by Peng_C on 15/11/29.
//
//

#ifndef MainMenu_hpp
#define MainMenu_hpp

#include <stdio.h>
#include "Cocos2d.h"
#include "PersionalMenu.hpp"

USING_NS_CC;

class MainMenu : public cocos2d::Layer
{
private:
    cocos2d::Sprite* Start_logo;
    
public:
    MainMenu();
    virtual ~MainMenu();
    virtual bool init();
    static cocos2d::Scene* createScene();
    void GotoPersionalMenu(Ref* pSender);
    CREATE_FUNC(MainMenu);
};




#endif /* MainMenu_hpp */

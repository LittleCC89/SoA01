//
//  PersionalMenu.hpp
//  SoulOfAdventure1
//
//  Created by Peng_C on 15/11/29.
//
//

#ifndef PersionalMenu_hpp
#define PersionalMenu_hpp

#include <stdio.h>
#include "cocos2d.h"

USING_NS_CC;

class PersionalMenu : public cocos2d::Layer
{
private:
    Sprite* Head_logo;
    
public:
    PersionalMenu();
    virtual ~PersionalMenu();
    virtual bool init();
    static cocos2d::Scene* createScene();
    CREATE_FUNC(PersionalMenu);
};
#endif /* PersionalMenu_hpp */

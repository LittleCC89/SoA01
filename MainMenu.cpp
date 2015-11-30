//
//  MainMenu.cpp
//  SoulOfAdventure
//
//  Created by Peng_C on 15/11/29.
//
//

#include "MainMenu.hpp"

USING_NS_CC;

MainMenu::MainMenu():Start_logo(nullptr)
{
    
}

MainMenu::~MainMenu()
{
    
}

bool MainMenu::init()
{
    if(!Layer::init())
    {
        return false;
    }
    
    log("go!");
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    
    /*
    Start_logo = Sprite::create("Start_logo_1.png");
    
    Start_logo->setAnchorPoint(Vec2(0.5,0.5));
    
    Start_logo->setPosition(visibleSize/2);
    
    this->addChild(Start_logo);
    */
    auto StartItem = MenuItemImage::create("Start_logo_1.png","Start_logo_2.png",CC_CALLBACK_1(MainMenu::GotoPersionalMenu, this));
    
    //StartItem->setPosition(visibleSize/2);
    
    //this->addChild(StartItem);
    
    auto StartMenu =Menu::create(StartItem, NULL);
    
    StartMenu->setPosition(visibleSize/2);
    
    addChild(StartMenu);
    
    /*
    //添加事件监听器！
    //创建事件监听器
    auto Listener1 = EventListenerTouchOneByOne::create();
    
    //吞没事件？
    //Listener1->setSwallowTouches(true);
    
    //
    Listener1->onTouchBegan = [](Touch* t, Event* e)
    {
        log("Listener1->onTouchBegan");
        if (e->getCurrentTarget()->getBoundingBox().containsPoint(t->getLocation())) {
//            auto persionalscene = PersionalMenu::createScene();
//            Director::getInstance()->replaceScene(persionalscene);
            Start_logo->setTexture("Start_logo_2.png");
            
        }
        return true;
    };
 
    Listener1->onTouchEnded = [](Touch* t, Event* e)
    {
        log("Listener1->onTouchEnded");

        if (e->getCurrentTarget()->getBoundingBox().containsPoint(t->getLocation())) {
            auto persionalscene = PersionalMenu::createScene();
            Director::getInstance()->replaceScene(persionalscene);
            
        }


    };
    
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(Listener1, Start_logo);
    */
    
    return true;
}

cocos2d::Scene* MainMenu::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = MainMenu::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}

void MainMenu::GotoPersionalMenu(Ref* pSender)
{
    auto persionalscene = PersionalMenu::createScene();
    Director::getInstance()->replaceScene(persionalscene);
}

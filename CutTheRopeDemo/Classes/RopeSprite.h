//
//  RopeSprite.h
//  CutTheRopeDemo
//
//  Created by guanghui on 5/11/13.
//
//

#ifndef __CutTheRopeDemo__RopeSprite__
#define __CutTheRopeDemo__RopeSprite__

#include "cocos2d.h"
#include "Constants.h"
#include "RopeModel.h"

USING_NS_CC;

class RopeSprite : public CCObject
{
public:
    
    RopeSprite(CCNode *parent, RopeModel *ropeModel);
    ~RopeSprite();
    
    //logic
    int getID();
    CCPoint getAnchorA();
    CCPoint getAnchorB();
    int getBodyAID();
    int getBodyBID();
    
    void setAnchorA(CCPoint pt);
    void setAnchorB(CCPoint pt);
    
    void updateRope();
    
    float distanceToPoint(CCPoint pt);
    CCRect getBoundingBox();
    void cleanupSprite();
    
    
    void setSelectedAnchorType(anchorType type);
    anchorType getSelectedAnchorType();
    CCPoint getSelectedAnchor();
    void moveSelectedAnchorTo(CCPoint vector);
    bool isValideNewAnchorID(int newAnchorID);
private:
    CCSprite    *_ropeSprite;
    RopeModel   *_ropeModel;
    anchorType  _selectedAnchor;

};

#endif /* defined(__CutTheRopeDemo__RopeSprite__) */

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OABFillPropertiesManager.h"

@class NSString;

@interface OABFillPropertiesManager : NSObject <OABFillPropertiesManager>
{
    const struct EshFill *mFill;
    int mShapeType;
    id <OABPropertiesManager> mMasterManager;
}

- (void).cxx_destruct;
- (id)fillBlipName;
- (struct EshBlip *)fillBlipDataReference;
- (unsigned int)fillBlipID;
- (const struct EshTablePropVal<EshGradientStop> *)fillGradientColors;
- (int)fillFocusBottom;
- (int)fillFocusRight;
- (int)fillFocusTop;
- (int)fillFocusLeft;
- (int)fillFocus;
- (int)fillAngle;
- (int)fillBgAlpha;
- (int)fillFgAlpha;
- (int)fillType;
- (struct EshColor)shadowColor;
- (struct EshColor)strokeBgColor;
- (struct EshColor)strokeFgColor;
- (BOOL)isStroked;
- (struct EshColor)fillBgColor;
- (struct EshColor)fillFgColor;
- (BOOL)isFilled;
- (id)initWithFill:(const struct EshFill *)arg1 shapeType:(int)arg2 masterShape:(struct EshShape *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


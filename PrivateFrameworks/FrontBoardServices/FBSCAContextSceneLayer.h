//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoardServices/FBSSceneLayer.h>

@class CAContext;

@interface FBSCAContextSceneLayer : FBSSceneLayer
{
    unsigned int _contextID;
}

+ (id)layerWithCAContext:(id)arg1;
@property(readonly, nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) CAContext *CAContext; // @dynamic CAContext;
- (id)initWithCAContextID:(unsigned int)arg1 level:(double)arg2;
- (id)initWithCAContext:(id)arg1;
- (id)_initWithCAContext:(id)arg1 contextID:(unsigned int)arg2 level:(double)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "USSXPCNotification.h"

@class NSString;

@interface USSSceneUpdateNotification : NSObject <USSXPCNotification>
{
    unsigned int _contextID;
    NSString *_identifier;
}

+ (id)sceneUpdateForScene:(id)arg1 contextID:(unsigned int)arg2;
@property(nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initCommon;
@property(readonly, nonatomic) NSString *notificationName;

@end

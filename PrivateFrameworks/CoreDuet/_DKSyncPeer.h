//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSUUID;

@interface _DKSyncPeer : NSObject
{
    BOOL _me;
    NSString *_sourceDeviceID;
    NSString *_idsDeviceIdentifier;
    NSString *_zoneName;
    NSString *_name;
    NSString *_model;
    NSUUID *_uuid;
}

@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) BOOL me; // @synthesize me=_me;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(copy, nonatomic) NSString *idsDeviceIdentifier; // @synthesize idsDeviceIdentifier=_idsDeviceIdentifier;
@property(copy, nonatomic) NSString *sourceDeviceID; // @synthesize sourceDeviceID=_sourceDeviceID;
- (void).cxx_destruct;
- (id)description;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSUUID *sourceDeviceUUID;
- (id)initWithIDSDeviceIdentifier:(id)arg1 zoneName:(id)arg2;
- (id)initWithZoneName:(id)arg1;
- (id)initWithIDSDeviceIdentifier:(id)arg1;
- (id)init;

@end


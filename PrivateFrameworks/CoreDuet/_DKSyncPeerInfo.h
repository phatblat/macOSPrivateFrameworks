//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID, _DKSyncPeer;

@interface _DKSyncPeerInfo : NSObject
{
    NSUUID *_uuid;
    _DKSyncPeer *_peer;
    long long _transports;
}

@property(nonatomic) long long transports; // @synthesize transports=_transports;
@property(retain, nonatomic) _DKSyncPeer *peer; // @synthesize peer=_peer;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)transportsString;

@end


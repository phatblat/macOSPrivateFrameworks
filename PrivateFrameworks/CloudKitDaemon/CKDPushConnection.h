//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APSConnection, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface CKDPushConnection : NSObject
{
    NSString *_apsEnvironmentString;
    APSConnection *_apsConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_completionBlocks;
}

+ (id)sharedConnectionForAPSEnvironmentString:(id)arg1;
@property(retain, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property(retain, nonatomic, setter=setAPSEnvironmentString:) NSString *apsEnvironmentString; // @synthesize apsEnvironmentString=_apsEnvironmentString;
- (void).cxx_destruct;
- (void)connectionDidReconnect:(id)arg1;
- (void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)getToken:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithEnvironment:(id)arg1;

@end


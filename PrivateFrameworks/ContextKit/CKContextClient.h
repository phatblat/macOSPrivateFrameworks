//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface CKContextClient : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    NSString *_indexVersionId;
    unsigned long long _defaultRequestType;
    NSSet *_capabilities;
}

+ (id)clientWithDefaultRequestType:(unsigned long long)arg1;
@property(readonly, nonatomic) NSSet *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) unsigned long long defaultRequestType; // @synthesize defaultRequestType=_defaultRequestType;
- (void).cxx_destruct;
- (id)indexVersionId;
- (id)retrieveCapabilites;
- (void)registerConfigurationUpdateHandler:(CDUnknownBlockType)arg1;
- (void)capabilitiesWithReply:(CDUnknownBlockType)arg1;
- (id)newRequest;
- (void)_updateCachedCapabilites;
- (id)initWithDefaultRequestType:(unsigned long long)arg1;

@end


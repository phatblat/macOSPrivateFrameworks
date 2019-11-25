//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class INCExtensionConnection, NSMutableSet, NSString;

@interface WFIntentDynamicResolver : NSObject
{
    NSString *_intentKeyPathToResolve;
    unsigned long long _state;
    id <WFIntentDynamicResolverDataSource> _dataSource;
    INCExtensionConnection *_extensionConnection;
    id <INCExtensionProxy> _extensionProxy;
    NSMutableSet *_activeRequests;
}

@property(retain, nonatomic) NSMutableSet *activeRequests; // @synthesize activeRequests=_activeRequests;
@property(readonly, nonatomic) id <INCExtensionProxy> extensionProxy; // @synthesize extensionProxy=_extensionProxy;
@property(readonly, nonatomic) INCExtensionConnection *extensionConnection; // @synthesize extensionConnection=_extensionConnection;
@property(readonly, nonatomic) __weak id <WFIntentDynamicResolverDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *intentKeyPathToResolve; // @synthesize intentKeyPathToResolve=_intentKeyPathToResolve;
- (void).cxx_destruct;
- (void)failWithError:(id)arg1;
- (void)populatedSkeletonIntentWithUserInput:(id)arg1 forKeyPath:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)intent;
- (id)resolveWithUserInput:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)endSession;
- (void)beginSessionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithIntentKeyPathToResolve:(id)arg1 dataSource:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ROCKForwardingInterposer : NSObject
{
    id <NSObject> _remoteObject;
}

+ (id)forwardingInterposerWithRemoteObject:(id)arg1;
@property(retain, nonatomic) id <NSObject> remoteObject; // @synthesize remoteObject=_remoteObject;
- (void).cxx_destruct;
- (void)forwardCallWithInvocation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithRemoteObject:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)rockEncodeWithSessionManager:(id)arg1 error:(id *)arg2;

@end


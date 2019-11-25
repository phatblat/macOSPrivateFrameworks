//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RMExtensionStatusPublisherRequestHandling.h"

@class NSLock, NSString;

@interface RMExtensionStatusPublisher : NSObject <RMExtensionStatusPublisherRequestHandling>
{
    NSLock *_requestHandlerLock;
    id <RMExtensionStatusPublisherRequestHandling> _requestHandler;
}

+ (id)sharedPublisher;
@property(readonly, nonatomic) id <RMExtensionStatusPublisherRequestHandling> requestHandler; // @synthesize requestHandler=_requestHandler;
- (void).cxx_destruct;
- (void)queryStatusesOfTypes:(id)arg1 onBehalfOfAccount:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithRequestHandler:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


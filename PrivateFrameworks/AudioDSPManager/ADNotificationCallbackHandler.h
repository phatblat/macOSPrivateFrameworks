//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADNotificationHandler.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ADNotificationCallbackHandler : NSObject <ADNotificationHandler>
{
    CDUnknownBlockType _callback;
}

+ (id)callbackHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)handleEvent:(id)arg1;
- (id)initWithCallback:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


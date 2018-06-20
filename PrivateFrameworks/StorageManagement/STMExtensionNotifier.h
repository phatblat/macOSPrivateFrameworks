//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface STMExtensionNotifier : NSObject
{
    id <STMExtensionNotifierDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialAccessQueue;
    id _matchingContext;
}

@property(retain) id matchingContext; // @synthesize matchingContext=_matchingContext;
@property(retain) NSObject<OS_dispatch_queue> *serialAccessQueue; // @synthesize serialAccessQueue=_serialAccessQueue;
@property __weak id <STMExtensionNotifierDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopMatchingExtensions;
- (void)beginMatchingExtensions;
- (void)handleError:(id)arg1;
- (void)handleMatchingExtensions:(id)arg1;
- (void)handleMatchingResponse:(id)arg1 error:(id)arg2;
- (id)extensionMatchingAtrributes;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end

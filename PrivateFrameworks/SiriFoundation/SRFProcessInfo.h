//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface SRFProcessInfo : NSObject
{
    NSXPCConnection *_connectionToSiri;
}

@property(retain, nonatomic) NSXPCConnection *connectionToSiri; // @synthesize connectionToSiri=_connectionToSiri;
- (void).cxx_destruct;
- (void)endMainStagePresentationActivityWithReason:(id)arg1;
- (void)beginMainStagePresentationActivityWithReason:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSXPCDecoding.h"
#import "BSXPCEncoding.h"

@protocol BSXPCServiceConnectionMessage <BSXPCEncoding, BSXPCDecoding>
- (id <BSXPCServiceConnectionMessage>)createReply;
- (BOOL)expectsReply;
- (BOOL)sendSynchronously;
- (BOOL)send;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SDXPCDaemonProtocol.h"

@class NSDictionary, NSString;

@protocol SDAirDropClassroomTransferManagerProtocol <SDXPCDaemonProtocol>
- (void)updateTransferWithIdentifier:(NSString *)arg1 withState:(long long)arg2 information:(NSDictionary *)arg3 completionHandler:(void (^)(BOOL, NSURL *, NSError *))arg4;
@end


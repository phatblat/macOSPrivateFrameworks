//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKServerChangeToken, NSString;

@protocol IMDCKSyncTokenStore <NSObject>
- (void)persistToken:(CKServerChangeToken *)arg1 forKey:(NSString *)arg2;
- (CKServerChangeToken *)tokenForKey:(NSString *)arg1;
- (void)migrateKey:(NSString *)arg1 fromDatabase:(NSString *)arg2;
@end


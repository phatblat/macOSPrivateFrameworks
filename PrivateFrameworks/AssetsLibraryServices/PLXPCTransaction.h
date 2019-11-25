//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_os_transaction>;

@interface PLXPCTransaction : NSObject
{
    const char *_identifier;
    NSObject<OS_os_transaction> *_transaction;
}

+ (id)openXPCTransactionStatus;
+ (void)_stopTrackingTransaction:(id)arg1;
+ (void)_startTrackingTransaction:(id)arg1;
+ (id)transaction:(const char *)arg1;
+ (void)discardCallStackSymbols:(id)arg1;
+ (id)callStackSymbols;
+ (void)initialize;
- (void).cxx_destruct;
- (id)_statusDescription;
- (id)description;
- (void)stillAlive;
- (void)dealloc;
- (id)initWithIdentifier:(const char *)arg1;

@end


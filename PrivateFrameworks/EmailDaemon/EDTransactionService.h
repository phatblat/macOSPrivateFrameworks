//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface EDTransactionService : NSObject
{
    NSString *_serviceName;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;
- (void)resetPendingTransactions;
- (BOOL)hasPendingTransactions;
- (void)endTransaction:(id)arg1;
- (id)startTransaction;
- (id)initWithServiceName:(id)arg1;

@end

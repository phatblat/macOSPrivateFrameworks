//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface _ML3ValidatableDatabase : NSObject
{
    unsigned long long _queueID;
    NSString *_databasePath;
    unsigned long long _validationState;
    NSObject<OS_dispatch_queue> *_validationSerialQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *validationSerialQueue; // @synthesize validationSerialQueue=_validationSerialQueue;
@property(nonatomic) unsigned long long validationState; // @synthesize validationState=_validationState;
@property(copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (void).cxx_destruct;
- (BOOL)currentQueueIsValidationQueue;
- (id)init;
- (id)initWithDatabasePath:(id)arg1;

@end


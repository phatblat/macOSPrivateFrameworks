//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SUOSUAppStoreAuditInfo : NSObject
{
    unsigned long long _failureReason;
    NSString *_failureDescription;
    NSArray *_appsFailedToQuit;
}

+ (id)cacheUpdateAuditInfo:(id)arg1;
@property(retain) NSArray *appsFailedToQuit; // @synthesize appsFailedToQuit=_appsFailedToQuit;
@property(retain) NSString *failureDescription; // @synthesize failureDescription=_failureDescription;
@property unsigned long long failureReason; // @synthesize failureReason=_failureReason;
- (void).cxx_destruct;
- (void)_parseAuditInfo:(id)arg1;
- (id)initWithSUOSUURL:(id)arg1;
- (id)initWithURL:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSNull.h"

#import "SiriCoreSQLiteValue.h"

@class NSString;

@interface NSNull (SiriCoreSQLiteValue) <SiriCoreSQLiteValue>
- (long long)siriCoreSQLiteValue_type;
- (id)siriCoreSQLiteValue_toData;
- (id)siriCoreSQLiteValue_toNumber;
- (id)siriCoreSQLiteValue_toString;
- (id)siriCoreSQLiteValue_escapedString:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


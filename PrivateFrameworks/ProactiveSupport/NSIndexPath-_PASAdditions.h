//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSIndexPath.h"

#import "_PASDistilledString.h"

@class NSString;

@interface NSIndexPath (_PASAdditions) <_PASDistilledString>
+ (id)_pas_fromVersionString:(id)arg1 withExceptions:(BOOL)arg2;
+ (id)_pas_fromVersionStringIfPossible:(id)arg1;
+ (id)_pas_fromVersionString:(id)arg1;
- (BOOL)_pas_isGreaterThanVersionString:(id)arg1;
- (BOOL)_pas_isGreaterThanOrEqualToVersionString:(id)arg1;
- (BOOL)_pas_isEqualToVersionString:(id)arg1;
- (BOOL)_pas_isLessThanOrEqualToVersionString:(id)arg1;
- (BOOL)_pas_isLessThanVersionString:(id)arg1;
- (id)_pas_asVersionString;
- (id)_pas_revivedString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


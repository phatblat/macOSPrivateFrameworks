//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CNContactStore.h"

@interface CNContactStore (EmailContactUtilities)
- (id)_contactForEmailAddress:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)em_onScheduler:(id)arg1 contactFutureForEmailAddress:(id)arg2 keysToFetch:(id)arg3;
- (id)em_fetchContactForEmailAddress:(id)arg1 keysToFetch:(id)arg2 createIfNeeded:(BOOL)arg3 error:(id *)arg4;
- (id)em_fetchContactForEmailAddress:(id)arg1 keysToFetch:(id)arg2 createIfNeeded:(BOOL)arg3;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (LPInternal)
+ (void)_lp_reverseEnumerateComponents:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_lp_stringForcingLeftToRightDirection;
- (id)_lp_simplifiedUserVisibleURLStringWithSimplifications:(unsigned long long)arg1 forDisplayOnly:(BOOL)arg2;
- (id)_lp_highLevelDomainFromHost;
- (id)_lp_topLevelDomainUsingCFFromComponents:(id)arg1;
- (BOOL)_lp_isEqualToAnyIgnoringCase:(id)arg1;
- (BOOL)_lp_isEqualIgnoringCase:(id)arg1;
- (BOOL)_lp_hasCaseInsensitivePrefix:(id)arg1;
@end

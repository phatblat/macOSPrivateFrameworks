//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol WFVariableStringContent <NSObject>
- (unsigned long long)wf_lengthInVariableString;
- (void)wf_getContentItemsWithVariableSource:(id <WFVariableDataSource>)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
@end


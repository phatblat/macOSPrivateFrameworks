//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, XCAccessibilityElement, XCElementSnapshot, XCTTimeoutControls;

@protocol XCTElementSnapshotProvider <NSObject>
- (XCElementSnapshot *)snapshotForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 parameters:(NSDictionary *)arg3 timeoutControls:(XCTTimeoutControls *)arg4 error:(id *)arg5;
@end


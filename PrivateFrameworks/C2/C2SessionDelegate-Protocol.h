//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class C2Session, NSError, NSString;

@protocol C2SessionDelegate <NSObject>
- (void)C2Session:(C2Session *)arg1 originalHost:(NSString *)arg2 updatedRoute:(NSString *)arg3;
- (void)C2Session:(C2Session *)arg1 didBecomeInvalidWithError:(NSError *)arg2;
@end


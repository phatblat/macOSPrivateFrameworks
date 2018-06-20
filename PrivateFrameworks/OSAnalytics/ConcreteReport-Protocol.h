//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@protocol ConcreteReport <NSObject>
- (void)generateLogAtLevel:(BOOL)arg1 withBlock:(void (^)(NSDictionary *))arg2;
- (NSString *)reportNamePrefix;
- (NSArray *)appleCareDetails;
- (NSString *)problemType;

@optional
- (NSString *)overrideFileExtension;
- (NSDictionary *)additionalIPSMetadata;
- (BOOL)isActionable;
@end


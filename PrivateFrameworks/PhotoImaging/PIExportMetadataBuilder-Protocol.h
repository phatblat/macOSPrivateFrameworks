//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSArray, NSDate, NSString, NSTimeZone;

@protocol PIExportMetadataBuilder <NSObject>
@property(readonly, nonatomic) NSTimeZone *creationTimeZone;
@property(readonly, nonatomic) NSDate *creationDate;
@property(copy, nonatomic) CLLocation *location;
@property(copy, nonatomic) NSArray *peopleNames;
@property(copy, nonatomic) NSArray *keywords;
@property(copy, nonatomic) NSString *caption;
@property(copy, nonatomic) NSString *title;
- (void)setCreationDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2;
@end
